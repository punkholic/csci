<?php 
    if(isset($_POST['name'])){
        $name = $_POST['name'];
        $password = $_POST['password'];
        $connection = mysqli_connect("localhost", "root", "root", "csci");
        $result = $connection->query("INSERT INTO users(name, password) VALUES('$name', '$password')");
        
        if($result){
            echo "added";
        }else{
            echo "failed";
        }
    }
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
        Name:
        <input type="text" name="name"/>
        <br>
        password:
        <input type="password" name="password"/>
        <br>
        <input type="submit" value="Add">
    </form>
</body>
</html>