/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbaddrul <hbaddrul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 13:26:07 by hbaddrul          #+#    #+#             */
/*   Updated: 2022/02/08 16:05:20 by hbaddrul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX00_CLAPTRAP_HPP_
#define EX00_CLAPTRAP_HPP_

#include <string>

using std::string;

class ClapTrap {
 public:
    ClapTrap(void);
    explicit ClapTrap(string named);
    ClapTrap(const ClapTrap &claptrap);
    ClapTrap &operator=(const ClapTrap &claptrap);
    ~ClapTrap(void);

    string get_name(void) const;
    void set_name(string name);
    void attack(const string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
 private:
    string name_;
    int hp_;
    int ep_;
    int ad_;
};

#endif  // EX00_CLAPTRAP_HPP_
