<?php
define("PI", 3.14159265358979);
fscanf(STDIN, '%d %d %d %d', $a, $b, $hour, $minute);
$rad = PI * 2 * ($hour / 12.0 + ($minute / 60.0) / 12.0 - $minute / 60.0);
$rsq = ($a * $a + $b * $b) - (2 * $a * $b) * cos($rad);
echo sqrt($rsq);