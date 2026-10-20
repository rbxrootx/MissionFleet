// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1000EA60 .. +0x84 bytes.
extern "C" __declspec(naked) void FUN_1000ea60_1000EA60() {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        test byte ptr [esi + 24h], 1
        ; Exact mapped bytes 74 71: je 0x1000eadd
        __asm _emit 0x74
        __asm _emit 0x71
        mov eax, dword ptr [esi + 0ach]
        test eax, eax
        ; Exact mapped bytes 74 67: je 0x1000eadd
        __asm _emit 0x74
        __asm _emit 0x67
        ; Exact mapped bytes A1 30 56 1C 10: mov eax, dword ptr [0x101c5630]
        __asm _emit 0xa1
        __asm _emit 0x30
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 75 17: jne 0x1000ea96
        __asm _emit 0x75
        __asm _emit 0x17
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        push eax
        push ecx
        ; Exact mapped bytes 8B 0D F4 56 1C 10: mov ecx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 6E 01 06 00: call 0x1006ec00
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x01
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 47: je 0x1000eadd
        __asm _emit 0x74
        __asm _emit 0x47
        mov esi, dword ptr [esi + 4ch]
        test esi, esi
        ; Exact mapped bytes 74 40: je 0x1000eadd
        __asm _emit 0x74
        __asm _emit 0x40
        mov edi, dword ptr [esp + 1ch]
        mov ebx, dword ptr [esp + 18h]
        mov ebp, dword ptr [esp + 14h]
        ; Exact mapped bytes 66 83 7E 26 00: cmp word ptr [esi + 0x26], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7e
        __asm _emit 0x26
        __asm _emit 0x00
        ; Exact mapped bytes 7D 18: jge 0x1000eac8
        __asm _emit 0x7d
        __asm _emit 0x18
        mov edx, dword ptr [esi]
        push edi
        push ebx
        push ebp
        mov ecx, esi
        ; Exact mapped bytes FF 52 14: call dword ptr [edx + 0x14]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x14
        mov esi, dword ptr [esi + 48h]
        test esi, esi
        ; Exact mapped bytes 75 E8: jne 0x1000eaa9
        __asm _emit 0x75
        __asm _emit 0xe8
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        test esi, esi
        ; Exact mapped bytes 74 11: je 0x1000eadd
        __asm _emit 0x74
        __asm _emit 0x11
        mov eax, dword ptr [esi]
        push edi
        push ebx
        push ebp
        mov ecx, esi
        ; Exact mapped bytes FF 50 14: call dword ptr [eax + 0x14]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x14
        mov esi, dword ptr [esi + 48h]
        test esi, esi
        ; Exact mapped bytes 75 EF: jne 0x1000eacc
        __asm _emit 0x75
        __asm _emit 0xef
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
