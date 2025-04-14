<?php
$peach = [200, 202, 290, 295, 280, 210, 280, 260, 250, 240, 280, 295, 225, 215, 220];
$peach_max = max($peach);
$peach_min = min($peach);
$peach_avg = floor(num: array_sum(array: $peach) / count(value: $peach));

$strawberry = [400, 405, 410, 415, 420, 425, 430, 435, 440, 445, 450, 455, 460, 465, 470];
$strawberry_max = max($strawberry);
$strawberry_min = min($strawberry);
$strawberry_avg = floor(num: array_sum(array: $strawberry) / count(value: $strawberry));
?>

<!DOCTYPE html>
<html>
<head>
    <meta charset="UTF-8">
    <title>桃とイチゴ</title>
</head>
<body>
    <h1>果物の価格情報</h1>
    <ul>
        <li>桃の最高価格: <?= $peach_max ?> 円</li>
        <li>桃の最低価格: <?= $peach_min ?> 円</li>
        <li>桃の平均価格: <?= $peach_avg ?> 円</li>
        <li>イチゴの最高価格: <?= $strawberry_max ?> 円</li>
        <li>イチゴの最低価格: <?= $strawberry_min ?> 円</li>
        <li>イチゴの平均価格: <?= $strawberry_avg ?> 円</li>
    </ul>
</body>
</html>