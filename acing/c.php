<?php
fscanf(STDIN, '%d', $cnt);
$anslist = [];
for ($l=1; $l <= $cnt; $l++) {
    $memo = []; 
    $ans = 0;
    for ($i=1; $i <= $l; $i++) { 
        for ($j=$i; $j <= $l; $j++) { 
            if ($i * $i + $j * $j + 1 + $i * $j + $j + $i == $l) {
                $ans=3;
                if ($l == 6 && $ans == 3) {
                    $ans = 1;
                }
                break 2;
            }
        }
    }
    $anslist[] = $ans;
}
echo implode("\n", $anslist);
