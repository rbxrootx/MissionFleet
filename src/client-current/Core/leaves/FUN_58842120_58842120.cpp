// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58842120 .. +0xD97 bytes.
extern "C" __declspec(naked) void FUN_58842120_58842120() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, 0edd0h
        ; Exact mapped bytes E8 C3 F9 FE FF: call 0x58831af0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xf9
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push esi
        push edi
        mov dword ptr [ebp - 0ed84h], ecx
        mov dword ptr [ebp - 0ed90h], 135h
        mov byte ptr [ebp - 414h], 0
        push 103h
        push 0
        lea eax, [ebp - 413h]
        push eax
        ; Exact mapped bytes E8 AD AC 00 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov byte ptr [ebp - 310h], 0
        push 103h
        push 0
        lea eax, [ebp - 30fh]
        push eax
        ; Exact mapped bytes E8 90 AC 00 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov byte ptr [ebp - 108h], 0
        push 103h
        push 0
        lea eax, [ebp - 107h]
        push eax
        ; Exact mapped bytes E8 73 AC 00 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        and dword ptr [ebp - 0edd0h], 0
        and dword ptr [ebp - 0eda4h], 0
        mov byte ptr [ebp - 2118h], 0
        push 3ffh
        push 0
        lea eax, [ebp - 2117h]
        push eax
        ; Exact mapped bytes E8 48 AC 00 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov byte ptr [ebp - 518h], 0
        push 103h
        push 0
        lea eax, [ebp - 517h]
        push eax
        ; Exact mapped bytes E8 2B AC 00 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        and dword ptr [ebp - 0ed98h], 0
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 204h], 0
        ; Exact mapped bytes 75 08: jne 0x58842203
        __asm _emit 0x75
        __asm _emit 0x08
        push 69h
        pop eax
        ; Exact mapped bytes E9 A2 0C 00 00: jmp 0x58842ea5
        __asm _emit 0xe9
        __asm _emit 0xa2
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        inc eax
        imul eax, eax, 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BE 84 01 2C 02 00 00: movsx eax, byte ptr [ecx + eax + 0x22c]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x2c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 08: jne 0x58842220
        __asm _emit 0x75
        __asm _emit 0x08
        push 64h
        pop eax
        ; Exact mapped bytes E9 85 0C 00 00: jmp 0x58842ea5
        __asm _emit 0xe9
        __asm _emit 0x85
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 75 2A: jne 0x58842250
        __asm _emit 0x75
        __asm _emit 0x2a
        push dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 0ed84h]
        ; Exact mapped bytes E8 43 42 00 00: call 0x58846477
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ed90h], eax
        cmp dword ptr [ebp - 0ed90h], 0
        ; Exact mapped bytes 74 0B: je 0x5884224e
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 0ed90h]
        ; Exact mapped bytes E9 57 0C 00 00: jmp 0x58842ea5
        __asm _emit 0xe9
        __asm _emit 0x57
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 42: jmp 0x58842292
        __asm _emit 0xeb
        __asm _emit 0x42
        push 204h
        push 0
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B1 AB 00 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        push 400h
        push 0
        mov eax, dword ptr [ebp + 8]
        add eax, 24ch
        push eax
        ; Exact mapped bytes E8 99 AB 00 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        push 800h
        push 0
        mov eax, dword ptr [ebp + 8]
        add eax, 64ch
        push eax
        ; Exact mapped bytes E8 81 AB 00 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        push 8
        push 588f22c0h
        ; Exact mapped bytes E8 B5 A0 FF FF: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xa0
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push eax
        mov eax, dword ptr [ebp + 8]
        add eax, 22ch
        push eax
        ; Exact mapped bytes E8 82 3F 02 00: call 0x58866230
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x3f
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 32: je 0x588422e7
        __asm _emit 0x74
        __asm _emit 0x32
        movzx eax, byte ptr [ebp + 10h]
        test eax, eax
        ; Exact mapped bytes 75 2A: jne 0x588422e7
        __asm _emit 0x75
        __asm _emit 0x2a
        mov eax, dword ptr [ebp + 8]
        push dword ptr [eax + 204h]
        mov eax, dword ptr [ebp + 8]
        add eax, 22ch
        push eax
        mov ecx, dword ptr [ebp - 0ed84h]
        ; Exact mapped bytes E8 0F EB FF FF: call 0x58840de9
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 75 08: jne 0x588422e7
        __asm _emit 0x75
        __asm _emit 0x08
        push 6ah
        pop eax
        ; Exact mapped bytes E9 BE 0B 00 00: jmp 0x58842ea5
        __asm _emit 0xe9
        __asm _emit 0xbe
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ed90h], 135h
        lea ecx, [ebp - 0ed80h]
        ; Exact mapped bytes E8 97 CF FF FF: call 0x5883f293
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xcf
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        mov eax, dword ptr [eax + 204h]
        mov dword ptr [ebp - 0ed80h], eax
        mov eax, dword ptr [ebp + 8]
        add eax, 22ch
        push eax
        push 20h
        lea eax, [ebp - 0ed78h]
        push eax
        ; Exact mapped bytes E8 6E 54 01 00: call 0x58857790
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 0ch
        movzx eax, byte ptr [ebp + 0ch]
        cmp eax, 1
        ; Exact mapped bytes 75 09: jne 0x58842337
        __asm _emit 0x75
        __asm _emit 0x09
        and dword ptr [ebp - 0ed98h], 0
        ; Exact mapped bytes EB 26: jmp 0x5884235d
        __asm _emit 0xeb
        __asm _emit 0x26
        sub esp, 468h
        mov ecx, 11ah
        lea esi, [ebp - 0ed80h]
        mov edi, esp
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, dword ptr [ebp - 0ed84h]
        ; Exact mapped bytes E8 D3 EE FF FF: call 0x5884122a
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ed98h], eax
        cmp dword ptr [ebp - 0ed98h], 1
        ; Exact mapped bytes 0F 85 A5 01 00 00: jne 0x5884250f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ed84h]
        add eax, 8ch
        push eax
        ; Exact mapped bytes FF 15 48 42 89 58: call dword ptr [0x58894248]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 0ed84h]
        movzx eax, word ptr [eax + 9ah]
        push eax
        mov eax, dword ptr [ebp - 0ed84h]
        movzx eax, word ptr [eax + 98h]
        push eax
        mov eax, dword ptr [ebp - 0ed84h]
        movzx eax, word ptr [eax + 96h]
        push eax
        mov eax, dword ptr [ebp - 0ed84h]
        movzx eax, word ptr [eax + 94h]
        push eax
        mov eax, dword ptr [ebp - 0ed84h]
        movzx eax, word ptr [eax + 92h]
        push eax
        mov eax, dword ptr [ebp - 0ed84h]
        movzx eax, word ptr [eax + 8eh]
        push eax
        mov eax, dword ptr [ebp - 0ed84h]
        movzx eax, word ptr [eax + 8ch]
        push eax
        push 588f22d0h
        ; Exact mapped bytes E8 6B 9F FF FF: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x9f
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push eax
        lea eax, [ebp - 414h]
        push eax
        ; Exact mapped bytes E8 6A A7 CC FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xa7
        __asm _emit 0xcc
        __asm _emit 0xff
        add esp, 24h
        push 2
        pop eax
        imul eax, eax, 0
        mov ecx, dword ptr [ebp + 8]
        movzx eax, word ptr [ecx + eax + 64ch]
        test eax, eax
        ; Exact mapped bytes 74 1A: je 0x58842428
        __asm _emit 0x74
        __asm _emit 0x1a
        mov eax, dword ptr [ebp + 8]
        add eax, 64ch
        push eax
        ; Exact mapped bytes E8 F6 9E FF FF: call 0x5883c312
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x9e
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        mov dword ptr [ebp - 0eda4h], eax
        ; Exact mapped bytes E9 9D 00 00 00: jmp 0x588424c5
        __asm _emit 0xe9
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        inc eax
        imul eax, eax, 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BE 84 01 4C 02 00 00: movsx eax, byte ptr [ecx + eax + 0x24c]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x4c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 17: je 0x58842454
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp + 8]
        add eax, 24ch
        push eax
        ; Exact mapped bytes E8 AC 9E FF FF: call 0x5883c2f7
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x9e
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        mov dword ptr [ebp - 0eda4h], eax
        ; Exact mapped bytes EB 71: jmp 0x588424c5
        __asm _emit 0xeb
        __asm _emit 0x71
        mov byte ptr [ebp - 20ch], 0
        push 103h
        push 0
        lea eax, [ebp - 20bh]
        push eax
        ; Exact mapped bytes E8 A2 A9 00 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        and dword ptr [ebp - 0edbch], 0
        lea eax, [ebp - 0edbch]
        push eax
        lea eax, [ebp - 20ch]
        push eax
        ; Exact mapped bytes FF 15 04 40 89 58: call dword ptr [0x58894004]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x40
        __asm _emit 0x89
        __asm _emit 0x58
        xor eax, eax
        inc eax
        imul eax, eax, 0
        ; Exact mapped bytes 0F BE 84 05 F4 FD FF FF: movsx eax, byte ptr [ebp + eax - 0x20c]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x84
        __asm _emit 0x05
        __asm _emit 0xf4
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x588424b2
        __asm _emit 0x75
        __asm _emit 0x14
        lea eax, [ebp - 0edbch]
        push eax
        lea eax, [ebp - 20ch]
        push eax
        ; Exact mapped bytes FF 15 08 44 89 58: call dword ptr [0x58894408]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        lea eax, [ebp - 20ch]
        push eax
        ; Exact mapped bytes E8 39 9E FF FF: call 0x5883c2f7
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x9e
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        mov dword ptr [ebp - 0eda4h], eax
        push dword ptr [ebp - 0eda4h]
        lea eax, [ebp - 414h]
        push eax
        mov eax, dword ptr [ebp + 8]
        push dword ptr [eax + 204h]
        push 588f22f8h
        ; Exact mapped bytes E8 6E 9E FF FF: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x9e
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push eax
        lea eax, [ebp - 310h]
        push eax
        ; Exact mapped bytes E8 6D A6 CC FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xa6
        __asm _emit 0xcc
        __asm _emit 0xff
        add esp, 14h
        lea eax, [ebp - 108h]
        push eax
        lea eax, [ebp - 310h]
        push eax
        mov ecx, dword ptr [ebp - 0ed84h]
        ; Exact mapped bytes E8 48 D0 FF FF: call 0x5883f557
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xd0
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 2C 9D FF FF: call 0x5883c240
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x9d
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 1d18h], 0
        push 3ffh
        push 0
        lea eax, [ebp - 1d17h]
        push eax
        ; Exact mapped bytes E8 E2 A8 00 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov byte ptr [ebp - 1918h], 0
        push 13ffh
        push 0
        lea eax, [ebp - 1917h]
        push eax
        ; Exact mapped bytes E8 C5 A8 00 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov byte ptr [ebp - 0e918h], 0
        push 0c7ffh
        push 0
        lea eax, [ebp - 0e917h]
        push eax
        ; Exact mapped bytes E8 A8 A8 00 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        and dword ptr [ebp - 0edach], 0
        and dword ptr [ebp - 0edb4h], 0
        and dword ptr [ebp - 0ed88h], 0
        and dword ptr [ebp - 0edb8h], 0
        and dword ptr [ebp - 0ed9ch], 0
        and dword ptr [ebp - 0ed94h], 0
        and dword ptr [ebp - 0ed8ch], 0
        and dword ptr [ebp - 0edb0h], 0
        push 588f230ch
        ; Exact mapped bytes E8 A6 9D FF FF: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x9d
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        mov dword ptr [ebp - 0edc4h], eax
        push dword ptr [ebp - 0edc4h]
        push 104h
        lea eax, [ebp - 518h]
        push eax
        ; Exact mapped bytes E8 C5 51 01 00: call 0x58857790
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x51
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 0ch
        push 588f2328h
        ; Exact mapped bytes E8 7B 9D FF FF: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x9d
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push eax
        lea eax, [ebp - 1d18h]
        push eax
        ; Exact mapped bytes E8 7A A5 CC FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xa5
        __asm _emit 0xcc
        __asm _emit 0xff
        pop ecx
        pop ecx
        and dword ptr [ebp - 0eda0h], 0
        push 0
        push 0
        push 0
        push 0
        push 0
        lea eax, [ebp - 518h]
        push eax
        push 588f21fch
        ; Exact mapped bytes E8 49 9D FF FF: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x9d
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push eax
        mov eax, dword ptr [ebp - 0ed84h]
        push dword ptr [eax + 78h]
        mov eax, dword ptr [ebp - 0ed84h]
        ; Exact mapped bytes FF 50 58: call dword ptr [eax + 0x58]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x58
        mov dword ptr [ebp - 0eda0h], eax
        cmp dword ptr [ebp - 0eda0h], 0
        ; Exact mapped bytes 75 17: jne 0x58842644
        __asm _emit 0x75
        __asm _emit 0x17
        lea eax, [ebp - 108h]
        push eax
        ; Exact mapped bytes FF 15 04 43 89 58: call dword ptr [0x58894304]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov eax, 0cah
        ; Exact mapped bytes E9 61 08 00 00: jmp 0x58842ea5
        __asm _emit 0xe9
        __asm _emit 0x61
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        push 2
        pop eax
        imul eax, eax, 0
        mov ecx, dword ptr [ebp + 8]
        movzx eax, word ptr [ecx + eax + 64ch]
        test eax, eax
        ; Exact mapped bytes 74 2C: je 0x58842685
        __asm _emit 0x74
        __asm _emit 0x2c
        push 0
        push 0
        push 400h
        mov eax, dword ptr [ebp + 8]
        add eax, 24ch
        push eax
        push -1
        mov eax, dword ptr [ebp + 8]
        add eax, 64ch
        push eax
        push 0
        push 0fde9h
        ; Exact mapped bytes FF 15 90 43 89 58: call dword ptr [0x58894390]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes EB 71: jmp 0x588426f6
        __asm _emit 0xeb
        __asm _emit 0x71
        xor eax, eax
        inc eax
        imul eax, eax, 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BE 84 01 4C 02 00 00: movsx eax, byte ptr [ecx + eax + 0x24c]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x4c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 5C: je 0x588426f6
        __asm _emit 0x74
        __asm _emit 0x5c
        push 104h
        mov eax, dword ptr [ebp + 8]
        add eax, 64ch
        push eax
        mov eax, dword ptr [ebp + 8]
        add eax, 24ch
        push eax
        ; Exact mapped bytes E8 CA EA 00 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xea
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        inc eax
        push eax
        mov eax, dword ptr [ebp + 8]
        add eax, 24ch
        push eax
        push 0
        push 0
        ; Exact mapped bytes FF 15 9C 42 89 58: call dword ptr [0x5889429c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        push 0
        push 0
        push 400h
        mov eax, dword ptr [ebp + 8]
        add eax, 24ch
        push eax
        push -1
        mov eax, dword ptr [ebp + 8]
        add eax, 64ch
        push eax
        push 0
        push 0fde9h
        ; Exact mapped bytes FF 15 90 43 89 58: call dword ptr [0x58894390]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov eax, dword ptr [ebp + 8]
        add eax, 22ch
        push eax
        push 588f2380h
        ; Exact mapped bytes E8 4A 9C FF FF: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x9c
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push eax
        lea eax, [ebp - 1918h]
        push eax
        ; Exact mapped bytes E8 A8 C9 FF FF: call 0x5883f0bf
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xc9
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        lea eax, [ebp - 1918h]
        push eax
        push 0c800h
        lea eax, [ebp - 0e918h]
        push eax
        ; Exact mapped bytes E8 3E 49 02 00: call 0x58867070
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x49
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        push 1400h
        push 0
        lea eax, [ebp - 1918h]
        push eax
        ; Exact mapped bytes E8 C8 A6 00 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp + 8]
        push dword ptr [eax + 204h]
        push 588f23e0h
        ; Exact mapped bytes E8 F5 9B FF FF: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x9b
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push eax
        lea eax, [ebp - 1918h]
        push eax
        ; Exact mapped bytes E8 53 C9 FF FF: call 0x5883f0bf
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xc9
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        lea eax, [ebp - 1918h]
        push eax
        push 0c800h
        lea eax, [ebp - 0e918h]
        push eax
        ; Exact mapped bytes E8 E9 48 02 00: call 0x58867070
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x48
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        xor eax, eax
        inc eax
        imul eax, eax, 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BE 84 01 4C 02 00 00: movsx eax, byte ptr [ecx + eax + 0x24c]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x4c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 55: je 0x588427f4
        __asm _emit 0x74
        __asm _emit 0x55
        push 1400h
        push 0
        lea eax, [ebp - 1918h]
        push eax
        ; Exact mapped bytes E8 5E A6 00 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp + 8]
        add eax, 24ch
        push eax
        push 588f2440h
        ; Exact mapped bytes E8 8B 9B FF FF: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x9b
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push eax
        lea eax, [ebp - 1918h]
        push eax
        ; Exact mapped bytes E8 E9 C8 FF FF: call 0x5883f0bf
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xc8
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        lea eax, [ebp - 1918h]
        push eax
        push 0c800h
        lea eax, [ebp - 0e918h]
        push eax
        ; Exact mapped bytes E8 7F 48 02 00: call 0x58867070
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x48
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        xor eax, eax
        inc eax
        imul eax, eax, 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BE 44 01 20: movsx eax, byte ptr [ecx + eax + 0x20]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x20
        test eax, eax
        ; Exact mapped bytes 74 53: je 0x58842859
        __asm _emit 0x74
        __asm _emit 0x53
        push 1400h
        push 0
        lea eax, [ebp - 1918h]
        push eax
        ; Exact mapped bytes E8 F7 A5 00 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp + 8]
        add eax, 20h
        push eax
        push 588f24a8h
        ; Exact mapped bytes E8 26 9B FF FF: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x9b
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push eax
        lea eax, [ebp - 1918h]
        push eax
        ; Exact mapped bytes E8 84 C8 FF FF: call 0x5883f0bf
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xc8
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        lea eax, [ebp - 1918h]
        push eax
        push 0c800h
        lea eax, [ebp - 0e918h]
        push eax
        ; Exact mapped bytes E8 1A 48 02 00: call 0x58867070
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x48
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        xor eax, eax
        inc eax
        imul eax, eax, 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BE 84 01 A0 00 00 00: movsx eax, byte ptr [ecx + eax + 0xa0]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 55: je 0x588428c3
        __asm _emit 0x74
        __asm _emit 0x55
        push 1400h
        push 0
        lea eax, [ebp - 1918h]
        push eax
        ; Exact mapped bytes E8 8F A5 00 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp + 8]
        add eax, 0a0h
        push eax
        push 588f2508h
        ; Exact mapped bytes E8 BC 9A FF FF: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x9a
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push eax
        lea eax, [ebp - 1918h]
        push eax
        ; Exact mapped bytes E8 1A C8 FF FF: call 0x5883f0bf
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xc8
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        lea eax, [ebp - 1918h]
        push eax
        push 0c800h
        lea eax, [ebp - 0e918h]
        push eax
        ; Exact mapped bytes E8 B0 47 02 00: call 0x58867070
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x47
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        xor eax, eax
        inc eax
        imul eax, eax, 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BE 84 01 60 01 00 00: movsx eax, byte ptr [ecx + eax + 0x160]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 55: je 0x5884292d
        __asm _emit 0x74
        __asm _emit 0x55
        push 1400h
        push 0
        lea eax, [ebp - 1918h]
        push eax
        ; Exact mapped bytes E8 25 A5 00 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xa5
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp + 8]
        add eax, 160h
        push eax
        push 588f2568h
        ; Exact mapped bytes E8 52 9A FF FF: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x9a
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push eax
        lea eax, [ebp - 1918h]
        push eax
        ; Exact mapped bytes E8 B0 C7 FF FF: call 0x5883f0bf
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xc7
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        lea eax, [ebp - 1918h]
        push eax
        push 0c800h
        lea eax, [ebp - 0e918h]
        push eax
        ; Exact mapped bytes E8 46 47 02 00: call 0x58867070
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x47
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        xor eax, eax
        inc eax
        imul eax, eax, 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BE 84 01 20 01 00 00: movsx eax, byte ptr [ecx + eax + 0x120]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 55: je 0x58842997
        __asm _emit 0x74
        __asm _emit 0x55
        push 1400h
        push 0
        lea eax, [ebp - 1918h]
        push eax
        ; Exact mapped bytes E8 BB A4 00 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp + 8]
        add eax, 120h
        push eax
        push 588f25c8h
        ; Exact mapped bytes E8 E8 99 FF FF: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push eax
        lea eax, [ebp - 1918h]
        push eax
        ; Exact mapped bytes E8 46 C7 FF FF: call 0x5883f0bf
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xc7
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        lea eax, [ebp - 1918h]
        push eax
        push 0c800h
        lea eax, [ebp - 0e918h]
        push eax
        ; Exact mapped bytes E8 DC 46 02 00: call 0x58867070
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x46
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        xor eax, eax
        inc eax
        imul eax, eax, 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BE 84 01 C0 01 00 00: movsx eax, byte ptr [ecx + eax + 0x1c0]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0xc0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 55: je 0x58842a01
        __asm _emit 0x74
        __asm _emit 0x55
        push 1400h
        push 0
        lea eax, [ebp - 1918h]
        push eax
        ; Exact mapped bytes E8 51 A4 00 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp + 8]
        add eax, 1c0h
        push eax
        push 588f2628h
        ; Exact mapped bytes E8 7E 99 FF FF: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x99
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push eax
        lea eax, [ebp - 1918h]
        push eax
        ; Exact mapped bytes E8 DC C6 FF FF: call 0x5883f0bf
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xc6
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        lea eax, [ebp - 1918h]
        push eax
        push 0c800h
        lea eax, [ebp - 0e918h]
        push eax
        ; Exact mapped bytes E8 72 46 02 00: call 0x58867070
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x46
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp + 8]
        add eax, 208h
        ; Exact mapped bytes 74 55: je 0x58842a60
        __asm _emit 0x74
        __asm _emit 0x55
        push 1400h
        push 0
        lea eax, [ebp - 1918h]
        push eax
        ; Exact mapped bytes E8 F2 A3 00 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp + 8]
        add eax, 208h
        push eax
        push 588f2688h
        ; Exact mapped bytes E8 1F 99 FF FF: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x99
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push eax
        lea eax, [ebp - 1918h]
        push eax
        ; Exact mapped bytes E8 7D C6 FF FF: call 0x5883f0bf
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xc6
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        lea eax, [ebp - 1918h]
        push eax
        push 0c800h
        lea eax, [ebp - 0e918h]
        push eax
        ; Exact mapped bytes E8 13 46 02 00: call 0x58867070
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x46
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 228h], 0
        ; Exact mapped bytes 74 55: je 0x58842ac1
        __asm _emit 0x74
        __asm _emit 0x55
        push 1400h
        push 0
        lea eax, [ebp - 1918h]
        push eax
        ; Exact mapped bytes E8 91 A3 00 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp + 8]
        push dword ptr [eax + 228h]
        push 588f26e8h
        ; Exact mapped bytes E8 BE 98 FF FF: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x98
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push eax
        lea eax, [ebp - 1918h]
        push eax
        ; Exact mapped bytes E8 1C C6 FF FF: call 0x5883f0bf
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xc6
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        lea eax, [ebp - 1918h]
        push eax
        push 0c800h
        lea eax, [ebp - 0e918h]
        push eax
        ; Exact mapped bytes E8 B2 45 02 00: call 0x58867070
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x45
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        xor eax, eax
        inc eax
        imul eax, eax, 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BE 84 01 E0 01 00 00: movsx eax, byte ptr [ecx + eax + 0x1e0]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0xe0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 55: je 0x58842b2b
        __asm _emit 0x74
        __asm _emit 0x55
        push 1400h
        push 0
        lea eax, [ebp - 1918h]
        push eax
        ; Exact mapped bytes E8 27 A3 00 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp + 8]
        add eax, 1e0h
        push eax
        push 588f2748h
        ; Exact mapped bytes E8 54 98 FF FF: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x98
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push eax
        lea eax, [ebp - 1918h]
        push eax
        ; Exact mapped bytes E8 B2 C5 FF FF: call 0x5883f0bf
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xc5
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        lea eax, [ebp - 1918h]
        push eax
        push 0c800h
        lea eax, [ebp - 0e918h]
        push eax
        ; Exact mapped bytes E8 48 45 02 00: call 0x58867070
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x45
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        cmp dword ptr [ebp - 0ed98h], 1
        ; Exact mapped bytes 0F 85 85 00 00 00: jne 0x58842bbd
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 1400h
        push 0
        lea eax, [ebp - 1918h]
        push eax
        ; Exact mapped bytes E8 C5 A2 00 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        lea eax, [ebp - 310h]
        push eax
        push 588f27a8h
        ; Exact mapped bytes E8 F4 97 FF FF: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x97
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push eax
        lea eax, [ebp - 1918h]
        push eax
        ; Exact mapped bytes E8 52 C5 FF FF: call 0x5883f0bf
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xc5
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        lea eax, [ebp - 1918h]
        push eax
        push 0c800h
        lea eax, [ebp - 0e918h]
        push eax
        ; Exact mapped bytes E8 E8 44 02 00: call 0x58867070
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        push 400h
        push 0
        lea eax, [ebp - 1918h]
        push eax
        ; Exact mapped bytes E8 72 A2 00 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        push 588f2840h
        ; Exact mapped bytes E8 A8 97 FF FF: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x97
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push eax
        lea eax, [ebp - 1918h]
        push eax
        ; Exact mapped bytes E8 06 C5 FF FF: call 0x5883f0bf
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xc5
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        pop ecx
        ; Exact mapped bytes EB 30: jmp 0x58842bed
        __asm _emit 0xeb
        __asm _emit 0x30
        push 1400h
        push 0
        lea eax, [ebp - 1918h]
        push eax
        ; Exact mapped bytes E8 40 A2 00 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        push 588f2874h
        ; Exact mapped bytes E8 76 97 FF FF: call 0x5883c353
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x97
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push eax
        lea eax, [ebp - 1918h]
        push eax
        ; Exact mapped bytes E8 D4 C4 FF FF: call 0x5883f0bf
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xc4
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        pop ecx
        lea eax, [ebp - 0e918h]
        push eax
        ; Exact mapped bytes E8 87 E5 00 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xe5
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov dword ptr [ebp - 0edach], eax
        lea eax, [ebp - 1918h]
        push eax
        ; Exact mapped bytes E8 74 E5 00 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xe5
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov dword ptr [ebp - 0edb4h], eax
        cmp dword ptr [ebp - 0ed98h], 0
        ; Exact mapped bytes 0F 84 00 01 00 00: je 0x58842d20
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 80h
        push 3
        push 0
        push 1
        push 80000000h
        lea eax, [ebp - 108h]
        push eax
        ; Exact mapped bytes FF 15 00 42 89 58: call dword ptr [0x58894200]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 0ed9ch], eax
        cmp dword ptr [ebp - 0ed9ch], -1
        ; Exact mapped bytes 75 16: jne 0x58842c64
        __asm _emit 0x75
        __asm _emit 0x16
        lea eax, [ebp - 108h]
        push eax
        ; Exact mapped bytes FF 15 04 43 89 58: call dword ptr [0x58894304]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        and dword ptr [ebp - 0ed88h], 0
        ; Exact mapped bytes EB 24: jmp 0x58842c88
        __asm _emit 0xeb
        __asm _emit 0x24
        push 0
        push dword ptr [ebp - 0ed9ch]
        ; Exact mapped bytes FF 15 00 43 89 58: call dword ptr [0x58894300]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 0ed88h], eax
        cmp dword ptr [ebp - 0ed88h], -1
        ; Exact mapped bytes 75 07: jne 0x58842c88
        __asm _emit 0x75
        __asm _emit 0x07
        and dword ptr [ebp - 0ed88h], 0
        mov dword ptr [ebp - 0edc0h], 300000h
        movzx eax, byte ptr [ebp + 10h]
        test eax, eax
        ; Exact mapped bytes 74 0A: je 0x58842ca4
        __asm _emit 0x74
        __asm _emit 0x0a
        mov dword ptr [ebp - 0edc0h], 5a00000h
        mov eax, dword ptr [ebp - 0ed88h]
        cmp eax, dword ptr [ebp - 0edc0h]
        ; Exact mapped bytes 76 07: jbe 0x58842cb9
        __asm _emit 0x76
        __asm _emit 0x07
        and dword ptr [ebp - 0ed88h], 0
        cmp dword ptr [ebp - 0ed88h], 0
        ; Exact mapped bytes 74 52: je 0x58842d14
        __asm _emit 0x74
        __asm _emit 0x52
        and dword ptr [ebp - 0eda8h], 0
        push 0
        push 0
        push 0
        push 2
        push 0
        push dword ptr [ebp - 0ed9ch]
        ; Exact mapped bytes FF 15 A8 42 89 58: call dword ptr [0x588942a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 0eda8h], eax
        cmp dword ptr [ebp - 0eda8h], 0
        ; Exact mapped bytes 74 26: je 0x58842d14
        __asm _emit 0x74
        __asm _emit 0x26
        push 0
        push 0
        push 0
        push 4
        push dword ptr [ebp - 0eda8h]
        ; Exact mapped bytes FF 15 B4 42 89 58: call dword ptr [0x588942b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 0edb0h], eax
        push dword ptr [ebp - 0eda8h]
        ; Exact mapped bytes FF 15 F8 42 89 58: call dword ptr [0x588942f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        push dword ptr [ebp - 0ed9ch]
        ; Exact mapped bytes FF 15 F8 42 89 58: call dword ptr [0x588942f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 0edach]
        add eax, dword ptr [ebp - 0ed88h]
        add eax, dword ptr [ebp - 0edb4h]
        mov dword ptr [ebp - 0edb8h], eax
        push dword ptr [ebp - 0edb8h]
        ; Exact mapped bytes E8 FF E2 FE FF: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xe2
        __asm _emit 0xfe
        __asm _emit 0xff
        pop ecx
        mov dword ptr [ebp - 0edc8h], eax
        mov eax, dword ptr [ebp - 0edc8h]
        mov dword ptr [ebp - 0ed8ch], eax
        mov eax, dword ptr [ebp - 0ed8ch]
        mov dword ptr [ebp - 0ed94h], eax
        cmp dword ptr [ebp - 0ed94h], 0
        ; Exact mapped bytes 75 0A: jne 0x58842d75
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, 0cch
        ; Exact mapped bytes E9 30 01 00 00: jmp 0x58842ea5
        __asm _emit 0xe9
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [ebp - 0edach]
        lea eax, [ebp - 0e918h]
        push eax
        push dword ptr [ebp - 0ed94h]
        ; Exact mapped bytes E8 03 9B 00 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 0ed8ch]
        add eax, dword ptr [ebp - 0edach]
        mov dword ptr [ebp - 0ed8ch], eax
        cmp dword ptr [ebp - 0edb0h], 0
        ; Exact mapped bytes 74 38: je 0x58842de3
        __asm _emit 0x74
        __asm _emit 0x38
        push dword ptr [ebp - 0ed88h]
        push dword ptr [ebp - 0edb0h]
        push dword ptr [ebp - 0ed8ch]
        ; Exact mapped bytes E8 CE 9A 00 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 0ed8ch]
        add eax, dword ptr [ebp - 0ed88h]
        mov dword ptr [ebp - 0ed8ch], eax
        push dword ptr [ebp - 0edb0h]
        ; Exact mapped bytes FF 15 B0 42 89 58: call dword ptr [0x588942b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        push dword ptr [ebp - 0edb4h]
        lea eax, [ebp - 1918h]
        push eax
        push dword ptr [ebp - 0ed8ch]
        ; Exact mapped bytes E8 95 9A 00 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        push dword ptr [ebp - 0edb8h]
        push dword ptr [ebp - 0ed94h]
        lea eax, [ebp - 1d18h]
        push eax
        ; Exact mapped bytes E8 6A E3 00 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xe3
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        push eax
        lea eax, [ebp - 1d18h]
        push eax
        push dword ptr [ebp - 0eda0h]
        mov ecx, dword ptr [ebp - 0ed84h]
        ; Exact mapped bytes E8 83 EA FF FF: call 0x588418b3
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x58842e3d
        __asm _emit 0x74
        __asm _emit 0x09
        and dword ptr [ebp - 0ed90h], 0
        ; Exact mapped bytes EB 0A: jmp 0x58842e47
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 0ed90h], 0cdh
        cmp dword ptr [ebp - 0eda0h], 0
        ; Exact mapped bytes 74 0F: je 0x58842e5f
        __asm _emit 0x74
        __asm _emit 0x0f
        push dword ptr [ebp - 0eda0h]
        mov eax, dword ptr [ebp - 0ed84h]
        ; Exact mapped bytes FF 50 54: call dword ptr [eax + 0x54]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x54
        cmp dword ptr [ebp - 0ed94h], 0
        ; Exact mapped bytes 74 18: je 0x58842e80
        __asm _emit 0x74
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 0ed94h]
        mov dword ptr [ebp - 0edcch], eax
        push dword ptr [ebp - 0edcch]
        ; Exact mapped bytes E8 CC E1 FE FF: call 0x5883104b
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xe1
        __asm _emit 0xfe
        __asm _emit 0xff
        pop ecx
        lea eax, [ebp - 108h]
        push eax
        ; Exact mapped bytes FF 15 04 43 89 58: call dword ptr [0x58894304]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        push 0
        mov ecx, dword ptr [ebp - 0ed84h]
        ; Exact mapped bytes E8 72 C6 FF FF: call 0x5883f50c
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xc6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 BB 93 FF FF: call 0x5883c25a
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x93
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 0ed90h]
        pop edi
        pop esi
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 9F E1 FE FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xe1
        __asm _emit 0xfe
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
