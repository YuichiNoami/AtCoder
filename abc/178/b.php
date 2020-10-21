<?php
fscanf(STDIN, '%d %d %d %d', $a, $b, $c, $d);
echo max($a * $c, $b * $c, $a * $d, $b * $d);