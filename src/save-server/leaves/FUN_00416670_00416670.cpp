// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00416670 .. +0x57E bytes.
extern "C" __declspec(naked) void FUN_00416670_00416670() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58b308h
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
        mov eax, 114d0h
        ; Exact mapped bytes E8 0E F9 04 00: call 0x465fa0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xf9
        __asm _emit 0x04
        __asm _emit 0x00
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 114dch]
        mov ecx, 4534h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 10h], ecx
        push 518h
        lea ecx, [ebp - 0a68h]
        ; Exact mapped bytes E8 31 B2 FE FF: call 0x4018ed
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xb2
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        push 18h
        mov eax, dword ptr [ebp + 0ch]
        push eax
        lea ecx, [ebp - 28h]
        push ecx
        ; Exact mapped bytes E8 2E EC 04 00: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xec
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        push 18h
        mov edx, dword ptr [ebp + 0ch]
        add edx, 18h
        push edx
        lea eax, [ebp - 40h]
        push eax
        ; Exact mapped bytes E8 19 EC 04 00: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xec
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        push 4
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 30h
        push ecx
        lea edx, [ebp - 44h]
        push edx
        ; Exact mapped bytes E8 04 EC 04 00: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xec
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        lea eax, [ebp - 28h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + 108h]
        ; Exact mapped bytes E8 6A B0 FE FF: call 0x40177b
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xb0
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 0a6ch], eax
        lea edx, [ebp - 40h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 108h]
        ; Exact mapped bytes E8 52 B0 FE FF: call 0x40177b
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xb0
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 0a70h], eax
        cmp dword ptr [ebp - 0a6ch], -1
        ; Exact mapped bytes 0F 84 70 04 00 00: je 0x416bac
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x70
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 0a70h], -1
        ; Exact mapped bytes 0F 84 63 04 00 00: je 0x416bac
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x63
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 0a6ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 108h]
        ; Exact mapped bytes E8 3B B3 FE FF: call 0x401a9b
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xb3
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 0a74h], eax
        push 0
        mov eax, dword ptr [ebp - 0a70h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + 108h]
        ; Exact mapped bytes E8 1E B3 FE FF: call 0x401a9b
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xb3
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 0a78h], eax
        cmp dword ptr [ebp - 0a74h], -1
        ; Exact mapped bytes 0F 84 1C 04 00 00: je 0x416bac
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1c
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 0a78h], -1
        ; Exact mapped bytes 0F 84 0F 04 00 00: je 0x416bac
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0f
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 44h]
        push edx
        mov eax, dword ptr [ebp - 0a74h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + 108h]
        ; Exact mapped bytes E8 A8 AE FE FF: call 0x40165e
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xae
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 0a7ch], eax
        cmp dword ptr [ebp - 0a7ch], -1
        ; Exact mapped bytes 0F 84 E3 03 00 00: je 0x416bac
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe3
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push 500h
        lea edx, [ebp - 544h]
        push edx
        mov eax, dword ptr [ebp - 0a7ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + 108h]
        ; Exact mapped bytes E8 1C B1 FE FF: call 0x401906
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xb1
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp dword ptr [ebp - 1d8h], 0
        ; Exact mapped bytes 0F 85 B5 03 00 00: jne 0x416bac
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb5
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0a80h], 0
        ; Exact mapped bytes EB 0F: jmp 0x416812
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 0a80h]
        add edx, 1
        mov dword ptr [ebp - 0a80h], edx
        cmp dword ptr [ebp - 0a80h], 32h
        ; Exact mapped bytes 0F 8D 6E 02 00 00: jge 0x416a8d
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x6e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0a80h]
        push eax
        mov ecx, dword ptr [ebp - 0a78h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 108h]
        ; Exact mapped bytes E8 23 AE FE FF: call 0x40165e
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xae
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 0a84h], eax
        cmp dword ptr [ebp - 0a84h], -1
        ; Exact mapped bytes 0F 84 36 01 00 00: je 0x416984
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x36
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 500h
        lea eax, [ebp - 0a44h]
        push eax
        mov ecx, dword ptr [ebp - 0a84h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [edx + 108h]
        ; Exact mapped bytes E8 97 B0 FE FF: call 0x401906
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xb0
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp dword ptr [ebp - 6d8h], 1
        ; Exact mapped bytes 0F 85 03 01 00 00: jne 0x41697f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x03
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0a80h]
        and eax, 3fffffh
        shl eax, 0ah
        mov ecx, dword ptr [ebp - 544h]
        and ecx, 3ffh
        or ecx, eax
        mov dword ptr [ebp - 544h], ecx
        push 500h
        lea edx, [ebp - 544h]
        push edx
        mov eax, dword ptr [ebp - 0a84h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + 108h]
        ; Exact mapped bytes E8 F2 AF FE FF: call 0x4018b1
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xaf
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 1d8h], 1
        push 500h
        lea edx, [ebp - 544h]
        push edx
        mov eax, dword ptr [ebp - 0a7ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + 108h]
        ; Exact mapped bytes E8 C7 AF FE FF: call 0x4018b1
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xaf
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 1d8h], 0
        push 18h
        lea edx, [ebp - 40h]
        push edx
        lea ecx, [ebp - 0a68h]
        ; Exact mapped bytes E8 05 A7 FE FF: call 0x40100a
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xa7
        __asm _emit 0xfe
        __asm _emit 0xff
        push 500h
        lea eax, [ebp - 544h]
        push eax
        lea ecx, [ebp - 0a68h]
        ; Exact mapped bytes E8 EE A6 FE FF: call 0x40100a
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xa6
        __asm _emit 0xfe
        __asm _emit 0xff
        push 0
        push 18h
        lea ecx, [ebp - 28h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 8]
        push eax
        mov ecx, dword ptr [ebp - 44h]
        shl ecx, 10h
        or ecx, 1
        push ecx
        push 80020ef8h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 E0 37 01 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x37
        __asm _emit 0x01
        __asm _emit 0x00
        push 0
        lea ecx, [ebp - 0a68h]
        ; Exact mapped bytes E8 E9 AF FE FF: call 0x401938
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xaf
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 0a68h]
        ; Exact mapped bytes E8 C8 AB FE FF: call 0x401523
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xab
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 8]
        push eax
        mov ecx, dword ptr [ebp - 0a80h]
        shl ecx, 10h
        push ecx
        push 80020ef8h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 A8 37 01 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x37
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E9 0E 01 00 00: jmp 0x416a8d
        __asm _emit 0xe9
        __asm _emit 0x0e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 04 01 00 00: jmp 0x416a88
        __asm _emit 0xe9
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0a80h]
        and edx, 3fffffh
        shl edx, 0ah
        mov eax, dword ptr [ebp - 544h]
        and eax, 3ffh
        or eax, edx
        mov dword ptr [ebp - 544h], eax
        push 500h
        lea ecx, [ebp - 544h]
        push ecx
        push 63315ch
        mov edx, dword ptr [ebp - 0a78h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 108h]
        ; Exact mapped bytes E8 A3 AF FE FF: call 0x40196f
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xaf
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 1d8h], 1
        push 500h
        lea ecx, [ebp - 544h]
        push ecx
        mov edx, dword ptr [ebp - 0a7ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 108h]
        ; Exact mapped bytes E8 BA AE FE FF: call 0x4018b1
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xae
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 1d8h], 0
        push 18h
        lea ecx, [ebp - 40h]
        push ecx
        lea ecx, [ebp - 0a68h]
        ; Exact mapped bytes E8 F8 A5 FE FF: call 0x40100a
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xa5
        __asm _emit 0xfe
        __asm _emit 0xff
        push 500h
        lea edx, [ebp - 544h]
        push edx
        lea ecx, [ebp - 0a68h]
        ; Exact mapped bytes E8 E1 A5 FE FF: call 0x40100a
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xa5
        __asm _emit 0xfe
        __asm _emit 0xff
        push 0
        push 18h
        lea eax, [ebp - 28h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 8]
        push edx
        mov eax, dword ptr [ebp - 44h]
        shl eax, 10h
        or al, 1
        push eax
        push 80020ef8h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 D4 36 01 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x36
        __asm _emit 0x01
        __asm _emit 0x00
        push 0
        lea ecx, [ebp - 0a68h]
        ; Exact mapped bytes E8 DD AE FE FF: call 0x401938
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xae
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 0a68h]
        ; Exact mapped bytes E8 BC AA FE FF: call 0x401523
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xaa
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 8]
        push edx
        mov eax, dword ptr [ebp - 0a80h]
        shl eax, 10h
        push eax
        push 80020ef8h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 9C 36 01 00: call 0x42a122
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x36
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 05: jmp 0x416a8d
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 76 FD FF FF: jmp 0x416803
        __asm _emit 0xe9
        __asm _emit 0x76
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0a88h], 0
        ; Exact mapped bytes EB 0F: jmp 0x416aa8
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 0a88h]
        add ecx, 1
        mov dword ptr [ebp - 0a88h], ecx
        cmp dword ptr [ebp - 0a88h], 32h
        ; Exact mapped bytes 0F 8D F7 00 00 00: jge 0x416bac
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xf7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0a88h]
        push edx
        mov eax, dword ptr [ebp - 0a74h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + 108h]
        ; Exact mapped bytes E8 8D AB FE FF: call 0x40165e
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xab
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 0a7ch], eax
        cmp dword ptr [ebp - 0a7ch], -1
        ; Exact mapped bytes 0F 84 C3 00 00 00: je 0x416ba7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 500h
        lea edx, [ebp - 0f88h]
        push edx
        mov eax, dword ptr [ebp - 0a7ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + 108h]
        ; Exact mapped bytes E8 01 AE FE FF: call 0x401906
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xae
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp dword ptr [ebp - 0c1ch], 0
        ; Exact mapped bytes 0F 85 95 00 00 00: jne 0x416ba7
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        lea edx, [ebp - 538h]
        push edx
        lea eax, [ebp - 0f7ch]
        push eax
        ; Exact mapped bytes FF 15 E0 B7 68 00: call dword ptr [0x68b7e0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 C1 E2 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xe2
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 74: jne 0x416ba7
        __asm _emit 0x75
        __asm _emit 0x74
        mov dword ptr [ebp - 0c1ch], 1
        push 500h
        lea ecx, [ebp - 0f88h]
        push ecx
        mov edx, dword ptr [ebp - 0a7ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 108h]
        ; Exact mapped bytes E8 53 AD FE FF: call 0x4018b1
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xad
        __asm _emit 0xfe
        __asm _emit 0xff
        push 634098h
        push 63408ch
        lea ecx, [ebp - 11498h]
        ; Exact mapped bytes E8 A8 AC FE FF: call 0x40181b
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xac
        __asm _emit 0xfe
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 0f7ch]
        push ecx
        lea edx, [ebp - 28h]
        push edx
        push 634058h
        lea eax, [ebp - 11498h]
        push eax
        ; Exact mapped bytes E8 C2 A9 FE FF: call 0x401555
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xa9
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 10h
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 11498h]
        ; Exact mapped bytes E8 15 A9 FE FF: call 0x4014ba
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xa9
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes EB 05: jmp 0x416bac
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 ED FE FF FF: jmp 0x416a99
        __asm _emit 0xe9
        __asm _emit 0xed
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1149ch], 1
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 0a68h]
        ; Exact mapped bytes E8 2E AE FE FF: call 0x4019f6
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xae
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 1149ch]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        add esp, 114dch
        cmp ebp, esp
        ; Exact mapped bytes E8 08 E2 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xe2
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
