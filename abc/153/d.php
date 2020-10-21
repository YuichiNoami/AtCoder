<?php
fscanf(STDIN, '%f', $life);

function attack($hp) {
    if ($hp <= 1) {
        return 1;
    }
    return 1 + attack(floor($hp/2)) * 2;
}

echo attack($life);