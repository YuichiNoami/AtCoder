<?php
fscanf(STDIN, '%d', $goal);
$ans = 0;
$money = 100;
while ($money < $goal) {
    $money = floor($money * 1.01);
    $ans++;
}
echo $ans;