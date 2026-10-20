// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587167F0 .. +0x182 bytes.
extern "C" __declspec(naked) void FUN_587167f0_587167F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push esi
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 84 67 01 00 00: je 0x5871696b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x67
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A4 67 D7 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x67
        __asm _emit 0xd7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        cmp eax, dword ptr [ecx + 0d0h]
        ; Exact mapped bytes 0F 85 50 01 00 00: jne 0x5871696b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 1D 5C D7 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x5c
        __asm _emit 0xd7
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 B6 E1 D6 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xe1
        __asm _emit 0xd6
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 50 04: mov dx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        movzx eax, dx
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 62 EF FF FF: call 0x587157a0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 93 F1 FF FF: call 0x587159e0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx*8 + 7ch]
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ecx + eax]
        ; Exact mapped bytes E8 46 EF D7 FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xef
        __asm _emit 0xd7
        __asm _emit 0xff
        cmp dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes 0F 84 F8 00 00 00: je 0x5871696b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx*8 + 7ch]
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [eax + edx]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 F9 48 0A 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x48
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 0b4h]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 DD 48 0A 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x48
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax*4 + 104h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 120h], 0
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 54 F0 D7 FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xf0
        __asm _emit 0xd7
        __asm _emit 0xff
        cmp eax, 8
        ; Exact mapped bytes 74 10: je 0x587168f1
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 44 F0 D7 FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xf0
        __asm _emit 0xd7
        __asm _emit 0xff
        cmp eax, 9
        ; Exact mapped bytes 75 46: jne 0x58716937
        __asm _emit 0x75
        __asm _emit 0x46
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 C4 00 D7 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0xd7
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 AD 66 D7 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x66
        __asm _emit 0xd7
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A3 66 D7 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x66
        __asm _emit 0xd7
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 75 13: jne 0x58716924
        __asm _emit 0x75
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax*4 + 0e8h], 1
        ; Exact mapped bytes EB 11: jmp 0x58716935
        __asm _emit 0xeb
        __asm _emit 0x11
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + edx*4 + 0e8h], 0
        ; Exact mapped bytes EB 34: jmp 0x5871696b
        __asm _emit 0xeb
        __asm _emit 0x34
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 EE EF D7 FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xef
        __asm _emit 0xd7
        __asm _emit 0xff
        cmp eax, 7
        ; Exact mapped bytes 74 13: je 0x5871695a
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx*4 + 0e8h], 1
        ; Exact mapped bytes EB 11: jmp 0x5871696b
        __asm _emit 0xeb
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax*4 + 0e8h], 0
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
