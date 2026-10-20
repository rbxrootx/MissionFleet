// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5885C7F0 .. +0xC5 bytes.
extern "C" __declspec(naked) void FUN_5885c7f0() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        push edi
        test al, 2
        ; Exact mapped bytes 0F 84 AD 00 00 00: je 0x5885c8ad
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 BE 90 00 00 00 05: cmp word ptr [esi + 0x90], 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x05
        ; Exact mapped bytes 0F 85 9F 00 00 00: jne 0x5885c8ad
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 3ch]
        mov edi, dword ptr [esp + 0ch]
        test eax, eax
        ; Exact mapped bytes 74 24: je 0x5885c83d
        __asm _emit 0x74
        __asm _emit 0x24
        mov eax, dword ptr [eax + 34h]
        test eax, eax
        ; Exact mapped bytes 74 16: je 0x5885c836
        __asm _emit 0x74
        __asm _emit 0x16
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 10h]
        push edi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 3ch]
        cmp eax, dword ptr [ecx + 34h]
        ; Exact mapped bytes 74 0B: je 0x5885c83d
        __asm _emit 0x74
        __asm _emit 0x0b
        test eax, eax
        ; Exact mapped bytes 75 EA: jne 0x5885c820
        __asm _emit 0x75
        __asm _emit 0xea
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [edi + 4]
        cmp eax, 100h
        ; Exact mapped bytes 74 2F: je 0x5885c876
        __asm _emit 0x74
        __asm _emit 0x2f
        cmp eax, 201h
        ; Exact mapped bytes 75 5F: jne 0x5885c8ad
        __asm _emit 0x75
        __asm _emit 0x5f
        ; Exact mapped bytes 8B 15 C8 84 A2 58: mov edx, dword ptr [0x58a284c8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [esi + 0a8h]
        add edx, 4
        push edx
        ; Exact mapped bytes E8 DD 4C ED FF: call 0x58731540
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x4c
        __asm _emit 0xed
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 46: je 0x5885c8ad
        __asm _emit 0x74
        __asm _emit 0x46
        mov ecx, esi
        ; Exact mapped bytes E8 72 FA FF FF: call 0x5885c2e0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes A1 9C 45 A2 58: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 20d40h], 0
        ; Exact mapped bytes 75 29: jne 0x5885c8ad
        __asm _emit 0x75
        __asm _emit 0x29
        ; Exact mapped bytes 8B 0D C0 45 A2 58: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        shr dl, 1
        test dl, 1
        ; Exact mapped bytes 75 18: jne 0x5885c8ad
        __asm _emit 0x75
        __asm _emit 0x18
        ; Exact mapped bytes 8B 0D 2C 46 A2 58: mov ecx, dword ptr [0x58a2462c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        push edi
        ; Exact mapped bytes E8 1F 22 04 00: call 0x5889eac0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x22
        __asm _emit 0x04
        __asm _emit 0x00
        cmp eax, 0eh
        ; Exact mapped bytes 75 07: jne 0x5885c8ad
        __asm _emit 0x75
        __asm _emit 0x07
        mov ecx, esi
        ; Exact mapped bytes E8 33 FA FF FF: call 0x5885c2e0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
