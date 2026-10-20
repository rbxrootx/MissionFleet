// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5876A4E0 .. +0x161B bytes.
extern "C" __declspec(naked) void FUN_5876a4e0_5876A4E0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888feaah
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 588h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 10h], eax
        push esi
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 414h], ecx
        movzx eax, word ptr [ebp + 8]
        mov dword ptr [ebp - 42ch], eax
        mov ecx, dword ptr [ebp - 42ch]
        sub ecx, 1
        mov dword ptr [ebp - 42ch], ecx
        cmp dword ptr [ebp - 42ch], 38h
        ; Exact mapped bytes 0F 87 A7 15 00 00: ja 0x5876badf
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xa7
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 42ch]
        movzx eax, byte ptr [edx + 5876bb6ch]
        ; Exact mapped bytes FF 24 85 FC BA 76 58: jmp dword ptr [eax*4 + 0x5876bafc]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xfc
        __asm _emit 0xba
        __asm _emit 0x76
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 414h]
        mov edx, dword ptr [ecx + 340h]
        push edx
        push 4
        mov ecx, dword ptr [ebp - 414h]
        ; Exact mapped bytes E8 DA 45 00 00: call 0x5876eb40
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 414h]
        ; Exact mapped bytes 66 89 81 14 5F 00 00: mov word ptr [ecx + 0x5f14], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x14
        __asm _emit 0x5f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 67 15 00 00: jmp 0x5876badf
        __asm _emit 0xe9
        __asm _emit 0x67
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 414h]
        mov eax, dword ptr [edx + 340h]
        push eax
        push 5
        mov ecx, dword ptr [ebp - 414h]
        ; Exact mapped bytes E8 AE 45 00 00: call 0x5876eb40
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 414h]
        ; Exact mapped bytes 66 89 81 14 5F 00 00: mov word ptr [ecx + 0x5f14], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x14
        __asm _emit 0x5f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 3B 15 00 00: jmp 0x5876badf
        __asm _emit 0xe9
        __asm _emit 0x3b
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 414h]
        mov eax, dword ptr [edx + 340h]
        push eax
        push 6
        mov ecx, dword ptr [ebp - 414h]
        ; Exact mapped bytes E8 82 45 00 00: call 0x5876eb40
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 414h]
        ; Exact mapped bytes 66 89 81 14 5F 00 00: mov word ptr [ecx + 0x5f14], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x14
        __asm _emit 0x5f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 0F 15 00 00: jmp 0x5876badf
        __asm _emit 0xe9
        __asm _emit 0x0f
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 414h]
        mov eax, dword ptr [edx + 340h]
        push eax
        push 7
        mov ecx, dword ptr [ebp - 414h]
        ; Exact mapped bytes E8 56 45 00 00: call 0x5876eb40
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 414h]
        ; Exact mapped bytes 66 89 81 14 5F 00 00: mov word ptr [ecx + 0x5f14], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x14
        __asm _emit 0x5f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 E3 14 00 00: jmp 0x5876badf
        __asm _emit 0xe9
        __asm _emit 0xe3
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        push 40000000h
        mov ecx, dword ptr [ebp - 414h]
        ; Exact mapped bytes E8 E4 4C 00 00: call 0x5876f2f0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x4c
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 CD 14 00 00: jmp 0x5876badf
        __asm _emit 0xe9
        __asm _emit 0xcd
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        push 40000000h
        mov ecx, dword ptr [ebp - 414h]
        ; Exact mapped bytes E8 3E 4D 00 00: call 0x5876f360
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x4d
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 B7 14 00 00: jmp 0x5876badf
        __asm _emit 0xe9
        __asm _emit 0xb7
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 414h]
        mov dword ptr [edx + 5f04h], 40000000h
        mov eax, dword ptr [ebp - 414h]
        mov ecx, dword ptr [eax + 340h]
        push ecx
        push 0ah
        mov ecx, dword ptr [ebp - 414h]
        ; Exact mapped bytes E8 EE 44 00 00: call 0x5876eb40
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 414h]
        ; Exact mapped bytes 66 89 82 14 5F 00 00: mov word ptr [edx + 0x5f14], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x82
        __asm _emit 0x14
        __asm _emit 0x5f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 7B 14 00 00: jmp 0x5876badf
        __asm _emit 0xe9
        __asm _emit 0x7b
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 414h]
        mov dword ptr [eax + 5f04h], 40000000h
        mov ecx, dword ptr [ebp - 414h]
        mov edx, dword ptr [ecx + 340h]
        push edx
        push 0bh
        mov ecx, dword ptr [ebp - 414h]
        ; Exact mapped bytes E8 B2 44 00 00: call 0x5876eb40
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 414h]
        ; Exact mapped bytes 66 89 81 14 5F 00 00: mov word ptr [ecx + 0x5f14], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x14
        __asm _emit 0x5f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 3F 14 00 00: jmp 0x5876badf
        __asm _emit 0xe9
        __asm _emit 0x3f
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 414h]
        mov eax, dword ptr [edx + 340h]
        push eax
        push 15h
        mov ecx, dword ptr [ebp - 414h]
        ; Exact mapped bytes E8 86 44 00 00: call 0x5876eb40
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 414h]
        movzx edx, word ptr [ecx + 5f14h]
        xor edx, 2
        mov eax, dword ptr [ebp - 414h]
        ; Exact mapped bytes 66 89 90 14 5F 00 00: mov word ptr [eax + 0x5f14], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x14
        __asm _emit 0x5f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 03 14 00 00: jmp 0x5876badf
        __asm _emit 0xe9
        __asm _emit 0x03
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 414h]
        mov edx, dword ptr [ecx + 340h]
        push edx
        push 14h
        mov ecx, dword ptr [ebp - 414h]
        ; Exact mapped bytes E8 4A 44 00 00: call 0x5876eb40
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 414h]
        movzx ecx, word ptr [eax + 5f14h]
        xor ecx, 1
        mov edx, dword ptr [ebp - 414h]
        ; Exact mapped bytes 66 89 8A 14 5F 00 00: mov word ptr [edx + 0x5f14], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0x14
        __asm _emit 0x5f
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 C7 13 00 00: jmp 0x5876badf
        __asm _emit 0xe9
        __asm _emit 0xc7
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 414h]
        ; Exact mapped bytes E8 CB 4B 00 00: call 0x5876f2f0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x4b
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 B4 13 00 00: jmp 0x5876badf
        __asm _emit 0xe9
        __asm _emit 0xb4
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 414h]
        ; Exact mapped bytes E8 28 4C 00 00: call 0x5876f360
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x4c
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 A1 13 00 00: jmp 0x5876badf
        __asm _emit 0xe9
        __asm _emit 0xa1
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        push 10h
        mov ecx, dword ptr [ebp - 414h]
        ; Exact mapped bytes E8 53 21 00 00: call 0x5876c8a0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 8C 13 00 00: jmp 0x5876badf
        __asm _emit 0xe9
        __asm _emit 0x8c
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        push 20h
        mov ecx, dword ptr [ebp - 414h]
        ; Exact mapped bytes E8 3E 21 00 00: call 0x5876c8a0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 77 13 00 00: jmp 0x5876badf
        __asm _emit 0xe9
        __asm _emit 0x77
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        push 30h
        mov ecx, dword ptr [ebp - 414h]
        ; Exact mapped bytes E8 29 21 00 00: call 0x5876c8a0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 62 13 00 00: jmp 0x5876badf
        __asm _emit 0xe9
        __asm _emit 0x62
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D8 F8 E7 FF: call 0x585ea060
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xf8
        __asm _emit 0xe7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 414h]
        movzx ecx, word ptr [eax + 5f14h]
        xor ecx, 1
        mov edx, dword ptr [ebp - 414h]
        ; Exact mapped bytes 66 89 8A 14 5F 00 00: mov word ptr [edx + 0x5f14], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0x14
        __asm _emit 0x5f
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 414h]
        movzx ecx, word ptr [eax + 5f14h]
        xor ecx, 2
        mov edx, dword ptr [ebp - 414h]
        ; Exact mapped bytes 66 89 8A 14 5F 00 00: mov word ptr [edx + 0x5f14], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0x14
        __asm _emit 0x5f
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 41ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x5876a7dd
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 41ch]
        add eax, 1
        mov dword ptr [ebp - 41ch], eax
        mov ecx, dword ptr [ebp - 414h]
        mov edx, dword ptr [ebp - 41ch]
        cmp edx, dword ptr [ecx + 1284h]
        ; Exact mapped bytes 7D 49: jge 0x5876a83a
        __asm _emit 0x7d
        __asm _emit 0x49
        mov eax, dword ptr [ebp - 41ch]
        mov ecx, dword ptr [ebp - 414h]
        cmp dword ptr [ecx + eax*4 + 17ch], 0
        ; Exact mapped bytes 74 31: je 0x5876a838
        __asm _emit 0x74
        __asm _emit 0x31
        mov edx, dword ptr [ebp - 41ch]
        mov eax, dword ptr [ebp - 414h]
        mov ecx, dword ptr [eax + edx*4 + 17ch]
        ; Exact mapped bytes E8 D1 6A D2 FF: call 0x584912f0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x6a
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 41ch]
        mov edx, dword ptr [ebp - 414h]
        mov ecx, dword ptr [edx + ecx*4 + 17ch]
        ; Exact mapped bytes E8 99 6A D2 FF: call 0x584912d0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x6a
        __asm _emit 0xd2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 94: jmp 0x5876a7ce
        __asm _emit 0xeb
        __asm _emit 0x94
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 7B C1 D1 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xc1
        __asm _emit 0xd1
        __asm _emit 0xff
        cmp eax, dword ptr [ebp - 414h]
        ; Exact mapped bytes 74 1C: je 0x5876a869
        __asm _emit 0x74
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 414h]
        ; Exact mapped bytes E8 D8 82 FF FF: call 0x58762b30
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x82
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 75 0C: jne 0x5876a869
        __asm _emit 0x75
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 414h]
        ; Exact mapped bytes E8 E8 A6 FF FF: call 0x58764f50
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 71 12 00 00: jmp 0x5876badf
        __asm _emit 0xe9
        __asm _emit 0x71
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E7 F7 E7 FF: call 0x585ea060
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xf7
        __asm _emit 0xe7
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 414h]
        movzx ecx, word ptr [eax + 5f14h]
        xor ecx, 1
        mov edx, dword ptr [ebp - 414h]
        ; Exact mapped bytes 66 89 8A 14 5F 00 00: mov word ptr [edx + 0x5f14], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0x14
        __asm _emit 0x5f
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 414h]
        movzx ecx, word ptr [eax + 5f14h]
        xor ecx, 2
        mov edx, dword ptr [ebp - 414h]
        ; Exact mapped bytes 66 89 8A 14 5F 00 00: mov word ptr [edx + 0x5f14], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0x14
        __asm _emit 0x5f
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 420h], 0
        ; Exact mapped bytes EB 0F: jmp 0x5876a8ce
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 420h]
        add eax, 1
        mov dword ptr [ebp - 420h], eax
        mov ecx, dword ptr [ebp - 414h]
        mov edx, dword ptr [ebp - 420h]
        cmp edx, dword ptr [ecx + 1284h]
        ; Exact mapped bytes 7D 49: jge 0x5876a92b
        __asm _emit 0x7d
        __asm _emit 0x49
        mov eax, dword ptr [ebp - 420h]
        mov ecx, dword ptr [ebp - 414h]
        cmp dword ptr [ecx + eax*4 + 17ch], 0
        ; Exact mapped bytes 74 31: je 0x5876a929
        __asm _emit 0x74
        __asm _emit 0x31
        mov edx, dword ptr [ebp - 420h]
        mov eax, dword ptr [ebp - 414h]
        mov ecx, dword ptr [eax + edx*4 + 17ch]
        ; Exact mapped bytes E8 E0 69 D2 FF: call 0x584912f0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x69
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 420h]
        mov edx, dword ptr [ebp - 414h]
        mov ecx, dword ptr [edx + ecx*4 + 17ch]
        ; Exact mapped bytes E8 A8 69 D2 FF: call 0x584912d0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x69
        __asm _emit 0xd2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 94: jmp 0x5876a8bf
        __asm _emit 0xeb
        __asm _emit 0x94
        ; Exact mapped bytes E9 AF 11 00 00: jmp 0x5876badf
        __asm _emit 0xe9
        __asm _emit 0xaf
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 414h]
        mov dword ptr [eax + 5f1ch], 1
        ; Exact mapped bytes E9 9A 11 00 00: jmp 0x5876badf
        __asm _emit 0xe9
        __asm _emit 0x9a
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 414h]
        add ecx, 34ch
        ; Exact mapped bytes E8 8A A0 D1 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xa0
        __asm _emit 0xd1
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 48 04: mov cx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        movzx edx, cx
        cmp edx, 9
        ; Exact mapped bytes 75 17: jne 0x5876a97d
        __asm _emit 0x75
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 414h]
        movzx ecx, word ptr [eax + 164h]
        cmp ecx, 3
        ; Exact mapped bytes 7E 05: jle 0x5876a97d
        __asm _emit 0x7e
        __asm _emit 0x05
        ; Exact mapped bytes E9 62 11 00 00: jmp 0x5876badf
        __asm _emit 0xe9
        __asm _emit 0x62
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 414h]
        mov ecx, dword ptr [edx + 23ch]
        ; Exact mapped bytes E8 22 81 DF FF: call 0x58562ab0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x81
        __asm _emit 0xdf
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 83 3D 6C 20 96 58 00: cmp dword ptr [0x5896206c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x6c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 1A 01 00 00: je 0x5876aab6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 100h
        push 0
        lea eax, [ebp - 210h]
        push eax
        ; Exact mapped bytes E8 61 24 0E 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x24
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 414h]
        mov ecx, dword ptr [ecx + 5e84h]
        ; Exact mapped bytes E8 0D B0 D2 FF: call 0x584959d0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 570h], eax
        mov edx, dword ptr [ebp - 414h]
        mov ecx, dword ptr [edx + 5e84h]
        ; Exact mapped bytes E8 46 FD DF FF: call 0x5856a720
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xfd
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 574h], eax
        mov eax, dword ptr [ebp - 414h]
        mov ecx, dword ptr [eax + 5e84h]
        ; Exact mapped bytes E8 3F EC D7 FF: call 0x584e9630
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xec
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 578h], eax
        mov ecx, dword ptr [ebp - 414h]
        ; Exact mapped bytes E8 3E 1A D2 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x1a
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 57 A0 D1 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xa0
        __asm _emit 0xd1
        __asm _emit 0xff
        add eax, 0ch
        mov dword ptr [ebp - 484h], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 73 AF D2 FF: call 0x58495990
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xaf
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 488h], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 62 AC D2 FF: call 0x58495690
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xac
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 48ch], eax
        mov ecx, dword ptr [ebp - 570h]
        push ecx
        mov edx, dword ptr [ebp - 574h]
        push edx
        mov eax, dword ptr [ebp - 578h]
        push eax
        mov ecx, dword ptr [ebp - 484h]
        push ecx
        mov edx, dword ptr [ebp - 488h]
        push edx
        mov eax, dword ptr [ebp - 48ch]
        push eax
        push 588b4fe0h
        lea ecx, [ebp - 210h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 20h
        lea edx, [ebp - 210h]
        push edx
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 490h], eax
        ; Exact mapped bytes A1 70 20 96 58: mov eax, dword ptr [0x58962070]
        __asm _emit 0xa1
        __asm _emit 0x70
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 494h], eax
        push 0
        lea ecx, [ebp - 588h]
        push ecx
        mov edx, dword ptr [ebp - 490h]
        push edx
        lea eax, [ebp - 210h]
        push eax
        mov ecx, dword ptr [ebp - 494h]
        push ecx
        ; Exact mapped bytes FF 15 34 43 89 58: call dword ptr [0x58894334]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        ; Exact mapped bytes E9 24 10 00 00: jmp 0x5876badf
        __asm _emit 0xe9
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 414h]
        add ecx, 34ch
        ; Exact mapped bytes E8 14 9F D1 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x9f
        __asm _emit 0xd1
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
        cmp eax, 9
        ; Exact mapped bytes 75 17: jne 0x5876aaf3
        __asm _emit 0x75
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 414h]
        movzx edx, word ptr [ecx + 164h]
        cmp edx, 3
        ; Exact mapped bytes 7E 05: jle 0x5876aaf3
        __asm _emit 0x7e
        __asm _emit 0x05
        ; Exact mapped bytes E9 EC 0F 00 00: jmp 0x5876badf
        __asm _emit 0xe9
        __asm _emit 0xec
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 414h]
        mov ecx, dword ptr [eax + 23ch]
        ; Exact mapped bytes E8 0C 7F DF FF: call 0x58562a10
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x7f
        __asm _emit 0xdf
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 83 3D 6C 20 96 58 00: cmp dword ptr [0x5896206c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x6c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 1B 01 00 00: je 0x5876ac2d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 100h
        push 0
        lea ecx, [ebp - 310h]
        push ecx
        ; Exact mapped bytes E8 EB 22 0E 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x22
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 414h]
        mov ecx, dword ptr [edx + 5e84h]
        ; Exact mapped bytes E8 97 AE D2 FF: call 0x584959d0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xae
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 498h], eax
        mov eax, dword ptr [ebp - 414h]
        mov ecx, dword ptr [eax + 5e84h]
        ; Exact mapped bytes E8 D0 FB DF FF: call 0x5856a720
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xfb
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 49ch], eax
        mov ecx, dword ptr [ebp - 414h]
        mov ecx, dword ptr [ecx + 5e84h]
        ; Exact mapped bytes E8 C9 EA D7 FF: call 0x584e9630
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xea
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 4a0h], eax
        mov ecx, dword ptr [ebp - 414h]
        ; Exact mapped bytes E8 C8 18 D2 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x18
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 E1 9E D1 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x9e
        __asm _emit 0xd1
        __asm _emit 0xff
        add eax, 0ch
        mov dword ptr [ebp - 4a4h], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 FD AD D2 FF: call 0x58495990
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xad
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 4a8h], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 EC AA D2 FF: call 0x58495690
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xaa
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 4ach], eax
        mov edx, dword ptr [ebp - 498h]
        push edx
        mov eax, dword ptr [ebp - 49ch]
        push eax
        mov ecx, dword ptr [ebp - 4a0h]
        push ecx
        mov edx, dword ptr [ebp - 4a4h]
        push edx
        mov eax, dword ptr [ebp - 4a8h]
        push eax
        mov ecx, dword ptr [ebp - 4ach]
        push ecx
        push 588b5014h
        lea edx, [ebp - 310h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 20h
        lea eax, [ebp - 310h]
        push eax
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 4b0h], eax
        ; Exact mapped bytes 8B 0D 70 20 96 58: mov ecx, dword ptr [0x58962070]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x70
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 4b4h], ecx
        push 0
        lea edx, [ebp - 58ch]
        push edx
        mov eax, dword ptr [ebp - 4b0h]
        push eax
        lea ecx, [ebp - 310h]
        push ecx
        mov edx, dword ptr [ebp - 4b4h]
        push edx
        ; Exact mapped bytes FF 15 34 43 89 58: call dword ptr [0x58894334]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        ; Exact mapped bytes E9 AD 0E 00 00: jmp 0x5876badf
        __asm _emit 0xe9
        __asm _emit 0xad
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 414h]
        add ecx, 34ch
        ; Exact mapped bytes E8 9D 9D D1 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x9d
        __asm _emit 0xd1
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 40 04: mov ax, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E0 1F: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        movzx ecx, ax
        cmp ecx, 9
        ; Exact mapped bytes 75 17: jne 0x5876ac6a
        __asm _emit 0x75
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 414h]
        movzx eax, word ptr [edx + 164h]
        cmp eax, 3
        ; Exact mapped bytes 7E 05: jle 0x5876ac6a
        __asm _emit 0x7e
        __asm _emit 0x05
        ; Exact mapped bytes E9 75 0E 00 00: jmp 0x5876badf
        __asm _emit 0xe9
        __asm _emit 0x75
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 414h]
        mov ecx, dword ptr [ecx + 23ch]
        ; Exact mapped bytes E8 B5 7D DF FF: call 0x58562a30
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x7d
        __asm _emit 0xdf
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 5E 0E 00 00: jmp 0x5876badf
        __asm _emit 0xe9
        __asm _emit 0x5e
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 0F 84 37 01 00 00: je 0x5876adc2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x37
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 414h]
        ; Exact mapped bytes E8 F6 48 00 00: call 0x5876f590
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x48
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes 83 3D 6C 20 96 58 00: cmp dword ptr [0x5896206c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x6c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 1A 01 00 00: je 0x5876adc2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 100h
        push 0
        lea eax, [ebp - 410h]
        push eax
        ; Exact mapped bytes E8 55 21 0E 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x21
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 414h]
        mov ecx, dword ptr [ecx + 5e84h]
        ; Exact mapped bytes E8 01 AD D2 FF: call 0x584959d0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xad
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 4b8h], eax
        mov edx, dword ptr [ebp - 414h]
        mov ecx, dword ptr [edx + 5e84h]
        ; Exact mapped bytes E8 3A FA DF FF: call 0x5856a720
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xfa
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 4bch], eax
        mov eax, dword ptr [ebp - 414h]
        mov ecx, dword ptr [eax + 5e84h]
        ; Exact mapped bytes E8 33 E9 D7 FF: call 0x584e9630
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xe9
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 4c0h], eax
        mov ecx, dword ptr [ebp - 414h]
        ; Exact mapped bytes E8 32 17 D2 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x17
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 4B 9D D1 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x9d
        __asm _emit 0xd1
        __asm _emit 0xff
        add eax, 0ch
        mov dword ptr [ebp - 4c4h], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 67 AC D2 FF: call 0x58495990
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xac
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 4c8h], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 56 A9 D2 FF: call 0x58495690
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xa9
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 4cch], eax
        mov ecx, dword ptr [ebp - 4b8h]
        push ecx
        mov edx, dword ptr [ebp - 4bch]
        push edx
        mov eax, dword ptr [ebp - 4c0h]
        push eax
        mov ecx, dword ptr [ebp - 4c4h]
        push ecx
        mov edx, dword ptr [ebp - 4c8h]
        push edx
        mov eax, dword ptr [ebp - 4cch]
        push eax
        push 588b5048h
        lea ecx, [ebp - 410h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 20h
        lea edx, [ebp - 410h]
        push edx
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 4d0h], eax
        ; Exact mapped bytes A1 70 20 96 58: mov eax, dword ptr [0x58962070]
        __asm _emit 0xa1
        __asm _emit 0x70
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 4d4h], eax
        push 0
        lea ecx, [ebp - 590h]
        push ecx
        mov edx, dword ptr [ebp - 4d0h]
        push edx
        lea eax, [ebp - 410h]
        push eax
        mov ecx, dword ptr [ebp - 4d4h]
        push ecx
        ; Exact mapped bytes FF 15 34 43 89 58: call dword ptr [0x58894334]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        ; Exact mapped bytes E9 18 0D 00 00: jmp 0x5876badf
        __asm _emit 0xe9
        __asm _emit 0x18
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 0F 84 98 0B 00 00: je 0x5876b969
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x98
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        movzx eax, byte ptr [edx]
        cmp eax, 1
        ; Exact mapped bytes 0F 85 53 03 00 00: jne 0x5876b133
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x53
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        movzx edx, byte ptr [ecx + 1]
        cmp edx, 1
        ; Exact mapped bytes 0F 85 CC 00 00 00: jne 0x5876aebc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        movzx ecx, byte ptr [eax + 2]
        cmp ecx, 1
        ; Exact mapped bytes 75 5D: jne 0x5876ae59
        __asm _emit 0x75
        __asm _emit 0x5d
        mov edx, dword ptr [ebp + 0ch]
        movzx eax, byte ptr [edx + 3]
        sub eax, 6
        mov dword ptr [ebp - 4d8h], eax
        mov dword ptr [ebp - 430h], 0
        ; Exact mapped bytes EB 0F: jmp 0x5876ae27
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 430h]
        add ecx, 1
        mov dword ptr [ebp - 430h], ecx
        mov edx, dword ptr [ebp - 430h]
        cmp edx, dword ptr [ebp - 4d8h]
        ; Exact mapped bytes 7D 22: jge 0x5876ae57
        __asm _emit 0x7d
        __asm _emit 0x22
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, dword ptr [ebp - 430h]
        movzx edx, byte ptr [ecx + 6]
        push edx
        push 1
        mov ecx, dword ptr [ebp - 414h]
        ; Exact mapped bytes E8 BC 9B FF FF: call 0x58764a10
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x9b
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C1: jmp 0x5876ae18
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact mapped bytes EB 5E: jmp 0x5876aeb7
        __asm _emit 0xeb
        __asm _emit 0x5e
        mov eax, dword ptr [ebp + 0ch]
        movzx ecx, byte ptr [eax + 3]
        sub ecx, 8
        mov dword ptr [ebp - 4dch], ecx
        mov dword ptr [ebp - 434h], 0
        ; Exact mapped bytes EB 0F: jmp 0x5876ae84
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 434h]
        add edx, 1
        mov dword ptr [ebp - 434h], edx
        mov eax, dword ptr [ebp - 434h]
        cmp eax, dword ptr [ebp - 4dch]
        ; Exact mapped bytes 7D 25: jge 0x5876aeb7
        __asm _emit 0x7d
        __asm _emit 0x25
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 4
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, dword ptr [ebp - 434h]
        movzx eax, byte ptr [edx + 8]
        push eax
        push 0
        mov ecx, dword ptr [ebp - 414h]
        ; Exact mapped bytes E8 5C 9B FF FF: call 0x58764a10
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x9b
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB BE: jmp 0x5876ae75
        __asm _emit 0xeb
        __asm _emit 0xbe
        ; Exact mapped bytes E9 72 02 00 00: jmp 0x5876b12e
        __asm _emit 0xe9
        __asm _emit 0x72
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        movzx edx, byte ptr [ecx + 1]
        cmp edx, 2
        ; Exact mapped bytes 75 60: jne 0x5876af28
        __asm _emit 0x75
        __asm _emit 0x60
        mov eax, dword ptr [ebp + 0ch]
        movzx ecx, byte ptr [eax + 3]
        sub ecx, 6
        mov dword ptr [ebp - 4e0h], ecx
        mov dword ptr [ebp - 438h], 0
        ; Exact mapped bytes EB 0F: jmp 0x5876aef3
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 438h]
        add edx, 1
        mov dword ptr [ebp - 438h], edx
        mov eax, dword ptr [ebp - 438h]
        cmp eax, dword ptr [ebp - 4e0h]
        ; Exact mapped bytes 7D 22: jge 0x5876af23
        __asm _emit 0x7d
        __asm _emit 0x22
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, dword ptr [ebp - 438h]
        movzx eax, byte ptr [edx + 6]
        push eax
        push 4
        mov ecx, dword ptr [ebp - 414h]
        ; Exact mapped bytes E8 F0 9A FF FF: call 0x58764a10
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x9a
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C1: jmp 0x5876aee4
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact mapped bytes E9 06 02 00 00: jmp 0x5876b12e
        __asm _emit 0xe9
        __asm _emit 0x06
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        movzx edx, byte ptr [ecx + 1]
        cmp edx, 3
        ; Exact mapped bytes 75 60: jne 0x5876af94
        __asm _emit 0x75
        __asm _emit 0x60
        mov eax, dword ptr [ebp + 0ch]
        movzx ecx, byte ptr [eax + 3]
        sub ecx, 4
        mov dword ptr [ebp - 4e4h], ecx
        mov dword ptr [ebp - 43ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x5876af5f
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 43ch]
        add edx, 1
        mov dword ptr [ebp - 43ch], edx
        mov eax, dword ptr [ebp - 43ch]
        cmp eax, dword ptr [ebp - 4e4h]
        ; Exact mapped bytes 7D 22: jge 0x5876af8f
        __asm _emit 0x7d
        __asm _emit 0x22
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, dword ptr [ebp - 43ch]
        movzx eax, byte ptr [edx + 4]
        push eax
        push 4
        mov ecx, dword ptr [ebp - 414h]
        ; Exact mapped bytes E8 84 9A FF FF: call 0x58764a10
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x9a
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB C1: jmp 0x5876af50
        __asm _emit 0xeb
        __asm _emit 0xc1
        ; Exact mapped bytes E9 9A 01 00 00: jmp 0x5876b12e
        __asm _emit 0xe9
        __asm _emit 0x9a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        movzx edx, byte ptr [ecx + 1]
        cmp edx, 5
        ; Exact mapped bytes 75 75: jne 0x5876b015
        __asm _emit 0x75
        __asm _emit 0x75
        mov eax, dword ptr [ebp + 0ch]
        movzx ecx, byte ptr [eax + 3]
        sub ecx, 4
        mov dword ptr [ebp - 4e8h], ecx
        mov dword ptr [ebp - 440h], 0
        ; Exact mapped bytes EB 0F: jmp 0x5876afcb
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 440h]
        add edx, 1
        mov dword ptr [ebp - 440h], edx
        mov eax, dword ptr [ebp - 440h]
        cmp eax, dword ptr [ebp - 4e8h]
        ; Exact mapped bytes 7D 37: jge 0x5876b010
        __asm _emit 0x7d
        __asm _emit 0x37
        mov ecx, dword ptr [ebp + 0ch]
        movzx edx, byte ptr [ecx + 2]
        mov dword ptr [ebp - 4ech], edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, dword ptr [ebp - 440h]
        movzx edx, byte ptr [ecx + 4]
        push edx
        mov eax, dword ptr [ebp - 4ech]
        add eax, 0bh
        push eax
        mov ecx, dword ptr [ebp - 414h]
        ; Exact mapped bytes E8 03 9A FF FF: call 0x58764a10
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x9a
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB AC: jmp 0x5876afbc
        __asm _emit 0xeb
        __asm _emit 0xac
        ; Exact mapped bytes E9 19 01 00 00: jmp 0x5876b12e
        __asm _emit 0xe9
        __asm _emit 0x19
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        movzx edx, byte ptr [ecx + 1]
        cmp edx, 6
        ; Exact mapped bytes 0F 85 81 00 00 00: jne 0x5876b0a6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        movzx ecx, byte ptr [eax + 3]
        sub ecx, 8
        mov dword ptr [ebp - 470h], ecx
        cmp dword ptr [ebp - 470h], 0
        ; Exact mapped bytes 7E 63: jle 0x5876b0a1
        __asm _emit 0x7e
        __asm _emit 0x63
        mov dword ptr [ebp - 444h], 0
        ; Exact mapped bytes EB 0F: jmp 0x5876b059
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 444h]
        add edx, 1
        mov dword ptr [ebp - 444h], edx
        mov eax, dword ptr [ebp - 444h]
        cmp eax, dword ptr [ebp - 470h]
        ; Exact mapped bytes 7D 3A: jge 0x5876b0a1
        __asm _emit 0x7d
        __asm _emit 0x3a
        mov ecx, dword ptr [ebp + 0ch]
        movzx edx, byte ptr [ecx + 2]
        mov dword ptr [ebp - 4f0h], edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 4
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, dword ptr [ebp - 444h]
        movzx edx, byte ptr [ecx + 8]
        push edx
        mov eax, dword ptr [ebp - 4f0h]
        add eax, 15h
        push eax
        mov ecx, dword ptr [ebp - 414h]
        ; Exact mapped bytes E8 72 99 FF FF: call 0x58764a10
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x99
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB A9: jmp 0x5876b04a
        __asm _emit 0xeb
        __asm _emit 0xa9
        ; Exact mapped bytes E9 88 00 00 00: jmp 0x5876b12e
        __asm _emit 0xe9
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        movzx edx, byte ptr [ecx + 1]
        cmp edx, 7
        ; Exact mapped bytes 75 7C: jne 0x5876b12e
        __asm _emit 0x75
        __asm _emit 0x7c
        mov eax, dword ptr [ebp + 0ch]
        movzx ecx, byte ptr [eax + 3]
        sub ecx, 4
        mov dword ptr [ebp - 474h], ecx
        cmp dword ptr [ebp - 474h], 0
        ; Exact mapped bytes 7E 63: jle 0x5876b12e
        __asm _emit 0x7e
        __asm _emit 0x63
        mov dword ptr [ebp - 448h], 0
        ; Exact mapped bytes EB 0F: jmp 0x5876b0e6
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 448h]
        add edx, 1
        mov dword ptr [ebp - 448h], edx
        mov eax, dword ptr [ebp - 448h]
        cmp eax, dword ptr [ebp - 474h]
        ; Exact mapped bytes 7D 3A: jge 0x5876b12e
        __asm _emit 0x7d
        __asm _emit 0x3a
        mov ecx, dword ptr [ebp + 0ch]
        movzx edx, byte ptr [ecx + 2]
        mov dword ptr [ebp - 4f4h], edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 4
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, dword ptr [ebp - 448h]
        movzx edx, byte ptr [ecx + 4]
        push edx
        mov eax, dword ptr [ebp - 4f4h]
        add eax, 16h
        push eax
        mov ecx, dword ptr [ebp - 414h]
        ; Exact mapped bytes E8 E5 98 FF FF: call 0x58764a10
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x98
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB A9: jmp 0x5876b0d7
        __asm _emit 0xeb
        __asm _emit 0xa9
        ; Exact mapped bytes E9 36 08 00 00: jmp 0x5876b969
        __asm _emit 0xe9
        __asm _emit 0x36
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        movzx ecx, byte ptr [eax]
        cmp ecx, 2
        ; Exact mapped bytes 0F 85 27 08 00 00: jne 0x5876b969
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x27
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        movzx eax, byte ptr [edx + 1]
        cmp eax, 1
        ; Exact mapped bytes 0F 85 D6 00 00 00: jne 0x5876b228
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        movzx esi, byte ptr [ecx + 2]
        mov ecx, dword ptr [ebp - 414h]
        add ecx, 34ch
        ; Exact mapped bytes E8 96 0D D2 FF: call 0x5848bf00
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x0d
        __asm _emit 0xd2
        __asm _emit 0xff
        movzx edx, byte ptr [eax + 4]
        cmp esi, edx
        ; Exact mapped bytes 0F 85 AD 00 00 00: jne 0x5876b223
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 66 8B 48 0A: mov cx, word ptr [eax + 0xa]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0a
        ; Exact mapped bytes 66 89 8D A0 FB FF FF: mov word ptr [ebp - 0x460], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0xa0
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 66 8B 42 08: mov ax, word ptr [edx + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x08
        ; Exact mapped bytes 66 89 85 9C FB FF FF: mov word ptr [ebp - 0x464], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x9c
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 66 8B 51 04: mov dx, word ptr [ecx + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x04
        ; Exact mapped bytes 66 89 95 A8 FB FF FF: mov word ptr [ebp - 0x458], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x95
        __asm _emit 0xa8
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 66 8B 48 06: mov cx, word ptr [eax + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x06
        ; Exact mapped bytes 66 89 8D A4 FB FF FF: mov word ptr [ebp - 0x45c], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        movzx edx, word ptr [ebp - 458h]
        mov dword ptr [ebp - 584h], edx
        movzx eax, word ptr [ebp - 45ch]
        mov dword ptr [ebp - 580h], eax
        movzx ecx, word ptr [ebp - 460h]
        test ecx, ecx
        ; Exact mapped bytes 74 50: je 0x5876b223
        __asm _emit 0x74
        __asm _emit 0x50
        movzx edx, word ptr [ebp - 464h]
        push edx
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 DA 8D DB FF: call 0x58523fc0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x8d
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 478h], eax
        cmp dword ptr [ebp - 478h], 0
        ; Exact mapped bytes 74 2E: je 0x5876b223
        __asm _emit 0x74
        __asm _emit 0x2e
        mov ecx, dword ptr [ebp - 478h]
        ; Exact mapped bytes E8 D0 5E FF FF: call 0x587610d0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x5e
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4f8h], eax
        lea eax, [ebp - 584h]
        push eax
        mov ecx, dword ptr [ebp - 414h]
        add ecx, 4
        push ecx
        mov ecx, dword ptr [ebp - 4f8h]
        ; Exact mapped bytes E8 5E 34 D5 FF: call 0x584be680
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x34
        __asm _emit 0xd5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 41 07 00 00: jmp 0x5876b969
        __asm _emit 0xe9
        __asm _emit 0x41
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        movzx eax, byte ptr [edx + 1]
        cmp eax, 9
        ; Exact mapped bytes 0F 85 22 01 00 00: jne 0x5876b35a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x22
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 CD A6 D2 FF: call 0x58495910
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xa6
        __asm _emit 0xd2
        __asm _emit 0xff
        and eax, 1
        ; Exact mapped bytes 0F 84 09 01 00 00: je 0x5876b355
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        movzx edx, byte ptr [ecx + 3]
        sub edx, 4
        shr edx, 1
        mov dword ptr [ebp - 4fch], edx
        mov dword ptr [ebp - 44ch], 0
        ; Exact mapped bytes EB 0F: jmp 0x5876b279
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 44ch]
        add eax, 1
        mov dword ptr [ebp - 44ch], eax
        mov ecx, dword ptr [ebp - 44ch]
        cmp ecx, dword ptr [ebp - 4fch]
        ; Exact mapped bytes 0F 8D CA 00 00 00: jge 0x5876b355
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 2
        mov edx, dword ptr [ebp - 44ch]
        mov eax, dword ptr [ebp + 0ch]
        lea ecx, [eax + edx*2 + 4]
        push ecx
        lea edx, [ebp - 468h]
        push edx
        ; Exact mapped bytes E8 E9 15 0E 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x15
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 0ch
        movzx eax, word ptr [ebp - 468h]
        push eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 03 8D DB FF: call 0x58523fc0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x8d
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 450h], eax
        cmp dword ptr [ebp - 450h], 0
        ; Exact mapped bytes 0F 84 80 00 00 00: je 0x5876b350
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 414h]
        ; Exact mapped bytes E8 45 1E D2 FF: call 0x5848d120
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x1e
        __asm _emit 0xd2
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 71: jne 0x5876b350
        __asm _emit 0x75
        __asm _emit 0x71
        mov ecx, dword ptr [ebp - 450h]
        ; Exact mapped bytes E8 36 1E D2 FF: call 0x5848d120
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x1e
        __asm _emit 0xd2
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 62: je 0x5876b350
        __asm _emit 0x74
        __asm _emit 0x62
        mov ecx, dword ptr [ebp - 450h]
        ; Exact mapped bytes E8 47 11 D2 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x11
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 00 0C D2 FF: call 0x5848bf00
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x0c
        __asm _emit 0xd2
        __asm _emit 0xff
        add eax, 6
        mov dword ptr [ebp - 500h], eax
        mov ecx, dword ptr [ebp - 414h]
        ; Exact mapped bytes E8 2C 11 D2 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x11
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 E5 0B D2 FF: call 0x5848bf00
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x0b
        __asm _emit 0xd2
        __asm _emit 0xff
        add eax, 6
        mov dword ptr [ebp - 504h], eax
        mov ecx, dword ptr [ebp - 500h]
        push ecx
        mov edx, dword ptr [ebp - 504h]
        push edx
        ; Exact mapped bytes FF 15 38 43 89 58: call dword ptr [0x58894338]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x5876b350
        __asm _emit 0x75
        __asm _emit 0x14
        mov eax, dword ptr [ebp + 0ch]
        movzx ecx, byte ptr [eax + 2]
        push ecx
        mov ecx, dword ptr [ebp - 450h]
        ; Exact mapped bytes E8 21 15 00 00: call 0x5876c870
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 15 FF FF FF: jmp 0x5876b26a
        __asm _emit 0xe9
        __asm _emit 0x15
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 0F 06 00 00: jmp 0x5876b969
        __asm _emit 0xe9
        __asm _emit 0x0f
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        movzx eax, byte ptr [edx + 1]
        cmp eax, 0ah
        ; Exact mapped bytes 0F 85 BF 03 00 00: jne 0x5876b729
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbf
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 0F 84 5F 03 00 00: je 0x5876b6d3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x5f
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push 4
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 4
        push ecx
        lea edx, [ebp - 47ch]
        push edx
        ; Exact mapped bytes E8 07 15 0E 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x15
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 0ch
        movzx eax, word ptr [ebp - 47ch]
        cmp eax, 2
        ; Exact mapped bytes 0F 85 35 03 00 00: jne 0x5876b6d1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x35
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, word ptr [ebp - 47ah]
        cmp ecx, 6
        ; Exact mapped bytes 0F 85 25 03 00 00: jne 0x5876b6d1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x25
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push 2
        mov edx, dword ptr [ebp + 0ch]
        add edx, 8
        push edx
        lea eax, [ebp - 530h]
        push eax
        ; Exact mapped bytes E8 CF 14 0E 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x14
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 0ch
        push 2
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 0ah
        push ecx
        lea edx, [ebp - 428h]
        push edx
        ; Exact mapped bytes E8 B7 14 0E 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x14
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 0ch
        push 2
        mov eax, dword ptr [ebp + 0ch]
        add eax, 0ch
        push eax
        lea ecx, [ebp - 424h]
        push ecx
        ; Exact mapped bytes E8 9F 14 0E 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x14
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 0ch
        push 1
        mov edx, dword ptr [ebp + 0ch]
        add edx, 0eh
        push edx
        lea eax, [ebp - 415h]
        push eax
        ; Exact mapped bytes E8 87 14 0E 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x14
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 A9 B5 D1 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xb5
        __asm _emit 0xd1
        __asm _emit 0xff
        cmp dword ptr [ebp - 414h], eax
        ; Exact mapped bytes 75 0E: jne 0x5876b42d
        __asm _emit 0x75
        __asm _emit 0x0e
        push 0
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 24 BD E7 FF: call 0x585e7150
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xbd
        __asm _emit 0xe7
        __asm _emit 0xff
        nop
        movzx ecx, byte ptr [ebp - 415h]
        test ecx, ecx
        ; Exact mapped bytes 0F 85 E5 01 00 00: jne 0x5876b621
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0b4h
        ; Exact mapped bytes E8 BE 5B 0C 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x5b
        __asm _emit 0x0c
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 480h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 480h], 0
        ; Exact mapped bytes 0F 84 94 00 00 00: je 0x5876b4f7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, word ptr [ebp - 424h]
        add edx, 0f0h
        mov dword ptr [ebp - 508h], edx
        movzx eax, word ptr [ebp - 428h]
        add eax, 140h
        mov dword ptr [ebp - 50ch], eax
        movzx ecx, word ptr [ebp - 424h]
        sub ecx, 0f0h
        mov dword ptr [ebp - 510h], ecx
        movzx edx, word ptr [ebp - 428h]
        sub edx, 140h
        mov dword ptr [ebp - 514h], edx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 27 B5 D1 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xb5
        __asm _emit 0xd1
        __asm _emit 0xff
        mov dword ptr [ebp - 518h], eax
        push 40h
        mov eax, dword ptr [ebp - 508h]
        push eax
        mov ecx, dword ptr [ebp - 50ch]
        push ecx
        mov edx, dword ptr [ebp - 510h]
        push edx
        mov eax, dword ptr [ebp - 514h]
        push eax
        mov ecx, dword ptr [ebp - 518h]
        push ecx
        mov ecx, dword ptr [ebp - 480h]
        ; Exact mapped bytes E8 51 59 00 00: call 0x58770e40
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x59
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 46ch], eax
        ; Exact mapped bytes EB 0A: jmp 0x5876b501
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 46ch], 0
        mov edx, dword ptr [ebp - 46ch]
        mov dword ptr [ebp - 51ch], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 51ch]
        mov dword ptr [ebp - 454h], eax
        push 4e20h
        mov ecx, dword ptr [ebp - 454h]
        ; Exact mapped bytes E8 50 A9 D1 FF: call 0x58485e80
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xa9
        __asm _emit 0xd1
        __asm _emit 0xff
        push 1
        mov ecx, dword ptr [ebp - 454h]
        ; Exact mapped bytes E8 63 83 DC FF: call 0x585338a0
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x83
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 414h]
        mov edx, dword ptr [ecx + 8]
        push edx
        mov eax, dword ptr [ebp - 414h]
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov ecx, dword ptr [ebp - 454h]
        ; Exact mapped bytes E8 C4 5A 00 00: call 0x58771020
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x5a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 F9 5D FF FF: call 0x58761360
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x5d
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 520h], eax
        mov edx, dword ptr [ebp - 454h]
        push edx
        mov ecx, dword ptr [ebp - 520h]
        ; Exact mapped bytes E8 21 26 FF FF: call 0x5875dba0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x26
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 35 B4 D1 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xb4
        __asm _emit 0xd1
        __asm _emit 0xff
        cmp dword ptr [ebp - 414h], eax
        ; Exact mapped bytes 0F 85 85 00 00 00: jne 0x5876b61c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 6
        push 2
        ; Exact mapped bytes 8B 0D 48 06 96 58: mov ecx, dword ptr [0x58960648]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x48
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 9A 74 F5 FF: call 0x586c2a40
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x74
        __asm _emit 0xf5
        __asm _emit 0xff
        push 0
        push 6
        push 2
        ; Exact mapped bytes 8B 0D 48 06 96 58: mov ecx, dword ptr [0x58960648]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x48
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 E9 82 F5 FF: call 0x586c38a0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x82
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 524h], eax
        mov eax, dword ptr [ebp - 524h]
        push eax
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B1 27 00 00: call 0x5876dd80
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 55 A3 D2 FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xa3
        __asm _emit 0xd2
        __asm _emit 0xff
        cmp eax, 8
        ; Exact mapped bytes 74 10: je 0x5876b5f0
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 45 A3 D2 FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xa3
        __asm _emit 0xd2
        __asm _emit 0xff
        cmp eax, 9
        ; Exact mapped bytes 75 10: jne 0x5876b600
        __asm _emit 0x75
        __asm _emit 0x10
        push 78h
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B3 0A 00 00: call 0x5876c0b0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 0E: jmp 0x5876b60e
        __asm _emit 0xeb
        __asm _emit 0x0e
        push 3ch
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A3 0A 00 00: call 0x5876c0b0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        push 0
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B5 2F 00 00: call 0x5876e5d0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x2f
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 B0 00 00 00: jmp 0x5876b6d1
        __asm _emit 0xe9
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, byte ptr [ebp - 415h]
        cmp ecx, 2
        ; Exact mapped bytes 75 53: jne 0x5876b680
        __asm _emit 0x75
        __asm _emit 0x53
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 88 B3 D1 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xb3
        __asm _emit 0xd1
        __asm _emit 0xff
        cmp dword ptr [ebp - 414h], eax
        ; Exact mapped bytes 75 3E: jne 0x5876b67e
        __asm _emit 0x75
        __asm _emit 0x3e
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 95 07 F1 FF: call 0x5867bde0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x07
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [ebp - 52ch], eax
        push 588b5084h
        ; Exact mapped bytes E8 95 69 DB FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x69
        __asm _emit 0xdb
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 528h], eax
        push 9fh
        push 0
        mov edx, dword ptr [ebp - 528h]
        push edx
        mov ecx, dword ptr [ebp - 52ch]
        ; Exact mapped bytes E8 83 32 D9 FF: call 0x584fe900
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x32
        __asm _emit 0xd9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 51: jmp 0x5876b6d1
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 35 B3 D1 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xb3
        __asm _emit 0xd1
        __asm _emit 0xff
        cmp dword ptr [ebp - 414h], eax
        ; Exact mapped bytes 75 3E: jne 0x5876b6d1
        __asm _emit 0x75
        __asm _emit 0x3e
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 42 07 F1 FF: call 0x5867bde0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x07
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [ebp - 534h], eax
        push 588b50ach
        ; Exact mapped bytes E8 42 69 DB FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x69
        __asm _emit 0xdb
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 560h], eax
        push 9fh
        push 0
        mov eax, dword ptr [ebp - 560h]
        push eax
        mov ecx, dword ptr [ebp - 534h]
        ; Exact mapped bytes E8 30 32 D9 FF: call 0x584fe900
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x32
        __asm _emit 0xd9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 51: jmp 0x5876b724
        __asm _emit 0xeb
        __asm _emit 0x51
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 E2 B2 D1 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xb2
        __asm _emit 0xd1
        __asm _emit 0xff
        cmp dword ptr [ebp - 414h], eax
        ; Exact mapped bytes 75 3E: jne 0x5876b724
        __asm _emit 0x75
        __asm _emit 0x3e
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 EF 06 F1 FF: call 0x5867bde0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x06
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [ebp - 53ch], eax
        push 588b50d4h
        ; Exact mapped bytes E8 EF 68 DB FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x68
        __asm _emit 0xdb
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 538h], eax
        push 9fh
        push 0
        mov ecx, dword ptr [ebp - 538h]
        push ecx
        mov ecx, dword ptr [ebp - 53ch]
        ; Exact mapped bytes E8 DD 31 D9 FF: call 0x584fe900
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x31
        __asm _emit 0xd9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 40 02 00 00: jmp 0x5876b969
        __asm _emit 0xe9
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        movzx eax, byte ptr [edx + 1]
        cmp eax, 0bh
        ; Exact mapped bytes 0F 85 8D 00 00 00: jne 0x5876b7c6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 414h]
        mov dword ptr [ecx + 16ch], 4bh
        mov edx, dword ptr [ebp - 414h]
        mov dword ptr [edx + 168h], 4bh
        mov eax, 100h
        mov ecx, dword ptr [ebp - 414h]
        ; Exact mapped bytes 66 89 81 70 01 00 00: mov word ptr [ecx + 0x170], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 1
        mov eax, dword ptr [ebp - 414h]
        ; Exact mapped bytes 66 89 90 64 01 00 00: mov word ptr [eax + 0x164], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 38 B2 D1 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xb2
        __asm _emit 0xd1
        __asm _emit 0xff
        cmp eax, dword ptr [ebp - 414h]
        ; Exact mapped bytes 75 31: jne 0x5876b7c1
        __asm _emit 0x75
        __asm _emit 0x31
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 55 A2 D2 FF: call 0x584959f0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xa2
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 4E 68 F2 FF: call 0x58691ff0
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x68
        __asm _emit 0xf2
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 43 A2 D2 FF: call 0x584959f0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xa2
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 540h], eax
        push 1
        mov ecx, dword ptr [ebp - 540h]
        ; Exact mapped bytes E8 10 28 F2 FF: call 0x5868dfd0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x28
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 A3 01 00 00: jmp 0x5876b969
        __asm _emit 0xe9
        __asm _emit 0xa3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        movzx edx, byte ptr [ecx + 1]
        cmp edx, 0ch
        ; Exact mapped bytes 0F 85 8D 00 00 00: jne 0x5876b863
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 414h]
        mov dword ptr [eax + 16ch], 4bh
        mov ecx, dword ptr [ebp - 414h]
        mov dword ptr [ecx + 168h], 4bh
        mov edx, 6ah
        mov eax, dword ptr [ebp - 414h]
        ; Exact mapped bytes 66 89 90 70 01 00 00: mov word ptr [eax + 0x170], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 2
        mov edx, dword ptr [ebp - 414h]
        ; Exact mapped bytes 66 89 8A 64 01 00 00: mov word ptr [edx + 0x164], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 9B B1 D1 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xb1
        __asm _emit 0xd1
        __asm _emit 0xff
        cmp eax, dword ptr [ebp - 414h]
        ; Exact mapped bytes 75 31: jne 0x5876b85e
        __asm _emit 0x75
        __asm _emit 0x31
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B8 A1 D2 FF: call 0x584959f0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xa1
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 B1 67 F2 FF: call 0x58691ff0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x67
        __asm _emit 0xf2
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A6 A1 D2 FF: call 0x584959f0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xa1
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 544h], eax
        push 2
        mov ecx, dword ptr [ebp - 544h]
        ; Exact mapped bytes E8 73 27 F2 FF: call 0x5868dfd0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x27
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 06 01 00 00: jmp 0x5876b969
        __asm _emit 0xe9
        __asm _emit 0x06
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        movzx ecx, byte ptr [eax + 1]
        cmp ecx, 0dh
        ; Exact mapped bytes 75 78: jne 0x5876b8e7
        __asm _emit 0x75
        __asm _emit 0x78
        mov edx, dword ptr [ebp - 414h]
        mov dword ptr [edx + 16ch], 32h
        mov eax, dword ptr [ebp - 414h]
        mov dword ptr [eax + 168h], 32h
        xor ecx, ecx
        mov edx, dword ptr [ebp - 414h]
        ; Exact mapped bytes 66 89 8A 72 01 00 00: mov word ptr [edx + 0x172], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8a
        __asm _emit 0x72
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        mov ecx, dword ptr [ebp - 414h]
        ; Exact mapped bytes 66 89 81 64 01 00 00: mov word ptr [ecx + 0x164], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 05 B1 D1 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xb1
        __asm _emit 0xd1
        __asm _emit 0xff
        cmp eax, dword ptr [ebp - 414h]
        ; Exact mapped bytes 75 1F: jne 0x5876b8e2
        __asm _emit 0x75
        __asm _emit 0x1f
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 22 A1 D2 FF: call 0x584959f0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xa1
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 548h], eax
        push 4
        mov ecx, dword ptr [ebp - 548h]
        ; Exact mapped bytes E8 EF 26 F2 FF: call 0x5868dfd0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x26
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 82 00 00 00: jmp 0x5876b969
        __asm _emit 0xe9
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        movzx eax, byte ptr [edx + 1]
        cmp eax, 0eh
        ; Exact mapped bytes 75 76: jne 0x5876b969
        __asm _emit 0x75
        __asm _emit 0x76
        mov ecx, dword ptr [ebp - 414h]
        mov dword ptr [ecx + 16ch], 32h
        mov edx, dword ptr [ebp - 414h]
        mov dword ptr [edx + 168h], 32h
        mov eax, 0ffffff00h
        mov ecx, dword ptr [ebp - 414h]
        ; Exact mapped bytes 66 89 81 72 01 00 00: mov word ptr [ecx + 0x172], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x72
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 5
        mov eax, dword ptr [ebp - 414h]
        ; Exact mapped bytes 66 89 90 64 01 00 00: mov word ptr [eax + 0x164], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x90
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 7E B0 D1 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xb0
        __asm _emit 0xd1
        __asm _emit 0xff
        cmp eax, dword ptr [ebp - 414h]
        ; Exact mapped bytes 75 1F: jne 0x5876b969
        __asm _emit 0x75
        __asm _emit 0x1f
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 9B A0 D2 FF: call 0x584959f0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xa0
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 54ch], eax
        push 5
        mov ecx, dword ptr [ebp - 54ch]
        ; Exact mapped bytes E8 68 26 F2 FF: call 0x5868dfd0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x26
        __asm _emit 0xf2
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 71 01 00 00: jmp 0x5876badf
        __asm _emit 0xe9
        __asm _emit 0x71
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 414h]
        ; Exact mapped bytes E8 B3 E2 FF FF: call 0x58769c30
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 5C 01 00 00: jmp 0x5876badf
        __asm _emit 0xe9
        __asm _emit 0x5c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 414h]
        ; Exact mapped bytes E8 72 E0 FF FF: call 0x58769a00
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xe0
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 4B 01 00 00: jmp 0x5876badf
        __asm _emit 0xe9
        __asm _emit 0x4b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 414h]
        mov ecx, dword ptr [edx + 23ch]
        ; Exact mapped bytes E8 EB 70 DF FF: call 0x58562a90
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x70
        __asm _emit 0xdf
        __asm _emit 0xff
        nop
        ; Exact mapped bytes 83 3D 6C 20 96 58 00: cmp dword ptr [0x5896206c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x6c
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 1A 01 00 00: je 0x5876bacd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 100h
        push 0
        lea eax, [ebp - 110h]
        push eax
        ; Exact mapped bytes E8 4A 14 0E 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x14
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 414h]
        mov ecx, dword ptr [ecx + 5e84h]
        ; Exact mapped bytes E8 F6 9F D2 FF: call 0x584959d0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x9f
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 550h], eax
        mov edx, dword ptr [ebp - 414h]
        mov ecx, dword ptr [edx + 5e84h]
        ; Exact mapped bytes E8 2F ED DF FF: call 0x5856a720
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xed
        __asm _emit 0xdf
        __asm _emit 0xff
        mov dword ptr [ebp - 554h], eax
        mov eax, dword ptr [ebp - 414h]
        mov ecx, dword ptr [eax + 5e84h]
        ; Exact mapped bytes E8 28 DC D7 FF: call 0x584e9630
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xdc
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 558h], eax
        mov ecx, dword ptr [ebp - 414h]
        ; Exact mapped bytes E8 27 0A D2 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x0a
        __asm _emit 0xd2
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 40 90 D1 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x90
        __asm _emit 0xd1
        __asm _emit 0xff
        add eax, 0ch
        mov dword ptr [ebp - 55ch], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 5C 9F D2 FF: call 0x58495990
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x9f
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 57ch], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 4B 9C D2 FF: call 0x58495690
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x9c
        __asm _emit 0xd2
        __asm _emit 0xff
        mov dword ptr [ebp - 564h], eax
        mov ecx, dword ptr [ebp - 550h]
        push ecx
        mov edx, dword ptr [ebp - 554h]
        push edx
        mov eax, dword ptr [ebp - 558h]
        push eax
        mov ecx, dword ptr [ebp - 55ch]
        push ecx
        mov edx, dword ptr [ebp - 57ch]
        push edx
        mov eax, dword ptr [ebp - 564h]
        push eax
        push 588b50fch
        lea ecx, [ebp - 110h]
        push ecx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 20h
        lea edx, [ebp - 110h]
        push edx
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 568h], eax
        ; Exact mapped bytes A1 70 20 96 58: mov eax, dword ptr [0x58962070]
        __asm _emit 0xa1
        __asm _emit 0x70
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 56ch], eax
        push 0
        lea ecx, [ebp - 594h]
        push ecx
        mov edx, dword ptr [ebp - 568h]
        push edx
        lea eax, [ebp - 110h]
        push eax
        mov ecx, dword ptr [ebp - 56ch]
        push ecx
        ; Exact mapped bytes FF 15 34 43 89 58: call dword ptr [0x58894334]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        ; Exact mapped bytes EB 10: jmp 0x5876badf
        __asm _emit 0xeb
        __asm _emit 0x10
        mov edx, dword ptr [ebp - 414h]
        mov dword ptr [edx + 5f1ch], 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop esi
        mov ecx, dword ptr [ebp - 10h]
        xor ecx, ebp
        ; Exact mapped bytes E8 5B 55 0C 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x55
        __asm _emit 0x0c
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
