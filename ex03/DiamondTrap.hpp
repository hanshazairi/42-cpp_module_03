/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaddrul <hbaddrul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 01:20:31 by hbaddrul          #+#    #+#             */
/*   Updated: 2022/02/09 21:48:26 by hbaddrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX03_DIAMONDTRAP_HPP_
#define EX03_DIAMONDTRAP_HPP_

#include <string>

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

using std::string;

class DiamondTrap: public ScavTrap, public FragTrap {
 public:
    DiamondTrap(void);
    explicit DiamondTrap(string name);
    DiamondTrap(const DiamondTrap &diamondtrap);
    DiamondTrap &operator=(const DiamondTrap &diamondtrap);
    ~DiamondTrap(void);

    void set_name(string name);
    void attack(const string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void whoAmI(void) const;
 private:
    string name_;
};

#endif  // EX03_DIAMONDTRAP_HPP_
