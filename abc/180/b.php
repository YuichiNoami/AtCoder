<?php
fscanf(STDIN, '%d', $cnt);
$nums = array_map('intval', explode(' ', trim(fgets(STDIN))));
$man = $euc = $che = 0;
$absList = [];
for ($i=0; $i < $cnt; $i++) { 
    $absList[] = abs($nums[$i]);
}
$man = array_sum($absList);
$euc = bcsqrt(array_sum(array_map('pow2', $absList)), 16);
$che = max($absList);

echo "$man\n$euc\n$che\n";

function pow2 ($num) {
    return $num ** 2;
}