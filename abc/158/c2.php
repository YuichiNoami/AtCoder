<?php
fscanf(STDIN, '%f %f', $zei8, $zei10);
if ($zei10 === $zei8) {
    if ($zei8 > 1) {
        $ans = 13 * $zei8 - 1;
    } else {
        $ans = 13;
    }
} else {
    if ($zei10 <= $zei8 * 1.375 && $zei10 >= $zei8 * 1.25) {
    
    }
}