<?php
fscanf(STDIN, '%d %d %d', $min, $max, $div);
$ans = 0;
for ($i=$min; $i <= $max; $i++) { 
    if ($i % $div == 0) {
        $ans++;
    }
}
echo $ans;