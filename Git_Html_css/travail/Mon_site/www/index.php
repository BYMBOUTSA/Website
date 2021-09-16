
<!DOCTYPE html> 
<html>
    <head>
        <title>Titre</title>
    </head>
    <body>

        <!-- Menu de navigation -->
        <?php include "menunavigation.php"; ?>

        <!-- <p>Nom : <?= $pseudo; ?></p>
        <p>Email : <?= $email; ?></p>
        <p>Age : <?= $age; ?></p>  -->   

        <!-- post permet d'envoyer notre formulaire d'une page à l'autre pendant que get permet de faire passer toutes les informations par l'url -->
        <form method="post">
            <input type="text" name="pseudo" id="pseudo" placeholder="Votre Identifiant" required><br/>
            <input type="text" name="age" id="age" placeholder="Votre Age" required><br/>
            <input type="text" name="email" id="email" placeholder="Votre Email" required><br/>
            <input type="submit" name="formsend" id="formsend">
        </form>

        <?php

            include 'database.php'; /*pour inclure notre base de donné dans notre fichier principal index.php*/
            global $db; // pour recupérer cette variable $db


            /*ORDER BY id ASC permet d'afficher les id sous la formr d'ordre ascendant du premier au dernier et avec id DESC du dernier au premier*/
            // on peut mettre des limites en ajoutant LIMIT 3
           /* $q = $db->query("SELECT * FROM users ORDER BY id ASC WHERE pseudo = 'CharlyD' LIMIT 1"); /*pour faire une requette*/
            // while ($user = $q->fetch()) {
                //echo "id : " . $user['id'] . " pseudo : " . $user['pseudo'] . "<br/>"; /*pour afficher l'id de l'utilisateur*/
               /* ?>
                <li>
                    <a href="profil.php?q=<?= $user['id'];?>"><?= $user['email']; ?></a>
                </li>

           <?php }*/

           $q = $db->prepare("INSERT INTO users(pseudo,email,password) VALUES(:pseudo,:email,:password)"); //on fait une requette preparer
           // pour envoyer la requette
           $q->execute([
                'pseudo' => 'CharlyDarcy',
                'email' => 'charlydarcy9@gmail.com',
                'password' => 'cdarhylcy9'
           ]); 



            if(isset($_POST['formsend'])) {

                $pseudo = $_POST['pseudo'];
                $age = $_POST['age'];
                $email = $_POST['email'];

                if(!empty(pseudo) && !empty(age) && !empty(email)) {
                    echo  "Votre Pseudo : ".$_POST['pseudo'] . "<br/>";
                    echo "Votre Age : ".$_POST['age'] . "<br/>";
                    echo "Votre Email : ".$_POST['email'];
                }

                
            }

        ?>

    </body>
</html>