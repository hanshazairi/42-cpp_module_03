/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaddrul <hbaddrul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 01:20:59 by hbaddrul          #+#    #+#             */
/*   Updated: 2022/02/09 23:41:19 by hbaddrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "ClapTrap.hpp"
#include "DiamondTrap.hpp"

using std::cout;
using std::endl;

DiamondTrap::DiamondTrap(void) : ClapTrap() {
    // ClapTrap::name_ = "_clap_name";
    cout << "A DiamondTrap was constructed" << endl;
}

DiamondTrap::DiamondTrap(string name) : ClapTrap(name) {
    // ClapTrap::set_name(name + "_clap_name");
    cout << "LOLlllLLLLLLLLL" << endl;
    // hp_ = FragTrap::hp_;
    // ep_ = ScavTrap::ep_;
    // ad_ = FragTrap::ad_;
    cout << "DiamondTrap " << name_ << " was constructed" << endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &diamondtrap) {
    *this = diamondtrap;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &diamondtrap) {
    cout << "DiamondTrap " << diamondtrap.name_ << " was cloned" << endl;

    if (this != &diamondtrap) {
        name_ = diamondtrap.name_;
        hp_ = diamondtrap.hp_;
        ep_ = diamondtrap.ep_;
        ad_ = diamondtrap.ad_;
    }

    return *this;
}

DiamondTrap::~DiamondTrap(void) {
    cout << "DiamondTrap " << name_ << " was deconstructed" << endl;
}

void DiamondTrap::set_name(string name) {
    name_ = name;
    cout << "DiamondTrap " << name_ << "'s clone is now DiamondTrap " << name << endl;
}

void DiamondTrap::attack(const string &target) {
    if (ep_) {
        --ep_;
        cout << "DiamondTrap " << name_ << " attacks " << target << ", causing "
                << ad_ << " points of damage!" << endl;
    } else {
        cout << "DiamondTrap " << name_ << " has 0 EP, unable to attack" << endl;
    }
}

void DiamondTrap::takeDamage(unsigned int amount) {
    if (!hp_) {
        cout << "DiamondTrap " << this->name_ << " is already dead" << endl;
    } else {
        hp_ -= amount;

        if (hp_ < 0)
            hp_ = 0;

        cout << "DiamondTrap " << this->name_ << " took " << amount << " damage" << endl;
        cout << "DiamondTrap " << this->name_ << " is at " << hp_ << " HP" << endl;

        if (!hp_)
            cout << "DiamondTrap " << this->name_ << " died" << endl;
    }
}

void DiamondTrap::beRepaired(unsigned int amount) {
    hp_ += amount;

    if (ep_) {
        --ep_;
        cout << "DiamondTrap " << name_ << " healed " << amount << " HP" << endl;
        cout << "DiamondTrap " << name_ << " is at " << hp_ << " HP" << endl;
    } else {
        cout << "DiamondTrap " << name_ << " has 0 EP, unable to repair" << endl;
    }
}

void DiamondTrap::whoAmI(void) const {
    cout << "My DiamondTrap name is " << name_ << endl;
    cout << "My ClapTrap name is " << this->ClapTrap::get_name() << endl;
}
