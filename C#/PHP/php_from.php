<!DOCTYPE html>
<html>
    <head>
        <title>
            welcome to webpage form
        </title>
    </head>
    <body>
        <form action="php_from.php" method="get">
            Name: <input type="text" name="name">
            <br>
            <br>
            LastName: <input type="text" name="lastname">
            <br>
            <br>
            Age: <input type="number" name="age">
            <br>
            <br>
            <input type="submit">
        </form>
        <br>
        <br>
        Name: <?php echo $_GET["name"]?>
        <br>
        LastName : <?php echo $_GET["lastname"]?>
        <br>
        Age : <?php echo $_GET["age"]?>
    </body>
</html>