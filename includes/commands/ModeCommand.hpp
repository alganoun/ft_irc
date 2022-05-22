/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ModeCommand.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alganoun <alganoun@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 20:33:03 by alganoun          #+#    #+#             */
/*   Updated: 2022/05/22 20:33:21 by alganoun         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClientCommand.hpp"

namespace ft {
	class ModeCommand : public ClientCommand {

		public :
			ModeCommand();

			~ModeCommand();

			bool execute(CommandContext &cmd) const;
	};
}