<?php
fscanf(STDIN, '%d %d', $a, $b);
if ($a >= 1 && $a <= 9 && $b >= 1 && $b <= 9) {
    echo $a * $b;
} else {
    echo -1;
}
echo "\n";