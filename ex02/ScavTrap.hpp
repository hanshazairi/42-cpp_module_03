/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaddrul <hbaddrul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 00:58:07 by hbaddrul          #+#    #+#             */
/*   Updated: 2022/02/09 00:59:48 by hbaddrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX02_SCAVTRAP_HPP_
#define EX02_SCAVTRAP_HPP_

#include <string>

#include "ClapTrap.hpp"

using std::string;

class ScavTrap: public ClapTrap {
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

#endif  // EX02_SCAVTRAP_HPP_
