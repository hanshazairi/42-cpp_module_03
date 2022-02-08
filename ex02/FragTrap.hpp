/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaddrul <hbaddrul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 00:59:11 by hbaddrul          #+#    #+#             */
/*   Updated: 2022/02/09 01:02:32 by hbaddrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX02_FRAGTRAP_HPP_
#define EX02_FRAGTRAP_HPP_

#include <string>

#include "ClapTrap.hpp"

using std::string;

class FragTrap: public ClapTrap {
 public:
    FragTrap(void);
    explicit FragTrap(string name);
    FragTrap(const FragTrap &fragtrap);
    FragTrap &operator=(const FragTrap &fragtrap);
    ~FragTrap(void);

    void set_name(string name);
    void attack(const string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void highFivesGuys(void) const;
};

#endif  // EX02_FRAGTRAP_HPP_
