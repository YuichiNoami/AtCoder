<?php
fscanf(STDIN, '%d %d %d', $dist, $time, $speed);
if ($dist / $speed <= $time) {
    echo "Yes";
} else {
    echo "No";
}