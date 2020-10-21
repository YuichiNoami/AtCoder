<?php
$ans = "No\n";
fscanf(STDIN, '%d', $n);
for ($i=1; $i <= 9; $i++) { 
    $div = $n / $i;
    $mod = $n % $i;
    if ($mod === 0 && $div >= 1 && $div <= 9) {
        $ans = "Yes\n";
        break;
    }
}
echo $ans;