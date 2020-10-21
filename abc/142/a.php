<?php
fscanf(STDIN, '%d', $num);
if ($num < 2) {
    echo 1;
} elseif ($num % 2 === 0) {
    echo 1 / 2;
} else {
    echo (floor($num/2)+1) / $num;
}
echo "\n";