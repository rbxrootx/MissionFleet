// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004406F0 .. +0x870 bytes.
extern "C" __declspec(naked) void FUN_004406f0_004406F0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57ab09h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 20h
        push esi
        mov eax, 0cccccccch
        mov dword ptr [ebp - 2ch], eax
        mov dword ptr [ebp - 28h], eax
        mov dword ptr [ebp - 24h], eax
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 2ch], ecx
        push 0
        lea eax, [ebp - 28h]
        push eax
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 76 FB FF FF: call 0x4402b0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 EF 10 00 00: call 0x441830
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 1ch], ecx
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 EE 88 08 00: call 0x4c9040
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x88
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 14h]
        push edx
        ; Exact mapped bytes E8 8E 0B 00 00: call 0x4412f0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [eax]
        ; Exact mapped bytes 3B 05 04 78 5D 00: cmp eax, dword ptr [0x5d7804]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x04
        __asm _emit 0x78
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 75 13: jne 0x440782
        __asm _emit 0x75
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        ; Exact mapped bytes E8 98 0B 00 00: call 0x441310
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 10h], edx
        ; Exact mapped bytes EB 54: jmp 0x4407d6
        __asm _emit 0xeb
        __asm _emit 0x54
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 85 0B 00 00: call 0x441310
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes 3B 0D 04 78 5D 00: cmp ecx, dword ptr [0x5d7804]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x78
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 75 13: jne 0x4407ab
        __asm _emit 0x75
        __asm _emit 0x13
        mov edx, dword ptr [ebp - 14h]
        push edx
        ; Exact mapped bytes E8 4F 0B 00 00: call 0x4412f0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes EB 2B: jmp 0x4407d6
        __asm _emit 0xeb
        __asm _emit 0x2b
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        ; Exact mapped bytes E8 5C 0B 00 00: call 0x441310
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov edx, dword ptr [eax]
        push edx
        ; Exact mapped bytes E8 91 0D 00 00: call 0x441550
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 42 0B 00 00: call 0x441310
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 14h]
        cmp edx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 0F 84 95 01 00 00: je 0x440977
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x95
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        push eax
        ; Exact mapped bytes E8 05 0B 00 00: call 0x4412f0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes E8 0A 0B 00 00: call 0x441300
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [eax], edx
        mov eax, dword ptr [ebp - 1ch]
        push eax
        ; Exact mapped bytes E8 E9 0A 00 00: call 0x4412f0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov esi, eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        ; Exact mapped bytes E8 DB 0A 00 00: call 0x4412f0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov edx, dword ptr [esi]
        mov dword ptr [eax], edx
        mov eax, dword ptr [ebp - 1ch]
        push eax
        ; Exact mapped bytes E8 EB 0A 00 00: call 0x441310
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [ebp - 14h]
        cmp ecx, dword ptr [eax]
        ; Exact mapped bytes 75 13: jne 0x440842
        __asm _emit 0x75
        __asm _emit 0x13
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes E8 C8 0A 00 00: call 0x441300
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [eax], ecx
        ; Exact mapped bytes EB 74: jmp 0x4408b6
        __asm _emit 0xeb
        __asm _emit 0x74
        mov edx, dword ptr [ebp - 14h]
        push edx
        ; Exact mapped bytes E8 B5 0A 00 00: call 0x441300
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov esi, eax
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 A7 0A 00 00: call 0x441300
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [esi]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        ; Exact mapped bytes E8 97 0A 00 00: call 0x441300
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [eax]
        push eax
        ; Exact mapped bytes E8 7C 0A 00 00: call 0x4412f0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp - 1ch]
        push edx
        ; Exact mapped bytes E8 8B 0A 00 00: call 0x441310
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov esi, eax
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 7D 0A 00 00: call 0x441310
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [esi]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp - 1ch]
        push edx
        ; Exact mapped bytes E8 6D 0A 00 00: call 0x441310
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [eax]
        push eax
        ; Exact mapped bytes E8 52 0A 00 00: call 0x441300
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 D2 08 00 00: call 0x441190
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        cmp edx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 75 0F: jne 0x4408d4
        __asm _emit 0x75
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 C3 08 00 00: call 0x441190
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [eax], ecx
        ; Exact mapped bytes EB 58: jmp 0x44092c
        __asm _emit 0xeb
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 1ch]
        push edx
        ; Exact mapped bytes E8 23 0A 00 00: call 0x441300
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [eax]
        push eax
        ; Exact mapped bytes E8 08 0A 00 00: call 0x4412f0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [eax]
        cmp ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 75 1E: jne 0x440910
        __asm _emit 0x75
        __asm _emit 0x1e
        mov edx, dword ptr [ebp - 1ch]
        push edx
        ; Exact mapped bytes E8 05 0A 00 00: call 0x441300
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [eax]
        push eax
        ; Exact mapped bytes E8 EA 09 00 00: call 0x4412f0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [eax], ecx
        ; Exact mapped bytes EB 1C: jmp 0x44092c
        __asm _emit 0xeb
        __asm _emit 0x1c
        mov edx, dword ptr [ebp - 1ch]
        push edx
        ; Exact mapped bytes E8 E7 09 00 00: call 0x441300
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [eax]
        push eax
        ; Exact mapped bytes E8 EC 09 00 00: call 0x441310
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp - 1ch]
        push edx
        ; Exact mapped bytes E8 CB 09 00 00: call 0x441300
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov esi, eax
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 BD 09 00 00: call 0x441300
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [esi]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp - 1ch]
        push edx
        ; Exact mapped bytes E8 8D 09 00 00: call 0x4412e0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        push eax
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 80 09 00 00: call 0x4412e0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        push eax
        ; Exact mapped bytes E8 17 0F 00 00: call 0x441880
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 14h], ecx
        ; Exact mapped bytes E9 4A 01 00 00: jmp 0x440ac1
        __asm _emit 0xe9
        __asm _emit 0x4a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        push edx
        ; Exact mapped bytes E8 80 09 00 00: call 0x441300
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov esi, eax
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 72 09 00 00: call 0x441300
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [esi]
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 F3 07 00 00: call 0x441190
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        cmp edx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 75 0F: jne 0x4409b3
        __asm _emit 0x75
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 E4 07 00 00: call 0x441190
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [eax], ecx
        ; Exact mapped bytes EB 58: jmp 0x440a0b
        __asm _emit 0xeb
        __asm _emit 0x58
        mov edx, dword ptr [ebp - 1ch]
        push edx
        ; Exact mapped bytes E8 44 09 00 00: call 0x441300
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [eax]
        push eax
        ; Exact mapped bytes E8 29 09 00 00: call 0x4412f0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [eax]
        cmp ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 75 1E: jne 0x4409ef
        __asm _emit 0x75
        __asm _emit 0x1e
        mov edx, dword ptr [ebp - 1ch]
        push edx
        ; Exact mapped bytes E8 26 09 00 00: call 0x441300
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [eax]
        push eax
        ; Exact mapped bytes E8 0B 09 00 00: call 0x4412f0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [eax], ecx
        ; Exact mapped bytes EB 1C: jmp 0x440a0b
        __asm _emit 0xeb
        __asm _emit 0x1c
        mov edx, dword ptr [ebp - 1ch]
        push edx
        ; Exact mapped bytes E8 08 09 00 00: call 0x441300
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [eax]
        push eax
        ; Exact mapped bytes E8 0D 09 00 00: call 0x441310
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 1D 07 00 00: call 0x441130
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        cmp edx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 74 02: je 0x440a1c
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 4A: jmp 0x440a66
        __asm _emit 0xeb
        __asm _emit 0x4a
        mov eax, dword ptr [ebp - 1ch]
        push eax
        ; Exact mapped bytes E8 EB 08 00 00: call 0x441310
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes 3B 0D 04 78 5D 00: cmp ecx, dword ptr [0x5d7804]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0x04
        __asm _emit 0x78
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 75 1C: jne 0x440a4e
        __asm _emit 0x75
        __asm _emit 0x1c
        mov edx, dword ptr [ebp - 1ch]
        push edx
        ; Exact mapped bytes E8 C5 08 00 00: call 0x441300
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov esi, eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 E8 06 00 00: call 0x441130
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi]
        mov dword ptr [eax], ecx
        ; Exact mapped bytes EB 18: jmp 0x440a66
        __asm _emit 0xeb
        __asm _emit 0x18
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes E8 F9 0A 00 00: call 0x441550
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov esi, eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 CC 06 00 00: call 0x441130
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [eax], esi
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 F2 06 00 00: call 0x441160
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax]
        cmp eax, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 74 02: je 0x440a77
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 4A: jmp 0x440ac1
        __asm _emit 0xeb
        __asm _emit 0x4a
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        ; Exact mapped bytes E8 70 08 00 00: call 0x4412f0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov edx, dword ptr [eax]
        ; Exact mapped bytes 3B 15 04 78 5D 00: cmp edx, dword ptr [0x5d7804]
        __asm _emit 0x3b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x78
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 75 1C: jne 0x440aa9
        __asm _emit 0x75
        __asm _emit 0x1c
        mov eax, dword ptr [ebp - 1ch]
        push eax
        ; Exact mapped bytes E8 6A 08 00 00: call 0x441300
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov esi, eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 BD 06 00 00: call 0x441160
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi]
        mov dword ptr [eax], ecx
        ; Exact mapped bytes EB 18: jmp 0x440ac1
        __asm _emit 0xeb
        __asm _emit 0x18
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes E8 FE 09 00 00: call 0x4414b0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov esi, eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 A1 06 00 00: call 0x441160
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [eax], esi
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 16 08 00 00: call 0x4412e0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        cmp dword ptr [eax], 1
        ; Exact mapped bytes 0F 85 25 04 00 00: jne 0x440efb
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x25
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 B2 06 00 00: call 0x441190
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        cmp ecx, dword ptr [eax]
        ; Exact mapped bytes 0F 84 00 04 00 00: je 0x440ee9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes E8 EE 07 00 00: call 0x4412e0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        cmp dword ptr [eax], 1
        ; Exact mapped bytes 0F 85 EB 03 00 00: jne 0x440ee9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xeb
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 F9 07 00 00: call 0x441300
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes E8 DE 07 00 00: call 0x4412f0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov edx, dword ptr [ebp - 10h]
        cmp edx, dword ptr [eax]
        ; Exact mapped bytes 0F 85 E6 01 00 00: jne 0x440d06
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 D7 07 00 00: call 0x441300
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes E8 DC 07 00 00: call 0x441310
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 20h]
        push eax
        ; Exact mapped bytes E8 9B 07 00 00: call 0x4412e0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 75 62: jne 0x440baf
        __asm _emit 0x75
        __asm _emit 0x62
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        ; Exact mapped bytes E8 8A 07 00 00: call 0x4412e0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [eax], 1
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes E8 98 07 00 00: call 0x441300
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [eax]
        push eax
        ; Exact mapped bytes E8 6D 07 00 00: call 0x4412e0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [eax], 0
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 7B 07 00 00: call 0x441300
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov edx, dword ptr [eax]
        push edx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 8D 07 00 00: call 0x441320
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 64 07 00 00: call 0x441300
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes E8 69 07 00 00: call 0x441310
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 20h]
        push eax
        ; Exact mapped bytes E8 38 07 00 00: call 0x4412f0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes E8 1D 07 00 00: call 0x4412e0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        cmp dword ptr [eax], 1
        ; Exact mapped bytes 75 44: jne 0x440c0f
        __asm _emit 0x75
        __asm _emit 0x44
        mov edx, dword ptr [ebp - 20h]
        push edx
        ; Exact mapped bytes E8 3C 07 00 00: call 0x441310
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [eax]
        push eax
        ; Exact mapped bytes E8 01 07 00 00: call 0x4412e0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        cmp dword ptr [eax], 1
        ; Exact mapped bytes 75 28: jne 0x440c0f
        __asm _emit 0x75
        __asm _emit 0x28
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        ; Exact mapped bytes E8 F0 06 00 00: call 0x4412e0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [eax], 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes E8 FE 06 00 00: call 0x441300
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes E9 F2 00 00 00: jmp 0x440d01
        __asm _emit 0xe9
        __asm _emit 0xf2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        ; Exact mapped bytes E8 F8 06 00 00: call 0x441310
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov edx, dword ptr [eax]
        push edx
        ; Exact mapped bytes E8 BD 06 00 00: call 0x4412e0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        cmp dword ptr [eax], 1
        ; Exact mapped bytes 75 57: jne 0x440c82
        __asm _emit 0x75
        __asm _emit 0x57
        mov eax, dword ptr [ebp - 20h]
        push eax
        ; Exact mapped bytes E8 BC 06 00 00: call 0x4412f0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes E8 A1 06 00 00: call 0x4412e0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [eax], 1
        mov edx, dword ptr [ebp - 20h]
        push edx
        ; Exact mapped bytes E8 8F 06 00 00: call 0x4412e0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [eax], 0
        mov eax, dword ptr [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 8A 09 00 00: call 0x4415f0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 91 06 00 00: call 0x441300
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov edx, dword ptr [eax]
        push edx
        ; Exact mapped bytes E8 96 06 00 00: call 0x441310
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 75 06 00 00: call 0x441300
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov edx, dword ptr [eax]
        push edx
        ; Exact mapped bytes E8 4A 06 00 00: call 0x4412e0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov esi, eax
        mov eax, dword ptr [ebp - 20h]
        push eax
        ; Exact mapped bytes E8 3C 06 00 00: call 0x4412e0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [esi]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes E8 4C 06 00 00: call 0x441300
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [eax]
        push eax
        ; Exact mapped bytes E8 21 06 00 00: call 0x4412e0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [eax], 1
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        ; Exact mapped bytes E8 3F 06 00 00: call 0x441310
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov edx, dword ptr [eax]
        push edx
        ; Exact mapped bytes E8 04 06 00 00: call 0x4412e0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [eax], 1
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 12 06 00 00: call 0x441300
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [eax]
        push ecx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 24 06 00 00: call 0x441320
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 E8 01 00 00: jmp 0x440ee9
        __asm _emit 0xe9
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 DE 01 00 00: jmp 0x440ee4
        __asm _emit 0xe9
        __asm _emit 0xde
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes E8 F1 05 00 00: call 0x441300
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [eax]
        push eax
        ; Exact mapped bytes E8 D6 05 00 00: call 0x4412f0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp - 24h]
        push edx
        ; Exact mapped bytes E8 B5 05 00 00: call 0x4412e0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 75 62: jne 0x440d95
        __asm _emit 0x75
        __asm _emit 0x62
        mov eax, dword ptr [ebp - 24h]
        push eax
        ; Exact mapped bytes E8 A4 05 00 00: call 0x4412e0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [eax], 1
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 B2 05 00 00: call 0x441300
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov edx, dword ptr [eax]
        push edx
        ; Exact mapped bytes E8 87 05 00 00: call 0x4412e0
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [eax], 0
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 95 05 00 00: call 0x441300
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [eax]
        push ecx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 77 08 00 00: call 0x4415f0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes E8 7E 05 00 00: call 0x441300
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [eax]
        push eax
        ; Exact mapped bytes E8 63 05 00 00: call 0x4412f0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp - 24h]
        push edx
        ; Exact mapped bytes E8 72 05 00 00: call 0x441310
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [eax]
        push eax
        ; Exact mapped bytes E8 37 05 00 00: call 0x4412e0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        cmp dword ptr [eax], 1
        ; Exact mapped bytes 75 44: jne 0x440df5
        __asm _emit 0x75
        __asm _emit 0x44
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        ; Exact mapped bytes E8 36 05 00 00: call 0x4412f0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov edx, dword ptr [eax]
        push edx
        ; Exact mapped bytes E8 1B 05 00 00: call 0x4412e0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        cmp dword ptr [eax], 1
        ; Exact mapped bytes 75 28: jne 0x440df5
        __asm _emit 0x75
        __asm _emit 0x28
        mov eax, dword ptr [ebp - 24h]
        push eax
        ; Exact mapped bytes E8 0A 05 00 00: call 0x4412e0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [eax], 0
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 18 05 00 00: call 0x441300
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 10h], edx
        ; Exact mapped bytes E9 EF 00 00 00: jmp 0x440ee4
        __asm _emit 0xe9
        __asm _emit 0xef
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 24h]
        push eax
        ; Exact mapped bytes E8 F2 04 00 00: call 0x4412f0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes E8 D7 04 00 00: call 0x4412e0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        cmp dword ptr [eax], 1
        ; Exact mapped bytes 75 57: jne 0x440e68
        __asm _emit 0x75
        __asm _emit 0x57
        mov edx, dword ptr [ebp - 24h]
        push edx
        ; Exact mapped bytes E8 F6 04 00 00: call 0x441310
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [eax]
        push eax
        ; Exact mapped bytes E8 BB 04 00 00: call 0x4412e0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [eax], 1
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        ; Exact mapped bytes E8 A9 04 00 00: call 0x4412e0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [eax], 0
        mov edx, dword ptr [ebp - 24h]
        push edx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 D4 04 00 00: call 0x441320
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 AB 04 00 00: call 0x441300
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes E8 90 04 00 00: call 0x4412f0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 8F 04 00 00: call 0x441300
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes E8 64 04 00 00: call 0x4412e0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov esi, eax
        mov edx, dword ptr [ebp - 24h]
        push edx
        ; Exact mapped bytes E8 56 04 00 00: call 0x4412e0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [esi]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes E8 66 04 00 00: call 0x441300
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov eax, dword ptr [eax]
        push eax
        ; Exact mapped bytes E8 3B 04 00 00: call 0x4412e0
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [eax], 1
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        ; Exact mapped bytes E8 39 04 00 00: call 0x4412f0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov edx, dword ptr [eax]
        push edx
        ; Exact mapped bytes E8 1E 04 00 00: call 0x4412e0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [eax], 1
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 2C 04 00 00: call 0x441300
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [eax]
        push ecx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 0E 07 00 00: call 0x4415f0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 05: jmp 0x440ee9
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 ED FB FF FF: jmp 0x440ad6
        __asm _emit 0xe9
        __asm _emit 0xed
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes E8 EE 03 00 00: call 0x4412e0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [eax], 1
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 5C F4 FF FF: call 0x440360
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 D0 08 00 00: call 0x4417e0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 F4 F6 FF FF: call 0x440610
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 0ch]
        sub eax, 1
        mov ecx, dword ptr [ebp - 2ch]
        mov dword ptr [ecx + 0ch], eax
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [edx], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 DE 81 08 00: call 0x4c9120
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x81
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop esi
        add esp, 2ch
        cmp ebp, esp
        ; Exact mapped bytes E8 86 78 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x78
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
