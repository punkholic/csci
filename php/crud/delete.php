<?php
    $name = $_GET['name'];
    $connection = mysqli_connect("localhost", "root", "root", "csci");
    $result = $connection->query("DELETE FROM users WHERE name = '$name'");
    header("Location: read.php");


?>