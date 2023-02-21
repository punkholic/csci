<?php 
    if(isset($_POST['username'])){
        $username = $_POST['username'];
        $password = $_POST['password'];
        $connection = mysqli_connect("localhost", "root", "root", "sms6");
        $result = $connection->query("select * from teacher_tb WHERE username = '$username' and password = '$password'");
        if($result->num_rows != 0){
            header("Location: /dashbord.html");
        }else{
            header("Location: /failed.html");
        }
       return;
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
        <label for="username">username</label>
        <input type="text" id="username" name="username"/>
        <br>
        <label for="password">password</label>
        <input type="password" id="password" name="password"/>
        <br>
        <input type="submit" name="submit" value="submit gar"/>

    </form>
    <script>
        console.log("Hello World");
    </script>
</body>
</html>
