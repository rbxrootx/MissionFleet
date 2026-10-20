// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5884F12E .. +0xBD bytes.
extern "C" __declspec(naked) void FUN_5884f12e_5884F12E() {
    __asm {
        push ebx
        mov ebx, eax
        shl eax, 8
        mov edx, dword ptr [esp + 8]
        test edx, 3
        ; Exact mapped bytes 74 15: je 0x5884f155
        __asm _emit 0x74
        __asm _emit 0x15
        mov cl, byte ptr [edx]
        add edx, 1
        cmp cl, bl
        ; Exact mapped bytes 74 59: je 0x5884f1a2
        __asm _emit 0x74
        __asm _emit 0x59
        test cl, cl
        ; Exact mapped bytes 74 51: je 0x5884f19e
        __asm _emit 0x74
        __asm _emit 0x51
        test edx, 3
        ; Exact mapped bytes 75 EB: jne 0x5884f140
        __asm _emit 0x75
        __asm _emit 0xeb
        or ebx, eax
        push edi
        mov eax, ebx
        shl ebx, 10h
        push esi
        or ebx, eax
        mov ecx, dword ptr [edx]
        mov edi, 7efefeffh
        mov eax, ecx
        mov esi, edi
        xor ecx, ebx
        add esi, eax
        add edi, ecx
        xor ecx, 0ffffffffh
        xor eax, 0ffffffffh
        xor ecx, edi
        xor eax, esi
        add edx, 4
        and ecx, 81010100h
        ; Exact mapped bytes 75 21: jne 0x5884f1a7
        __asm _emit 0x75
        __asm _emit 0x21
        and eax, 81010100h
        ; Exact mapped bytes 74 D3: je 0x5884f160
        __asm _emit 0x74
        __asm _emit 0xd3
        and eax, 1010100h
        ; Exact mapped bytes 75 08: jne 0x5884f19c
        __asm _emit 0x75
        __asm _emit 0x08
        and esi, 80000000h
        ; Exact mapped bytes 75 C4: jne 0x5884f160
        __asm _emit 0x75
        __asm _emit 0xc4
        pop esi
        pop edi
        pop ebx
        xor eax, eax
        ret
        lea eax, [edx - 1]
        pop ebx
        ret
        mov eax, dword ptr [edx - 4]
        cmp al, bl
        ; Exact mapped bytes 74 36: je 0x5884f1e4
        __asm _emit 0x74
        __asm _emit 0x36
        test al, al
        ; Exact mapped bytes 74 EA: je 0x5884f19c
        __asm _emit 0x74
        __asm _emit 0xea
        cmp ah, bl
        ; Exact mapped bytes 74 27: je 0x5884f1dd
        __asm _emit 0x74
        __asm _emit 0x27
        test ah, ah
        ; Exact mapped bytes 74 E2: je 0x5884f19c
        __asm _emit 0x74
        __asm _emit 0xe2
        shr eax, 10h
        cmp al, bl
        ; Exact mapped bytes 74 15: je 0x5884f1d6
        __asm _emit 0x74
        __asm _emit 0x15
        test al, al
        ; Exact mapped bytes 74 D7: je 0x5884f19c
        __asm _emit 0x74
        __asm _emit 0xd7
        cmp ah, bl
        ; Exact mapped bytes 74 06: je 0x5884f1cf
        __asm _emit 0x74
        __asm _emit 0x06
        test ah, ah
        ; Exact mapped bytes 74 CF: je 0x5884f19c
        __asm _emit 0x74
        __asm _emit 0xcf
        ; Exact mapped bytes EB 91: jmp 0x5884f160
        __asm _emit 0xeb
        __asm _emit 0x91
        pop esi
        pop edi
        lea eax, [edx - 1]
        pop ebx
        ret
        lea eax, [edx - 2]
        pop esi
        pop edi
        pop ebx
        ret
        lea eax, [edx - 3]
        pop esi
        pop edi
        pop ebx
        ret
        lea eax, [edx - 4]
        pop esi
        pop edi
        pop ebx
        ret
    }
}
