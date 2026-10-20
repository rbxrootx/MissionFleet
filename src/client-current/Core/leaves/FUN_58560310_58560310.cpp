// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58560310 .. +0x158 bytes.
extern "C" __declspec(naked) void FUN_58560310_58560310() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 40h
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp - 10h]
        add eax, 158h
        mov dword ptr [ebp - 14h], eax
        lea ecx, [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 50 7D F2 FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x7d
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0F: jmp 0x58560342
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 0
        lea edx, [ebp - 2ch]
        push edx
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 3F 77 F2 FF: call 0x58487a80
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x77
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 10h]
        add eax, 158h
        mov dword ptr [ebp - 18h], eax
        lea ecx, [ebp - 30h]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 37 7E F2 FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x7e
        __asm _emit 0xf2
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 6E 76 F2 FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x76
        __asm _emit 0xf2
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 0F 84 F5 00 00 00: je 0x58560462
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 CB 76 F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x76
        __asm _emit 0xf2
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        movzx ecx, byte ptr [ebp + 0ch]
        cmp dword ptr [eax + 78h], ecx
        ; Exact mapped bytes 0F 85 D9 00 00 00: jne 0x5856045d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 B4 76 F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x76
        __asm _emit 0xf2
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov eax, dword ptr [edx + 88h]
        mov dword ptr [ebp - 1ch], eax
        lea ecx, [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 DD 7C F2 FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x7c
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0F: jmp 0x585603b5
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 0
        lea edx, [ebp - 34h]
        push edx
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 CC 76 F2 FF: call 0x58487a80
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x76
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 83 76 F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x76
        __asm _emit 0xf2
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov ecx, dword ptr [eax + 88h]
        mov dword ptr [ebp - 20h], ecx
        lea edx, [ebp - 38h]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 BC 7D F2 FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x7d
        __asm _emit 0xf2
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 F3 75 F2 FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x75
        __asm _emit 0xf2
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 74 77: je 0x5856045b
        __asm _emit 0x74
        __asm _emit 0x77
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 54 76 F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x76
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 88h]
        mov dword ptr [ebp - 24h], edx
        lea eax, [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 7D 7C F2 FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x7c
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0F: jmp 0x58560415
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 0
        lea ecx, [ebp - 3ch]
        push ecx
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 6C 76 F2 FF: call 0x58487a80
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x76
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 23 76 F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x76
        __asm _emit 0xf2
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov eax, dword ptr [edx + 88h]
        mov dword ptr [ebp - 28h], eax
        lea ecx, [ebp - 40h]
        push ecx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 5C 7D F2 FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x7d
        __asm _emit 0xf2
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 93 75 F2 FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x75
        __asm _emit 0xf2
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 74 12: je 0x58560456
        __asm _emit 0x74
        __asm _emit 0x12
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 F4 75 F2 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x75
        __asm _emit 0xf2
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov cl, byte ptr [ebp + 8]
        mov byte ptr [eax + 0dh], cl
        ; Exact mapped bytes EB B0: jmp 0x58560406
        __asm _emit 0xeb
        __asm _emit 0xb0
        ; Exact mapped bytes E9 4B FF FF FF: jmp 0x585603a6
        __asm _emit 0xe9
        __asm _emit 0x4b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 05: jmp 0x58560462
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 D1 FE FF FF: jmp 0x58560333
        __asm _emit 0xe9
        __asm _emit 0xd1
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
