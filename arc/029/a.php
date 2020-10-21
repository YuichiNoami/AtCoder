<?php
fscanf(STDIN, '%d', $cnt);
$parts= [];
for ($i=0; $i < $cnt; $i++) { 
    fscanf(STDIN, '%d', $parts[]);
}
$ans = PHP_INT_MAX;
for ($mask=0; $mask < 1<<$cnt; $mask++) { 
    $tmp = array_fill(0, 2, 0);
    for ($i=0; $i < $cnt; $i++) { 
        $tmp[($mask>>$i)&1]+=$parts[$i];
    }
    $ans = min($ans, max($tmp[0], $tmp[1]));
}
echo "$ans\n";