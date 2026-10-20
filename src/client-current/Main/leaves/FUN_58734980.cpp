// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58734980 .. +0xA8 bytes.
extern "C" __declspec(naked) void FUN_58734980() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        test al, 4
        ; Exact mapped bytes 0F 84 97 00 00 00: je 0x58734a26
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 58h]
        test eax, eax
        ; Exact mapped bytes 75 6D: jne 0x58734a03
        __asm _emit 0x75
        __asm _emit 0x6d
        mov eax, dword ptr [esi + 28h]
        cmp eax, 100h
        ; Exact mapped bytes 74 38: je 0x587349d8
        __asm _emit 0x74
        __asm _emit 0x38
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x587349b5
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, dword ptr [esi + 64h]
        add eax, -2
        push eax
        mov dword ptr [esi + 28h], eax
        ; Exact mapped bytes E8 2D E3 1C 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xe3
        __asm _emit 0x1c
        __asm _emit 0x00
        ; Exact mapped bytes EB 52: jmp 0x58734a07
        __asm _emit 0xeb
        __asm _emit 0x52
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        test cl, 1
        ; Exact mapped bytes 74 49: je 0x58734a07
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, esi
        ; Exact mapped bytes E8 5B E2 1C 00: call 0x58902c20
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xe2
        __asm _emit 0x1c
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 A4 E2 1C 00: call 0x58902c70
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xe2
        __asm _emit 0x1c
        __asm _emit 0x00
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx]
        push 1
        mov ecx, esi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        pop esi
        ret
        inc dword ptr [esi + 50h]
        mov eax, dword ptr [esi + 50h]
        cmp eax, 7
        ; Exact mapped bytes 75 24: jne 0x58734a07
        __asm _emit 0x75
        __asm _emit 0x24
        ; Exact mapped bytes E8 4E 82 24 00: call 0x5897cc36
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x82
        __asm _emit 0x24
        __asm _emit 0x00
        cdq
        mov ecx, 6
        idiv ecx
        mov dword ptr [esi + 58h], 50h
        add edx, 7
        add dword ptr [esi + 28h], -4
        mov dword ptr [esi + 50h], edx
        ; Exact mapped bytes EB 04: jmp 0x58734a07
        __asm _emit 0xeb
        __asm _emit 0x04
        dec eax
        mov dword ptr [esi + 58h], eax
        inc dword ptr [esi + 5ch]
        mov ecx, dword ptr [esi + 5ch]
        mov eax, 66666667h
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 BA E8 1C 00: call 0x589032e0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x00
        pop esi
        ret
    }
}
