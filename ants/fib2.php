<?php
$MAX_N = 1000;
$memo = array_fill(0, $MAX_N + 1, 0);

function fib($n) {
    global $memo;
    if ($n <= 1) {
        return $n;
    }
    if ($memo[$n] !== 0) {
        return $memo[$n];
    }
    return $memo[$n] = fib($n - 1) + fib($n - 2);
}

echo fib(50);