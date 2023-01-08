" Vim filetype plugin file.
" Language:		Drools
" Maintainer:		David Ward <dward@redhat.com>
" Last Change:		2023 Jan 08

if exists("b:did_ftplugin")
  finish
endif
let b:did_ftplugin = 1

let s:cpo_save = &cpo
set cpo&vim

setlocal comments& comments^=sO:*\ -,mO:*\ \ ,exO:*/
setlocal commentstring=//%s
setlocal formatoptions-=t formatoptions+=croql

setlocal suffixesadd=.drl

let b:undo_ftplugin = "setlocal cms< com< def< fo< sua<"

if (has("gui_win32") || has("gui_gtk")) && !exists("b:browsefilter")
  let b:browsefilter = "Drools Source Files (*.drl)\t*.drl\n" ..
	\	       "All Files (*.*)\t*.*\n"
  let b:undo_ftplugin ..= " | unlet! b:browsefilter"
endif

let b:undo_ftplugin = "setlocal suffixes<" .
		\     " comments< commentstring< formatoptions<" .
		\     " | unlet! b:browsefilter"

let &cpo = s:cpo_save
unlet s:cpo_save

" vim: nowrap sw=2 sts=2 ts=8 noet:
