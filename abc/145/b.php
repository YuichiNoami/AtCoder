<?php
fscanf(STDIN, '%d', $length);
fscanf(STDIN, '%s', $string);

echo solve($length, $string);
echo "\n";

function solve($len, $str) {
    if ($len % 2 !== 0) {
        return "No";
    }

    $first = substr($str, 0, $len/2);
    $last = substr($str, -$len/2);

    return $first === $last ? "Yes" : "No";
}