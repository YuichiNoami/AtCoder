<?php
fscanf(STDIN, '%f %f', $zei8, $zei10);
for ($i=1; $i <= 1009; $i++) { 
    $tmp8 = floor($i * 0.08);
    $tmp10 = floor($i * 0.10);
    if ($tmp8 === $zei8 && $tmp10 === $zei10) {
        echo $i;
        echo "\n";
        exit;
    }
}
echo -1;
echo "\n";