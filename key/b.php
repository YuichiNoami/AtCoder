<?php
fscanf(STDIN, '%d', $cnt);
$robots = [];
for ($i=0; $i < $cnt; $i++) { 
    fscanf(STDIN, '%d %d', $pos, $len);
    $robots[] = [
        'pos' => $pos,
        'len' => $len,
        'start' => $pos - $len + 1,
        'end' => $pos + $len - 1,
    ];
}
$min = min(array_column($robots, 'pos'));
$max = max(array_column($robots, 'pos'));
foreach ($robots as $key => $robot) {
    for ($i=$min; $i <= $max; $i++) { 
        if ($robot['pos'] > $robots[$i]['start'] && $robot['pos'] > $robots[$i]['end'] ) {
            if ($robot['len'] >= $robots[$i]['len']) {
                unset($robots[$key]);
            } else {
                unset($robots[$i]);
            }
            $robots = array_values($robots);
        }
    }
}
echo count($robots);