/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarzano <lmarzano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 17:12:58 by lmarzano          #+#    #+#             */
/*   Updated: 2022/07/26 17:40:53 by lmarzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TARGETGENERATOR_HPP
#define TARGETGENERATOR_HPP

#include <map>
#include "ATarget.hpp"

class TargetGenerator
{
private:
	std::map<std::string, ATarget*>	targets;

	TargetGenerator(const TargetGenerator &copy);
	TargetGenerator&    operator=(const TargetGenerator &op);
	
public:
	TargetGenerator();
	~TargetGenerator();

	void		learnTargetType(ATarget* target);
	void		forgetTargetType(const std::string &type);
	ATarget*	createTarget(const std::string &target);
};

#endif