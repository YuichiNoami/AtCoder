<?php
$nums = [];
fscanf(STDIN, '%d', $cnt);
$ins = explode(' ', trim(fgets(STDIN)));
for ($i=0; $i < $cnt; $i++) { 
    $nums[] = 1 / $ins[$i];
}
$total = array_sum($nums);
$ans = 1 / $total;
echo "$ans\n";