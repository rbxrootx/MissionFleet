// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100437C0 .. +0xE2 bytes.
extern "C" __declspec(naked) void FUN_100437c0_100437C0() {
    __asm {
        push ecx
        push ebp
        mov ebp, ecx
        mov eax, dword ptr [ebp + 60h]
        test eax, eax
        mov dword ptr [esp + 4], eax
        ; Exact mapped bytes 0F 84 CC 00 00 00: je 0x1004389f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0f0h]
        test eax, eax
        ; Exact mapped bytes 0F 84 BE 00 00 00: je 0x1004389f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10ch]
        test eax, eax
        ; Exact mapped bytes 75 0E: jne 0x100437f9
        __asm _emit 0x75
        __asm _emit 0x0e
        mov eax, dword ptr [ebp + 108h]
        test eax, eax
        ; Exact mapped bytes 0F 84 A6 00 00 00: je 0x1004389f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 134h]
        and eax, 80000003h
        ; Exact mapped bytes 79 05: jns 0x1004380b
        __asm _emit 0x79
        __asm _emit 0x05
        dec eax
        or eax, 0fffffffch
        inc eax
        ; Exact mapped bytes 0F 85 88 00 00 00: jne 0x10043899
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 9C 7D 1A 10: mov eax, dword ptr [0x101a7d9c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x7d
        __asm _emit 0x1a
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 74 7F: je 0x10043899
        __asm _emit 0x74
        __asm _emit 0x7f
        ; Exact mapped bytes 8B 15 C4 58 1C 10: mov edx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [ebp + 88h]
        cmp ecx, dword ptr [edx + 4]
        ; Exact mapped bytes 75 6E: jne 0x10043899
        __asm _emit 0x75
        __asm _emit 0x6e
        ; Exact mapped bytes A1 F4 56 1C 10: mov eax, dword ptr [0x101c56f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push ebx
        ; Exact mapped bytes 8B 1D DC 56 1C 10: mov ebx, dword ptr [0x101c56dc]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0xdc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push esi
        push edi
        mov edi, dword ptr [eax + 104e0h]
        mov eax, dword ptr [ebx + 1ch]
        mov esi, dword ptr [ebx + 14h]
        sub eax, esi
        mov ecx, dword ptr [edi + 110h]
        sar eax, 1
        mov esi, dword ptr [ebp + 4]
        lea eax, [eax + eax*4]
        lea eax, [eax + eax*4]
        lea eax, [eax + eax*4]
        shl eax, 3
        cdq
        idiv ecx
        mov edx, dword ptr [ebx + 18h]
        sub esi, eax
        mov eax, dword ptr [edi + 50h]
        sub esi, eax
        mov eax, dword ptr [ebx + 20h]
        sub eax, edx
        mov ebx, dword ptr [ebp + 8]
        sar eax, 1
        lea eax, [eax + eax*4]
        lea eax, [eax + eax*4]
        lea eax, [eax + eax*4]
        shl eax, 3
        cdq
        idiv ecx
        mov edx, dword ptr [edi + 54h]
        mov ecx, dword ptr [esp + 10h]
        sub eax, ebx
        add eax, edx
        push eax
        push esi
        ; Exact mapped bytes E8 FA 50 00 00: call 0x10048990
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        inc dword ptr [ebp + 134h]
        pop ebp
        pop ecx
        ret
    }
}
