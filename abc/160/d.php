<?php
fscanf(STDIN, '%d %d %d', $cnt, $x, $y);
$ans = array_fill(0, $cnt, 0);
for ($i=1; $i <= $cnt; $i++) { 
    for ($j=$i+1; $j <= $cnt; $j++) { 
        $dist = min($j - $i, abs($x - $i) + abs($j - $y) + 1, abs($y - $i) + abs($x - $j) + 1);
        $ans[$dist]++;
    }
}
unset($ans[0]);
echo implode("\n", $ans);