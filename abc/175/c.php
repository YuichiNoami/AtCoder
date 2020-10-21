<?php
fscanf(STDIN, '%f %f %f', $start, $cnt, $length);
$start = (int)abs($start);
$tmp = floor($start / $length);
if ($tmp >= $cnt) {
    $ans = (int)($start - $cnt * $length);
} else {
    $ans = (int)($start - $tmp * $length);
    $cnt -= $tmp;
    if ($cnt % 2 != 0) {
        $ans = (int)($ans - $length);
    }
}
echo (int)abs($ans);