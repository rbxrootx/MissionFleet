// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5879F9B0 .. +0xFC bytes.
extern "C" __declspec(naked) void FUN_5879f9b0_5879F9B0() {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 8]
        xor edx, edx
        push ebp
        mov ebp, dword ptr [esp + 10h]
        push edi
        xor edi, edi
        test ebp, ebp
        ; Exact mapped bytes 0F 84 EC 00 00 00: je 0x5879fab3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push esi
        ; Exact mapped bytes 0F 1F 84 00 00 00 00 00: nop dword ptr [eax + eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BE 04 3B: movsx eax, byte ptr [ebx + edi]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x04
        __asm _emit 0x3b
        add eax, -2bh
        cmp eax, 3ah
        ; Exact mapped bytes 0F 87 B7 00 00 00: ja 0x5879fa97
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xb7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, byte ptr [eax + 5879fad8h]
        ; Exact mapped bytes FF 24 85 BC FA 79 58: jmp dword ptr [eax*4 + 0x5879fabc]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xbc
        __asm _emit 0xfa
        __asm _emit 0x79
        __asm _emit 0x58
        mov esi, 4
        ; Exact mapped bytes EB 21: jmp 0x5879fa16
        __asm _emit 0xeb
        __asm _emit 0x21
        mov esi, 84h
        ; Exact mapped bytes EB 1A: jmp 0x5879fa16
        __asm _emit 0xeb
        __asm _emit 0x1a
        mov esi, 10h
        ; Exact mapped bytes EB 13: jmp 0x5879fa16
        __asm _emit 0xeb
        __asm _emit 0x13
        mov esi, 8
        ; Exact mapped bytes EB 0C: jmp 0x5879fa16
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov esi, 108h
        ; Exact mapped bytes EB 05: jmp 0x5879fa16
        __asm _emit 0xeb
        __asm _emit 0x05
        mov esi, 20h
        mov eax, edx
        mov ecx, esi
        and eax, 3
        and ecx, 3ch
        add eax, -4
        add eax, ecx
        cmp eax, 1dh
        ; Exact mapped bytes 77 6D: ja 0x5879fa97
        __asm _emit 0x77
        __asm _emit 0x6d
        movzx eax, byte ptr [eax + 5879fb34h]
        ; Exact mapped bytes FF 24 85 14 FB 79 58: jmp dword ptr [eax*4 + 0x5879fb14]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x14
        __asm _emit 0xfb
        __asm _emit 0x79
        __asm _emit 0x58
        test dl, 3ch
        ; Exact mapped bytes 75 5A: jne 0x5879fa97
        __asm _emit 0x75
        __asm _emit 0x5a
        or edx, esi
        ; Exact mapped bytes EB 4D: jmp 0x5879fa8e
        __asm _emit 0xeb
        __asm _emit 0x4d
        test dl, 10h
        ; Exact mapped bytes 75 51: jne 0x5879fa97
        __asm _emit 0x75
        __asm _emit 0x51
        test dl, 8
        ; Exact mapped bytes 74 04: je 0x5879fa4f
        __asm _emit 0x74
        __asm _emit 0x04
        or edx, esi
        ; Exact mapped bytes EB 3F: jmp 0x5879fa8e
        __asm _emit 0xeb
        __asm _emit 0x3f
        and edx, 1c0h
        or edx, esi
        or edx, 1
        ; Exact mapped bytes EB 32: jmp 0x5879fa8e
        __asm _emit 0xeb
        __asm _emit 0x32
        test dl, 10h
        ; Exact mapped bytes 74 09: je 0x5879fa6a
        __asm _emit 0x74
        __asm _emit 0x09
        and edx, 1c0h
        or edx, 11h
        or esi, 40h
        or edx, esi
        ; Exact mapped bytes EB 1D: jmp 0x5879fa8e
        __asm _emit 0xeb
        __asm _emit 0x1d
        test dl, 8
        ; Exact mapped bytes 74 21: je 0x5879fa97
        __asm _emit 0x74
        __asm _emit 0x21
        and edx, 1c0h
        or edx, 2
        ; Exact mapped bytes EB 0D: jmp 0x5879fa8e
        __asm _emit 0xeb
        __asm _emit 0x0d
        test dl, 3ch
        ; Exact mapped bytes 75 11: jne 0x5879fa97
        __asm _emit 0x75
        __asm _emit 0x11
        or edx, 4
        ; Exact mapped bytes EB 03: jmp 0x5879fa8e
        __asm _emit 0xeb
        __asm _emit 0x03
        or edx, 48h
        inc edi
        cmp edi, ebp
        ; Exact mapped bytes 0F 82 39 FF FF FF: jb 0x5879f9d0
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x39
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        test dl, 8
        ; Exact mapped bytes 74 16: je 0x5879fab3
        __asm _emit 0x74
        __asm _emit 0x16
        cmp edi, ebp
        ; Exact mapped bytes 74 0C: je 0x5879faad
        __asm _emit 0x74
        __asm _emit 0x0c
        xor eax, eax
        cmp byte ptr [edi + ebx], al
        pop edi
        pop ebp
        cmove eax, edx
        pop ebx
    }
}
