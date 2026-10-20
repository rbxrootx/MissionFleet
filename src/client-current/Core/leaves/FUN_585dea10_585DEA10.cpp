// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585DEA10 .. +0x208 bytes.
extern "C" __declspec(naked) void FUN_585dea10_585DEA10() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 5a0h], 40000000h
        ; Exact mapped bytes 0F 85 E6 01 00 00: jne 0x585dec12
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 0C DA EA FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xda
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 A5 5F EA FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x5f
        __asm _emit 0xea
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 CF 01 00 00: je 0x585dec12
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], 0
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x585dea5c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 8
        ; Exact mapped bytes 7D 69: jge 0x585deacb
        __asm _emit 0x7d
        __asm _emit 0x69
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + edx*4 + 29ch], 0
        ; Exact mapped bytes 74 57: je 0x585deac9
        __asm _emit 0x74
        __asm _emit 0x57
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 43 7F EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x7f
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 74 D2 EA FF: call 0x5848bd00
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xd2
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 2D 7F EA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x7f
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 2D: je 0x585deac9
        __asm _emit 0x74
        __asm _emit 0x2d
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 3C D4 EA FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xd4
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 D1 6F EB FF: call 0x58495a80
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x6f
        __asm _emit 0xeb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 16: je 0x585deac9
        __asm _emit 0x74
        __asm _emit 0x16
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 D5 43 FF FF: call 0x585d2e90
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x43
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 09: jne 0x585deac9
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 14h], 1
        ; Exact mapped bytes EB 02: jmp 0x585deacb
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB 88: jmp 0x585dea53
        __asm _emit 0xeb
        __asm _emit 0x88
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 106fch]
        ; Exact mapped bytes E8 57 6C EB FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x6c
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 106fch]
        ; Exact mapped bytes E8 D6 5E EA FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x5e
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp - 1ch]
        push edx
        mov eax, dword ptr [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 1F 29 18 00: call 0x58761420
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x29
        __asm _emit 0x18
        __asm _emit 0x00
        cmp eax, 40000000h
        ; Exact mapped bytes 75 7B: jne 0x585deb83
        __asm _emit 0x75
        __asm _emit 0x7b
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 5a0h], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 1072ch], eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 27 D6 EA FF: call 0x5848c150
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xd6
        __asm _emit 0xea
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 106b4h], eax
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + 278h]
        test eax, eax
        ; Exact mapped bytes 75 3E: jne 0x585deb7e
        __asm _emit 0x75
        __asm _emit 0x3e
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 25 3F FF FF: call 0x585d2a70
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x3f
        __asm _emit 0xff
        __asm _emit 0xff
        movzx ecx, al
        cmp ecx, 1
        ; Exact mapped bytes 74 2B: je 0x585deb7e
        __asm _emit 0x74
        __asm _emit 0x2b
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 75 5E FF FF: call 0x585d49d0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x5e
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 75 10: jne 0x585deb70
        __asm _emit 0x75
        __asm _emit 0x10
        push 1
        ; Exact mapped bytes 8B 0D 54 8C 94 58: mov ecx, dword ptr [0x58948c54]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x54
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 63 DD 14 00: call 0x5872c8d0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xdd
        __asm _emit 0x14
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 0E: jmp 0x585deb7e
        __asm _emit 0xeb
        __asm _emit 0x0e
        push 2
        ; Exact mapped bytes 8B 0D 54 8C 94 58: mov ecx, dword ptr [0x58948c54]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x54
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 53 DD 14 00: call 0x5872c8d0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xdd
        __asm _emit 0x14
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 8F 00 00 00: jmp 0x585dec12
        __asm _emit 0xe9
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 1072ch], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 106b4h], 0ffffffffh
        ; Exact mapped bytes 8B 0D 54 8C 94 58: mov ecx, dword ptr [0x58948c54]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x54
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 88 6B EB FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x6b
        __asm _emit 0xeb
        __asm _emit 0xff
        cmp eax, 3f1h
        ; Exact mapped bytes 74 63: je 0x585dec12
        __asm _emit 0x74
        __asm _emit 0x63
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + 278h]
        test edx, edx
        ; Exact mapped bytes 75 21: jne 0x585debde
        __asm _emit 0x75
        __asm _emit 0x21
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A8 3E FF FF: call 0x585d2a70
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x3e
        __asm _emit 0xff
        __asm _emit 0xff
        movzx eax, al
        cmp eax, 1
        ; Exact mapped bytes 74 0E: je 0x585debde
        __asm _emit 0x74
        __asm _emit 0x0e
        push 0
        ; Exact mapped bytes 8B 0D 54 8C 94 58: mov ecx, dword ptr [0x58948c54]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x54
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 F3 DC 14 00: call 0x5872c8d0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xdc
        __asm _emit 0x14
        __asm _emit 0x00
        nop
        ; Exact mapped bytes 8B 0D 54 8C 94 58: mov ecx, dword ptr [0x58948c54]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x54
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 D7 5D EA FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x5d
        __asm _emit 0xea
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 75 24: jne 0x585dec12
        __asm _emit 0x75
        __asm _emit 0x24
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 77 3E FF FF: call 0x585d2a70
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x3e
        __asm _emit 0xff
        __asm _emit 0xff
        movzx ecx, al
        cmp ecx, 1
        ; Exact mapped bytes 74 11: je 0x585dec12
        __asm _emit 0x74
        __asm _emit 0x11
        push 12ch
        ; Exact mapped bytes 8B 0D 54 8C 94 58: mov ecx, dword ptr [0x58948c54]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x54
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 BF DC 14 00: call 0x5872c8d0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xdc
        __asm _emit 0x14
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
