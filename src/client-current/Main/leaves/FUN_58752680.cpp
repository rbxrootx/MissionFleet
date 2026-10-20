// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58752680 .. +0xC7 bytes.
extern "C" __declspec(naked) void FUN_58752680() {
    __asm {
        push ebp
        mov ebp, ecx
        mov eax, dword ptr [ebp + 88h]
        sub eax, dword ptr [ebp + 84h]
        test eax, 0fffffffch
        ; Exact mapped bytes 0F 84 B4 00 00 00: je 0x5875274e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        mov edi, dword ptr [ebp + 84h]
        cmp edi, dword ptr [ebp + 88h]
        ; Exact mapped bytes 76 05: jbe 0x587526ae
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E8 C4 A5 22 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xa5
        __asm _emit 0x22
        __asm _emit 0x00
        push esi
        mov esi, dword ptr [ebp + 78h]
        push ebx
        ; Exact mapped bytes EB 0B: jmp 0x587526c0
        __asm _emit 0xeb
        __asm _emit 0x0b
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8D 64 24 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        mov ebx, dword ptr [ebp + 88h]
        cmp dword ptr [ebp + 84h], ebx
        ; Exact mapped bytes 76 05: jbe 0x587526d3
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E8 9F A5 22 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xa5
        __asm _emit 0x22
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 78h]
        test esi, esi
        ; Exact mapped bytes 74 04: je 0x587526de
        __asm _emit 0x74
        __asm _emit 0x04
        cmp esi, eax
        ; Exact mapped bytes 74 05: je 0x587526e3
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E8 8F A5 22 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xa5
        __asm _emit 0x22
        __asm _emit 0x00
        cmp edi, ebx
        ; Exact mapped bytes 74 60: je 0x58752747
        __asm _emit 0x74
        __asm _emit 0x60
        test esi, esi
        ; Exact mapped bytes 75 36: jne 0x58752721
        __asm _emit 0x75
        __asm _emit 0x36
        ; Exact mapped bytes E8 82 A5 22 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xa5
        __asm _emit 0x22
        __asm _emit 0x00
        xor eax, eax
        cmp edi, dword ptr [eax + 10h]
        ; Exact mapped bytes 72 05: jb 0x587526fc
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 76 A5 22 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xa5
        __asm _emit 0x22
        __asm _emit 0x00
        mov ecx, dword ptr [edi]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        test dl, 1
        ; Exact mapped bytes 75 22: jne 0x58752729
        __asm _emit 0x75
        __asm _emit 0x22
        test esi, esi
        ; Exact mapped bytes 75 1A: jne 0x58752725
        __asm _emit 0x75
        __asm _emit 0x1a
        ; Exact mapped bytes E8 62 A5 22 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xa5
        __asm _emit 0x22
        __asm _emit 0x00
        xor eax, eax
        cmp edi, dword ptr [eax + 10h]
        ; Exact mapped bytes 72 05: jb 0x5875271c
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 56 A5 22 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xa5
        __asm _emit 0x22
        __asm _emit 0x00
        add edi, 4
        ; Exact mapped bytes EB 9F: jmp 0x587526c0
        __asm _emit 0xeb
        __asm _emit 0x9f
        mov eax, dword ptr [esi]
        ; Exact mapped bytes EB CD: jmp 0x587526f2
        __asm _emit 0xeb
        __asm _emit 0xcd
        mov eax, dword ptr [esi]
        ; Exact mapped bytes EB E9: jmp 0x58752712
        __asm _emit 0xeb
        __asm _emit 0xe9
        test esi, esi
        ; Exact mapped bytes 75 16: jne 0x58752743
        __asm _emit 0x75
        __asm _emit 0x16
        ; Exact mapped bytes E8 40 A5 22 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xa5
        __asm _emit 0x22
        __asm _emit 0x00
        cmp edi, dword ptr [esi + 10h]
        ; Exact mapped bytes 72 05: jb 0x5875273c
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 36 A5 22 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xa5
        __asm _emit 0x22
        __asm _emit 0x00
        mov eax, dword ptr [edi]
        pop ebx
        pop esi
        pop edi
        pop ebp
        ret
        mov esi, dword ptr [esi]
        ; Exact mapped bytes EB EB: jmp 0x58752732
        __asm _emit 0xeb
        __asm _emit 0xeb
    }
}
