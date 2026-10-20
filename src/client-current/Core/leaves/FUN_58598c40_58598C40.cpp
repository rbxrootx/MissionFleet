// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58598C40 .. +0x1BA bytes.
extern "C" __declspec(naked) void FUN_58598c40_58598C40() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 44h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 28h], ecx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 38h], eax
        mov dword ptr [ebp - 2ch], 0
        mov ecx, dword ptr [ebp - 28h]
        cmp dword ptr [ecx + 0fch], 0c8h
        ; Exact mapped bytes 75 23: jne 0x58598c92
        __asm _emit 0x75
        __asm _emit 0x23
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx + 0cch]
        mov ecx, dword ptr [edx + 0d0h]
        mov dword ptr [ebp - 34h], eax
        mov dword ptr [ebp - 30h], ecx
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx + 0d4h]
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes EB 2D: jmp 0x58598cbf
        __asm _emit 0xeb
        __asm _emit 0x2d
        mov ecx, dword ptr [ebp - 28h]
        cmp dword ptr [ecx + 0fch], 64h
        ; Exact mapped bytes 75 21: jne 0x58598cbf
        __asm _emit 0x75
        __asm _emit 0x21
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx + 0b8h]
        mov ecx, dword ptr [edx + 0bch]
        mov dword ptr [ebp - 34h], eax
        mov dword ptr [ebp - 30h], ecx
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx + 0c0h]
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 2ch]
        push ecx
        lea edx, [ebp - 34h]
        push edx
        mov eax, dword ptr [ebp - 38h]
        push eax
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 2A BD EE FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xbd
        __asm _emit 0xee
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 A1 EC FF FF: call 0x58597980
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 28h]
        cmp dword ptr [ecx + 98h], -1
        ; Exact mapped bytes 0F 84 FA 00 00 00: je 0x58598dea
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 28h]
        cmp dword ptr [edx + 9ch], -1
        ; Exact mapped bytes 0F 84 EA 00 00 00: je 0x58598dea
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xea
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [eax + 98h]
        cmp edx, dword ptr [ecx + 90h]
        ; Exact mapped bytes 75 18: jne 0x58598d2c
        __asm _emit 0x75
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [eax + 9ch]
        cmp edx, dword ptr [ecx + 94h]
        ; Exact mapped bytes 0F 84 BE 00 00 00: je 0x58598dea
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx + 98h]
        mov dword ptr [eax + 90h], edx
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx + 9ch]
        mov dword ptr [eax + 94h], edx
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [eax + 9ch]
        push ecx
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx + 98h]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 54 FA FF FF: call 0x585987c0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ecx + 104h], eax
        mov edx, dword ptr [ebp - 28h]
        cmp dword ptr [edx + 0fch], 64h
        ; Exact mapped bytes 75 69: jne 0x58598dea
        __asm _emit 0x75
        __asm _emit 0x69
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [eax + 90h]
        imul ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx + 94h]
        lea ecx, [ecx + eax + 1]
        mov dword ptr [ebp - 3ch], ecx
        push 588ab01ch
        ; Exact mapped bytes E8 48 92 F8 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x92
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 40h], eax
        mov edx, dword ptr [ebp - 3ch]
        push edx
        mov eax, dword ptr [ebp - 40h]
        push eax
        lea ecx, [ebp - 24h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx + 500h]
        mov dword ptr [ebp - 44h], eax
        lea ecx, [ebp - 24h]
        push ecx
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 B5 53 F3 FF: call 0x584ce190
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x53
        __asm _emit 0xf3
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 28h]
        mov ecx, dword ptr [edx + 500h]
        ; Exact mapped bytes E8 D7 57 F3 FF: call 0x584ce5c0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x57
        __asm _emit 0xf3
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 5C 82 29 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x82
        __asm _emit 0x29
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
