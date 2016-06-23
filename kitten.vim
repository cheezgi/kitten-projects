if exists('g: loaded_syntastic_kitten_kitten_checker')
    finish
endif
let g:loaded_syntastic_kitten_kitten_checker = 1

let s:save_cpo = &cpo
set cpo&vim

fu! SyntaxCheckers_kitten_kitten_IsAvailible() dict
    return executable(self.getExec())
endfu

fu! SyntaxCheckers_kitten_kitten_GetLocList() dict
    let makeprg = self.makeprgBuild({
                \ 'args': '--check'})

    let efm  = '%f:%l:%c:\ error:\ %m,'
    let efm .= '%f:%l:%c:\ note:\ %m'

    return SyntasticMake({
                \ 'makeprg': makeprg
                \ 'errorformat': efm })
endfu

SyntasticRegistry.CreateAndRegisterChecker({
            \ 'filetype': 'kitten'
            \ 'name': 'kitten'
            \ 'exec': 'kitten'})

let &cpo = s:save_cpo
unlet s:save_cpo
