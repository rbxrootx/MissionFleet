// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886E991 .. +0x7D bytes.
extern "C" __declspec(naked) void FUN_5886e991_5886E991() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 10h]
        push esi
        push edi
        mov edi, dword ptr [ebp + 0ch]
        mov ecx, edi
        mov esi, edi
        lea edx, [edi + eax*2]
        cmp edi, edx
        ; Exact mapped bytes 73 59: jae 0x5886ea03
        __asm _emit 0x73
        __asm _emit 0x59
        push ebx
        movzx eax, word ptr [ecx]
        cmp eax, 1ah
        ; Exact mapped bytes 74 35: je 0x5886e9e8
        __asm _emit 0x74
        __asm _emit 0x35
        cmp eax, 0dh
        ; Exact mapped bytes 75 15: jne 0x5886e9cd
        __asm _emit 0x75
        __asm _emit 0x15
        lea ebx, [ecx + 2]
        cmp ebx, edx
        ; Exact mapped bytes 73 0E: jae 0x5886e9cd
        __asm _emit 0x73
        __asm _emit 0x0e
        push 0ah
        pop edi
        ; Exact mapped bytes 66 39 3B: cmp word ptr [ebx], di
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x3b
        ; Exact mapped bytes 75 06: jne 0x5886e9cd
        __asm _emit 0x75
        __asm _emit 0x06
        mov eax, edi
        push 4
        ; Exact mapped bytes EB 02: jmp 0x5886e9cf
        __asm _emit 0xeb
        __asm _emit 0x02
        push 2
        lea edi, [esi + 2]
        ; Exact mapped bytes 66 89 06: mov word ptr [esi], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x06
        pop ebx
        add ecx, ebx
        mov dword ptr [ebp - 4], edi
        mov eax, edi
        mov edi, dword ptr [ebp + 0ch]
        mov esi, eax
        cmp ecx, edx
        ; Exact mapped bytes 72 C5: jb 0x5886e9ab
        __asm _emit 0x72
        __asm _emit 0xc5
        ; Exact mapped bytes EB 1A: jmp 0x5886ea02
        __asm _emit 0xeb
        __asm _emit 0x1a
        mov eax, dword ptr [ebp + 8]
        mov ecx, eax
        and eax, 3fh
        sar ecx, 6
        imul edx, eax, 38h
        mov ecx, dword ptr [ecx*4 + 589699b0h]
        or byte ptr [ecx + edx + 28h], 2
        pop ebx
        sub esi, edi
        and esi, 0fffffffeh
        pop edi
        mov eax, esi
        pop esi
        leave
        ret
    }
}
