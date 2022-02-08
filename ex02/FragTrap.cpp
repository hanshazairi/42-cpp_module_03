/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaddrul <hbaddrul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 00:59:00 by hbaddrul          #+#    #+#             */
/*   Updated: 2022/02/09 01:02:59 by hbaddrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "FragTrap.hpp"

using std::cout;
using std::endl;

FragTrap::FragTrap(void) : ClapTrap::ClapTrap() {
    cout << "A FragTrap was constructed" << endl;
}

FragTrap::FragTrap(string name) : ClapTrap::ClapTrap(name) {
    hp_ = 100;
    ep_ = 100;
    ad_ = 30;
    cout << "FragTrap " << name_ << " was constructed" << endl;
}

FragTrap::FragTrap(const FragTrap &fragtrap) {
    *this = fragtrap;
}

FragTrap &FragTrap::operator=(const FragTrap &fragtrap) {
    cout << "FragTrap " << fragtrap.name_ << " was cloned" << endl;

    if (this != &fragtrap) {
        name_ = fragtrap.name_;
        hp_ = fragtrap.hp_;
        ep_ = fragtrap.ep_;
        ad_ = fragtrap.ad_;
    }

    return *this;
}

FragTrap::~FragTrap(void) {
    cout << "FragTrap " << name_ << " was deconstructed" << endl;
}

void FragTrap::set_name(string name) {
    cout << "FragTrap " << name_ << "'s clone is now FragTrap " << name << endl;
    name_ = name;
}

void FragTrap::attack(const string &target) {
    if (ep_) {
        --ep_;
        cout << "FragTrap " << name_ << " attacks " << target << ", causing "
                << ad_ << " points of damage!" << endl;
    } else {
        cout << "FragTrap " << name_ << " has 0 EP, unable to attack" << endl;
    }
}

void FragTrap::takeDamage(unsigned int amount) {
    if (!hp_) {
        cout << "FragTrap " << name_ << " is already dead" << endl;
    } else {
        hp_ -= amount;

        if (hp_ < 0)
            hp_ = 0;

        cout << "FragTrap " << name_ << " took " << amount << " damage" << endl;
        cout << "FragTrap " << name_ << " is at " << hp_ << " HP" << endl;

        if (!hp_)
            cout << "FragTrap " << name_ << " died" << endl;
    }
}

void FragTrap::beRepaired(unsigned int amount) {
    hp_ += amount;

    if (ep_) {
        --ep_;
        cout << "FragTrap " << name_ << " healed " << amount << " HP" << endl;
        cout << "FragTrap " << name_ << " is at " << hp_ << " HP" << endl;
    } else {
        cout << "FragTrap " << name_ << " has 0 EP, unable to repair" << endl;
    }
}

void FragTrap::highFivesGuys(void) const {
    cout << "FragTrap " << name_ << " requests for a high 5!" << endl;
}
