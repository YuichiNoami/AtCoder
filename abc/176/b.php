<?php
fscanf(STDIN, '%s', $str);
$arr = str_split($str);
$sum = array_sum($arr);
echo ($sum % 9 == 0) ? 'Yes' : 'No';