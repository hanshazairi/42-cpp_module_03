/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaddrul <hbaddrul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 01:19:46 by hbaddrul          #+#    #+#             */
/*   Updated: 2022/02/09 21:48:10 by hbaddrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX03_FRAGTRAP_HPP_
#define EX03_FRAGTRAP_HPP_

#include <string>

#include "ClapTrap.hpp"

using std::string;

class FragTrap: virtual public ClapTrap {
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

#endif  // EX03_FRAGTRAP_HPP_
