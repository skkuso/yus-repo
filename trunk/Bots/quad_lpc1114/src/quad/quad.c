
#include "LPC11xx.h"
#include "quad.h"

void quad_init(void)
{
	servos_init();
}

const uint16_t pwm_values[180] =
{
	ANGLE_TO_COUNTER(0),	ANGLE_TO_COUNTER(1),	ANGLE_TO_COUNTER(2),
	ANGLE_TO_COUNTER(3),	ANGLE_TO_COUNTER(4),	ANGLE_TO_COUNTER(5),
	ANGLE_TO_COUNTER(6),	ANGLE_TO_COUNTER(7),	ANGLE_TO_COUNTER(8),
	ANGLE_TO_COUNTER(9),	ANGLE_TO_COUNTER(10),	ANGLE_TO_COUNTER(11),
	ANGLE_TO_COUNTER(12),	ANGLE_TO_COUNTER(13),	ANGLE_TO_COUNTER(14),
	ANGLE_TO_COUNTER(15),	ANGLE_TO_COUNTER(16),	ANGLE_TO_COUNTER(17),
	ANGLE_TO_COUNTER(18),	ANGLE_TO_COUNTER(19),	ANGLE_TO_COUNTER(20),
	ANGLE_TO_COUNTER(21),	ANGLE_TO_COUNTER(22),	ANGLE_TO_COUNTER(23),
	ANGLE_TO_COUNTER(24),	ANGLE_TO_COUNTER(25),	ANGLE_TO_COUNTER(26),
	ANGLE_TO_COUNTER(27),	ANGLE_TO_COUNTER(28),	ANGLE_TO_COUNTER(29),
	ANGLE_TO_COUNTER(30),	ANGLE_TO_COUNTER(31),	ANGLE_TO_COUNTER(32),
	ANGLE_TO_COUNTER(33),	ANGLE_TO_COUNTER(34),	ANGLE_TO_COUNTER(35),
	ANGLE_TO_COUNTER(36),	ANGLE_TO_COUNTER(37),	ANGLE_TO_COUNTER(38),
	ANGLE_TO_COUNTER(39),	ANGLE_TO_COUNTER(40),	ANGLE_TO_COUNTER(41),
	ANGLE_TO_COUNTER(42),	ANGLE_TO_COUNTER(43),	ANGLE_TO_COUNTER(44),
	ANGLE_TO_COUNTER(45),	ANGLE_TO_COUNTER(46),	ANGLE_TO_COUNTER(47),
	ANGLE_TO_COUNTER(48),	ANGLE_TO_COUNTER(49),	ANGLE_TO_COUNTER(50),
	ANGLE_TO_COUNTER(51),	ANGLE_TO_COUNTER(52),	ANGLE_TO_COUNTER(53),
	ANGLE_TO_COUNTER(54),	ANGLE_TO_COUNTER(55),	ANGLE_TO_COUNTER(56),
	ANGLE_TO_COUNTER(57),	ANGLE_TO_COUNTER(58),	ANGLE_TO_COUNTER(59),
	ANGLE_TO_COUNTER(60),	ANGLE_TO_COUNTER(61),	ANGLE_TO_COUNTER(62),
	ANGLE_TO_COUNTER(63),	ANGLE_TO_COUNTER(64),	ANGLE_TO_COUNTER(65),
	ANGLE_TO_COUNTER(66),	ANGLE_TO_COUNTER(67),	ANGLE_TO_COUNTER(68),
	ANGLE_TO_COUNTER(69),	ANGLE_TO_COUNTER(70),	ANGLE_TO_COUNTER(71),
	ANGLE_TO_COUNTER(72),	ANGLE_TO_COUNTER(73),	ANGLE_TO_COUNTER(74),
	ANGLE_TO_COUNTER(75),	ANGLE_TO_COUNTER(76),	ANGLE_TO_COUNTER(77),
	ANGLE_TO_COUNTER(78),	ANGLE_TO_COUNTER(79),	ANGLE_TO_COUNTER(80),
	ANGLE_TO_COUNTER(81),	ANGLE_TO_COUNTER(82),	ANGLE_TO_COUNTER(83),
	ANGLE_TO_COUNTER(84),	ANGLE_TO_COUNTER(85),	ANGLE_TO_COUNTER(86),
	ANGLE_TO_COUNTER(87),	ANGLE_TO_COUNTER(88),	ANGLE_TO_COUNTER(89),
	ANGLE_TO_COUNTER(90),	ANGLE_TO_COUNTER(91),	ANGLE_TO_COUNTER(92),
	ANGLE_TO_COUNTER(93),	ANGLE_TO_COUNTER(94),	ANGLE_TO_COUNTER(95),
	ANGLE_TO_COUNTER(96),	ANGLE_TO_COUNTER(97),	ANGLE_TO_COUNTER(98),
	ANGLE_TO_COUNTER(99),	ANGLE_TO_COUNTER(100),	ANGLE_TO_COUNTER(101),
	ANGLE_TO_COUNTER(102),	ANGLE_TO_COUNTER(103),	ANGLE_TO_COUNTER(104),
	ANGLE_TO_COUNTER(105),	ANGLE_TO_COUNTER(106),	ANGLE_TO_COUNTER(107),
	ANGLE_TO_COUNTER(108),	ANGLE_TO_COUNTER(109),	ANGLE_TO_COUNTER(110),
	ANGLE_TO_COUNTER(111),	ANGLE_TO_COUNTER(112),	ANGLE_TO_COUNTER(113),
	ANGLE_TO_COUNTER(114),	ANGLE_TO_COUNTER(115),	ANGLE_TO_COUNTER(116),
	ANGLE_TO_COUNTER(117),	ANGLE_TO_COUNTER(118),	ANGLE_TO_COUNTER(119),
	ANGLE_TO_COUNTER(120),	ANGLE_TO_COUNTER(121),	ANGLE_TO_COUNTER(122),
	ANGLE_TO_COUNTER(123),	ANGLE_TO_COUNTER(124),	ANGLE_TO_COUNTER(125),
	ANGLE_TO_COUNTER(126),	ANGLE_TO_COUNTER(127),	ANGLE_TO_COUNTER(128),
	ANGLE_TO_COUNTER(129),	ANGLE_TO_COUNTER(130),	ANGLE_TO_COUNTER(131),
	ANGLE_TO_COUNTER(132),	ANGLE_TO_COUNTER(133),	ANGLE_TO_COUNTER(134),
	ANGLE_TO_COUNTER(135),	ANGLE_TO_COUNTER(136),	ANGLE_TO_COUNTER(137),
	ANGLE_TO_COUNTER(138),	ANGLE_TO_COUNTER(139),	ANGLE_TO_COUNTER(140),
	ANGLE_TO_COUNTER(141),	ANGLE_TO_COUNTER(142),	ANGLE_TO_COUNTER(143),
	ANGLE_TO_COUNTER(144),	ANGLE_TO_COUNTER(145),	ANGLE_TO_COUNTER(146),
	ANGLE_TO_COUNTER(147),	ANGLE_TO_COUNTER(148),	ANGLE_TO_COUNTER(149),
	ANGLE_TO_COUNTER(150),	ANGLE_TO_COUNTER(151),	ANGLE_TO_COUNTER(152),
	ANGLE_TO_COUNTER(153),	ANGLE_TO_COUNTER(154),	ANGLE_TO_COUNTER(155),
	ANGLE_TO_COUNTER(156),	ANGLE_TO_COUNTER(157),	ANGLE_TO_COUNTER(158),
	ANGLE_TO_COUNTER(159),	ANGLE_TO_COUNTER(160),	ANGLE_TO_COUNTER(161),
	ANGLE_TO_COUNTER(162),	ANGLE_TO_COUNTER(163),	ANGLE_TO_COUNTER(164),
	ANGLE_TO_COUNTER(165),	ANGLE_TO_COUNTER(166),	ANGLE_TO_COUNTER(167),
	ANGLE_TO_COUNTER(168),	ANGLE_TO_COUNTER(169),	ANGLE_TO_COUNTER(170),
	ANGLE_TO_COUNTER(171),	ANGLE_TO_COUNTER(172),	ANGLE_TO_COUNTER(173),
	ANGLE_TO_COUNTER(174),	ANGLE_TO_COUNTER(175),	ANGLE_TO_COUNTER(176),
	ANGLE_TO_COUNTER(177),	ANGLE_TO_COUNTER(178),	ANGLE_TO_COUNTER(179)
};

const int8_t pivots[POSITION_TOTAL] =
{
	0,		-6,		-11,	-16,	-21,	-26,	-30,	-33,
	-36,	-38,	-39,	-40,	-40,	-39,	-38,	-37,
	-36,	-35,	-33,	-32,	-30,	-28,	-26,	-24,
	-21,	-19,	-16,	-14,	-11,	-8,		-6,		-3,
	0,		3,		6,		8,		11,		14,		16,		19,
	21,		24,		26,		28,		30,		32,		33,		35,
	36,		37,		38,		39,		40,		40,		39,		38,
	36,		33,		30,		26,		21,		16,		11,		6
};

const int8_t lifts[POSITION_TOTAL] =
{
	56,		50,		45,		40,		35,		30,		25,		20,
	16,		15,		15,		17,		19,		21,		23,		25,
	26,		28,		29,		31,		32,		33,		34,		35,
	36,		37,		37,		38,		38,		39,		39,		39,
	39,		39,		39,		39,		38,		38,		37,		37,
	36,		35,		34,		33,		32,		31,		29,		28,
	26,		25,		23,		21,		19,		17,		15,		15,
	16,		20,		25,		30,		35,		40,		45,		50
};

const int8_t knees[POSITION_TOTAL] =
{
	31,		21,		11,		2,		-8,		-16,	-25,	-33,
	-41,	-43,	-46,	-47,	-49,	-51,	-52,	-53,
	-55,	-56,	-57,	-58,	-59,	-60,	-61,	-62,
	-62,	-63,	-64,	-64,	-64,	-65,	-65,	-65,
	-65,	-65,	-65,	-65,	-64,	-64,	-64,	-63,
	-62,	-62,	-61,	-60,	-59,	-58,	-57,	-56,
	-55,	-53,	-52,	-51,	-49,	-47,	-46,	-43,
	-41,	-33,	-25,	-16,	-8,		2,		11,		21
};


