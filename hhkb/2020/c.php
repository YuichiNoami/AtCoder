<?php
fscanf(STDIN, '%d', $cnt);
$nums = array_map('intval', explode(' ', trim(fgets(STDIN))));
$arr = array_fill(0, $cnt+1, 0);
$ans = 0;
for ($i=0; $i < $cnt; $i++) {
    $key = $nums[$i];
    $arr[$key]++;
    while ($arr[$ans] > 0) {
        $ans++;
    }
    echo "$ans\n";
}