<?php
fscanf(STDIN, '%d', $cnt);
$nums = array_map('intval', explode(' ', trim(fgets(STDIN))));
$boss = [1 => 0];
for ($i = 1; $i < $cnt; $i++) {
    $boss[$i + 1] = $nums[$i - 1];
}

$ans = array_fill(1, $cnt, 0);
for ($i = 2; $i <= $cnt; $i++) {
    $j = $i;
    $solveFlag = true;
    while ($j > 0 && $j <= $cnt && $boss[$j] == $j-1) {
        $solveFlag = false;
        $ans[$j]++;
        $j = $boss[$j];
    }
}

if ($solveFlag) {
    $ans = array_fill(1, $cnt, 0);
    for ($i = 2; $i <= $cnt; $i++) {
        solve($i);
    }
}

function solve($id)
{
    global $boss, $ans;
    
    $ans[$boss[$id]]++;
    
    if ($boss[$id] == 1 || $id == 1) {
        return true;
    }

    return solve($boss[$id]);
}

$ans[1] = $cnt - 1;
echo implode("\n", $ans) . "\n";
