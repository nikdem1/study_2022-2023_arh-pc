---
## Front matter
title: "Отчёт по лабораторной работе №4"
subtitle: "Выполнил студент НКАбд-01-22"
author: "Никита Михайлович Демидович"

## Generic otions
lang: ru-RU
toc-title: "Содержание"

## Bibliography
bibliography: bib/cite.bib
csl: pandoc/csl/gost-r-7-0-5-2008-numeric.csl

## Pdf output format
toc: true # Table of contents
toc-depth: 2
lof: true # List of figures
lot: true # List of tables
fontsize: 12pt
linestretch: 1.5
papersize: a4
documentclass: scrreprt
## I18n polyglossia
polyglossia-lang:
  name: russian
  options:
	- spelling=modern
	- babelshorthands=true
polyglossia-otherlangs:
  name: english
## I18n babel
babel-lang: russian
babel-otherlangs: english
## Fonts
mainfont: PT Serif
romanfont: PT Serif
sansfont: PT Sans
monofont: PT Mono
mainfontoptions: Ligatures=TeX
romanfontoptions: Ligatures=TeX
sansfontoptions: Ligatures=TeX,Scale=MatchLowercase
monofontoptions: Scale=MatchLowercase,Scale=0.9
## Biblatex
biblatex: true
biblio-style: "gost-numeric"
biblatexoptions:
  - parentracker=true
  - backend=biber
  - hyperref=auto
  - language=auto
  - autolang=other*
  - citestyle=gost-numeric
## Pandoc-crossref LaTeX customization
figureTitle: "Рис."
tableTitle: "Таблица"
listingTitle: "Листинг"
lofTitle: "Список иллюстраций"
lotTitle: "Список таблиц"
lolTitle: "Листинги"
## Misc options
indent: true
header-includes:
  - \usepackage{indentfirst}
  - \usepackage{float} # keep figures where there are in the text
  - \floatplacement{figure}{H} # keep figures where there are in the text
---

# Цель работы

Целью работы является освоение процедуры оформления отчетов с помощью легковесного языка разметки Markdown.

# Задание

Здесь приводится описание задания в соответствии с рекомендациями
методического пособия и выданным вариантом.

# Теоретическое введение

4.2.1. Базовые сведения о Markdown.
Чтобы создать заголовок, используйте знак #, например:
# This is heading 1
## This is heading 2
### This is heading 3
#### This is heading 4
Чтобы задать для текста полужирное начертание, заключите его в двойные
звездочки:
This text is **bold**.
Чтобы задать для текста курсивное начертание, заключите его в одинарные
звездочки:
This text is *italic*.
Чтобы задать для текста полужирное и курсивное начертание, заключите его
в тройные звездочки:
This is text is both ***bold and italic***.
Блоки цитирования создаются с помощью символа >:
> The drought had lasted now for ten million years, and the reign of
↪ the terrible lizards had long since ended. Here on the Equator,
↪ in the continent which would one day be known as Africa, the
↪ battle for existence had reached a new climax of ferocity, and
↪ the victor was not yet in sight. In this barren and desiccated
↪ land, only the small or the swift or the fierce could flourish,
↪ or even hope to survive.

Упорядоченный список можно отформатировать с помощью соответствую-
щих цифр:
1. First instruction
1. Sub-instruction
1. Sub-instruction
1. Second instruction
Чтобы вложить один список в другой, добавьте отступ для элементов дочер-
него списка:
1. First instruction
1. Second instruction
1. Third instruction
Неупорядоченный (маркированный) список можно отформатировать с помо-
щью звездочек или тире:
* List item 1
* List item 2
* List item 3
Чтобы вложить один список в другой, добавьте отступ для элементов дочер-
него списка:
- List item 1
- List item A
- List item B
- List item 2
Синтаксис Markdown для встроенной ссылки состоит из части [link text],
представляющей текст гиперссылки, и части (file-name.md) – URL-адреса или
имени файла, на который дается ссылка:
[link text](file-name.md)
или
[link text](http://example.com/ "Необязательная подсказка")
Markdown поддерживает как встраивание фрагментов кода в предложение,
так и их размещение между предложениями в виде отдельных огражденных
блоков. Огражденные блоки кода — это простой способ выделить синтаксис для
фрагментов кода. Общий формат огражденных блоков кода:
``` language
your code goes in here
```

4.2.2. Оформление формул в Markdown
Внутритекстовые формулы делаются аналогично формулам LaTeX. Например,
формула sin2(𝑥) + cos2(𝑥) = 1 запишется как
$\sin^2 (x) + \cos^2 (x) = 1$
Выключение формулы:
sin2(𝑥) + cos2(𝑥) = 1 (4.1)
со ссылкой в тексте «Смотри формулу ({-eq. 4.1}).» записывается как
$$
\sin^2 (x) + \cos^2 (x) = 1
$$ {#eq:eq1}
Смотри формулу (`[-@eq:eq1]`).

4.2.3. Оформление изображений в Markdown
В Markdown вставить изображение в документ можно с помощью непосредственного указания адреса изображения. Синтаксис данной команды выглядит
следующим образом:
`![Подпись к рисунку](/путь/к/изображению.jpg "Необязательная подсказка"){ #fig:fig1 width=70% }`
Здесь:
• в квадратных скобках указывается подпись к изображению;
• в круглых скобках указывается URL-адрес или относительный путь изображения, 
а также (необязательно) всплывающую подсказку, заключённую
в двойные или одиночные кавычки.
• в фигурных скобках указывается идентификатор изображения
для ссылки на него по тексту и размер изображения относительно ширины
страницы.
Рис. 4.1. Подпись к рисунку

4.2.4. Обработка файлов в формате Markdown
Преобразовать файл README.md можно следующим образом:
pandoc README.md -o README.pdf
или так
pandoc README.md -o README.docx
Для компиляции отчетов по лабораторным работам предлагается использо-
вать следующий Makefile
FILES = $(patsubst %.md, %.docx, $(wildcard *.md))
FILES += $(patsubst %.md, %.pdf, $(wildcard *.md))
LATEX_FORMAT =
FILTER = --filter pandoc-crossref
%.docx: %.md
-pandoc "$<" $(FILTER) -o "$@"
%.pdf: %.md
-pandoc "$<" $(LATEX_FORMAT) $(FILTER) -o "$@"
all: $(FILES)
@echo $(FILES)
clean:
-rm $(FILES) *~

# Выполнение лабораторной работы

Задание №1. Изучив теоретический материал к лабораторной работе, первым делом я зашёл на сайте tg.org (рис.1) и начал инициализацию TeX Live (рис.2-6).

![Рис.1: Сайт tg.org](image/1.jpg){ #fig:001 width=70% }

![Рис.2: Процесс установки TeX Live](image/2.jpg){ #fig:002 width=70% }

![Рис.3: Процесс установки TeX Live](image/3.jpg){ #fig:003 width=70% }

Впоследствии вместо команды perl ./install-tl использовалась команда sudo perl ./install-tl, так как при использовании первой происходил сбой установки, поскольку для доступа к каталогу /tmp требуется расширенный доступ.

![Рис.4: Процесс установки TeX Live](image/4.jpg){ #fig:004 width=70% }

![Рис.5: Процесс установки TeX Live](image/5.jpg){ #fig:005 width=70% }

![Рис.6: Процесс установки TeX Live](image/6.jpg){ #fig:006 width=70% }

Затем я добавил /usr/local/texlive/2022/bin/x86_64-linux в свой PATH для текущей и будущих сессий (рис.7).

![Рис. 7: Добавление /usr/local/texlive/2022/bin/x86_64-linux в PATH] (image/7.jpg){ #fig:007 width=70% }

После этого я произвёл установку Pandoc и pandoc-crossref (рис.8-11).

![Рис.8: Процесс установки Pandoc](image/8.jpg){ #fig:008 width=70% }

![Рис.9: Процесс установки pandoc-crossref](image/9.jpg){ #fig:009 width=70% }

![Рис.10: Распаковка архивов](image/10.jpg){ #fig:010 width=70% }

![Рис.11: Копирование в директорию /usr/local/bin](image/11.jpg){ #fig:011 width=70% }

Для дальнейшей работы я перешёл в каталог с шаблоном отчета по лабораторной работе №4 и провёл компиляцию шаблона с использованием Makefile. Для этого я ввёл команду make (рис.12) и проверил наличие необходимых файлов (рис.13).

![Рис.12: Компиляция шаблона](image/12.jpg){ #fig:012 width=70% }

![Рис.13: Сгенерированные файлы в каталоге с отчётом по лабораторной работе №4](image/13.jpg){ #fig:013 width=70% }

Я удалил полученные файлы и проверил содержимое каталога «report» (рис.14).

![Рис.14: Удаление полученных файлов и содержимое каталога "report"](image/12.jpg){ #fig:014 width=70% }

После этого я открыл файл report.md с помощью текстового редактора gedit и внимательно изучил его содержание (рис.15).

![Рис.15: Файл report.md](image/15.jpg){ #fig:015 width=70% }

Затем я создал отчёт с использованием Makefile.

# Выводы

В результате выполнения данной лабораторной работы я освоил процедуру оформления отчетов с помощью языка разметки Markdown.

# Список литературы{.unnumbered}

::: {#refs}
:::
