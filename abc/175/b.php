<?php
fscanf(STDIN, '%d', $cnt);
$nums = array_map('intval', explode(' ', trim(fgets(STDIN))));
sort($nums);
$ans = 0;
for ($i=0; $i < $cnt; $i++) { 
    for ($j=0; $j < $i; $j++) { 
        for ($k=0; $k < $j; $k++) { 
            $a = $nums[$i];
            $b = $nums[$j];
            $c = $nums[$k];
            if ($a == $b || $b == $c || $a == $c) {
                continue;
            }
            if ($c + $b > $a) {
                $ans++;
            }
        }
    }
}
echo $ans;