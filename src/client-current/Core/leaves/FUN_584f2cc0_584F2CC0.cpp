// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584F2CC0 .. +0x1BD bytes.
extern "C" __declspec(naked) void FUN_584f2cc0_584F2CC0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        push esi
        mov dword ptr [ebp - 0ch], ecx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 DE A2 F9 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xa2
        __asm _emit 0xf9
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], eax
        ; Exact mapped bytes 75 0A: jne 0x584f2ce1
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, 1
        ; Exact mapped bytes E9 95 01 00 00: jmp 0x584f2e76
        __asm _emit 0xe9
        __asm _emit 0x95
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 3
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 54h]
        mov dword ptr [ebp - 10h], ecx
        lea edx, [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 83 53 F9 FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x53
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0F: jmp 0x584f2d0f
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 0
        lea eax, [ebp - 18h]
        push eax
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 72 4D F9 FF: call 0x58487a80
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x4d
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 54h]
        mov dword ptr [ebp - 14h], edx
        lea eax, [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 6C 54 F9 FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x54
        __asm _emit 0xf9
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 A3 4C F9 FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x4c
        __asm _emit 0xf9
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 0F 84 3B 01 00 00: je 0x584f2e73
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x3b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 00 4D F9 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x4d
        __asm _emit 0xf9
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        cmp dword ptr [edx], 0ffffh
        ; Exact mapped bytes 0F 85 20 01 00 00: jne 0x584f2e6e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 EA 4C F9 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x4c
        __asm _emit 0xf9
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov ecx, dword ptr [eax + 4]
        cmp ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F 85 0A 01 00 00: jne 0x584f2e6e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 B4 A3 F9 FF: call 0x5848d120
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xa3
        __asm _emit 0xf9
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 C0 00 00 00: je 0x584f2e34
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 C4 4C F9 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x4c
        __asm _emit 0xf9
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        movzx esi, word ptr [edx + 18h]
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 C6 93 F9 FF: call 0x5848c150
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x93
        __asm _emit 0xf9
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 75 15: jne 0x584f2da3
        __asm _emit 0x75
        __asm _emit 0x15
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 AA 4C F9 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x4c
        __asm _emit 0xf9
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov ecx, dword ptr [eax + 0ch]
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes E9 8F 00 00 00: jmp 0x584f2e32
        __asm _emit 0xe9
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 95 4C F9 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x4c
        __asm _emit 0xf9
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        cmp dword ptr [edx + 10h], 0ffffh
        ; Exact mapped bytes 74 55: je 0x584f2e0b
        __asm _emit 0x74
        __asm _emit 0x55
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 82 4C F9 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x4c
        __asm _emit 0xf9
        __asm _emit 0xff
        mov esi, dword ptr [eax]
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 B8 90 F9 FF: call 0x5848be80
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x90
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 10h]
        cmp ecx, dword ptr [eax]
        ; Exact mapped bytes 75 3A: jne 0x584f2e09
        __asm _emit 0x75
        __asm _emit 0x3a
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 69 4C F9 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x4c
        __asm _emit 0xf9
        __asm _emit 0xff
        mov esi, dword ptr [eax]
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 9F 90 F9 FF: call 0x5848be80
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x90
        __asm _emit 0xf9
        __asm _emit 0xff
        mov edx, dword ptr [esi + 14h]
        cmp edx, dword ptr [eax + 4]
        ; Exact mapped bytes 75 20: jne 0x584f2e09
        __asm _emit 0x75
        __asm _emit 0x20
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 4F 4C F9 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x4c
        __asm _emit 0xf9
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        cmp dword ptr [eax + 14h], 0
        ; Exact mapped bytes 74 10: je 0x584f2e09
        __asm _emit 0x74
        __asm _emit 0x10
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 3F 4C F9 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x4c
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 0ch]
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes EB 27: jmp 0x584f2e32
        __asm _emit 0xeb
        __asm _emit 0x27
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 2D 4C F9 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x4c
        __asm _emit 0xf9
        __asm _emit 0xff
        mov esi, dword ptr [eax]
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 93 A1 F9 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xa1
        __asm _emit 0xf9
        __asm _emit 0xff
        cmp dword ptr [esi + 14h], eax
        ; Exact mapped bytes 75 10: jne 0x584f2e32
        __asm _emit 0x75
        __asm _emit 0x10
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 16 4C F9 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x4c
        __asm _emit 0xf9
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov ecx, dword ptr [eax + 0ch]
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes EB 3A: jmp 0x584f2e6e
        __asm _emit 0xeb
        __asm _emit 0x3a
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 04 4C F9 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x4c
        __asm _emit 0xf9
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        cmp dword ptr [edx + 10h], 0ffffh
        ; Exact mapped bytes 75 27: jne 0x584f2e6e
        __asm _emit 0x75
        __asm _emit 0x27
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 F1 4B F9 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x4b
        __asm _emit 0xf9
        __asm _emit 0xff
        mov esi, dword ptr [eax]
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 57 A1 F9 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xa1
        __asm _emit 0xf9
        __asm _emit 0xff
        cmp dword ptr [esi + 14h], eax
        ; Exact mapped bytes 75 10: jne 0x584f2e6e
        __asm _emit 0x75
        __asm _emit 0x10
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 DA 4B F9 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x4b
        __asm _emit 0xf9
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov ecx, dword ptr [eax + 0ch]
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes E9 8D FE FF FF: jmp 0x584f2d00
        __asm _emit 0xe9
        __asm _emit 0x8d
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
