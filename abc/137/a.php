<?php
fscanf(STDIN, '%d %d', $a, $b);
echo max($a-$b, $a+$b, $a*$b);
