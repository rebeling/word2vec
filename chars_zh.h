#pragma once

inline bool is_word(char16_t ch)
{
    static std::set<char16_t> s{
       u'-',
       u'．',
       u'•',
       u',',
       u'，',
       u'！',
       u'!',
       u'？',
       u'?',
       u'；',
       u'`',
       u'﹑',
       u'^',
       u'…',
       u'“',
       u'”',
       u'〝',
       u'〞',
       u'~',
       u'\\',
       u'∕',
       u'|',
       u'¦',
       u'‖',
       u'—',
       u'(',
       u')',
       u'〈',
       u'〉',
       u'﹞',
       u'﹝',
       u'「',
       u'」',
       u'‹',
       u'›',
       u'〖',
       u'〗',
       u'】',
       u'【',
       u'»',
       u'«',
       u'』',
       u'『',
       u'〕',
       u'〔',
       u']',
       u'[',
       u'﹐',
       u'¸',
       u'︰',
       u'﹔',
       u';',
       u'！',
       u'¡',
       u'？',
       u'¿',
       u'﹖',
       u'﹌',
       u'﹏',
       u'﹋',
       u'＇',
       u'´',
       u'ˊ',
       u'ˋ',
       u'―',
       u'﹫',
       u'︳',
       u'︴',
       u'﹢',
       u'﹦',
       u'﹤',
       u'<',
       u'˜',
       u'~',
       u'﹟',
       u'#',
       u'﹩',
       u'﹠',
       u'&',
       u'﹪',
       u'﹡',
       u'*',
       u'﹨',
       u'\\',
       u'﹍',
       u'﹉',
       u'﹎',
       u'﹊',
       u'ˇ',
       u'︵',
       u'︶',
       u'︷',
       u'︸',
       u'︹',
       u'︿',
       u'﹀',
       u'︺',
       u'︽',
       u'︾',
       u'_',
       u'ˉ',
       u'﹁',
       u'﹂',
       u'﹃',
       u'﹄',
       u'︻',
       u'︼',
       u'/',
       u'（',
       u'>',
       u'）',
       u'　'
    };

	return ch > 255 && s.find(ch) == s.end(); 
}

