
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <table border="1px" width="100%">
        <tr>
            <th>Name</th>
            <th>password</th>
            <th>Action</th>
        </tr>
      
        <?php 
        $connection = mysqli_connect("localhost", "root", "root", "csci");
        $result = $connection->query("SELECT * FROM users");
        $firstData = $result->fetch_assoc();
        while($firstData != null){
            ?>
            <tr>
            <td><?php echo $firstData['name']; ?></td>
            <td><?php echo $firstData['password']; ?></td>
            <td>
                <a href="./delete.php?name=<?php echo $firstData['name'] ?>">Delete</a>
                <a href="./update.php?name=<?php echo $firstData['name'] ?>">Update</a>
            </td>
            </tr>            
            <!-- <tr> -->
            <!-- <td> <?php echo $firstData['name']; ?></td>
            <td> <?php echo $firstData['password']; ?></td>
            <td>
                <a href="./delete.php?name=<?php echo $firstData['name'] ?>">Delete</a>
                <a href="./update.php?name=<?php echo $firstData['name'] ?>">Update</a>
            </td>
        </tr> -->

            <?php
            $firstData = $result->fetch_assoc();
        }
?>

        
      
        
    </table>
</body>
</html>