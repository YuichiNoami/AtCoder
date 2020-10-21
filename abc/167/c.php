<?php
fscanf(STDIN, '%d %d %d', $n, $m, $x);
$a = array_fill(0, $n, array_fill(0, $m, 0));
$c = array_fill(0, $n, 0);
for ($i=0; $i < $n; $i++) { 
    $nums = array_map('intval', explode(' ', trim(fgets(STDIN))));
    $c[$i] = $nums[0];
    for ($j=0; $j < $m; $j++) { 
        $a[$i][$j] = $nums[$j+1];
    }
}
$ans = 12345678;
$all = 1<<$n;
for ($mask=0; $mask < $all; $mask++) { 
    $level = array_fill(0, $m, 0);
    $cost = 0;
    for ($i=0; $i < $n; $i++) { 
        if (($mask>>$i)&1) {
            $cost += $c[$i];
            for ($j=0; $j < $m; $j++) { 
                $level[$j] += $a[$i][$j];
            }
        }
    }
    $ok = true;
    for ($j=0; $j < $m; $j++) { 
        if ($level[$j] < $x) {
            $ok = false;
        }
    }
    if ($ok) {
        $ans = min($ans, $cost);
    }
}
if ($ans === 12345678) {
    echo -1;
} else {
    echo $ans;
}