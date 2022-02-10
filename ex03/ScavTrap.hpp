/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaddrul <hbaddrul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 01:20:15 by hbaddrul          #+#    #+#             */
/*   Updated: 2022/02/09 21:48:03 by hbaddrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX03_SCAVTRAP_HPP_
#define EX03_SCAVTRAP_HPP_

#include <string>

#include "ClapTrap.hpp"

using std::string;

class ScavTrap: virtual public ClapTrap {
 public:
    ScavTrap(void);
    explicit ScavTrap(string name);
    ScavTrap(const ScavTrap &scavtrap);
    ScavTrap &operator=(const ScavTrap &scavtrap);
    ~ScavTrap(void);

    void set_name(string name);
    void attack(const string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void guardGate(void) const;
};

#endif  // EX03_SCAVTRAP_HPP_
