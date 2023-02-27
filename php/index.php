<?php 
    if(isset($_POST['name'])){
        $name = $_POST['name'];
        $password = $_POST['password'];
        $connection = mysqli_connect("localhost", "root", "root", "xyz");
        $result = $connection->query("SELECT * FROM student WHERE name = '$name' and password = '$password'");
        if($result->num_rows != 0 ){
            header("Location: /login.html");
        }else{  
            header("Location: /failed.html");
        }
        return;

    }

    // $connection = mysqli_connect("localhost", "root", "root", "xyz");
    // $query = "INSERT INTO student(name, roll_no, password) VALUES('hari', 1, 'xyz')";
    // $connection->query($query); 


?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <form method="POST">
        name:
        <input type="text" name="name" id="email">
        <br>
        Password:
        <input type="password" name="password" id="password">
        <br>
        <input type="submit" value="submit">
    </form>
</body>
</html> 