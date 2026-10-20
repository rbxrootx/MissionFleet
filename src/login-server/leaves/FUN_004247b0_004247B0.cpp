// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004247B0 .. +0xBC bytes.
extern "C" __declspec(naked) void FUN_004247b0_004247B0() {
    __asm {
        xor eax, eax
        mov al, byte ptr [esp + 8]
        push ebx
        mov ebx, eax
        shl eax, 8
        mov edx, dword ptr [esp + 8]
        test edx, 3
        ; Exact mapped bytes 74 13: je 0x4247db
        __asm _emit 0x74
        __asm _emit 0x13
        mov cl, byte ptr [edx]
        inc edx
        cmp cl, bl
        ; Exact mapped bytes 74 D1: je 0x4247a0
        __asm _emit 0x74
        __asm _emit 0xd1
        test cl, cl
        ; Exact mapped bytes 74 51: je 0x424824
        __asm _emit 0x74
        __asm _emit 0x51
        test edx, 3
        ; Exact mapped bytes 75 ED: jne 0x4247c8
        __asm _emit 0x75
        __asm _emit 0xed
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
        ; Exact mapped bytes 75 1C: jne 0x424828
        __asm _emit 0x75
        __asm _emit 0x1c
        and eax, 81010100h
        ; Exact mapped bytes 74 D3: je 0x4247e6
        __asm _emit 0x74
        __asm _emit 0xd3
        and eax, 1010100h
        ; Exact mapped bytes 75 08: jne 0x424822
        __asm _emit 0x75
        __asm _emit 0x08
        and esi, 80000000h
        ; Exact mapped bytes 75 C4: jne 0x4247e6
        __asm _emit 0x75
        __asm _emit 0xc4
        pop esi
        pop edi
        pop ebx
        xor eax, eax
        ret
        mov eax, dword ptr [edx - 4]
        cmp al, bl
        ; Exact mapped bytes 74 36: je 0x424865
        __asm _emit 0x74
        __asm _emit 0x36
        test al, al
        ; Exact mapped bytes 74 EF: je 0x424822
        __asm _emit 0x74
        __asm _emit 0xef
        cmp ah, bl
        ; Exact mapped bytes 74 27: je 0x42485e
        __asm _emit 0x74
        __asm _emit 0x27
        test ah, ah
        ; Exact mapped bytes 74 E7: je 0x424822
        __asm _emit 0x74
        __asm _emit 0xe7
        shr eax, 10h
        cmp al, bl
        ; Exact mapped bytes 74 15: je 0x424857
        __asm _emit 0x74
        __asm _emit 0x15
        test al, al
        ; Exact mapped bytes 74 DC: je 0x424822
        __asm _emit 0x74
        __asm _emit 0xdc
        cmp ah, bl
        ; Exact mapped bytes 74 06: je 0x424850
        __asm _emit 0x74
        __asm _emit 0x06
        test ah, ah
        ; Exact mapped bytes 74 D4: je 0x424822
        __asm _emit 0x74
        __asm _emit 0xd4
        ; Exact mapped bytes EB 96: jmp 0x4247e6
        __asm _emit 0xeb
        __asm _emit 0x96
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
