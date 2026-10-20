// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5884D000 .. +0x329 bytes.
extern "C" __declspec(naked) void FUN_5884d000() {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        push edi
        test al, 2
        ; Exact mapped bytes 0F 84 0D 03 00 00: je 0x5884d31f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0d
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 3ch]
        mov ebx, dword ptr [esp + 14h]
        xor ebp, ebp
        cmp eax, ebp
        ; Exact mapped bytes 74 26: je 0x5884d045
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [eax + 34h]
        cmp eax, ebp
        ; Exact mapped bytes 74 16: je 0x5884d03c
        __asm _emit 0x74
        __asm _emit 0x16
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 10h]
        push ebx
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 3ch]
        cmp eax, dword ptr [ecx + 34h]
        ; Exact mapped bytes 74 0D: je 0x5884d045
        __asm _emit 0x74
        __asm _emit 0x0d
        cmp eax, ebp
        ; Exact mapped bytes 75 EA: jne 0x5884d026
        __asm _emit 0x75
        __asm _emit 0xea
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 4]
        cmp eax, 200h
        ; Exact mapped bytes 0F 87 DF 00 00 00: ja 0x5884d132
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xdf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 9F 00 00 00: je 0x5884d0f8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 102h
        ; Exact mapped bytes 0F 85 8B 02 00 00: jne 0x5884d2ef
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 90h], ebp
        ; Exact mapped bytes 0F 84 7F 02 00 00: je 0x5884d2ef
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 8]
        cmp eax, 9
        ; Exact mapped bytes 74 2C: je 0x5884d0a4
        __asm _emit 0x74
        __asm _emit 0x2c
        cmp eax, 0dh
        ; Exact mapped bytes 74 17: je 0x5884d094
        __asm _emit 0x74
        __asm _emit 0x17
        cmp eax, 1bh
        ; Exact mapped bytes 75 6D: jne 0x5884d0ef
        __asm _emit 0x75
        __asm _emit 0x6d
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 8]
        mov ecx, esi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 45 F8 FF FF: call 0x5884c8e0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 6ch]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        shr dl, 1
        test dl, 1
        ; Exact mapped bytes 74 1C: je 0x5884d0ce
        __asm _emit 0x74
        __asm _emit 0x1c
        mov ecx, dword ptr [esi + 6ch]
        push ebp
        ; Exact mapped bytes E8 65 45 EE FF: call 0x58731620
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x45
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 70h]
        push 1
        ; Exact mapped bytes E8 5B 45 EE FF: call 0x58731620
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x45
        __asm _emit 0xee
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 70h]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        shr cl, 1
        test cl, 1
        ; Exact mapped bytes 74 13: je 0x5884d0ef
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [esi + 6ch]
        push 1
        ; Exact mapped bytes E8 3A 45 EE FF: call 0x58731620
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x45
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 70h]
        push ebp
        ; Exact mapped bytes E8 31 45 EE FF: call 0x58731620
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x45
        __asm _emit 0xee
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp dword ptr [esi + 98h], ebp
        ; Exact mapped bytes 75 0C: jne 0x5884d10c
        __asm _emit 0x75
        __asm _emit 0x0c
        cmp dword ptr [esi + 94h], ebp
        ; Exact mapped bytes 0F 84 E3 01 00 00: je 0x5884d2ef
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D C8 84 A2 58: mov ecx, dword ptr [0x58a284c8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [ecx + 4]
        mov ecx, dword ptr [ecx + 8]
        sub ecx, dword ptr [esi + 0a0h]
        sub eax, dword ptr [esi + 9ch]
        push ecx
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 63 61 0B 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x61
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes E9 BD 01 00 00: jmp 0x5884d2ef
        __asm _emit 0xe9
        __asm _emit 0xbd
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 201h
        cmp eax, 4
        ; Exact mapped bytes 0F 87 AF 01 00 00: ja 0x5884d2ef
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xaf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 24 85 2C D3 84 58: jmp dword ptr [eax*4 + 0x5884d32c]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x2c
        __asm _emit 0xd3
        __asm _emit 0x84
        __asm _emit 0x58
        ; Exact mapped bytes 8B 15 C8 84 A2 58: mov edx, dword ptr [0x58a284c8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [esi + 54h]
        add edx, 4
        push edx
        ; Exact mapped bytes E8 E7 43 EE FF: call 0x58731540
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x43
        __asm _emit 0xee
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 5B 01 00 00: je 0x5884d2bc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x5b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 90h], ebp
        ; Exact mapped bytes 75 1D: jne 0x5884d186
        __asm _emit 0x75
        __asm _emit 0x1d
        ; Exact mapped bytes A1 84 45 A2 58: mov eax, dword ptr [0x58a24584]
        __asm _emit 0xa1
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 30h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 18h]
        push ebp
        push 64h
        push esi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov dword ptr [esi + 90h], 1
        ; Exact mapped bytes 8B 1D C8 84 A2 58: mov ebx, dword ptr [0x58a284c8]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edi, dword ptr [esi + 6ch]
        add ebx, 4
        push ebx
        mov ecx, edi
        ; Exact mapped bytes E8 A6 43 EE FF: call 0x58731540
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x43
        __asm _emit 0xee
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 1B: je 0x5884d1b9
        __asm _emit 0x74
        __asm _emit 0x1b
        push 1
        mov ecx, edi
        ; Exact mapped bytes E8 79 44 EE FF: call 0x58731620
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x44
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 70h]
        push ebp
        ; Exact mapped bytes E8 70 44 EE FF: call 0x58731620
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x44
        __asm _emit 0xee
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 70h]
        push ebx
        ; Exact mapped bytes E8 7E 43 EE FF: call 0x58731540
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x43
        __asm _emit 0xee
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 1B: je 0x5884d1e1
        __asm _emit 0x74
        __asm _emit 0x1b
        push ebp
        mov ecx, edi
        ; Exact mapped bytes E8 52 44 EE FF: call 0x58731620
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x44
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 70h]
        push 1
        ; Exact mapped bytes E8 48 44 EE FF: call 0x58731620
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x44
        __asm _emit 0xee
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [esi + 94h], 1
        ; Exact mapped bytes 8B 0D C8 84 A2 58: mov ecx, dword ptr [0x58a284c8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [ecx + 4]
        sub edx, dword ptr [esi + 4]
        pop edi
        mov dword ptr [esi + 9ch], edx
        ; Exact mapped bytes A1 C8 84 A2 58: mov eax, dword ptr [0x58a284c8]
        __asm _emit 0xa1
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 8]
        sub ecx, dword ptr [esi + 8]
        xor eax, eax
        mov dword ptr [esi + 0a0h], ecx
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp dword ptr [esi + 94h], ebp
        ; Exact mapped bytes 0F 84 CC 00 00 00: je 0x5884d2ef
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D C8 84 A2 58: mov ecx, dword ptr [0x58a284c8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [ecx + 4]
        mov ecx, dword ptr [ecx + 8]
        sub ecx, dword ptr [esi + 0a0h]
        sub eax, dword ptr [esi + 9ch]
        push ecx
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 4C 60 0B 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x60
        __asm _emit 0x0b
        __asm _emit 0x00
        mov dword ptr [esi + 98h], ebp
        mov dword ptr [esi + 94h], ebp
        ; Exact mapped bytes E9 9A 00 00 00: jmp 0x5884d2ef
        __asm _emit 0xe9
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 98h], ebp
        ; Exact mapped bytes EB C0: jmp 0x5884d21d
        __asm _emit 0xeb
        __asm _emit 0xc0
        ; Exact mapped bytes 8B 3D C8 84 A2 58: mov edi, dword ptr [0x58a284c8]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [esi + 54h]
        add edi, 4
        push edi
        ; Exact mapped bytes E8 D1 42 EE FF: call 0x58731540
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x42
        __asm _emit 0xee
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 49: je 0x5884d2bc
        __asm _emit 0x74
        __asm _emit 0x49
        mov ecx, dword ptr [esi + 6ch]
        push edi
        ; Exact mapped bytes E8 C4 42 EE FF: call 0x58731540
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x42
        __asm _emit 0xee
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 6F: jne 0x5884d2ef
        __asm _emit 0x75
        __asm _emit 0x6f
        mov ecx, dword ptr [esi + 70h]
        push edi
        ; Exact mapped bytes E8 B7 42 EE FF: call 0x58731540
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x42
        __asm _emit 0xee
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 62: jne 0x5884d2ef
        __asm _emit 0x75
        __asm _emit 0x62
        mov dword ptr [esi + 98h], 1
        ; Exact mapped bytes 8B 0D C8 84 A2 58: mov ecx, dword ptr [0x58a284c8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [ecx + 4]
        sub edx, dword ptr [esi + 4]
        mov dword ptr [esi + 9ch], edx
        ; Exact mapped bytes A1 C8 84 A2 58: mov eax, dword ptr [0x58a284c8]
        __asm _emit 0xa1
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 8]
        sub ecx, dword ptr [esi + 8]
        mov dword ptr [esi + 0a0h], ecx
        ; Exact mapped bytes EB 33: jmp 0x5884d2ef
        __asm _emit 0xeb
        __asm _emit 0x33
        cmp dword ptr [esi + 90h], ebp
        ; Exact mapped bytes 74 2B: je 0x5884d2ef
        __asm _emit 0x74
        __asm _emit 0x2b
        mov ecx, dword ptr [esi + 6ch]
        push ebp
        ; Exact mapped bytes E8 53 43 EE FF: call 0x58731620
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x43
        __asm _emit 0xee
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 70h]
        push ebp
        ; Exact mapped bytes E8 4A 43 EE FF: call 0x58731620
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x43
        __asm _emit 0xee
        __asm _emit 0xff
        ; Exact mapped bytes A1 84 45 A2 58: mov eax, dword ptr [0x58a24584]
        __asm _emit 0xa1
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 30h]
        mov edx, dword ptr [ecx]
        push ebp
        push 64h
        push eax
        mov eax, dword ptr [edx + 18h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov dword ptr [esi + 90h], ebp
        mov eax, dword ptr [esi + 3ch]
        cmp eax, ebp
        ; Exact mapped bytes 74 29: je 0x5884d31f
        __asm _emit 0x74
        __asm _emit 0x29
        mov eax, dword ptr [eax + 34h]
        cmp eax, ebp
        ; Exact mapped bytes 74 19: je 0x5884d316
        __asm _emit 0x74
        __asm _emit 0x19
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 10h]
        push ebx
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 3ch]
        cmp eax, dword ptr [ecx + 34h]
        ; Exact mapped bytes 74 0D: je 0x5884d31f
        __asm _emit 0x74
        __asm _emit 0x0d
        cmp eax, ebp
        ; Exact mapped bytes 75 EA: jne 0x5884d300
        __asm _emit 0x75
        __asm _emit 0xea
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
