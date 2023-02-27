<?php 

    if(isset($_POST["name"])){
        $name = $_POST["name"];
        $password = $_POST["password"];
        
        
        $connection = mysqli_connect("localhost", "root", "root", "abc");
        $query = "UPDATE users SET name = '$name', password = '$password' WHERE name = 'sita'";
        $result = $connection->query($query);




        // if($result->num_rows != 0 ){
        //     echo "valid user";
        // }else{
        //     echo "invalid user";
        // }


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