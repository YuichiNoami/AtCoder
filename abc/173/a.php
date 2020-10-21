<?php
fscanf(STDIN, '%d', $price);
$yen = 1000;

$cnt = 0;
while ($price > 0) {
    $price -= $yen;
}

$ans = $price * -1;
echo $ans;