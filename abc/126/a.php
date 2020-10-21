<?php
fscanf(STDIN, '%d %d', $length, $key);
fscanf(STDIN, '%s', $str);
$ans = '';
for ($i=0; $i < $length; $i++) { 
    if ($i + 1 === $key) {
        $ans .= strtolower($str[$i]);
    } else {
        $ans .= $str[$i];
    }
}
echo "$ans\n";