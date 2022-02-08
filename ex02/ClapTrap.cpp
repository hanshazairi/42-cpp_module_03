/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaddrul <hbaddrul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 00:57:35 by hbaddrul          #+#    #+#             */
/*   Updated: 2022/02/09 00:57:37 by hbaddrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "ClapTrap.hpp"

using std::cout;
using std::endl;
using std::string;

ClapTrap::ClapTrap(void) : name_(""), hp_(10), ep_(10), ad_(0) {
    cout << "A ClapTrap was constructed" << endl;
}

ClapTrap::ClapTrap(string name) : name_(name), hp_(10), ep_(10), ad_(0) {
    cout << "ClapTrap " << name_ << " was constructed" << endl;
}

ClapTrap::ClapTrap(const ClapTrap &claptrap) {
    *this = claptrap;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &claptrap) {
    cout << "ClapTrap " << claptrap.name_ << " was cloned" << endl;

    if (this != &claptrap) {
        name_ = claptrap.name_;
        hp_ = claptrap.hp_;
        ep_ = claptrap.ep_;
        ad_ = claptrap.ad_;
    }

    return *this;
}

ClapTrap::~ClapTrap(void) {
    cout << "ClapTrap " << name_ << " was deconstructed" << endl;
}

string ClapTrap::get_name(void) const {
    return name_;
}

void ClapTrap::set_name(string name) {
    cout << "ClapTrap " << name_ << "'s clone is now ClapTrap " << name << endl;
    name_ = name;
}

void ClapTrap::attack(const string &target) {
    if (ep_) {
        --ep_;
        cout << "ClapTrap " << name_ << " attacks " << target << ", causing "
                << ad_ << " points of damage!" << endl;
    } else {
        cout << "ClapTrap " << name_ << " has 0 EP, unable to attack" << endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (!hp_) {
        cout << "ClapTrap " << name_ << " is already dead" << endl;
    } else {
        hp_ -= amount;

        if (hp_ < 0)
            hp_ = 0;

        cout << "ClapTrap " << name_ << " took " << amount << " damage" << endl;
        cout << "ClapTrap " << name_ << " is at " << hp_ << " HP" << endl;

        if (!hp_)
            cout << "ClapTrap " << name_ << " died" << endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount) {
    hp_ += amount;

    if (ep_) {
        --ep_;
        cout << "ClapTrap " << name_ << " healed " << amount << " HP" << endl;
        cout << "ClapTrap " << name_ << " is at " << hp_ << " HP" << endl;
    } else {
        cout << "ClapTrap " << name_ << " has 0 EP, unable to repair" << endl;
    }
}
