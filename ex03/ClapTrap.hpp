/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaddrul <hbaddrul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 01:19:29 by hbaddrul          #+#    #+#             */
/*   Updated: 2022/02/09 01:19:35 by hbaddrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX03_CLAPTRAP_HPP_
#define EX03_CLAPTRAP_HPP_

#include <string>

using std::string;

class ClapTrap {
 public:
    ClapTrap(void);
    explicit ClapTrap(string name);
    ClapTrap(const ClapTrap &claptrap);
    ClapTrap &operator=(const ClapTrap &claptrap);
    ~ClapTrap(void);

    string get_name(void) const;
    void set_name(string name);
    void attack(const string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
 protected:
    string name_;
    int hp_;
    int ep_;
    int ad_;
};

#endif  // EX03_CLAPTRAP_HPP_
