#include <sys/types.h>

struct back_lookup_table {
	const char *lang;
	const char *back_string;
};

static struct back_lookup_table back_lookup_table[] = {
	{ "am", "ወደ ኋላ"},
	{ "ar", "إلى الخلف" },
	{ "ast", "Atrás" },
	{ "be", "Назад" },
	{ "bg", "Назад" },
	{ "bn", "পূর্ববর্তী" },
	{ "ca", "Endarrere" },
	{ "cs", "Zpět" },
	{ "da", "Tilbage" },
	{ "de", "_Zurück" },
	{ "el", "Πίσω" },
	{ "eo", "Malantaŭen" },
	{ "es", "Atrás" },
	{ "et", "Tagasi" },
	{ "eu", "Atzera" },
	{ "fa", "بازگشت" },
	{ "fi", "Edellinen" },
	{ "fr", "Précédent" },
	{ "gl", "Recuar" },
	{ "he", "אחורה" },
	{ "hr", "Natrag" },
	{ "hu", "Vissza" },
	{ "id", "Kembali" },
	{ "is", "Til baka" },
	{ "it", "Indietro" },
	{ "ja", "戻る" },
	{ "kk", "Артқа" },
	{ "ko", "뒤로" },
	{ "lt", "Atgal" },
	{ "lv", "Atpakaļ" },
	{ "ms", "Undur" },
	{ "nb", "Tilbake" },
	{ "nl", "Terug" },
	{ "nn", "Tilbake" },
	{ "oc", "Precedent" },
	{ "pa", "ਪਿੱਛੇ"  },
	{ "pl", "Wstecz" },
	{ "pt", "Recuar" },
	{ "ro", "Înapoi" },
	{ "ru", "Назад" },
	{ "sk", "Späť" },
	{ "sq", "Prapa" },
	{ "sr", "Назад" },
	{ "sv", "Bakåt" },
	{ "te", "వెనుకకు" },
	{ "th", "ถอยกลับ" },
	{ "tr", "Geri" },
	{ "ug", "ئارقىسىغا" },
	{ "uk", "Назад" },
	{ "ur", "پیچھے" },
	{ "vi", "Quay lui" },
	{ "zh", "后退" },
	{ NULL, NULL }
};