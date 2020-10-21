<?php
fscanf(STDIN, '%s', $str);
$rev = strrev($str);
if ($str !== $rev) {
    echo "No";
    exit;
}
$len = strlen($str);
$check1End = ($len-1)/2;
$check2Start = ($len+3)/2;
$check1Valid = true;
$check1Str = substr($str, 0, $check1End);
$check1Rev = strrev($check1Str);
if ($check1Str !== $check1Rev) {
    echo "No";
    exit;
}
$check2Str = substr($str, $check2Start-1, $len);
$check2Rev = strrev($check2Str);
if ($check2Str !== $check2Rev) {
    echo "No";
    exit;
}
echo "Yes";