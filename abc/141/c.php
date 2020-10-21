<?php
fscanf(STDIN, '%d %d %d', $cnt, $def, $solve);
$points = array_fill(1, $cnt, $def-$solve);
for ($i=0; $i < $solve; $i++) { 
    fscanf(STDIN, '%d', $idx);
    $points[$idx]++;
}
foreach ($points as $value) {
    if ($value > 0) {
        echo "Yes\n";
    } else {
        echo "No\n";
    }
}