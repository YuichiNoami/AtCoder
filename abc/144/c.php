<?php
fscanf(STDIN, '%d', $target);
$limit = ceil(sqrt($target));
$divs = [];
for ($i=1; $i <= $limit; $i++) { 
    if ($target % $i === 0) {
        $divs[] = $i;
    }
}
$maxDiv = max($divs);
$maxPair = $target / $maxDiv;

$ans = --$maxDiv + --$maxPair;
echo $ans."\n";