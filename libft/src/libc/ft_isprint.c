/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhur <juhur@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 12:36:59 by juhur             #+#    #+#             */
/*   Updated: 2021/04/27 12:57:11 by juhur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/*
** isprint -- printing character test (space character inclusive)
**
** #include <ctype.h>
**
** The value of the argument must be representable
** as an "unsigned char" or the value of EOF.
** In the ASCII character set, this includes the following characters
** (preceded by their numeric values, in octal):
**
**   040 sp        041 ``!''     042 ``"''     043 ``#''     044 ``$''
**   045 ``%''     046 ``&''     047 ``'''     050 ``(''     051 ``)''
**   052 ``*''     053 ``+''     054 ``,''     055 ``-''     056 ``.''
**   057 ``/''     060 ``0''     061 ``1''     062 ``2''     063 ``3''
**   064 ``4''     065 ``5''     066 ``6''     067 ``7''     070 ``8''
**   071 ``9''     072 ``:''     073 ``;''     074 ``<''     075 ``=''
**   076 ``>''     077 ``?''     100 ``@''     101 ``A''     102 ``B''
**   103 ``C''     104 ``D''     105 ``E''     106 ``F''     107 ``G''
**   110 ``H''     111 ``I''     112 ``J''     113 ``K''     114 ``L''
**   115 ``M''     116 ``N''     117 ``O''     120 ``P''     121 ``Q''
**   122 ``R''     123 ``S''     124 ``T''     125 ``U''     126 ``V''
**   127 ``W''     130 ``X''     131 ``Y''     132 ``Z''     133 ``[''
**   134 ``\''     135 ``]''     136 ``^''     137 ``_''     140 ```''
**   141 ``a''     142 ``b''     143 ``c''     144 ``d''     145 ``e''
**   146 ``f''     147 ``g''     150 ``h''     151 ``i''     152 ``j''
**   153 ``k''     154 ``l''     155 ``m''     156 ``n''     157 ``o''
**   160 ``p''     161 ``q''     162 ``r''     163 ``s''     164 ``t''
**   165 ``u''     166 ``v''     167 ``w''     170 ``x''     171 ``y''
**   172 ``z''     173 ``{''     174 ``|''     175 ``}''     176 ``~''
**
** <PARAMETER>
** int c: Source
**
** <RETURN VALUES>
** true: If 1st argument is printable character.
** false: If 1st argument is not printable character.
*/

int	ft_isprint(int c)
{
	unsigned char uc;

	uc = (unsigned char)c;
	return (32 <= uc && uc <= 126);
}
