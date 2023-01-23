<?php 
$defaultPage = "home.php";
if(isset($_GET['page'])){
    $defaultPage = $_GET['page'];
}
include "$defaultPage";
?>