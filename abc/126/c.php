<?php
fscanf(STDIN, '%d %d', $men, $goal);
$ans = 0;
for ($i=1; $i <= $men; $i++) { 
    $score = $i;
    $must = 0;
    while ($score < $goal) {
        $score *= 2;
        $must++;
    }
    $ans += 1 /$men * pow(1 / 2, $must); 
}
echo $ans."\n";