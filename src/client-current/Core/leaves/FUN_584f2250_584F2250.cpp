// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584F2250 .. +0x1EC bytes.
extern "C" __declspec(naked) void FUN_584f2250_584F2250() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 64h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        add eax, 58h
        mov dword ptr [ebp - 18h], eax
        lea ecx, [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 12 5E F9 FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x5e
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0F: jmp 0x584f2280
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 0
        lea edx, [ebp - 50h]
        push edx
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 01 58 F9 FF: call 0x58487a80
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x58
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        add eax, 58h
        mov dword ptr [ebp - 1ch], eax
        lea ecx, [ebp - 54h]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 FB 5E F9 FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x5e
        __asm _emit 0xf9
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 32 57 F9 FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x57
        __asm _emit 0xf9
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 74 33: je 0x584f22d8
        __asm _emit 0x74
        __asm _emit 0x33
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 93 57 F9 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x57
        __asm _emit 0xf9
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 17: je 0x584f22cf
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 20h], eax
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 55 E0: call dword ptr [ebp - 0x20]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xe0
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x584f22d6
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        ; Exact mapped bytes EB 99: jmp 0x584f2271
        __asm _emit 0xeb
        __asm _emit 0x99
        mov ecx, dword ptr [ebp - 4]
        add ecx, 58h
        ; Exact mapped bytes E8 0D 5E F9 FF: call 0x584880f0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x5e
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 80h], 0
        push 10h
        push 0
        mov edx, dword ptr [ebp - 4]
        add edx, 84h
        push edx
        ; Exact mapped bytes E8 0D AB 35 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xab
        __asm _emit 0x35
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 94h]
        ; Exact mapped bytes E8 FC 9B 06 00: call 0x5855bf10
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x9b
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 98h]
        ; Exact mapped bytes E8 4E A6 06 00: call 0x5855c970
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xa6
        __asm _emit 0x06
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a0h]
        push eax
        ; Exact mapped bytes 8B 0D 58 8C 94 58: mov ecx, dword ptr [0x58948c58]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x58
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 79 ED 06 00: call 0x585610b0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xed
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 50h], eax
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 50h], 0
        ; Exact mapped bytes 74 13: je 0x584f2359
        __asm _emit 0x74
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 50h]
        ; Exact mapped bytes E8 6F 0F 00 00: call 0x584f32c0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes EB 0A: jmp 0x584f2363
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 54h], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 54h], 0
        ; Exact mapped bytes 0F 84 C8 00 00 00: je 0x584f2438
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 54h]
        mov dword ptr [ebp - 28h], edx
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 F4 5C F9 FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x5c
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0F: jmp 0x584f239e
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 0
        lea ecx, [ebp - 58h]
        push ecx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 E3 56 F9 FF: call 0x58487a80
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x56
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 54h]
        mov dword ptr [ebp - 2ch], eax
        lea ecx, [ebp - 5ch]
        push ecx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 DD 5D F9 FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x5d
        __asm _emit 0xf9
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 14 56 F9 FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x56
        __asm _emit 0xf9
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 74 75: je 0x584f2438
        __asm _emit 0x74
        __asm _emit 0x75
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 9ch]
        cmp dword ptr [ebp - 14h], ecx
        ; Exact mapped bytes 75 58: jne 0x584f242a
        __asm _emit 0x75
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 54h]
        mov dword ptr [ebp - 4ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 54h]
        mov dword ptr [ebp - 30h], edx
        lea eax, [ebp - 60h]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 A0 5D F9 FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x5d
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 34h], ecx
        mov edx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 38h], edx
        mov eax, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 44h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 3ch], ecx
        mov edx, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 40h], edx
        mov eax, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 48h], eax
        mov ecx, dword ptr [ebp - 44h]
        push ecx
        mov edx, dword ptr [ebp - 48h]
        push edx
        lea eax, [ebp - 64h]
        push eax
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 59 29 00 00: call 0x584f4d80
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x29
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 0E: jmp 0x584f2438
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        ; Exact mapped bytes E9 57 FF FF FF: jmp 0x584f238f
        __asm _emit 0xe9
        __asm _emit 0x57
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
