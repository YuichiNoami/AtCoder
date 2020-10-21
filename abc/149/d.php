<?php
fscanf(STDIN, '%d %d', $cnt, $lim);
fscanf(STDIN, '%d %d %d', $score['goo'], $score['cho'], $score['paa']);
fscanf(STDIN, '%s', $str);
$ans = 0;
$pats = str_split($str);

for ($i=0; $i < $cnt; $i++) {
    $next = $pats[$i];
    switch ($next) {
        case 'r':
            $tar = 'paa';
            break;

        case 's':
            $tar = 'goo';
            break;

        case 'p':
            $tar = 'cho';
            break;
            

        default:
            break;
    }

    if ($i <= $lim - 1) {
        $ans += $score[$tar];
    } else {
        if ($pats[$i - $lim] !== $next) {
            $ans += $score[$tar];
        }
        if ($pats[$i - $lim] !== 'n' && $pats[$i - $lim] === $next) {
            $pats[$i] = 'n';
        }
    }
}

echo $ans . "\n";