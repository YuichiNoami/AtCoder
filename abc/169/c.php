<?php
fscanf(STDIN, '%d %s', $a, $b);
$b = (int)str_replace('.', '', $b);
echo intdiv($a * $b, 100);