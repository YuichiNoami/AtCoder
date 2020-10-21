<?php
$ans = 0;
fscanf(STDIN, '%s', $org);
$rev = strrev($org);
$len = strlen($org);
$orgArr = str_split($org);
$revArr = str_split($rev);
$lim = floor($len / 2);
for ($i=0; $i < $lim; $i++) { 
    if ($orgArr[$i] != $revArr[$i]) {
        $ans++;
    }
}
echo $ans . "\n";