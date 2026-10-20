// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5881A2E0 .. +0x33B bytes.
extern "C" __declspec(naked) void FUN_5881a2e0() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        test al, 2
        ; Exact mapped bytes 0F 84 25 03 00 00: je 0x5881a614
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x25
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 3ch]
        push edi
        mov edi, dword ptr [esp + 0ch]
        test eax, eax
        ; Exact mapped bytes 74 26: je 0x5881a321
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [eax + 34h]
        test eax, eax
        ; Exact mapped bytes 0F 84 B6 01 00 00: je 0x5881a4bc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 10h]
        push edi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 3ch]
        cmp eax, dword ptr [ecx + 34h]
        ; Exact mapped bytes 74 09: je 0x5881a321
        __asm _emit 0x74
        __asm _emit 0x09
        test eax, eax
        ; Exact mapped bytes 75 EA: jne 0x5881a306
        __asm _emit 0x75
        __asm _emit 0xea
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [edi + 4]
        push ebp
        cmp eax, 201h
        ; Exact mapped bytes 0F 87 BF 02 00 00: ja 0x5881a5ef
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xbf
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 BC 01 00 00: je 0x5881a4f2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 100h
        ; Exact mapped bytes 0F 84 5A 01 00 00: je 0x5881a49b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x5a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 200h
        ; Exact mapped bytes 0F 85 6F 01 00 00: jne 0x5881a4bb
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 74h]
        cmp dword ptr [edx + 88h], 0
        ; Exact mapped bytes 0F 84 2A 01 00 00: je 0x5881a486
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4]
        ; Exact mapped bytes 8B 3D C8 84 A2 58: mov edi, dword ptr [0x58a284c8]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [edi + 4]
        lea edx, [eax + 8]
        cmp ecx, edx
        ; Exact mapped bytes 0F 8E 13 01 00 00: jle 0x5881a486
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x13
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add eax, 190h
        cmp ecx, eax
        ; Exact mapped bytes 0F 8D 06 01 00 00: jge 0x5881a486
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x06
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 8]
        mov eax, dword ptr [edi + 8]
        lea ecx, [edx + 1ch]
        cmp eax, ecx
        ; Exact mapped bytes 0F 8E F5 00 00 00: jle 0x5881a486
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xf5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [edx + 96h]
        cmp eax, ecx
        ; Exact mapped bytes 0F 8D E7 00 00 00: jge 0x5881a486
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xe7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 74h]
        sub eax, edx
        sub eax, 1ch
        cdq
        idiv dword ptr [ecx + 5ch]
        mov edi, dword ptr [ecx + 88h]
        mov ebp, eax
        ; Exact mapped bytes E8 B8 DD 0E 00: call 0x58908170
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xdd
        __asm _emit 0x0e
        __asm _emit 0x00
        sub edi, ebp
        cmp eax, edi
        ; Exact mapped bytes 0F 8D C4 00 00 00: jge 0x5881a486
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 74h]
        mov ecx, dword ptr [edx + 5ch]
        mov edx, dword ptr [esi + 8]
        imul ecx, ebp
        mov eax, dword ptr [esi + 9ch]
        lea ecx, [ecx + edx + 1ah]
        cmp ecx, dword ptr [eax + 8]
        ; Exact mapped bytes 75 0D: jne 0x5881a3ea
        __asm _emit 0x75
        __asm _emit 0x0d
        ; Exact mapped bytes 66 8B 50 24: mov dx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x24
        test dl, 1
        ; Exact mapped bytes 0F 85 D1 00 00 00: jne 0x5881a4bb
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 74h]
        mov ecx, dword ptr [eax + 5ch]
        mov edx, dword ptr [esi + 8]
        imul ecx, ebp
        lea eax, [ecx + edx + 1ah]
        mov ecx, dword ptr [esi + 9ch]
        push eax
        ; Exact mapped bytes E8 5A 8F 0E 00: call 0x58903360
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x8f
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 9ch]
        push 1
        ; Exact mapped bytes E8 DD 71 F1 FF: call 0x587315f0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x71
        __asm _emit 0xf1
        __asm _emit 0xff
        ; Exact mapped bytes A1 F0 46 A2 58: mov eax, dword ptr [0x58a246f0]
        __asm _emit 0xa1
        __asm _emit 0xf0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 170h], 2
        ; Exact mapped bytes 7E 14: jle 0x5881a435
        __asm _emit 0x7e
        __asm _emit 0x14
        cmp dword ptr [eax + 194h], 0
        ; Exact mapped bytes 74 0B: je 0x5881a435
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [eax + 194h]
        mov ecx, dword ptr [ecx + 8]
        ; Exact mapped bytes EB 02: jmp 0x5881a437
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        ; Exact mapped bytes 8B 15 F8 48 A2 58: mov edx, dword ptr [0x58a248f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes E8 4D D5 0E 00: call 0x58907990
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xd5
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes A1 F0 46 A2 58: mov eax, dword ptr [0x58a246f0]
        __asm _emit 0xa1
        __asm _emit 0xf0
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 170h], 2
        ; Exact mapped bytes 7E 23: jle 0x5881a474
        __asm _emit 0x7e
        __asm _emit 0x23
        cmp dword ptr [eax + 194h], 0
        ; Exact mapped bytes 74 1A: je 0x5881a474
        __asm _emit 0x74
        __asm _emit 0x1a
        mov eax, dword ptr [eax + 194h]
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        push 0
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        pop ebp
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        xor ecx, ecx
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        push ecx
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        pop ebp
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 9ch]
        push 0
        ; Exact mapped bytes E8 5D 71 F1 FF: call 0x587315f0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x71
        __asm _emit 0xf1
        __asm _emit 0xff
        pop ebp
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov edi, dword ptr [edi + 8]
        lea eax, [edi - 0dh]
        cmp eax, 1bh
        ; Exact mapped bytes 77 15: ja 0x5881a4bb
        __asm _emit 0x77
        __asm _emit 0x15
        movzx ecx, byte ptr [eax + 5881a630h]
        ; Exact mapped bytes FF 24 8D 1C A6 81 58: jmp dword ptr [ecx*4 + 0x5881a61c]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0x1c
        __asm _emit 0xa6
        __asm _emit 0x81
        __asm _emit 0x58
        mov ecx, esi
        ; Exact mapped bytes E8 C5 F4 FF FF: call 0x58819980
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        pop ebp
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 E6 F4 FF FF: call 0x588199b0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        pop ebp
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 E7 F6 FF FF: call 0x58819bc0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        pop ebp
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 8]
        mov ecx, esi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        pop ebp
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 9ch]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        test dl, 1
        ; Exact mapped bytes 74 BA: je 0x5881a4bb
        __asm _emit 0x74
        __asm _emit 0xba
        ; Exact mapped bytes A1 D8 46 A2 58: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xa1
        __asm _emit 0xd8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edi, 24h
        cmp dword ptr [eax + 170h], edi
        ; Exact mapped bytes 7E 17: jle 0x5881a52a
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 194h], 0
        ; Exact mapped bytes 74 0E: je 0x5881a52a
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 194h]
        mov ecx, dword ptr [eax + 90h]
        ; Exact mapped bytes EB 02: jmp 0x5881a52c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        ; Exact mapped bytes 8B 15 F8 48 A2 58: mov edx, dword ptr [0x58a248f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes E8 58 D4 0E 00: call 0x58907990
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xd4
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes A1 D8 46 A2 58: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xa1
        __asm _emit 0xd8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 170h], edi
        ; Exact mapped bytes 7E 17: jle 0x5881a55c
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp dword ptr [eax + 194h], 0
        ; Exact mapped bytes 74 0E: je 0x5881a55c
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 194h]
        mov ecx, dword ptr [eax + 90h]
        ; Exact mapped bytes EB 02: jmp 0x5881a55e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        push 0
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes A1 C8 84 A2 58: mov eax, dword ptr [0x58a284c8]
        __asm _emit 0xa1
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [eax + 4]
        push ecx
        mov ecx, dword ptr [esi + 74h]
        push edx
        ; Exact mapped bytes E8 D4 E1 0E 00: call 0x58908750
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xe1
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 74h]
        ; Exact mapped bytes E8 3C DC 0E 00: call 0x589081c0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xdc
        __asm _emit 0x0e
        __asm _emit 0x00
        cmp eax, -1
        ; Exact mapped bytes 74 2B: je 0x5881a5b4
        __asm _emit 0x74
        __asm _emit 0x2b
        lea edi, [esi + 78h]
        mov ebp, 5
        mov ecx, dword ptr [esi + 74h]
        ; Exact mapped bytes E8 27 DC 0E 00: call 0x589081c0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xdc
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [edi]
        push eax
        ; Exact mapped bytes E8 8F E2 0E 00: call 0x58908830
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xe2
        __asm _emit 0x0e
        __asm _emit 0x00
        add edi, 4
        sub ebp, 1
        ; Exact mapped bytes 75 E8: jne 0x5881a591
        __asm _emit 0x75
        __asm _emit 0xe8
        mov eax, dword ptr [esi + 8ch]
        ; Exact mapped bytes 66 83 48 24 02: or word ptr [eax + 0x24], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x02
        mov ecx, dword ptr [esi + 74h]
        mov edi, dword ptr [ecx + 5ch]
        ; Exact mapped bytes E8 01 DC 0E 00: call 0x589081c0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xdc
        __asm _emit 0x0e
        __asm _emit 0x00
        imul eax, edi
        mov ecx, dword ptr [esi + 8]
        lea eax, [eax + ecx + 1ah]
        mov ecx, dword ptr [esi + 9ch]
        push eax
        ; Exact mapped bytes E8 8B 8D 0E 00: call 0x58903360
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x0e
        __asm _emit 0x00
        mov eax, dword ptr [esi + 9ch]
        ; Exact mapped bytes 66 83 48 24 01: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        mov ecx, esi
        ; Exact mapped bytes E8 19 F4 FF FF: call 0x58819a00
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        pop ebp
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp eax, 20ah
        ; Exact mapped bytes 0F 85 C1 FE FF FF: jne 0x5881a4bb
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc1
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 83 7F 0A 00: cmp word ptr [edi + 0xa], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7f
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes 0F 8E BE FE FF FF: jle 0x5881a4c5
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xbe
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 74 F3 FF FF: call 0x58819980
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        pop ebp
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 34h]
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
