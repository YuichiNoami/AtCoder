<?php
fscanf(STDIN, '%s', $str);
fscanf(STDIN, '%s', $tar);
$strLen = strlen($str);
$tarLen = strlen($tar);
$ans = $tarLen;
for ($i=0; $i <= $strLen - $tarLen; $i++) { 
    $tmp = 0;
    for ($j=0; $j < $tarLen; $j++) { 
        if ($tar[$j] != $str[$i + $j]) {
            $tmp++;
        }
    }
    $ans = min($ans, $tmp);
}
echo $ans;