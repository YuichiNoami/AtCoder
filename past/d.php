<?php
fscanf(STDIN, '%s', $string);
$zeroCnt = substr_count($string, '0');
$oneCnt = substr_count($string, '1');
echo min($oneCnt, $zeroCnt) * 2;