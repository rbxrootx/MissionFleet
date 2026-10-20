// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004208EC .. +0x3EF bytes.
extern "C" __declspec(naked) void FUN_004208ec_004208EC() {
    __asm {
        push ebp
        mov ebp, esp
        ; Exact mapped bytes 0F BE 45 08: movsx eax, byte ptr [ebp + 8]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x45
        __asm _emit 0x08
        push ebx
        push esi
        cmp eax, 5ah
        push edi
        ; Exact mapped bytes 0F 8F CF 01 00 00: jg 0x420ace
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xcf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 05 03 00 00: je 0x420c0a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x05
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 4dh
        ; Exact mapped bytes 0F 8F C8 00 00 00: jg 0x4209d6
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 A8 00 00 00: je 0x4209bc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 25h
        ; Exact mapped bytes 0F 84 8B 00 00 00: je 0x4209a8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 1ch
        ; Exact mapped bytes 74 6E: je 0x420990
        __asm _emit 0x74
        __asm _emit 0x6e
        dec eax
        ; Exact mapped bytes 74 53: je 0x420978
        __asm _emit 0x74
        __asm _emit 0x53
        sub eax, 6
        ; Exact mapped bytes 74 31: je 0x42095b
        __asm _emit 0x74
        __asm _emit 0x31
        dec eax
        ; Exact mapped bytes 0F 85 A5 03 00 00: jne 0x420cd6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa5
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 94 11 45 00: mov eax, dword ptr [0x451194]
        __asm _emit 0xa1
        __asm _emit 0x94
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x00
        push 0ch
        ; Exact mapped bytes A3 98 11 45 00: mov dword ptr [0x451198], eax
        __asm _emit 0xa3
        __asm _emit 0x98
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        pop ecx
        mov eax, dword ptr [eax + 8]
        cdq
        idiv ecx
        test edx, edx
        ; Exact mapped bytes 75 02: jne 0x42094d
        __asm _emit 0x75
        __asm _emit 0x02
        push ecx
        pop edx
        push dword ptr [ebp + 14h]
        push dword ptr [ebp + 10h]
        push 2
        push edx
        ; Exact mapped bytes E9 CD 00 00 00: jmp 0x420a28
        __asm _emit 0xe9
        __asm _emit 0xcd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [ebp + 14h]
        ; Exact mapped bytes A1 94 11 45 00: mov eax, dword ptr [0x451194]
        __asm _emit 0xa1
        __asm _emit 0x94
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes A3 98 11 45 00: mov dword ptr [0x451198], eax
        __asm _emit 0xa3
        __asm _emit 0x98
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        push dword ptr [ebp + 10h]
        push 2
        push dword ptr [eax + 8]
        ; Exact mapped bytes E9 B0 00 00 00: jmp 0x420a28
        __asm _emit 0xe9
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [ebp + 14h]
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp + 18h]
        push dword ptr [ebp + 10h]
        mov eax, dword ptr [eax + 10h]
        push dword ptr [ecx + eax*4 + 68h]
        ; Exact mapped bytes E9 3E 03 00 00: jmp 0x420cce
        __asm _emit 0xe9
        __asm _emit 0x3e
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [ebp + 14h]
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp + 18h]
        push dword ptr [ebp + 10h]
        mov eax, dword ptr [eax + 18h]
        push dword ptr [ecx + eax*4 + 1ch]
        ; Exact mapped bytes E9 26 03 00 00: jmp 0x420cce
        __asm _emit 0xe9
        __asm _emit 0x26
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [eax]
        mov byte ptr [ecx], 25h
        inc dword ptr [eax]
        mov eax, dword ptr [ebp + 14h]
        dec dword ptr [eax]
        ; Exact mapped bytes E9 1A 03 00 00: jmp 0x420cd6
        __asm _emit 0xe9
        __asm _emit 0x1a
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [ebp + 14h]
        ; Exact mapped bytes A1 94 11 45 00: mov eax, dword ptr [0x451194]
        __asm _emit 0xa1
        __asm _emit 0x94
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes A3 98 11 45 00: mov dword ptr [0x451198], eax
        __asm _emit 0xa3
        __asm _emit 0x98
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        push dword ptr [ebp + 10h]
        push 2
        push dword ptr [eax + 4]
        ; Exact mapped bytes EB 52: jmp 0x420a28
        __asm _emit 0xeb
        __asm _emit 0x52
        sub eax, 53h
        ; Exact mapped bytes 0F 84 D3 00 00 00: je 0x420ab2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        dec eax
        dec eax
        ; Exact mapped bytes 0F 84 8B 00 00 00: je 0x420a72
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        dec eax
        dec eax
        ; Exact mapped bytes 74 69: je 0x420a54
        __asm _emit 0x74
        __asm _emit 0x69
        dec eax
        ; Exact mapped bytes 74 47: je 0x420a35
        __asm _emit 0x74
        __asm _emit 0x47
        dec eax
        ; Exact mapped bytes 0F 85 E1 02 00 00: jne 0x420cd6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe1
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 94 11 45 00: mov eax, dword ptr [0x451194]
        __asm _emit 0xa1
        __asm _emit 0x94
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x00
        push dword ptr [ebp + 14h]
        ; Exact mapped bytes A3 98 11 45 00: mov dword ptr [0x451198], eax
        __asm _emit 0xa3
        __asm _emit 0x98
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        push dword ptr [ebp + 10h]
        mov ecx, dword ptr [eax + 14h]
        push 4
        mov eax, ecx
        push 64h
        cdq
        pop esi
        idiv esi
        push 64h
        mov esi, eax
        mov eax, ecx
        cdq
        pop ecx
        add esi, 13h
        idiv ecx
        imul esi, esi, 64h
        add esi, edx
        push esi
        ; Exact mapped bytes E8 D5 02 00 00: call 0x420d02
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ; Exact mapped bytes E9 A1 02 00 00: jmp 0x420cd6
        __asm _emit 0xe9
        __asm _emit 0xa1
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 18h]
        ; Exact mapped bytes 83 25 94 11 45 00 00: and dword ptr [0x451194], 0
        __asm _emit 0x83
        __asm _emit 0x25
        __asm _emit 0x94
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push dword ptr [ebp + 14h]
        push dword ptr [ebp + 10h]
        push dword ptr [ebp + 0ch]
        push dword ptr [eax + 0a8h]
        ; Exact mapped bytes E9 1E 02 00 00: jmp 0x420c72
        __asm _emit 0xe9
        __asm _emit 0x1e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 94 11 45 00: mov eax, dword ptr [0x451194]
        __asm _emit 0xa1
        __asm _emit 0x94
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes A3 98 11 45 00: mov dword ptr [0x451198], eax
        __asm _emit 0xa3
        __asm _emit 0x98
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 18h]
        test ecx, ecx
        ; Exact mapped bytes 75 05: jne 0x420a6d
        __asm _emit 0x75
        __asm _emit 0x05
        push 6
        pop esi
        ; Exact mapped bytes EB 15: jmp 0x420a82
        __asm _emit 0xeb
        __asm _emit 0x15
        lea esi, [ecx - 1]
        ; Exact mapped bytes EB 10: jmp 0x420a82
        __asm _emit 0xeb
        __asm _emit 0x10
        ; Exact mapped bytes A1 94 11 45 00: mov eax, dword ptr [0x451194]
        __asm _emit 0xa1
        __asm _emit 0x94
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes A3 98 11 45 00: mov dword ptr [0x451198], eax
        __asm _emit 0xa3
        __asm _emit 0x98
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        mov esi, dword ptr [eax + 18h]
        mov ecx, dword ptr [eax + 1ch]
        cmp ecx, esi
        ; Exact mapped bytes 7D 04: jge 0x420a8d
        __asm _emit 0x7d
        __asm _emit 0x04
        xor edi, edi
        ; Exact mapped bytes EB 17: jmp 0x420aa4
        __asm _emit 0xeb
        __asm _emit 0x17
        mov eax, ecx
        push 7
        cdq
        pop edi
        idiv edi
        push 7
        mov edi, eax
        mov eax, ecx
        cdq
        pop ecx
        idiv ecx
        cmp edx, esi
        ; Exact mapped bytes 7C 01: jl 0x420aa4
        __asm _emit 0x7c
        __asm _emit 0x01
        inc edi
        push dword ptr [ebp + 14h]
        push dword ptr [ebp + 10h]
        push 2
        push edi
        ; Exact mapped bytes E9 76 FF FF FF: jmp 0x420a28
        __asm _emit 0xe9
        __asm _emit 0x76
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push dword ptr [ebp + 14h]
        ; Exact mapped bytes A1 94 11 45 00: mov eax, dword ptr [0x451194]
        __asm _emit 0xa1
        __asm _emit 0x94
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes A3 98 11 45 00: mov dword ptr [0x451198], eax
        __asm _emit 0xa3
        __asm _emit 0x98
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        push dword ptr [ebp + 10h]
        push 2
        push dword ptr [eax]
        ; Exact mapped bytes E9 5A FF FF FF: jmp 0x420a28
        __asm _emit 0xe9
        __asm _emit 0x5a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 6dh
        ; Exact mapped bytes 0F 8F 14 01 00 00: jg 0x420beb
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 F1 00 00 00: je 0x420bce
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 61h
        ; Exact mapped bytes 0F 84 D1 00 00 00: je 0x420bb7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        dec eax
        ; Exact mapped bytes 0F 84 B2 00 00 00: je 0x420b9f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        dec eax
        ; Exact mapped bytes 74 48: je 0x420b38
        __asm _emit 0x74
        __asm _emit 0x48
        dec eax
        ; Exact mapped bytes 74 28: je 0x420b1b
        __asm _emit 0x74
        __asm _emit 0x28
        sub eax, 6
        ; Exact mapped bytes 0F 85 DA 01 00 00: jne 0x420cd6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xda
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 94 11 45 00: mov eax, dword ptr [0x451194]
        __asm _emit 0xa1
        __asm _emit 0x94
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x00
        push dword ptr [ebp + 14h]
        ; Exact mapped bytes A3 98 11 45 00: mov dword ptr [0x451198], eax
        __asm _emit 0xa3
        __asm _emit 0x98
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        push dword ptr [ebp + 10h]
        mov eax, dword ptr [eax + 1ch]
        push 3
        inc eax
        push eax
        ; Exact mapped bytes E9 0D FF FF FF: jmp 0x420a28
        __asm _emit 0xe9
        __asm _emit 0x0d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push dword ptr [ebp + 14h]
        ; Exact mapped bytes A1 94 11 45 00: mov eax, dword ptr [0x451194]
        __asm _emit 0xa1
        __asm _emit 0x94
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes A3 98 11 45 00: mov dword ptr [0x451198], eax
        __asm _emit 0xa3
        __asm _emit 0x98
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        push dword ptr [ebp + 10h]
        push 2
        push dword ptr [eax + 0ch]
        ; Exact mapped bytes E9 F0 FE FF FF: jmp 0x420a28
        __asm _emit 0xe9
        __asm _emit 0xf0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 3D 94 11 45 00 00: cmp dword ptr [0x451194], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x94
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 1E: je 0x420b5f
        __asm _emit 0x74
        __asm _emit 0x1e
        mov ebx, dword ptr [ebp + 18h]
        mov esi, dword ptr [ebp + 14h]
        mov edi, dword ptr [ebp + 10h]
        ; Exact mapped bytes 83 25 94 11 45 00 00: and dword ptr [0x451194], 0
        __asm _emit 0x83
        __asm _emit 0x25
        __asm _emit 0x94
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        push esi
        push edi
        push dword ptr [ebp + 0ch]
        push dword ptr [ebx + 0a4h]
        ; Exact mapped bytes EB 15: jmp 0x420b74
        __asm _emit 0xeb
        __asm _emit 0x15
        mov ebx, dword ptr [ebp + 18h]
        mov esi, dword ptr [ebp + 14h]
        mov edi, dword ptr [ebp + 10h]
        push ebx
        push esi
        push edi
        push dword ptr [ebp + 0ch]
        push dword ptr [ebx + 0a0h]
        ; Exact mapped bytes E8 41 02 00 00: call 0x420dba
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        cmp dword ptr [esi], 0
        ; Exact mapped bytes 0F 84 51 01 00 00: je 0x420cd6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x51
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi]
        push ebx
        push esi
        push edi
        push dword ptr [ebp + 0ch]
        mov byte ptr [eax], 20h
        inc dword ptr [edi]
        dec dword ptr [esi]
        push dword ptr [ebx + 0a8h]
        ; Exact mapped bytes E9 D3 00 00 00: jmp 0x420c72
        __asm _emit 0xe9
        __asm _emit 0xd3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [ebp + 14h]
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp + 18h]
        push dword ptr [ebp + 10h]
        mov eax, dword ptr [eax + 10h]
        push dword ptr [ecx + eax*4 + 38h]
        ; Exact mapped bytes E9 17 01 00 00: jmp 0x420cce
        __asm _emit 0xe9
        __asm _emit 0x17
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [ebp + 14h]
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp + 18h]
        push dword ptr [ebp + 10h]
        mov eax, dword ptr [eax + 18h]
        push dword ptr [ecx + eax*4]
        ; Exact mapped bytes E9 00 01 00 00: jmp 0x420cce
        __asm _emit 0xe9
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 94 11 45 00: mov eax, dword ptr [0x451194]
        __asm _emit 0xa1
        __asm _emit 0x94
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x00
        push dword ptr [ebp + 14h]
        ; Exact mapped bytes A3 98 11 45 00: mov dword ptr [0x451198], eax
        __asm _emit 0xa3
        __asm _emit 0x98
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        push dword ptr [ebp + 10h]
        mov eax, dword ptr [eax + 10h]
        push 2
        ; Exact mapped bytes E9 29 FF FF FF: jmp 0x420b14
        __asm _emit 0xe9
        __asm _emit 0x29
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        sub eax, 70h
        ; Exact mapped bytes 0F 84 BA 00 00 00: je 0x420cae
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 7
        ; Exact mapped bytes 0F 84 94 00 00 00: je 0x420c91
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        dec eax
        ; Exact mapped bytes 74 4F: je 0x420c4f
        __asm _emit 0x74
        __asm _emit 0x4f
        dec eax
        ; Exact mapped bytes 74 29: je 0x420c2c
        __asm _emit 0x74
        __asm _emit 0x29
        dec eax
        ; Exact mapped bytes 0F 85 CC 00 00 00: jne 0x420cd6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 E1 4E 00 00: call 0x425af0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x4e
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        push dword ptr [ebp + 14h]
        xor eax, eax
        cmp dword ptr [ecx + 20h], eax
        push dword ptr [ebp + 10h]
        setne al
        push dword ptr [eax*4 + 44d0f4h]
        ; Exact mapped bytes E9 A2 00 00 00: jmp 0x420cce
        __asm _emit 0xe9
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 94 11 45 00: mov eax, dword ptr [0x451194]
        __asm _emit 0xa1
        __asm _emit 0x94
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x00
        push dword ptr [ebp + 14h]
        ; Exact mapped bytes A3 98 11 45 00: mov dword ptr [0x451198], eax
        __asm _emit 0xa3
        __asm _emit 0x98
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        push dword ptr [ebp + 10h]
        mov eax, dword ptr [eax + 14h]
        push 2
        push 64h
        cdq
        pop ecx
        idiv ecx
        ; Exact mapped bytes E9 06 FD FF FF: jmp 0x420955
        __asm _emit 0xe9
        __asm _emit 0x06
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 3D 94 11 45 00 00: cmp dword ptr [0x451194], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x94
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 24: je 0x420c7c
        __asm _emit 0x74
        __asm _emit 0x24
        mov eax, dword ptr [ebp + 18h]
        ; Exact mapped bytes 83 25 94 11 45 00 00: and dword ptr [0x451194], 0
        __asm _emit 0x83
        __asm _emit 0x25
        __asm _emit 0x94
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push dword ptr [ebp + 14h]
        push dword ptr [ebp + 10h]
        push dword ptr [ebp + 0ch]
        push dword ptr [eax + 0a4h]
        ; Exact mapped bytes E8 43 01 00 00: call 0x420dba
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        ; Exact mapped bytes EB 5A: jmp 0x420cd6
        __asm _emit 0xeb
        __asm _emit 0x5a
        mov eax, dword ptr [ebp + 18h]
        push eax
        push dword ptr [ebp + 14h]
        push dword ptr [ebp + 10h]
        push dword ptr [ebp + 0ch]
        push dword ptr [eax + 0a0h]
        ; Exact mapped bytes EB E1: jmp 0x420c72
        __asm _emit 0xeb
        __asm _emit 0xe1
        push dword ptr [ebp + 14h]
        ; Exact mapped bytes A1 94 11 45 00: mov eax, dword ptr [0x451194]
        __asm _emit 0xa1
        __asm _emit 0x94
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes A3 98 11 45 00: mov dword ptr [0x451198], eax
        __asm _emit 0xa3
        __asm _emit 0x98
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        push dword ptr [ebp + 10h]
        push 1
        push dword ptr [eax + 18h]
        ; Exact mapped bytes E9 7A FD FF FF: jmp 0x420a28
        __asm _emit 0xe9
        __asm _emit 0x7a
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 0ch]
        push dword ptr [ebp + 14h]
        cmp dword ptr [eax + 8], 0bh
        push dword ptr [ebp + 10h]
        mov eax, dword ptr [ebp + 18h]
        ; Exact mapped bytes 7F 08: jg 0x420cc8
        __asm _emit 0x7f
        __asm _emit 0x08
        push dword ptr [eax + 98h]
        ; Exact mapped bytes EB 06: jmp 0x420cce
        __asm _emit 0xeb
        __asm _emit 0x06
        push dword ptr [eax + 9ch]
        ; Exact mapped bytes E8 08 00 00 00: call 0x420cdb
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret
    }
}
