<?php
fscanf(STDIN, '%d %d', $total, $choice);
$nums = explode(' ', trim(fgets(STDIN)));
$cumsums = [0];
for ($i=1; $i <= $total; $i++) { 
    $cumsums[$i] = $nums[$i-1] + $cumsums[$i-1];
}
$list = [];
for ($i=0; $i <= $total - $choice; $i++) { 
    $list[] = $cumsums[$i+$choice] - $cumsums[$i];
}
echo (max($list) + $choice) / 2;