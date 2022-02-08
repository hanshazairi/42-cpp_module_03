/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaddrul <hbaddrul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 16:52:42 by hbaddrul          #+#    #+#             */
/*   Updated: 2022/02/09 01:01:24 by hbaddrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "ScavTrap.hpp"

using std::cout;
using std::endl;

ScavTrap::ScavTrap(void) : ClapTrap::ClapTrap() {
    cout << "A ScavtTap was constructed" << endl;
}

ScavTrap::ScavTrap(string name) : ClapTrap::ClapTrap(name) {
    hp_ = 100;
    ep_ = 50;
    ad_ = 20;
    cout << "ScavTrap " << name_ << " was constructed" << endl;
}

ScavTrap::ScavTrap(const ScavTrap &scavtrap) {
    *this = scavtrap;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &scavtrap) {
    cout << "ScavTrap " << scavtrap.name_ << " was cloned" << endl;

    if (this != &scavtrap) {
        name_ = scavtrap.name_;
        hp_ = scavtrap.hp_;
        ep_ = scavtrap.ep_;
        ad_ = scavtrap.ad_;
    }

    return *this;
}

ScavTrap::~ScavTrap(void) {
    cout << "ScavTrap " << name_ << " was deconstructed" << endl;
}

void ScavTrap::set_name(string name) {
    cout << "ScavTrap " << name_ << "'s clone is now ScavTrap " << name << endl;
    name_ = name;
}

void ScavTrap::attack(const string &target) {
    if (ep_) {
        --ep_;
        cout << "ScavTrap " << name_ << " attacks " << target << ", causing "
                << ad_ << " points of damage!" << endl;
    } else {
        cout << "ScavTrap " << name_ << " has 0 EP, unable to attack" << endl;
    }
}

void ScavTrap::takeDamage(unsigned int amount) {
    if (!hp_) {
        cout << "ScavTrap " << name_ << " is already dead" << endl;
    } else {
        hp_ -= amount;

        if (hp_ < 0)
            hp_ = 0;

        cout << "ScavTrap " << name_ << " took " << amount << " damage" << endl;
        cout << "ScavTrap " << name_ << " is at " << hp_ << " HP" << endl;

        if (!hp_)
            cout << "ScavTrap " << name_ << " died" << endl;
    }
}

void ScavTrap::beRepaired(unsigned int amount) {
    hp_ += amount;

    if (ep_) {
        --ep_;
        cout << "ScavTrap " << name_ << " healed " << amount << " HP" << endl;
        cout << "ScavTrap " << name_ << " is at " << hp_ << " HP" << endl;
    } else {
        cout << "ScavTrap " << name_ << " has 0 EP, unable to repair" << endl;
    }
}

void ScavTrap::guardGate(void) const {
    cout << "ScavTrap " << name_ << " is in Gatekeeper Mode" << endl;
}
