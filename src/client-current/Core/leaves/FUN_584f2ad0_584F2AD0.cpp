// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584F2AD0 .. +0x1E4 bytes.
extern "C" __declspec(naked) void FUN_584f2ad0_584F2AD0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        push esi
        mov dword ptr [ebp - 0ch], ecx
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 9E 93 F9 FF: call 0x5848be80
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x93
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax]
        ; Exact mapped bytes 75 1A: jne 0x584f2b03
        __asm _emit 0x75
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 8F 93 F9 FF: call 0x5848be80
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x93
        __asm _emit 0xf9
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 0ch]
        cmp edx, dword ptr [eax + 4]
        ; Exact mapped bytes 75 0A: jne 0x584f2b03
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, 1
        ; Exact mapped bytes E9 AA 01 00 00: jmp 0x584f2cad
        __asm _emit 0xe9
        __asm _emit 0xaa
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
        ; Exact mapped bytes E8 61 55 F9 FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x55
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0F: jmp 0x584f2b31
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 0
        lea eax, [ebp - 18h]
        push eax
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 50 4F F9 FF: call 0x58487a80
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x4f
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 54h]
        mov dword ptr [ebp - 14h], edx
        lea eax, [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 4A 56 F9 FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x56
        __asm _emit 0xf9
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 81 4E F9 FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x4e
        __asm _emit 0xf9
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 0F 84 50 01 00 00: je 0x584f2caa
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 DE 4E F9 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x4e
        __asm _emit 0xf9
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov eax, dword ptr [edx]
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F 85 36 01 00 00: jne 0x584f2ca5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x36
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 C9 4E F9 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x4e
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 4]
        cmp edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 0F 85 20 01 00 00: jne 0x584f2ca5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 B3 4E F9 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x4e
        __asm _emit 0xf9
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        movzx ecx, word ptr [eax + 8]
        test ecx, ecx
        ; Exact mapped bytes 0F 85 0A 01 00 00: jne 0x584f2ca5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 7D A5 F9 FF: call 0x5848d120
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xa5
        __asm _emit 0xf9
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 C0 00 00 00: je 0x584f2c6b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 8D 4E F9 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x4e
        __asm _emit 0xf9
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        movzx esi, word ptr [edx + 18h]
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 8F 95 F9 FF: call 0x5848c150
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x95
        __asm _emit 0xf9
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 75 15: jne 0x584f2bda
        __asm _emit 0x75
        __asm _emit 0x15
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 73 4E F9 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x4e
        __asm _emit 0xf9
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov ecx, dword ptr [eax + 0ch]
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes E9 8F 00 00 00: jmp 0x584f2c69
        __asm _emit 0xe9
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 5E 4E F9 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x4e
        __asm _emit 0xf9
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        cmp dword ptr [edx + 10h], 0ffffh
        ; Exact mapped bytes 74 55: je 0x584f2c42
        __asm _emit 0x74
        __asm _emit 0x55
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 4B 4E F9 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x4e
        __asm _emit 0xf9
        __asm _emit 0xff
        mov esi, dword ptr [eax]
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 81 92 F9 FF: call 0x5848be80
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x92
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 10h]
        cmp ecx, dword ptr [eax]
        ; Exact mapped bytes 75 3A: jne 0x584f2c40
        __asm _emit 0x75
        __asm _emit 0x3a
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 32 4E F9 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x4e
        __asm _emit 0xf9
        __asm _emit 0xff
        mov esi, dword ptr [eax]
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 68 92 F9 FF: call 0x5848be80
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x92
        __asm _emit 0xf9
        __asm _emit 0xff
        mov edx, dword ptr [esi + 14h]
        cmp edx, dword ptr [eax + 4]
        ; Exact mapped bytes 75 20: jne 0x584f2c40
        __asm _emit 0x75
        __asm _emit 0x20
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 18 4E F9 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x4e
        __asm _emit 0xf9
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        cmp dword ptr [eax + 14h], 0
        ; Exact mapped bytes 74 10: je 0x584f2c40
        __asm _emit 0x74
        __asm _emit 0x10
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 08 4E F9 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x4e
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 0ch]
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes EB 27: jmp 0x584f2c69
        __asm _emit 0xeb
        __asm _emit 0x27
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 F6 4D F9 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x4d
        __asm _emit 0xf9
        __asm _emit 0xff
        mov esi, dword ptr [eax]
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 5C A3 F9 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xa3
        __asm _emit 0xf9
        __asm _emit 0xff
        cmp dword ptr [esi + 14h], eax
        ; Exact mapped bytes 75 10: jne 0x584f2c69
        __asm _emit 0x75
        __asm _emit 0x10
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 DF 4D F9 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x4d
        __asm _emit 0xf9
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov ecx, dword ptr [eax + 0ch]
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes EB 3A: jmp 0x584f2ca5
        __asm _emit 0xeb
        __asm _emit 0x3a
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 CD 4D F9 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x4d
        __asm _emit 0xf9
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        cmp dword ptr [edx + 10h], 0ffffh
        ; Exact mapped bytes 75 27: jne 0x584f2ca5
        __asm _emit 0x75
        __asm _emit 0x27
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 BA 4D F9 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x4d
        __asm _emit 0xf9
        __asm _emit 0xff
        mov esi, dword ptr [eax]
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 20 A3 F9 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xa3
        __asm _emit 0xf9
        __asm _emit 0xff
        cmp dword ptr [esi + 14h], eax
        ; Exact mapped bytes 75 10: jne 0x584f2ca5
        __asm _emit 0x75
        __asm _emit 0x10
        lea ecx, [ebp - 4]
        ; Exact mapped bytes E8 A3 4D F9 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x4d
        __asm _emit 0xf9
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov ecx, dword ptr [eax + 0ch]
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes E9 78 FE FF FF: jmp 0x584f2b22
        __asm _emit 0xe9
        __asm _emit 0x78
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
