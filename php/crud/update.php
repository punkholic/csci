<?php 
$name = $_GET['name'];
$connection = mysqli_connect("localhost", "root", "root", "csci");

if(isset($_POST['name'])){
    $postName = $_POST['name'];
    $password = $_POST['password'];
    $result = $connection->query("UPDATE users SET name = '$postName', password = '$password' WHERE name = '$name'");
    header("Location: read.php");

}


$result = $connection->query("SELECT * FROM users WHERE name = '$name'");
$data = $result->fetch_assoc();
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
        <input type="text" value="<?php echo $data['name'] ?>" name="name"/>
        <br>
        password:
        <input type="password" value="<?php echo $data['password'] ?>" name="password"/>
        <br>
        <input type="submit" value="Update">
    </form>
</body>
</html>