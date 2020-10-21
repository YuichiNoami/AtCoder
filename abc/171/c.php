<?php
$map = range('a', 'z');
fscanf(STDIN, '%d', $num);

$ans = '';

while ($num > 0) {
    $num--;
    $now = $num % 26;
    $ans = $map[$now] . $ans;
    $num = floor($num / 26);
}

echo $ans;