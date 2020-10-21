<?php
fscanf(STDIN, '%d', $num);
$ans = 0;
for ($i=1; $i <= $num; $i++) { 
    if ($i % 3 != 0 && $i % 5 != 0) {
        $ans += $i;
    }
}
echo $ans;