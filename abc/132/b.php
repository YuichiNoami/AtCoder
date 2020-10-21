<?php
fscanf(STDIN, '%d', $count);
$nums = explode(' ', trim(fgets(STDIN)));
$ans = 0;
for ($i=1; $i < $count-1; $i++) { 
    $tmp = [$nums[$i-1], $nums[$i], $nums[$i+1]];
    sort($tmp);
    if ($tmp[1] === $nums[$i]) {
        $ans++;
    }
}
echo $ans."\n";