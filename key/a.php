<?php
fscanf(STDIN, '%d', $row);
fscanf(STDIN, '%d', $col);
fscanf(STDIN, '%d', $goal);
$now = 0;
$ans = 0;
while($now < $goal) {
    $now += max($row, $col);
    $ans++;
}
echo $ans;