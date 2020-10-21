<?php
fscanf(STDIN, '%d', $min);
if ($min === 2) {
    echo $min . "\n";
    exit;
} elseif ($min % 2 === 0) {
    $min++;
}

$max = 100003;

$count = 0;
$tmp = 1;
$max = intval($max);

$str = str_repeat('01', $max/2+1);
$loopmax = ceil(sqrt($max));

for ($i=3; $i <= $loopmax; $i+=2) {
    if ($str[$i] === '0') {
        continue;
    }
    $loop = 2;
    $now = $i * 2;
    while ($now <= $max) {
        $str[$now] = '0';
        $loop++;
        $now = $i * $loop;
    }
}

$prime_count = 1;
$prime_numbers = [];
for ($i=3; $i <= $max; $i+=2) {
    if ($str[$i] === '1' && $i >= $min) {
        $prime_count++;
        $prime_numbers[] = $i;
    }
}

echo min($prime_numbers) . "\n";