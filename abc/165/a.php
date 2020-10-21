<?php
fscanf(STDIN, '%d', $k);
fscanf(STDIN, '%d %d', $min, $max);
$flag = false;
for ($i=$min; $i <= $max; $i++) { 
    if ($i % $k == 0) {
        $flag = true;
        break;
    }
}
echo $flag ? 'OK' : 'NG';