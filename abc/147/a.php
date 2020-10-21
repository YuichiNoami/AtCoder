<?php
fscanf(STDIN, '%d %d %d', $cards[], $cards[], $cards[]);
echo (array_sum($cards)."\n" > 21 ? 'bust' : 'win') . "\n";