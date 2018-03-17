/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oleshche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/02 16:07:26 by oleshche          #+#    #+#             */
/*   Updated: 2018/03/02 16:08:39 by oleshche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		main(void)
{
    int k = 0;

    ft_printf("\n#0000");
    ft_printf("|%5.4d|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0001");
    ft_printf("|%5.4hhd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0002");
    ft_printf("|%5.4hd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0003");
    ft_printf("|%5.4ld|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0004");
    ft_printf("|%5.4lld|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0005");
    ft_printf("|%5.4jd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0006");
    ft_printf("|%5.4zd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0007");
    ft_printf("|%5.4Ld|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0008");
    ft_printf("|%5.4td|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0009");
    ft_printf("|%5.4o|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0010");
    ft_printf("|%5.4hho|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0011");
    ft_printf("|%5.4ho|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0012");
    ft_printf("|%5.4lo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0013");
    ft_printf("|%5.4llo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0014");
    ft_printf("|%5.4jo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0015");
    ft_printf("|%5.4zo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0016");
    ft_printf("|%5.4Lo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0017");
    ft_printf("|%5.4to|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0018");
    ft_printf("|%5.4u|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0019");
    ft_printf("|%5.4hhu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0020");
    ft_printf("|%5.4hu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0021");
    ft_printf("|%5.4lu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0022");
    ft_printf("|%5.4llu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0023");
    ft_printf("|%5.4ju|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0024");
    ft_printf("|%5.4zu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0025");
    ft_printf("|%5.4Lu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0026");
    ft_printf("|%5.4tu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0027");
    ft_printf("|%5.4x|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0028");
    ft_printf("|%5.4hhx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0029");
    ft_printf("|%5.4hx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0030");
    ft_printf("|%5.4lx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0031");
    ft_printf("|%5.4llx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0032");
    ft_printf("|%5.4jx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0033");
    ft_printf("|%5.4zx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0034");
    ft_printf("|%5.4Lx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0035");
    ft_printf("|%5.4tx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0036");
    ft_printf("|% 5.4d|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0037");
    ft_printf("|% 5.4hhd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0038");
    ft_printf("|% 5.4hd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0039");
    ft_printf("|% 5.4ld|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0040");
    ft_printf("|% 5.4lld|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0041");
    ft_printf("|% 5.4jd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0042");
    ft_printf("|% 5.4zd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0043");
    ft_printf("|% 5.4Ld|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0044");
    ft_printf("|% 5.4td|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0045");
    ft_printf("|% 5.4o|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0046");
    ft_printf("|% 5.4hho|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0047");
    ft_printf("|% 5.4ho|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0048");
    ft_printf("|% 5.4lo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0049");
    ft_printf("|% 5.4llo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0050");
    ft_printf("|% 5.4jo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0051");
    ft_printf("|% 5.4zo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0052");
    ft_printf("|% 5.4Lo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0053");
    ft_printf("|% 5.4to|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0054");
    ft_printf("|% 5.4u|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0055");
    ft_printf("|% 5.4hhu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0056");
    ft_printf("|% 5.4hu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0057");
    ft_printf("|% 5.4lu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0058");
    ft_printf("|% 5.4llu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0059");
    ft_printf("|% 5.4ju|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0060");
    ft_printf("|% 5.4zu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0061");
    ft_printf("|% 5.4Lu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0062");
    ft_printf("|% 5.4tu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0063");
    ft_printf("|% 5.4x|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0064");
    ft_printf("|% 5.4hhx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0065");
    ft_printf("|% 5.4hx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0066");
    ft_printf("|% 5.4lx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0067");
    ft_printf("|% 5.4llx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0068");
    ft_printf("|% 5.4jx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0069");
    ft_printf("|% 5.4zx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0070");
    ft_printf("|% 5.4Lx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0071");
    ft_printf("|% 5.4tx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0072");
    ft_printf("|%05.4d|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0073");
    ft_printf("|%05.4hhd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0074");
    ft_printf("|%05.4hd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0075");
    ft_printf("|%05.4ld|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0076");
    ft_printf("|%05.4lld|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0077");
    ft_printf("|%05.4jd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0078");
    ft_printf("|%05.4zd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0079");
    ft_printf("|%05.4Ld|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0080");
    ft_printf("|%05.4td|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0081");
    ft_printf("|%05.4o|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0082");
    ft_printf("|%05.4hho|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0083");
    ft_printf("|%05.4ho|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0084");
    ft_printf("|%05.4lo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0085");
    ft_printf("|%05.4llo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0086");
    ft_printf("|%05.4jo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0087");
    ft_printf("|%05.4zo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0088");
    ft_printf("|%05.4Lo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0089");
    ft_printf("|%05.4to|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0090");
    ft_printf("|%05.4u|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0091");
    ft_printf("|%05.4hhu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0092");
    ft_printf("|%05.4hu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0093");
    ft_printf("|%05.4lu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0094");
    ft_printf("|%05.4llu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0095");
    ft_printf("|%05.4ju|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0096");
    ft_printf("|%05.4zu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0097");
    ft_printf("|%05.4Lu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0098");
    ft_printf("|%05.4tu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0099");
    ft_printf("|%05.4x|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0100");
    ft_printf("|%05.4hhx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0101");
    ft_printf("|%05.4hx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0102");
    ft_printf("|%05.4lx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0103");
    ft_printf("|%05.4llx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0104");
    ft_printf("|%05.4jx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0105");
    ft_printf("|%05.4zx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0106");
    ft_printf("|%05.4Lx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0107");
    ft_printf("|%05.4tx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0108");
    ft_printf("|% 05.4d|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0109");
    ft_printf("|% 05.4hhd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0110");
    ft_printf("|% 05.4hd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0111");
    ft_printf("|% 05.4ld|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0112");
    ft_printf("|% 05.4lld|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0113");
    ft_printf("|% 05.4jd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0114");
    ft_printf("|% 05.4zd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0115");
    ft_printf("|% 05.4Ld|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0116");
    ft_printf("|% 05.4td|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0117");
    ft_printf("|% 05.4o|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0118");
    ft_printf("|% 05.4hho|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0119");
    ft_printf("|% 05.4ho|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0120");
    ft_printf("|% 05.4lo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0121");
    ft_printf("|% 05.4llo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0122");
    ft_printf("|% 05.4jo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0123");
    ft_printf("|% 05.4zo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0124");
    ft_printf("|% 05.4Lo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0125");
    ft_printf("|% 05.4to|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0126");
    ft_printf("|% 05.4u|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0127");
    ft_printf("|% 05.4hhu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0128");
    ft_printf("|% 05.4hu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0129");
    ft_printf("|% 05.4lu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0130");
    ft_printf("|% 05.4llu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0131");
    ft_printf("|% 05.4ju|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0132");
    ft_printf("|% 05.4zu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0133");
    ft_printf("|% 05.4Lu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0134");
    ft_printf("|% 05.4tu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0135");
    ft_printf("|% 05.4x|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0136");
    ft_printf("|% 05.4hhx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0137");
    ft_printf("|% 05.4hx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0138");
    ft_printf("|% 05.4lx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0139");
    ft_printf("|% 05.4llx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0140");
    ft_printf("|% 05.4jx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0141");
    ft_printf("|% 05.4zx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0142");
    ft_printf("|% 05.4Lx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0143");
    ft_printf("|% 05.4tx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0144");
    ft_printf("|%+5.4d|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0145");
    ft_printf("|%+5.4hhd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0146");
    ft_printf("|%+5.4hd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0147");
    ft_printf("|%+5.4ld|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0148");
    ft_printf("|%+5.4lld|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0149");
    ft_printf("|%+5.4jd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0150");
    ft_printf("|%+5.4zd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0151");
    ft_printf("|%+5.4Ld|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0152");
    ft_printf("|%+5.4td|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0153");
    ft_printf("|%+5.4o|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0154");
    ft_printf("|%+5.4hho|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0155");
    ft_printf("|%+5.4ho|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0156");
    ft_printf("|%+5.4lo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0157");
    ft_printf("|%+5.4llo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0158");
    ft_printf("|%+5.4jo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0159");
    ft_printf("|%+5.4zo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0160");
    ft_printf("|%+5.4Lo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0161");
    ft_printf("|%+5.4to|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0162");
    ft_printf("|%+5.4u|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0163");
    ft_printf("|%+5.4hhu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0164");
    ft_printf("|%+5.4hu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0165");
    ft_printf("|%+5.4lu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0166");
    ft_printf("|%+5.4llu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0167");
    ft_printf("|%+5.4ju|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0168");
    ft_printf("|%+5.4zu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0169");
    ft_printf("|%+5.4Lu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0170");
    ft_printf("|%+5.4tu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0171");
    ft_printf("|%+5.4x|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0172");
    ft_printf("|%+5.4hhx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0173");
    ft_printf("|%+5.4hx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0174");
    ft_printf("|%+5.4lx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0175");
    ft_printf("|%+5.4llx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0176");
    ft_printf("|%+5.4jx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0177");
    ft_printf("|%+5.4zx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0178");
    ft_printf("|%+5.4Lx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0179");
    ft_printf("|%+5.4tx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0180");
    ft_printf("|% +5.4d|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0181");
    ft_printf("|% +5.4hhd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0182");
    ft_printf("|% +5.4hd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0183");
    ft_printf("|% +5.4ld|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0184");
    ft_printf("|% +5.4lld|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0185");
    ft_printf("|% +5.4jd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0186");
    ft_printf("|% +5.4zd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0187");
    ft_printf("|% +5.4Ld|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0188");
    ft_printf("|% +5.4td|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0189");
    ft_printf("|% +5.4o|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0190");
    ft_printf("|% +5.4hho|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0191");
    ft_printf("|% +5.4ho|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0192");
    ft_printf("|% +5.4lo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0193");
    ft_printf("|% +5.4llo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0194");
    ft_printf("|% +5.4jo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0195");
    ft_printf("|% +5.4zo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0196");
    ft_printf("|% +5.4Lo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0197");
    ft_printf("|% +5.4to|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0198");
    ft_printf("|% +5.4u|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0199");
    ft_printf("|% +5.4hhu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0200");
    ft_printf("|% +5.4hu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0201");
    ft_printf("|% +5.4lu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0202");
    ft_printf("|% +5.4llu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0203");
    ft_printf("|% +5.4ju|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0204");
    ft_printf("|% +5.4zu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0205");
    ft_printf("|% +5.4Lu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0206");
    ft_printf("|% +5.4tu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0207");
    ft_printf("|% +5.4x|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0208");
    ft_printf("|% +5.4hhx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0209");
    ft_printf("|% +5.4hx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0210");
    ft_printf("|% +5.4lx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0211");
    ft_printf("|% +5.4llx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0212");
    ft_printf("|% +5.4jx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0213");
    ft_printf("|% +5.4zx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0214");
    ft_printf("|% +5.4Lx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0215");
    ft_printf("|% +5.4tx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0216");
    ft_printf("|%0+5.4d|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0217");
    ft_printf("|%0+5.4hhd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0218");
    ft_printf("|%0+5.4hd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0219");
    ft_printf("|%0+5.4ld|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0220");
    ft_printf("|%0+5.4lld|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0221");
    ft_printf("|%0+5.4jd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0222");
    ft_printf("|%0+5.4zd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0223");
    ft_printf("|%0+5.4Ld|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0224");
    ft_printf("|%0+5.4td|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0225");
    ft_printf("|%0+5.4o|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0226");
    ft_printf("|%0+5.4hho|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0227");
    ft_printf("|%0+5.4ho|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0228");
    ft_printf("|%0+5.4lo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0229");
    ft_printf("|%0+5.4llo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0230");
    ft_printf("|%0+5.4jo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0231");
    ft_printf("|%0+5.4zo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0232");
    ft_printf("|%0+5.4Lo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0233");
    ft_printf("|%0+5.4to|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0234");
    ft_printf("|%0+5.4u|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0235");
    ft_printf("|%0+5.4hhu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0236");
    ft_printf("|%0+5.4hu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0237");
    ft_printf("|%0+5.4lu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0238");
    ft_printf("|%0+5.4llu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0239");
    ft_printf("|%0+5.4ju|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0240");
    ft_printf("|%0+5.4zu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0241");
    ft_printf("|%0+5.4Lu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0242");
    ft_printf("|%0+5.4tu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0243");
    ft_printf("|%0+5.4x|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0244");
    ft_printf("|%0+5.4hhx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0245");
    ft_printf("|%0+5.4hx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0246");
    ft_printf("|%0+5.4lx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0247");
    ft_printf("|%0+5.4llx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0248");
    ft_printf("|%0+5.4jx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0249");
    ft_printf("|%0+5.4zx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0250");
    ft_printf("|%0+5.4Lx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0251");
    ft_printf("|%0+5.4tx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0252");
    ft_printf("|% 0+5.4d|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0253");
    ft_printf("|% 0+5.4hhd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0254");
    ft_printf("|% 0+5.4hd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0255");
    ft_printf("|% 0+5.4ld|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0256");
    ft_printf("|% 0+5.4lld|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0257");
    ft_printf("|% 0+5.4jd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0258");
    ft_printf("|% 0+5.4zd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0259");
    ft_printf("|% 0+5.4Ld|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0260");
    ft_printf("|% 0+5.4td|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0261");
    ft_printf("|% 0+5.4o|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0262");
    ft_printf("|% 0+5.4hho|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0263");
    ft_printf("|% 0+5.4ho|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0264");
    ft_printf("|% 0+5.4lo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0265");
    ft_printf("|% 0+5.4llo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0266");
    ft_printf("|% 0+5.4jo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0267");
    ft_printf("|% 0+5.4zo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0268");
    ft_printf("|% 0+5.4Lo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0269");
    ft_printf("|% 0+5.4to|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0270");
    ft_printf("|% 0+5.4u|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0271");
    ft_printf("|% 0+5.4hhu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0272");
    ft_printf("|% 0+5.4hu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0273");
    ft_printf("|% 0+5.4lu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0274");
    ft_printf("|% 0+5.4llu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0275");
    ft_printf("|% 0+5.4ju|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0276");
    ft_printf("|% 0+5.4zu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0277");
    ft_printf("|% 0+5.4Lu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0278");
    ft_printf("|% 0+5.4tu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0279");
    ft_printf("|% 0+5.4x|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0280");
    ft_printf("|% 0+5.4hhx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0281");
    ft_printf("|% 0+5.4hx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0282");
    ft_printf("|% 0+5.4lx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0283");
    ft_printf("|% 0+5.4llx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0284");
    ft_printf("|% 0+5.4jx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0285");
    ft_printf("|% 0+5.4zx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0286");
    ft_printf("|% 0+5.4Lx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0287");
    ft_printf("|% 0+5.4tx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0288");
    ft_printf("|%-5.4d|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0289");
    ft_printf("|%-5.4hhd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0290");
    ft_printf("|%-5.4hd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0291");
    ft_printf("|%-5.4ld|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0292");
    ft_printf("|%-5.4lld|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0293");
    ft_printf("|%-5.4jd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0294");
    ft_printf("|%-5.4zd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0295");
    ft_printf("|%-5.4Ld|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0296");
    ft_printf("|%-5.4td|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0297");
    ft_printf("|%-5.4o|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0298");
    ft_printf("|%-5.4hho|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0299");
    ft_printf("|%-5.4ho|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0300");
    ft_printf("|%-5.4lo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0301");
    ft_printf("|%-5.4llo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0302");
    ft_printf("|%-5.4jo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0303");
    ft_printf("|%-5.4zo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0304");
    ft_printf("|%-5.4Lo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0305");
    ft_printf("|%-5.4to|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0306");
    ft_printf("|%-5.4u|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0307");
    ft_printf("|%-5.4hhu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0308");
    ft_printf("|%-5.4hu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0309");
    ft_printf("|%-5.4lu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0310");
    ft_printf("|%-5.4llu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0311");
    ft_printf("|%-5.4ju|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0312");
    ft_printf("|%-5.4zu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0313");
    ft_printf("|%-5.4Lu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0314");
    ft_printf("|%-5.4tu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0315");
    ft_printf("|%-5.4x|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0316");
    ft_printf("|%-5.4hhx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0317");
    ft_printf("|%-5.4hx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0318");
    ft_printf("|%-5.4lx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0319");
    ft_printf("|%-5.4llx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0320");
    ft_printf("|%-5.4jx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0321");
    ft_printf("|%-5.4zx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0322");
    ft_printf("|%-5.4Lx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0323");
    ft_printf("|%-5.4tx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0324");
    ft_printf("|% -5.4d|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0325");
    ft_printf("|% -5.4hhd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0326");
    ft_printf("|% -5.4hd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0327");
    ft_printf("|% -5.4ld|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0328");
    ft_printf("|% -5.4lld|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0329");
    ft_printf("|% -5.4jd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0330");
    ft_printf("|% -5.4zd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0331");
    ft_printf("|% -5.4Ld|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0332");
    ft_printf("|% -5.4td|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0333");
    ft_printf("|% -5.4o|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0334");
    ft_printf("|% -5.4hho|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0335");
    ft_printf("|% -5.4ho|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0336");
    ft_printf("|% -5.4lo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0337");
    ft_printf("|% -5.4llo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0338");
    ft_printf("|% -5.4jo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0339");
    ft_printf("|% -5.4zo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0340");
    ft_printf("|% -5.4Lo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0341");
    ft_printf("|% -5.4to|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0342");
    ft_printf("|% -5.4u|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0343");
    ft_printf("|% -5.4hhu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0344");
    ft_printf("|% -5.4hu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0345");
    ft_printf("|% -5.4lu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0346");
    ft_printf("|% -5.4llu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0347");
    ft_printf("|% -5.4ju|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0348");
    ft_printf("|% -5.4zu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0349");
    ft_printf("|% -5.4Lu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0350");
    ft_printf("|% -5.4tu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0351");
    ft_printf("|% -5.4x|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0352");
    ft_printf("|% -5.4hhx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0353");
    ft_printf("|% -5.4hx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0354");
    ft_printf("|% -5.4lx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0355");
    ft_printf("|% -5.4llx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0356");
    ft_printf("|% -5.4jx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0357");
    ft_printf("|% -5.4zx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0358");
    ft_printf("|% -5.4Lx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0359");
    ft_printf("|% -5.4tx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0360");
    ft_printf("|%0-5.4d|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0361");
    ft_printf("|%0-5.4hhd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0362");
    ft_printf("|%0-5.4hd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0363");
    ft_printf("|%0-5.4ld|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0364");
    ft_printf("|%0-5.4lld|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0365");
    ft_printf("|%0-5.4jd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0366");
    ft_printf("|%0-5.4zd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0367");
    ft_printf("|%0-5.4Ld|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0368");
    ft_printf("|%0-5.4td|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0369");
    ft_printf("|%0-5.4o|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0370");
    ft_printf("|%0-5.4hho|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0371");
    ft_printf("|%0-5.4ho|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0372");
    ft_printf("|%0-5.4lo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0373");
    ft_printf("|%0-5.4llo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0374");
    ft_printf("|%0-5.4jo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0375");
    ft_printf("|%0-5.4zo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0376");
    ft_printf("|%0-5.4Lo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0377");
    ft_printf("|%0-5.4to|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0378");
    ft_printf("|%0-5.4u|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0379");
    ft_printf("|%0-5.4hhu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0380");
    ft_printf("|%0-5.4hu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0381");
    ft_printf("|%0-5.4lu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0382");
    ft_printf("|%0-5.4llu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0383");
    ft_printf("|%0-5.4ju|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0384");
    ft_printf("|%0-5.4zu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0385");
    ft_printf("|%0-5.4Lu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0386");
    ft_printf("|%0-5.4tu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0387");
    ft_printf("|%0-5.4x|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0388");
    ft_printf("|%0-5.4hhx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0389");
    ft_printf("|%0-5.4hx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0390");
    ft_printf("|%0-5.4lx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0391");
    ft_printf("|%0-5.4llx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0392");
    ft_printf("|%0-5.4jx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0393");
    ft_printf("|%0-5.4zx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0394");
    ft_printf("|%0-5.4Lx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0395");
    ft_printf("|%0-5.4tx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0396");
    ft_printf("|% 0-5.4d|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0397");
    ft_printf("|% 0-5.4hhd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0398");
    ft_printf("|% 0-5.4hd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0399");
    ft_printf("|% 0-5.4ld|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0400");
    ft_printf("|% 0-5.4lld|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0401");
    ft_printf("|% 0-5.4jd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0402");
    ft_printf("|% 0-5.4zd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0403");
    ft_printf("|% 0-5.4Ld|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0404");
    ft_printf("|% 0-5.4td|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0405");
    ft_printf("|% 0-5.4o|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0406");
    ft_printf("|% 0-5.4hho|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0407");
    ft_printf("|% 0-5.4ho|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0408");
    ft_printf("|% 0-5.4lo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0409");
    ft_printf("|% 0-5.4llo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0410");
    ft_printf("|% 0-5.4jo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0411");
    ft_printf("|% 0-5.4zo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0412");
    ft_printf("|% 0-5.4Lo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0413");
    ft_printf("|% 0-5.4to|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0414");
    ft_printf("|% 0-5.4u|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0415");
    ft_printf("|% 0-5.4hhu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0416");
    ft_printf("|% 0-5.4hu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0417");
    ft_printf("|% 0-5.4lu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0418");
    ft_printf("|% 0-5.4llu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0419");
    ft_printf("|% 0-5.4ju|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0420");
    ft_printf("|% 0-5.4zu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0421");
    ft_printf("|% 0-5.4Lu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0422");
    ft_printf("|% 0-5.4tu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0423");
    ft_printf("|% 0-5.4x|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0424");
    ft_printf("|% 0-5.4hhx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0425");
    ft_printf("|% 0-5.4hx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0426");
    ft_printf("|% 0-5.4lx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0427");
    ft_printf("|% 0-5.4llx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0428");
    ft_printf("|% 0-5.4jx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0429");
    ft_printf("|% 0-5.4zx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0430");
    ft_printf("|% 0-5.4Lx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0431");
    ft_printf("|% 0-5.4tx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0432");
    ft_printf("|%+-5.4d|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0433");
    ft_printf("|%+-5.4hhd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0434");
    ft_printf("|%+-5.4hd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0435");
    ft_printf("|%+-5.4ld|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0436");
    ft_printf("|%+-5.4lld|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0437");
    ft_printf("|%+-5.4jd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0438");
    ft_printf("|%+-5.4zd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0439");
    ft_printf("|%+-5.4Ld|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0440");
    ft_printf("|%+-5.4td|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0441");
    ft_printf("|%+-5.4o|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0442");
    ft_printf("|%+-5.4hho|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0443");
    ft_printf("|%+-5.4ho|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0444");
    ft_printf("|%+-5.4lo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0445");
    ft_printf("|%+-5.4llo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0446");
    ft_printf("|%+-5.4jo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0447");
    ft_printf("|%+-5.4zo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0448");
    ft_printf("|%+-5.4Lo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0449");
    ft_printf("|%+-5.4to|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0450");
    ft_printf("|%+-5.4u|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0451");
    ft_printf("|%+-5.4hhu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0452");
    ft_printf("|%+-5.4hu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0453");
    ft_printf("|%+-5.4lu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0454");
    ft_printf("|%+-5.4llu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0455");
    ft_printf("|%+-5.4ju|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0456");
    ft_printf("|%+-5.4zu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0457");
    ft_printf("|%+-5.4Lu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0458");
    ft_printf("|%+-5.4tu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0459");
    ft_printf("|%+-5.4x|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0460");
    ft_printf("|%+-5.4hhx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0461");
    ft_printf("|%+-5.4hx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0462");
    ft_printf("|%+-5.4lx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0463");
    ft_printf("|%+-5.4llx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0464");
    ft_printf("|%+-5.4jx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0465");
    ft_printf("|%+-5.4zx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0466");
    ft_printf("|%+-5.4Lx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0467");
    ft_printf("|%+-5.4tx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0468");
    ft_printf("|% +-5.4d|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0469");
    ft_printf("|% +-5.4hhd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0470");
    ft_printf("|% +-5.4hd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0471");
    ft_printf("|% +-5.4ld|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0472");
    ft_printf("|% +-5.4lld|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0473");
    ft_printf("|% +-5.4jd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0474");
    ft_printf("|% +-5.4zd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0475");
    ft_printf("|% +-5.4Ld|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0476");
    ft_printf("|% +-5.4td|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0477");
    ft_printf("|% +-5.4o|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0478");
    ft_printf("|% +-5.4hho|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0479");
    ft_printf("|% +-5.4ho|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0480");
    ft_printf("|% +-5.4lo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0481");
    ft_printf("|% +-5.4llo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0482");
    ft_printf("|% +-5.4jo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0483");
    ft_printf("|% +-5.4zo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0484");
    ft_printf("|% +-5.4Lo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0485");
    ft_printf("|% +-5.4to|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0486");
    ft_printf("|% +-5.4u|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0487");
    ft_printf("|% +-5.4hhu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0488");
    ft_printf("|% +-5.4hu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0489");
    ft_printf("|% +-5.4lu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0490");
    ft_printf("|% +-5.4llu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0491");
    ft_printf("|% +-5.4ju|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0492");
    ft_printf("|% +-5.4zu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0493");
    ft_printf("|% +-5.4Lu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0494");
    ft_printf("|% +-5.4tu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0495");
    ft_printf("|% +-5.4x|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0496");
    ft_printf("|% +-5.4hhx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0497");
    ft_printf("|% +-5.4hx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0498");
    ft_printf("|% +-5.4lx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0499");
    ft_printf("|% +-5.4llx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0500");
    ft_printf("|% +-5.4jx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0501");
    ft_printf("|% +-5.4zx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0502");
    ft_printf("|% +-5.4Lx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0503");
    ft_printf("|% +-5.4tx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0504");
    ft_printf("|%0+-5.4d|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0505");
    ft_printf("|%0+-5.4hhd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0506");
    ft_printf("|%0+-5.4hd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0507");
    ft_printf("|%0+-5.4ld|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0508");
    ft_printf("|%0+-5.4lld|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0509");
    ft_printf("|%0+-5.4jd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0510");
    ft_printf("|%0+-5.4zd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0511");
    ft_printf("|%0+-5.4Ld|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0512");
    ft_printf("|%0+-5.4td|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0513");
    ft_printf("|%0+-5.4o|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0514");
    ft_printf("|%0+-5.4hho|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0515");
    ft_printf("|%0+-5.4ho|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0516");
    ft_printf("|%0+-5.4lo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0517");
    ft_printf("|%0+-5.4llo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0518");
    ft_printf("|%0+-5.4jo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0519");
    ft_printf("|%0+-5.4zo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0520");
    ft_printf("|%0+-5.4Lo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0521");
    ft_printf("|%0+-5.4to|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0522");
    ft_printf("|%0+-5.4u|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0523");
    ft_printf("|%0+-5.4hhu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0524");
    ft_printf("|%0+-5.4hu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0525");
    ft_printf("|%0+-5.4lu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0526");
    ft_printf("|%0+-5.4llu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0527");
    ft_printf("|%0+-5.4ju|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0528");
    ft_printf("|%0+-5.4zu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0529");
    ft_printf("|%0+-5.4Lu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0530");
    ft_printf("|%0+-5.4tu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0531");
    ft_printf("|%0+-5.4x|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0532");
    ft_printf("|%0+-5.4hhx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0533");
    ft_printf("|%0+-5.4hx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0534");
    ft_printf("|%0+-5.4lx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0535");
    ft_printf("|%0+-5.4llx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0536");
    ft_printf("|%0+-5.4jx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0537");
    ft_printf("|%0+-5.4zx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0538");
    ft_printf("|%0+-5.4Lx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0539");
    ft_printf("|%0+-5.4tx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0540");
    ft_printf("|% 0+-5.4d|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0541");
    ft_printf("|% 0+-5.4hhd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0542");
    ft_printf("|% 0+-5.4hd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0543");
    ft_printf("|% 0+-5.4ld|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0544");
    ft_printf("|% 0+-5.4lld|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0545");
    ft_printf("|% 0+-5.4jd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0546");
    ft_printf("|% 0+-5.4zd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0547");
    ft_printf("|% 0+-5.4Ld|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0548");
    ft_printf("|% 0+-5.4td|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0549");
    ft_printf("|% 0+-5.4o|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0550");
    ft_printf("|% 0+-5.4hho|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0551");
    ft_printf("|% 0+-5.4ho|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0552");
    ft_printf("|% 0+-5.4lo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0553");
    ft_printf("|% 0+-5.4llo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0554");
    ft_printf("|% 0+-5.4jo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0555");
    ft_printf("|% 0+-5.4zo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0556");
    ft_printf("|% 0+-5.4Lo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0557");
    ft_printf("|% 0+-5.4to|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0558");
    ft_printf("|% 0+-5.4u|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0559");
    ft_printf("|% 0+-5.4hhu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0560");
    ft_printf("|% 0+-5.4hu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0561");
    ft_printf("|% 0+-5.4lu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0562");
    ft_printf("|% 0+-5.4llu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0563");
    ft_printf("|% 0+-5.4ju|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0564");
    ft_printf("|% 0+-5.4zu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0565");
    ft_printf("|% 0+-5.4Lu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0566");
    ft_printf("|% 0+-5.4tu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0567");
    ft_printf("|% 0+-5.4x|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0568");
    ft_printf("|% 0+-5.4hhx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0569");
    ft_printf("|% 0+-5.4hx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0570");
    ft_printf("|% 0+-5.4lx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0571");
    ft_printf("|% 0+-5.4llx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0572");
    ft_printf("|% 0+-5.4jx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0573");
    ft_printf("|% 0+-5.4zx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0574");
    ft_printf("|% 0+-5.4Lx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0575");
    ft_printf("|% 0+-5.4tx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0576");
    ft_printf("|%#5.4d|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0577");
    ft_printf("|%#5.4hhd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0578");
    ft_printf("|%#5.4hd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0579");
    ft_printf("|%#5.4ld|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0580");
    ft_printf("|%#5.4lld|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0581");
    ft_printf("|%#5.4jd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0582");
    ft_printf("|%#5.4zd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0583");
    ft_printf("|%#5.4Ld|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0584");
    ft_printf("|%#5.4td|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0585");
    ft_printf("|%#5.4o|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0586");
    ft_printf("|%#5.4hho|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0587");
    ft_printf("|%#5.4ho|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0588");
    ft_printf("|%#5.4lo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0589");
    ft_printf("|%#5.4llo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0590");
    ft_printf("|%#5.4jo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0591");
    ft_printf("|%#5.4zo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0592");
    ft_printf("|%#5.4Lo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0593");
    ft_printf("|%#5.4to|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0594");
    ft_printf("|%#5.4u|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0595");
    ft_printf("|%#5.4hhu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0596");
    ft_printf("|%#5.4hu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0597");
    ft_printf("|%#5.4lu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0598");
    ft_printf("|%#5.4llu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0599");
    ft_printf("|%#5.4ju|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0600");
    ft_printf("|%#5.4zu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0601");
    ft_printf("|%#5.4Lu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0602");
    ft_printf("|%#5.4tu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0603");
    ft_printf("|%#5.4x|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0604");
    ft_printf("|%#5.4hhx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0605");
    ft_printf("|%#5.4hx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0606");
    ft_printf("|%#5.4lx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0607");
    ft_printf("|%#5.4llx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0608");
    ft_printf("|%#5.4jx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0609");
    ft_printf("|%#5.4zx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0610");
    ft_printf("|%#5.4Lx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0611");
    ft_printf("|%#5.4tx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0612");
    ft_printf("|% #5.4d|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0613");
    ft_printf("|% #5.4hhd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0614");
    ft_printf("|% #5.4hd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0615");
    ft_printf("|% #5.4ld|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0616");
    ft_printf("|% #5.4lld|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0617");
    ft_printf("|% #5.4jd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0618");
    ft_printf("|% #5.4zd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0619");
    ft_printf("|% #5.4Ld|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0620");
    ft_printf("|% #5.4td|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0621");
    ft_printf("|% #5.4o|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0622");
    ft_printf("|% #5.4hho|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0623");
    ft_printf("|% #5.4ho|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0624");
    ft_printf("|% #5.4lo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0625");
    ft_printf("|% #5.4llo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0626");
    ft_printf("|% #5.4jo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0627");
    ft_printf("|% #5.4zo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0628");
    ft_printf("|% #5.4Lo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0629");
    ft_printf("|% #5.4to|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0630");
    ft_printf("|% #5.4u|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0631");
    ft_printf("|% #5.4hhu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0632");
    ft_printf("|% #5.4hu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0633");
    ft_printf("|% #5.4lu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0634");
    ft_printf("|% #5.4llu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0635");
    ft_printf("|% #5.4ju|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0636");
    ft_printf("|% #5.4zu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0637");
    ft_printf("|% #5.4Lu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0638");
    ft_printf("|% #5.4tu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0639");
    ft_printf("|% #5.4x|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0640");
    ft_printf("|% #5.4hhx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0641");
    ft_printf("|% #5.4hx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0642");
    ft_printf("|% #5.4lx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0643");
    ft_printf("|% #5.4llx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0644");
    ft_printf("|% #5.4jx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0645");
    ft_printf("|% #5.4zx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0646");
    ft_printf("|% #5.4Lx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0647");
    ft_printf("|% #5.4tx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0648");
    ft_printf("|%0#5.4d|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0649");
    ft_printf("|%0#5.4hhd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0650");
    ft_printf("|%0#5.4hd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0651");
    ft_printf("|%0#5.4ld|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0652");
    ft_printf("|%0#5.4lld|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0653");
    ft_printf("|%0#5.4jd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0654");
    ft_printf("|%0#5.4zd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0655");
    ft_printf("|%0#5.4Ld|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0656");
    ft_printf("|%0#5.4td|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0657");
    ft_printf("|%0#5.4o|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0658");
    ft_printf("|%0#5.4hho|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0659");
    ft_printf("|%0#5.4ho|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0660");
    ft_printf("|%0#5.4lo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0661");
    ft_printf("|%0#5.4llo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0662");
    ft_printf("|%0#5.4jo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0663");
    ft_printf("|%0#5.4zo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0664");
    ft_printf("|%0#5.4Lo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0665");
    ft_printf("|%0#5.4to|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0666");
    ft_printf("|%0#5.4u|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0667");
    ft_printf("|%0#5.4hhu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0668");
    ft_printf("|%0#5.4hu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0669");
    ft_printf("|%0#5.4lu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0670");
    ft_printf("|%0#5.4llu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0671");
    ft_printf("|%0#5.4ju|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0672");
    ft_printf("|%0#5.4zu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0673");
    ft_printf("|%0#5.4Lu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0674");
    ft_printf("|%0#5.4tu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0675");
    ft_printf("|%0#5.4x|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0676");
    ft_printf("|%0#5.4hhx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0677");
    ft_printf("|%0#5.4hx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0678");
    ft_printf("|%0#5.4lx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0679");
    ft_printf("|%0#5.4llx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0680");
    ft_printf("|%0#5.4jx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0681");
    ft_printf("|%0#5.4zx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0682");
    ft_printf("|%0#5.4Lx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0683");
    ft_printf("|%0#5.4tx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0684");
    ft_printf("|% 0#5.4d|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0685");
    ft_printf("|% 0#5.4hhd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0686");
    ft_printf("|% 0#5.4hd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0687");
    ft_printf("|% 0#5.4ld|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0688");
    ft_printf("|% 0#5.4lld|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0689");
    ft_printf("|% 0#5.4jd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0690");
    ft_printf("|% 0#5.4zd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0691");
    ft_printf("|% 0#5.4Ld|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0692");
    ft_printf("|% 0#5.4td|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0693");
    ft_printf("|% 0#5.4o|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0694");
    ft_printf("|% 0#5.4hho|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0695");
    ft_printf("|% 0#5.4ho|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0696");
    ft_printf("|% 0#5.4lo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0697");
    ft_printf("|% 0#5.4llo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0698");
    ft_printf("|% 0#5.4jo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0699");
    ft_printf("|% 0#5.4zo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0700");
    ft_printf("|% 0#5.4Lo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0701");
    ft_printf("|% 0#5.4to|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0702");
    ft_printf("|% 0#5.4u|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0703");
    ft_printf("|% 0#5.4hhu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0704");
    ft_printf("|% 0#5.4hu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0705");
    ft_printf("|% 0#5.4lu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0706");
    ft_printf("|% 0#5.4llu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0707");
    ft_printf("|% 0#5.4ju|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0708");
    ft_printf("|% 0#5.4zu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0709");
    ft_printf("|% 0#5.4Lu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0710");
    ft_printf("|% 0#5.4tu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0711");
    ft_printf("|% 0#5.4x|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0712");
    ft_printf("|% 0#5.4hhx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0713");
    ft_printf("|% 0#5.4hx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0714");
    ft_printf("|% 0#5.4lx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0715");
    ft_printf("|% 0#5.4llx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0716");
    ft_printf("|% 0#5.4jx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0717");
    ft_printf("|% 0#5.4zx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0718");
    ft_printf("|% 0#5.4Lx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0719");
    ft_printf("|% 0#5.4tx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0720");
    ft_printf("|%+#5.4d|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0721");
    ft_printf("|%+#5.4hhd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0722");
    ft_printf("|%+#5.4hd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0723");
    ft_printf("|%+#5.4ld|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0724");
    ft_printf("|%+#5.4lld|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0725");
    ft_printf("|%+#5.4jd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0726");
    ft_printf("|%+#5.4zd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0727");
    ft_printf("|%+#5.4Ld|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0728");
    ft_printf("|%+#5.4td|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0729");
    ft_printf("|%+#5.4o|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0730");
    ft_printf("|%+#5.4hho|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0731");
    ft_printf("|%+#5.4ho|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0732");
    ft_printf("|%+#5.4lo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0733");
    ft_printf("|%+#5.4llo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0734");
    ft_printf("|%+#5.4jo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0735");
    ft_printf("|%+#5.4zo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0736");
    ft_printf("|%+#5.4Lo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0737");
    ft_printf("|%+#5.4to|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0738");
    ft_printf("|%+#5.4u|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0739");
    ft_printf("|%+#5.4hhu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0740");
    ft_printf("|%+#5.4hu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0741");
    ft_printf("|%+#5.4lu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0742");
    ft_printf("|%+#5.4llu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0743");
    ft_printf("|%+#5.4ju|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0744");
    ft_printf("|%+#5.4zu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0745");
    ft_printf("|%+#5.4Lu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0746");
    ft_printf("|%+#5.4tu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0747");
    ft_printf("|%+#5.4x|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0748");
    ft_printf("|%+#5.4hhx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0749");
    ft_printf("|%+#5.4hx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0750");
    ft_printf("|%+#5.4lx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0751");
    ft_printf("|%+#5.4llx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0752");
    ft_printf("|%+#5.4jx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0753");
    ft_printf("|%+#5.4zx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0754");
    ft_printf("|%+#5.4Lx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0755");
    ft_printf("|%+#5.4tx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0756");
    ft_printf("|% +#5.4d|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0757");
    ft_printf("|% +#5.4hhd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0758");
    ft_printf("|% +#5.4hd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0759");
    ft_printf("|% +#5.4ld|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0760");
    ft_printf("|% +#5.4lld|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0761");
    ft_printf("|% +#5.4jd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0762");
    ft_printf("|% +#5.4zd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0763");
    ft_printf("|% +#5.4Ld|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0764");
    ft_printf("|% +#5.4td|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0765");
    ft_printf("|% +#5.4o|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0766");
    ft_printf("|% +#5.4hho|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0767");
    ft_printf("|% +#5.4ho|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0768");
    ft_printf("|% +#5.4lo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0769");
    ft_printf("|% +#5.4llo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0770");
    ft_printf("|% +#5.4jo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0771");
    ft_printf("|% +#5.4zo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0772");
    ft_printf("|% +#5.4Lo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0773");
    ft_printf("|% +#5.4to|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0774");
    ft_printf("|% +#5.4u|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0775");
    ft_printf("|% +#5.4hhu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0776");
    ft_printf("|% +#5.4hu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0777");
    ft_printf("|% +#5.4lu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0778");
    ft_printf("|% +#5.4llu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0779");
    ft_printf("|% +#5.4ju|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0780");
    ft_printf("|% +#5.4zu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0781");
    ft_printf("|% +#5.4Lu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0782");
    ft_printf("|% +#5.4tu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0783");
    ft_printf("|% +#5.4x|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0784");
    ft_printf("|% +#5.4hhx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0785");
    ft_printf("|% +#5.4hx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0786");
    ft_printf("|% +#5.4lx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0787");
    ft_printf("|% +#5.4llx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0788");
    ft_printf("|% +#5.4jx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0789");
    ft_printf("|% +#5.4zx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0790");
    ft_printf("|% +#5.4Lx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0791");
    ft_printf("|% +#5.4tx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0792");
    ft_printf("|%0+#5.4d|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0793");
    ft_printf("|%0+#5.4hhd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0794");
    ft_printf("|%0+#5.4hd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0795");
    ft_printf("|%0+#5.4ld|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0796");
    ft_printf("|%0+#5.4lld|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0797");
    ft_printf("|%0+#5.4jd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0798");
    ft_printf("|%0+#5.4zd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0799");
    ft_printf("|%0+#5.4Ld|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0800");
    ft_printf("|%0+#5.4td|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0801");
    ft_printf("|%0+#5.4o|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0802");
    ft_printf("|%0+#5.4hho|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0803");
    ft_printf("|%0+#5.4ho|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0804");
    ft_printf("|%0+#5.4lo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0805");
    ft_printf("|%0+#5.4llo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0806");
    ft_printf("|%0+#5.4jo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0807");
    ft_printf("|%0+#5.4zo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0808");
    ft_printf("|%0+#5.4Lo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0809");
    ft_printf("|%0+#5.4to|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0810");
    ft_printf("|%0+#5.4u|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0811");
    ft_printf("|%0+#5.4hhu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0812");
    ft_printf("|%0+#5.4hu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0813");
    ft_printf("|%0+#5.4lu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0814");
    ft_printf("|%0+#5.4llu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0815");
    ft_printf("|%0+#5.4ju|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0816");
    ft_printf("|%0+#5.4zu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0817");
    ft_printf("|%0+#5.4Lu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0818");
    ft_printf("|%0+#5.4tu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0819");
    ft_printf("|%0+#5.4x|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0820");
    ft_printf("|%0+#5.4hhx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0821");
    ft_printf("|%0+#5.4hx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0822");
    ft_printf("|%0+#5.4lx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0823");
    ft_printf("|%0+#5.4llx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0824");
    ft_printf("|%0+#5.4jx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0825");
    ft_printf("|%0+#5.4zx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0826");
    ft_printf("|%0+#5.4Lx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0827");
    ft_printf("|%0+#5.4tx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0828");
    ft_printf("|% 0+#5.4d|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0829");
    ft_printf("|% 0+#5.4hhd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0830");
    ft_printf("|% 0+#5.4hd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0831");
    ft_printf("|% 0+#5.4ld|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0832");
    ft_printf("|% 0+#5.4lld|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0833");
    ft_printf("|% 0+#5.4jd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0834");
    ft_printf("|% 0+#5.4zd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0835");
    ft_printf("|% 0+#5.4Ld|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0836");
    ft_printf("|% 0+#5.4td|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0837");
    ft_printf("|% 0+#5.4o|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0838");
    ft_printf("|% 0+#5.4hho|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0839");
    ft_printf("|% 0+#5.4ho|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0840");
    ft_printf("|% 0+#5.4lo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0841");
    ft_printf("|% 0+#5.4llo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0842");
    ft_printf("|% 0+#5.4jo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0843");
    ft_printf("|% 0+#5.4zo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0844");
    ft_printf("|% 0+#5.4Lo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0845");
    ft_printf("|% 0+#5.4to|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0846");
    ft_printf("|% 0+#5.4u|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0847");
    ft_printf("|% 0+#5.4hhu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0848");
    ft_printf("|% 0+#5.4hu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0849");
    ft_printf("|% 0+#5.4lu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0850");
    ft_printf("|% 0+#5.4llu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0851");
    ft_printf("|% 0+#5.4ju|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0852");
    ft_printf("|% 0+#5.4zu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0853");
    ft_printf("|% 0+#5.4Lu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0854");
    ft_printf("|% 0+#5.4tu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0855");
    ft_printf("|% 0+#5.4x|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0856");
    ft_printf("|% 0+#5.4hhx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0857");
    ft_printf("|% 0+#5.4hx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0858");
    ft_printf("|% 0+#5.4lx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0859");
    ft_printf("|% 0+#5.4llx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0860");
    ft_printf("|% 0+#5.4jx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0861");
    ft_printf("|% 0+#5.4zx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0862");
    ft_printf("|% 0+#5.4Lx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0863");
    ft_printf("|% 0+#5.4tx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0864");
    ft_printf("|%-#5.4d|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0865");
    ft_printf("|%-#5.4hhd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0866");
    ft_printf("|%-#5.4hd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0867");
    ft_printf("|%-#5.4ld|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0868");
    ft_printf("|%-#5.4lld|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0869");
    ft_printf("|%-#5.4jd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0870");
    ft_printf("|%-#5.4zd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0871");
    ft_printf("|%-#5.4Ld|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0872");
    ft_printf("|%-#5.4td|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0873");
    ft_printf("|%-#5.4o|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0874");
    ft_printf("|%-#5.4hho|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0875");
    ft_printf("|%-#5.4ho|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0876");
    ft_printf("|%-#5.4lo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0877");
    ft_printf("|%-#5.4llo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0878");
    ft_printf("|%-#5.4jo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0879");
    ft_printf("|%-#5.4zo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0880");
    ft_printf("|%-#5.4Lo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0881");
    ft_printf("|%-#5.4to|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0882");
    ft_printf("|%-#5.4u|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0883");
    ft_printf("|%-#5.4hhu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0884");
    ft_printf("|%-#5.4hu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0885");
    ft_printf("|%-#5.4lu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0886");
    ft_printf("|%-#5.4llu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0887");
    ft_printf("|%-#5.4ju|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0888");
    ft_printf("|%-#5.4zu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0889");
    ft_printf("|%-#5.4Lu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0890");
    ft_printf("|%-#5.4tu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0891");
    ft_printf("|%-#5.4x|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0892");
    ft_printf("|%-#5.4hhx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0893");
    ft_printf("|%-#5.4hx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0894");
    ft_printf("|%-#5.4lx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0895");
    ft_printf("|%-#5.4llx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0896");
    ft_printf("|%-#5.4jx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0897");
    ft_printf("|%-#5.4zx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0898");
    ft_printf("|%-#5.4Lx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0899");
    ft_printf("|%-#5.4tx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0900");
    ft_printf("|% -#5.4d|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0901");
    ft_printf("|% -#5.4hhd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0902");
    ft_printf("|% -#5.4hd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0903");
    ft_printf("|% -#5.4ld|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0904");
    ft_printf("|% -#5.4lld|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0905");
    ft_printf("|% -#5.4jd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0906");
    ft_printf("|% -#5.4zd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0907");
    ft_printf("|% -#5.4Ld|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0908");
    ft_printf("|% -#5.4td|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0909");
    ft_printf("|% -#5.4o|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0910");
    ft_printf("|% -#5.4hho|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0911");
    ft_printf("|% -#5.4ho|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0912");
    ft_printf("|% -#5.4lo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0913");
    ft_printf("|% -#5.4llo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0914");
    ft_printf("|% -#5.4jo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0915");
    ft_printf("|% -#5.4zo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0916");
    ft_printf("|% -#5.4Lo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0917");
    ft_printf("|% -#5.4to|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0918");
    ft_printf("|% -#5.4u|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0919");
    ft_printf("|% -#5.4hhu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0920");
    ft_printf("|% -#5.4hu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0921");
    ft_printf("|% -#5.4lu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0922");
    ft_printf("|% -#5.4llu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0923");
    ft_printf("|% -#5.4ju|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0924");
    ft_printf("|% -#5.4zu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0925");
    ft_printf("|% -#5.4Lu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0926");
    ft_printf("|% -#5.4tu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0927");
    ft_printf("|% -#5.4x|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0928");
    ft_printf("|% -#5.4hhx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0929");
    ft_printf("|% -#5.4hx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0930");
    ft_printf("|% -#5.4lx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0931");
    ft_printf("|% -#5.4llx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0932");
    ft_printf("|% -#5.4jx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0933");
    ft_printf("|% -#5.4zx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0934");
    ft_printf("|% -#5.4Lx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0935");
    ft_printf("|% -#5.4tx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0936");
    ft_printf("|%0-#5.4d|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0937");
    ft_printf("|%0-#5.4hhd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0938");
    ft_printf("|%0-#5.4hd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0939");
    ft_printf("|%0-#5.4ld|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0940");
    ft_printf("|%0-#5.4lld|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0941");
    ft_printf("|%0-#5.4jd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0942");
    ft_printf("|%0-#5.4zd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0943");
    ft_printf("|%0-#5.4Ld|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0944");
    ft_printf("|%0-#5.4td|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0945");
    ft_printf("|%0-#5.4o|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0946");
    ft_printf("|%0-#5.4hho|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0947");
    ft_printf("|%0-#5.4ho|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0948");
    ft_printf("|%0-#5.4lo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0949");
    ft_printf("|%0-#5.4llo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0950");
    ft_printf("|%0-#5.4jo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0951");
    ft_printf("|%0-#5.4zo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0952");
    ft_printf("|%0-#5.4Lo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0953");
    ft_printf("|%0-#5.4to|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0954");
    ft_printf("|%0-#5.4u|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0955");
    ft_printf("|%0-#5.4hhu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0956");
    ft_printf("|%0-#5.4hu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0957");
    ft_printf("|%0-#5.4lu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0958");
    ft_printf("|%0-#5.4llu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0959");
    ft_printf("|%0-#5.4ju|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0960");
    ft_printf("|%0-#5.4zu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0961");
    ft_printf("|%0-#5.4Lu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0962");
    ft_printf("|%0-#5.4tu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0963");
    ft_printf("|%0-#5.4x|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0964");
    ft_printf("|%0-#5.4hhx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0965");
    ft_printf("|%0-#5.4hx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0966");
    ft_printf("|%0-#5.4lx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0967");
    ft_printf("|%0-#5.4llx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0968");
    ft_printf("|%0-#5.4jx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0969");
    ft_printf("|%0-#5.4zx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0970");
    ft_printf("|%0-#5.4Lx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0971");
    ft_printf("|%0-#5.4tx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0972");
    ft_printf("|% 0-#5.4d|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0973");
    ft_printf("|% 0-#5.4hhd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0974");
    ft_printf("|% 0-#5.4hd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0975");
    ft_printf("|% 0-#5.4ld|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0976");
    ft_printf("|% 0-#5.4lld|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0977");
    ft_printf("|% 0-#5.4jd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0978");
    ft_printf("|% 0-#5.4zd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0979");
    ft_printf("|% 0-#5.4Ld|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0980");
    ft_printf("|% 0-#5.4td|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0981");
    ft_printf("|% 0-#5.4o|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0982");
    ft_printf("|% 0-#5.4hho|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0983");
    ft_printf("|% 0-#5.4ho|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0984");
    ft_printf("|% 0-#5.4lo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0985");
    ft_printf("|% 0-#5.4llo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0986");
    ft_printf("|% 0-#5.4jo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0987");
    ft_printf("|% 0-#5.4zo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0988");
    ft_printf("|% 0-#5.4Lo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0989");
    ft_printf("|% 0-#5.4to|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0990");
    ft_printf("|% 0-#5.4u|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0991");
    ft_printf("|% 0-#5.4hhu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0992");
    ft_printf("|% 0-#5.4hu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0993");
    ft_printf("|% 0-#5.4lu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0994");
    ft_printf("|% 0-#5.4llu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0995");
    ft_printf("|% 0-#5.4ju|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0996");
    ft_printf("|% 0-#5.4zu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0997");
    ft_printf("|% 0-#5.4Lu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0998");
    ft_printf("|% 0-#5.4tu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#0999");
    ft_printf("|% 0-#5.4x|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1000");
    ft_printf("|% 0-#5.4hhx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1001");
    ft_printf("|% 0-#5.4hx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1002");
    ft_printf("|% 0-#5.4lx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1003");
    ft_printf("|% 0-#5.4llx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1004");
    ft_printf("|% 0-#5.4jx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1005");
    ft_printf("|% 0-#5.4zx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1006");
    ft_printf("|% 0-#5.4Lx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1007");
    ft_printf("|% 0-#5.4tx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1008");
    ft_printf("|%+-#5.4d|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1009");
    ft_printf("|%+-#5.4hhd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1010");
    ft_printf("|%+-#5.4hd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1011");
    ft_printf("|%+-#5.4ld|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1012");
    ft_printf("|%+-#5.4lld|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1013");
    ft_printf("|%+-#5.4jd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1014");
    ft_printf("|%+-#5.4zd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1015");
    ft_printf("|%+-#5.4Ld|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1016");
    ft_printf("|%+-#5.4td|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1017");
    ft_printf("|%+-#5.4o|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1018");
    ft_printf("|%+-#5.4hho|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1019");
    ft_printf("|%+-#5.4ho|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1020");
    ft_printf("|%+-#5.4lo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1021");
    ft_printf("|%+-#5.4llo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1022");
    ft_printf("|%+-#5.4jo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1023");
    ft_printf("|%+-#5.4zo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1024");
    ft_printf("|%+-#5.4Lo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1025");
    ft_printf("|%+-#5.4to|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1026");
    ft_printf("|%+-#5.4u|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1027");
    ft_printf("|%+-#5.4hhu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1028");
    ft_printf("|%+-#5.4hu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1029");
    ft_printf("|%+-#5.4lu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1030");
    ft_printf("|%+-#5.4llu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1031");
    ft_printf("|%+-#5.4ju|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1032");
    ft_printf("|%+-#5.4zu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1033");
    ft_printf("|%+-#5.4Lu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1034");
    ft_printf("|%+-#5.4tu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1035");
    ft_printf("|%+-#5.4x|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1036");
    ft_printf("|%+-#5.4hhx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1037");
    ft_printf("|%+-#5.4hx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1038");
    ft_printf("|%+-#5.4lx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1039");
    ft_printf("|%+-#5.4llx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1040");
    ft_printf("|%+-#5.4jx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1041");
    ft_printf("|%+-#5.4zx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1042");
    ft_printf("|%+-#5.4Lx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1043");
    ft_printf("|%+-#5.4tx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1044");
    ft_printf("|% +-#5.4d|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1045");
    ft_printf("|% +-#5.4hhd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1046");
    ft_printf("|% +-#5.4hd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1047");
    ft_printf("|% +-#5.4ld|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1048");
    ft_printf("|% +-#5.4lld|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1049");
    ft_printf("|% +-#5.4jd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1050");
    ft_printf("|% +-#5.4zd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1051");
    ft_printf("|% +-#5.4Ld|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1052");
    ft_printf("|% +-#5.4td|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1053");
    ft_printf("|% +-#5.4o|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1054");
    ft_printf("|% +-#5.4hho|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1055");
    ft_printf("|% +-#5.4ho|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1056");
    ft_printf("|% +-#5.4lo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1057");
    ft_printf("|% +-#5.4llo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1058");
    ft_printf("|% +-#5.4jo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1059");
    ft_printf("|% +-#5.4zo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1060");
    ft_printf("|% +-#5.4Lo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1061");
    ft_printf("|% +-#5.4to|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1062");
    ft_printf("|% +-#5.4u|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1063");
    ft_printf("|% +-#5.4hhu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1064");
    ft_printf("|% +-#5.4hu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1065");
    ft_printf("|% +-#5.4lu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1066");
    ft_printf("|% +-#5.4llu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1067");
    ft_printf("|% +-#5.4ju|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1068");
    ft_printf("|% +-#5.4zu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1069");
    ft_printf("|% +-#5.4Lu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1070");
    ft_printf("|% +-#5.4tu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1071");
    ft_printf("|% +-#5.4x|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1072");
    ft_printf("|% +-#5.4hhx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1073");
    ft_printf("|% +-#5.4hx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1074");
    ft_printf("|% +-#5.4lx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1075");
    ft_printf("|% +-#5.4llx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1076");
    ft_printf("|% +-#5.4jx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1077");
    ft_printf("|% +-#5.4zx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1078");
    ft_printf("|% +-#5.4Lx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1079");
    ft_printf("|% +-#5.4tx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1080");
    ft_printf("|%0+-#5.4d|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1081");
    ft_printf("|%0+-#5.4hhd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1082");
    ft_printf("|%0+-#5.4hd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1083");
    ft_printf("|%0+-#5.4ld|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1084");
    ft_printf("|%0+-#5.4lld|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1085");
    ft_printf("|%0+-#5.4jd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1086");
    ft_printf("|%0+-#5.4zd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1087");
    ft_printf("|%0+-#5.4Ld|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1088");
    ft_printf("|%0+-#5.4td|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1089");
    ft_printf("|%0+-#5.4o|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1090");
    ft_printf("|%0+-#5.4hho|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1091");
    ft_printf("|%0+-#5.4ho|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1092");
    ft_printf("|%0+-#5.4lo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1093");
    ft_printf("|%0+-#5.4llo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1094");
    ft_printf("|%0+-#5.4jo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1095");
    ft_printf("|%0+-#5.4zo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1096");
    ft_printf("|%0+-#5.4Lo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1097");
    ft_printf("|%0+-#5.4to|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1098");
    ft_printf("|%0+-#5.4u|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1099");
    ft_printf("|%0+-#5.4hhu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1100");
    ft_printf("|%0+-#5.4hu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1101");
    ft_printf("|%0+-#5.4lu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1102");
    ft_printf("|%0+-#5.4llu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1103");
    ft_printf("|%0+-#5.4ju|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1104");
    ft_printf("|%0+-#5.4zu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1105");
    ft_printf("|%0+-#5.4Lu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1106");
    ft_printf("|%0+-#5.4tu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1107");
    ft_printf("|%0+-#5.4x|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1108");
    ft_printf("|%0+-#5.4hhx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1109");
    ft_printf("|%0+-#5.4hx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1110");
    ft_printf("|%0+-#5.4lx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1111");
    ft_printf("|%0+-#5.4llx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1112");
    ft_printf("|%0+-#5.4jx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1113");
    ft_printf("|%0+-#5.4zx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1114");
    ft_printf("|%0+-#5.4Lx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1115");
    ft_printf("|%0+-#5.4tx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1116");
    ft_printf("|% 0+-#5.4d|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1117");
    ft_printf("|% 0+-#5.4hhd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1118");
    ft_printf("|% 0+-#5.4hd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1119");
    ft_printf("|% 0+-#5.4ld|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1120");
    ft_printf("|% 0+-#5.4lld|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1121");
    ft_printf("|% 0+-#5.4jd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1122");
    ft_printf("|% 0+-#5.4zd|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1123");
    ft_printf("|% 0+-#5.4Ld|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1124");
    ft_printf("|% 0+-#5.4td|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1125");
    ft_printf("|% 0+-#5.4o|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1126");
    ft_printf("|% 0+-#5.4hho|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1127");
    ft_printf("|% 0+-#5.4ho|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1128");
    ft_printf("|% 0+-#5.4lo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1129");
    ft_printf("|% 0+-#5.4llo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1130");
    ft_printf("|% 0+-#5.4jo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1131");
    ft_printf("|% 0+-#5.4zo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1132");
    ft_printf("|% 0+-#5.4Lo|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1133");
    ft_printf("|% 0+-#5.4to|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1134");
    ft_printf("|% 0+-#5.4u|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1135");
    ft_printf("|% 0+-#5.4hhu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1136");
    ft_printf("|% 0+-#5.4hu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1137");
    ft_printf("|% 0+-#5.4lu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1138");
    ft_printf("|% 0+-#5.4llu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1139");
    ft_printf("|% 0+-#5.4ju|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1140");
    ft_printf("|% 0+-#5.4zu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1141");
    ft_printf("|% 0+-#5.4Lu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1142");
    ft_printf("|% 0+-#5.4tu|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1143");
    ft_printf("|% 0+-#5.4x|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1144");
    ft_printf("|% 0+-#5.4hhx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1145");
    ft_printf("|% 0+-#5.4hx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1146");
    ft_printf("|% 0+-#5.4lx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1147");
    ft_printf("|% 0+-#5.4llx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1148");
    ft_printf("|% 0+-#5.4jx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1149");
    ft_printf("|% 0+-#5.4zx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1150");
    ft_printf("|% 0+-#5.4Lx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    ft_printf("\n#1151");
    ft_printf("|% 0+-#5.4tx|%n", -25, &k);ft_printf("%d|", k); k = 0;

    return (0);
}