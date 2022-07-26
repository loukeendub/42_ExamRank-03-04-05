/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarzano <lmarzano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 17:14:08 by lmarzano          #+#    #+#             */
/*   Updated: 2022/07/26 18:09:08 by lmarzano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TargetGenerator.hpp"


TargetGenerator::TargetGenerator()
{}

TargetGenerator::~TargetGenerator()
{
	std::map<std::string, ATarget *>::iterator it_begin = this->targets.begin();
	std::map<std::string, ATarget *>::iterator it_end = this->targets.end();
	while (it_begin != it_end)
	{
		delete it_begin->second;
		++it_begin;
	}
	this->targets.clear();
}

TargetGenerator::TargetGenerator(const TargetGenerator &copy)
{
	this->targets = copy.targets;
}

TargetGenerator&    TargetGenerator::operator=(const TargetGenerator &op)
{
	if (this == &op)
		return (*this);
	return (*this); 
}

void	TargetGenerator::learnTargetType(ATarget* target)
{
	if (target)
		targets.insert(std::pair<std::string, ATarget*>(target->getType(), target->clone()));
}

void	TargetGenerator::forgetTargetType(const std::string &type)
{
	std::map<std::string, ATarget*>::iterator it = targets.find(type);
	if (it != targets.end())
		delete it->second;
	targets.erase(type);
}

ATarget*	TargetGenerator::createTarget(const std::string &target)
{
	std::map<std::string, ATarget*>::iterator it = targets.find(target);
	if (it != targets.end())
		return (targets[target]);
	return NULL;
}
