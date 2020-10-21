<?php
fscanf(STDIN, '%d %d', $cnt, $ref);
$ans = 0;
for ($i=0; $i < $cnt; $i++) { 
    fscanf(STDIN, '%d %d', $x, $y);
    $sqrt = sqrt($x **2 + $y ** 2);
    if ($sqrt <= $ref) {
        $ans++;
    }
}
echo $ans;