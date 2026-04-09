<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    
</body>
</html>
<?php 
$a=8765;
$count=0;
while($a>0)
{
    $count+=1;
    $a=$a/10;
}
echo "Digit count=$count";
?>