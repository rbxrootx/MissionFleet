// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58853701 .. +0x6A bytes.
extern "C" __declspec(naked) void FUN_58853701_58853701() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 0ch]
        push ebx
        mov eax, dword ptr [eax]
        mov eax, dword ptr [eax + 88h]
        mov eax, dword ptr [eax]
        mov bl, byte ptr [eax]
        mov eax, dword ptr [ebp + 8]
        mov cl, byte ptr [eax]
        test cl, cl
        ; Exact mapped bytes 74 11: je 0x58853730
        __asm _emit 0x74
        __asm _emit 0x11
        mov dl, cl
        mov cl, dl
        cmp dl, bl
        ; Exact mapped bytes 74 09: je 0x58853730
        __asm _emit 0x74
        __asm _emit 0x09
        inc eax
        mov cl, byte ptr [eax]
        mov dl, cl
        test cl, cl
        ; Exact mapped bytes 75 F1: jne 0x58853721
        __asm _emit 0x75
        __asm _emit 0xf1
        inc eax
        test cl, cl
        ; Exact mapped bytes 74 33: je 0x58853768
        __asm _emit 0x74
        __asm _emit 0x33
        ; Exact mapped bytes EB 0B: jmp 0x58853742
        __asm _emit 0xeb
        __asm _emit 0x0b
        cmp cl, 65h
        ; Exact mapped bytes 74 0C: je 0x58853748
        __asm _emit 0x74
        __asm _emit 0x0c
        cmp cl, 45h
        ; Exact mapped bytes 74 07: je 0x58853748
        __asm _emit 0x74
        __asm _emit 0x07
        inc eax
        mov cl, byte ptr [eax]
        test cl, cl
        ; Exact mapped bytes 75 EF: jne 0x58853737
        __asm _emit 0x75
        __asm _emit 0xef
        push esi
        mov esi, eax
        dec eax
        mov dl, byte ptr [eax]
        cmp dl, 30h
        ; Exact mapped bytes 74 F8: je 0x5885374b
        __asm _emit 0x74
        __asm _emit 0xf8
        cmp dl, bl
        lea ecx, [eax - 1]
        cmovne ecx, eax
        sub esi, ecx
        mov al, byte ptr [esi + ecx]
        inc ecx
        mov byte ptr [ecx], al
        test al, al
        ; Exact mapped bytes 75 F6: jne 0x5885375d
        __asm _emit 0x75
        __asm _emit 0xf6
        pop esi
        pop ebx
        pop ebp
        ret
    }
}
