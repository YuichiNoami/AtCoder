<?php
fscanf(STDIN, '%d %d', $x, $y);
if ($y == 0) {
    $ans = $x;
} elseif ($y == 1) {
    $ans = 0;
} else {
    $mod = $x % $y;
    $ans = min($mod, abs($y - $mod));
}
echo $ans;