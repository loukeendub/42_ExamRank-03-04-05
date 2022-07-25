/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarzano <lmarzano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 14:18:39 by lmarzano          #+#    #+#             */
/*   Updated: 2022/07/25 15:26:24 by lmarzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARLOCK_HPP
# define WARLOCK_HPP

#include <iostream>

class Warlock
{
private:
	std::string	_name;
	std::string	_title;
	
	Warlock();
	Warlock(const Warlock& copy);
	Warlock&	operator=(const Warlock& op);
	
public:
	Warlock(const std::string& name, const std::string& title);
	~Warlock();

	std::string const	&getName(void)  const;
	std::string const	&getTitle(void) const;
	
	void				setTitle(const std::string& title);

	void				introduce() const;
};

#endif