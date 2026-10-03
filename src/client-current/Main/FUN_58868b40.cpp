// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 4527 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58868B40 .. +0x11AF bytes.
extern "C" __declspec(naked) void FUN_58868b40_segment_00() {
    __asm {
        push -1
        push 58985d79h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        push eax
        lea eax, [esp + 18h]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, ecx
        mov dword ptr [esp + 14h], esi
        mov eax, dword ptr [esp + 3ch]
        mov ecx, dword ptr [esp + 38h]
        mov edx, dword ptr [esp + 34h]
        mov ebp, dword ptr [esp + 30h]
        mov edi, dword ptr [esp + 2ch]
        push eax
        mov eax, dword ptr [esp + 2ch]
        push ecx
        push edx
        push ebp
        push edi
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 10 A6 09 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xa6
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [esi], 5898c500h
        ; Exact mapped bytes 66 83 4E 24 20: or word ptr [esi + 0x24], 0x20
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4e
        __asm _emit 0x24
        __asm _emit 0x20
        xor ebx, ebx
        mov dword ptr [esi + 50h], edi
        mov dword ptr [esi + 54h], ebp
        mov dword ptr [esi + 58h], 100h
        mov dword ptr [esi + 5ch], ebx
        push 54h
        mov dword ptr [esp + 24h], ebx
        mov dword ptr [esi], 5899ecd4h
        ; Exact mapped bytes E8 90 40 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x40
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 1
        cmp eax, ebx
        ; Exact mapped bytes 74 46: je 0x58868c14
        __asm _emit 0x74
        __asm _emit 0x46
        ; Exact mapped bytes 8B 0D C4 46 A2 58: mov ecx, dword ptr [0x58a246c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 164h], 401h
        ; Exact mapped bytes 7E 23: jle 0x58868c03
        __asm _emit 0x7e
        __asm _emit 0x23
        cmp dword ptr [ecx + 18ch], ebx
        ; Exact mapped bytes 74 1B: je 0x58868c03
        __asm _emit 0x74
        __asm _emit 0x1b
        mov ecx, dword ptr [ecx + 18ch]
        mov ecx, dword ptr [ecx + 1004h]
        push 40h
        push ebp
        push edi
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 5F 90 EC FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x90
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes EB 13: jmp 0x58868c16
        __asm _emit 0xeb
        __asm _emit 0x13
        push 40h
        push ebp
        xor ecx, ecx
        push edi
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 4E 90 EC FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x90
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58868c16
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 0fffffeffh
        mov ecx, eax
        mov byte ptr [esp + 24h], bl
        mov dword ptr [esi + 64h], eax
        ; Exact mapped bytes E8 F7 A0 09 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xa0
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [esi + 64h]
        mov edx, 7fffh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        push 54h
        ; Exact mapped bytes E8 12 40 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x40
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 2
        cmp eax, ebx
        ; Exact mapped bytes 74 46: je 0x58868c92
        __asm _emit 0x74
        __asm _emit 0x46
        ; Exact mapped bytes 8B 0D C4 46 A2 58: mov ecx, dword ptr [0x58a246c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 164h], 400h
        ; Exact mapped bytes 7E 23: jle 0x58868c81
        __asm _emit 0x7e
        __asm _emit 0x23
        cmp dword ptr [ecx + 18ch], ebx
        ; Exact mapped bytes 74 1B: je 0x58868c81
        __asm _emit 0x74
        __asm _emit 0x1b
        mov ecx, dword ptr [ecx + 18ch]
        mov ecx, dword ptr [ecx + 1000h]
        push 40h
        push ebp
        push edi
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 E1 8F EC FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x8f
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes EB 13: jmp 0x58868c94
        __asm _emit 0xeb
        __asm _emit 0x13
        push 40h
        push ebp
        xor ecx, ecx
        push edi
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 D0 8F EC FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x8f
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58868c94
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 54h
        mov byte ptr [esp + 24h], bl
        mov dword ptr [esi + 60h], eax
        ; Exact mapped bytes E8 AC 3F 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x3f
        __asm _emit 0x11
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        mov byte ptr [esp + 20h], 3
        cmp edi, ebx
        ; Exact mapped bytes 74 26: je 0x58868cda
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [esp + 2ch]
        push 40h
        push ebx
        push ebx
        lea edx, [ebp + 9ah]
        push edx
        add eax, 5ch
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 D1 A4 09 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xa4
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebx
        ; Exact mapped bytes EB 02: jmp 0x58868cdc
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 101h
        mov ecx, edi
        mov byte ptr [esp + 24h], bl
        mov dword ptr [esi + 68h], edi
        ; Exact mapped bytes E8 31 A0 09 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xa0
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [esi + 68h]
        mov ecx, 7fffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        push 54h
        ; Exact mapped bytes E8 4C 3F 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x3f
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 4
        cmp eax, ebx
        ; Exact mapped bytes 74 49: je 0x58868d5b
        __asm _emit 0x74
        __asm _emit 0x49
        ; Exact mapped bytes 8B 0D C8 46 A2 58: mov ecx, dword ptr [0x58a246c8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 164h], 26ch
        ; Exact mapped bytes 7E 16: jle 0x58868d3a
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 18ch], ebx
        ; Exact mapped bytes 74 0E: je 0x58868d3a
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 18ch]
        mov ecx, dword ptr [edx + 9b0h]
        ; Exact mapped bytes EB 02: jmp 0x58868d3c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edi, dword ptr [esp + 2ch]
        push 40h
        lea edx, [ebp + 9ah]
        push edx
        lea edx, [edi + 160h]
        push edx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 07 8F EC FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x8f
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes EB 06: jmp 0x58868d61
        __asm _emit 0xeb
        __asm _emit 0x06
        mov edi, dword ptr [esp + 2ch]
        xor eax, eax
        push 54h
        mov byte ptr [esp + 24h], bl
        mov dword ptr [esi + 0ach], eax
        ; Exact mapped bytes E8 DC 3E 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x3e
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 5
        cmp eax, ebx
        ; Exact mapped bytes 74 45: je 0x58868dc7
        __asm _emit 0x74
        __asm _emit 0x45
        ; Exact mapped bytes 8B 0D C8 46 A2 58: mov ecx, dword ptr [0x58a246c8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 164h], 26ch
        ; Exact mapped bytes 7E 16: jle 0x58868daa
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 18ch], ebx
        ; Exact mapped bytes 74 0E: je 0x58868daa
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 18ch]
        mov ecx, dword ptr [ecx + 9b0h]
        ; Exact mapped bytes EB 02: jmp 0x58868dac
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 40h
        lea edx, [ebp + 0c2h]
        push edx
        lea edx, [edi + 160h]
        push edx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 9B 8E EC FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x8e
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58868dc9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 54h
        mov byte ptr [esp + 24h], bl
        mov dword ptr [esi + 0b0h], eax
        ; Exact mapped bytes E8 74 3E 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x3e
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 6
        cmp eax, ebx
        ; Exact mapped bytes 74 45: je 0x58868e2f
        __asm _emit 0x74
        __asm _emit 0x45
        ; Exact mapped bytes 8B 0D C8 46 A2 58: mov ecx, dword ptr [0x58a246c8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 164h], 26ch
        ; Exact mapped bytes 7E 16: jle 0x58868e12
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 18ch], ebx
        ; Exact mapped bytes 74 0E: je 0x58868e12
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 18ch]
        mov ecx, dword ptr [ecx + 9b0h]
        ; Exact mapped bytes EB 02: jmp 0x58868e14
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 40h
        lea edx, [ebp + 0ddh]
        push edx
        lea edx, [edi + 160h]
        push edx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 33 8E EC FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x8e
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58868e31
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 54h
        mov byte ptr [esp + 24h], bl
        mov dword ptr [esi + 0b4h], eax
        ; Exact mapped bytes E8 0C 3E 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x3e
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 7
        cmp eax, ebx
        ; Exact mapped bytes 74 45: je 0x58868e97
        __asm _emit 0x74
        __asm _emit 0x45
        ; Exact mapped bytes 8B 0D C8 46 A2 58: mov ecx, dword ptr [0x58a246c8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 164h], 26dh
        ; Exact mapped bytes 7E 16: jle 0x58868e7a
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 18ch], ebx
        ; Exact mapped bytes 74 0E: je 0x58868e7a
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 18ch]
        mov ecx, dword ptr [ecx + 9b4h]
        ; Exact mapped bytes EB 02: jmp 0x58868e7c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 40h
        lea edx, [ebp + 0a5h]
        push edx
        lea edx, [edi + 173h]
        push edx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 CB 8D EC FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x8d
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58868e99
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 54h
        mov byte ptr [esp + 24h], bl
        mov dword ptr [esi + 0b8h], eax
        ; Exact mapped bytes E8 A4 3D 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x3d
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 8
        cmp eax, ebx
        ; Exact mapped bytes 74 45: je 0x58868eff
        __asm _emit 0x74
        __asm _emit 0x45
        ; Exact mapped bytes 8B 0D C8 46 A2 58: mov ecx, dword ptr [0x58a246c8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 164h], 26dh
        ; Exact mapped bytes 7E 16: jle 0x58868ee2
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 18ch], ebx
        ; Exact mapped bytes 74 0E: je 0x58868ee2
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 18ch]
        mov ecx, dword ptr [ecx + 9b4h]
        ; Exact mapped bytes EB 02: jmp 0x58868ee4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 40h
        lea edx, [ebp + 0cdh]
        push edx
        lea edx, [edi + 173h]
        push edx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 63 8D EC FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x8d
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58868f01
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 54h
        mov byte ptr [esp + 24h], bl
        mov dword ptr [esi + 0bch], eax
        ; Exact mapped bytes E8 3C 3D 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x3d
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 9
        cmp eax, ebx
        ; Exact mapped bytes 74 45: je 0x58868f67
        __asm _emit 0x74
        __asm _emit 0x45
        ; Exact mapped bytes 8B 0D C8 46 A2 58: mov ecx, dword ptr [0x58a246c8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc8
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 164h], 26dh
        ; Exact mapped bytes 7E 16: jle 0x58868f4a
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 18ch], ebx
        ; Exact mapped bytes 74 0E: je 0x58868f4a
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 18ch]
        mov ecx, dword ptr [ecx + 9b4h]
        ; Exact mapped bytes EB 02: jmp 0x58868f4c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 40h
        add ebp, 0e8h
        push ebp
        add edi, 173h
        push edi
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 FB 8C EC FF: call 0x58731c60
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x8c
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58868f69
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 0c0h], eax
        lea edi, [esi + 0b8h]
        mov ebp, 3
        mov edi, edi
        mov ecx, dword ptr [edi - 0ch]
        push 101h
        ; Exact mapped bytes E8 93 9D 09 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x9d
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [edi - 0ch]
        mov edx, 7fffh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov ecx, dword ptr [edi]
        push 101h
        ; Exact mapped bytes E8 7B 9D 09 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x9d
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [edi]
        mov ecx, 7fffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        add edi, 4
        sub ebp, 1
        ; Exact mapped bytes 75 C8: jne 0x58868f80
        __asm _emit 0x75
        __asm _emit 0xc8
        push 58h
        ; Exact mapped bytes E8 8F 3C 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x3c
        __asm _emit 0x11
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        mov byte ptr [esp + 20h], 0ah
        cmp edi, ebx
        ; Exact mapped bytes 74 2B: je 0x58868ffc
        __asm _emit 0x74
        __asm _emit 0x2b
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        push 40h
        push ebx
        push ebx
        add eax, 56h
        add ecx, 0aah
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 B2 A1 09 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xa1
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [edi], 5898ca74h
        mov dword ptr [edi + 50h], ebx
        mov dword ptr [edi + 54h], ebx
        ; Exact mapped bytes EB 02: jmp 0x58868ffe
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 0fffffeffh
        mov ecx, edi
        mov byte ptr [esp + 24h], bl
        mov dword ptr [esi + 25ch], edi
        ; Exact mapped bytes E8 0C 9D 09 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x9d
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [esi + 25ch]
        mov edx, 7fffh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        push 54h
        ; Exact mapped bytes E8 24 3C 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x3c
        __asm _emit 0x11
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        mov byte ptr [esp + 20h], 0bh
        cmp edi, ebx
        ; Exact mapped bytes 74 7B: je 0x588690b7
        __asm _emit 0x74
        __asm _emit 0x7b
        ; Exact mapped bytes A1 C4 46 A2 58: mov eax, dword ptr [0x58a246c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 9ch
        ; Exact mapped bytes 7E 16: jle 0x58869063
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 18ch], ebx
        ; Exact mapped bytes 74 0E: je 0x58869063
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 18ch]
        mov ebp, dword ptr [eax + 270h]
        ; Exact mapped bytes EB 02: jmp 0x58869065
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        push 40h
        push ebx
        push ebx
        add eax, 5bh
        add ecx, 0afh
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 1E A1 09 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xa1
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebp
        cmp ebp, ebx
        ; Exact mapped bytes 74 2A: je 0x588690b9
        __asm _emit 0x74
        __asm _emit 0x2a
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [edi + 0ch], ecx
        mov edx, dword ptr [ebp + 14h]
        lea eax, [ebp + 18h]
        mov dword ptr [edi + 10h], edx
        mov ecx, dword ptr [eax]
        mov dword ptr [edi + 14h], ecx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [edi + 18h], edx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [edi + 1ch], ecx
        mov edx, dword ptr [eax + 0ch]
        mov dword ptr [edi + 20h], edx
        ; Exact mapped bytes EB 02: jmp 0x588690b9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 0fffffeffh
        mov ecx, edi
        mov byte ptr [esp + 24h], bl
        mov dword ptr [esi + 270h], edi
        ; Exact mapped bytes E8 51 9C 09 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x9c
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [esi + 270h]
        mov ecx, 7fffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        push 58h
        ; Exact mapped bytes E8 69 3B 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x3b
        __asm _emit 0x11
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        mov byte ptr [esp + 20h], 0ch
        cmp edi, ebx
        ; Exact mapped bytes 74 75: je 0x5886916c
        __asm _emit 0x74
        __asm _emit 0x75
        ; Exact mapped bytes A1 C4 46 A2 58: mov eax, dword ptr [0x58a246c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 160h], ebx
        ; Exact mapped bytes 7E 10: jle 0x58869114
        __asm _emit 0x7e
        __asm _emit 0x10
        cmp dword ptr [eax + 190h], ebx
        ; Exact mapped bytes 74 08: je 0x58869114
        __asm _emit 0x74
        __asm _emit 0x08
        mov ebp, dword ptr [eax + 190h]
        ; Exact mapped bytes EB 02: jmp 0x58869116
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        push 40h
        push ebx
        push ebx
        add eax, 5bh
        add ecx, 0afh
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 6D A0 09 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xa0
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [edi], 5898ca74h
        mov dword ptr [edi + 50h], ebx
        mov dword ptr [edi + 54h], ebp
        cmp ebp, ebx
        ; Exact mapped bytes 74 2B: je 0x5886916e
        __asm _emit 0x74
        __asm _emit 0x2b
        mov edx, dword ptr [ebp + 18h]
        mov dword ptr [edi + 0ch], edx
        mov eax, dword ptr [ebp + 1ch]
        mov dword ptr [edi + 10h], eax
        mov ecx, dword ptr [ebp + 20h]
        lea eax, [ebp + 20h]
        mov dword ptr [edi + 14h], ecx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [edi + 18h], edx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [edi + 1ch], ecx
        mov edx, dword ptr [eax + 0ch]
        mov dword ptr [edi + 20h], edx
        ; Exact mapped bytes EB 02: jmp 0x5886916e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov ebp, dword ptr [esp + 30h]
        mov eax, 0fffbh
        mov dword ptr [esi + 274h], edi
        ; Exact mapped bytes 66 21 47 24: and word ptr [edi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x47
        __asm _emit 0x24
        push 54h
        mov byte ptr [esp + 24h], bl
        ; Exact mapped bytes E8 C2 3A 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x3a
        __asm _emit 0x11
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        mov byte ptr [esp + 20h], 0dh
        cmp edi, ebx
        ; Exact mapped bytes 74 28: je 0x588691c6
        __asm _emit 0x74
        __asm _emit 0x28
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        push 40h
        push ebx
        push ebx
        add eax, 56h
        add ecx, 0aah
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 E5 9F 09 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x9f
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebx
        ; Exact mapped bytes EB 02: jmp 0x588691c8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 0fffffeffh
        mov ecx, edi
        mov byte ptr [esp + 24h], bl
        mov dword ptr [esi + 264h], edi
        ; Exact mapped bytes E8 42 9B 09 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x9b
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [esi + 264h]
        mov ecx, 7fffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        push 54h
        ; Exact mapped bytes E8 5A 3A 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x3a
        __asm _emit 0x11
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        mov byte ptr [esp + 20h], 0eh
        cmp edi, ebx
        ; Exact mapped bytes 74 28: je 0x5886922e
        __asm _emit 0x74
        __asm _emit 0x28
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        push 40h
        push ebx
        push ebx
        add eax, 56h
        add ecx, 0aah
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 7D 9F 09 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x9f
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebx
        ; Exact mapped bytes EB 02: jmp 0x58869230
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 58h
        mov byte ptr [esp + 24h], bl
        mov dword ptr [esi + 260h], edi
        ; Exact mapped bytes E8 0D 3A 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x3a
        __asm _emit 0x11
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        mov byte ptr [esp + 20h], 0fh
        cmp edi, ebx
        ; Exact mapped bytes 74 2B: je 0x5886927e
        __asm _emit 0x74
        __asm _emit 0x2b
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        push 40h
        push ebx
        push ebx
        add eax, 56h
        add ecx, 0aah
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 30 9F 09 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x9f
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [edi], 5898ca74h
        mov dword ptr [edi + 50h], ebx
        mov dword ptr [edi + 54h], ebx
        ; Exact mapped bytes EB 02: jmp 0x58869280
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 54h
        mov byte ptr [esp + 24h], bl
        mov dword ptr [esi + 258h], edi
        ; Exact mapped bytes E8 BD 39 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x39
        __asm _emit 0x11
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        mov byte ptr [esp + 20h], 10h
        cmp edi, ebx
        ; Exact mapped bytes 74 28: je 0x588692cb
        __asm _emit 0x74
        __asm _emit 0x28
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        push 40h
        push ebx
        push ebx
        add eax, 56h
        add ecx, 0aah
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 E0 9E 09 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x9e
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebx
        ; Exact mapped bytes EB 02: jmp 0x588692cd
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 0fffffeffh
        mov ecx, edi
        mov byte ptr [esp + 24h], bl
        mov dword ptr [esi + 26ch], edi
        ; Exact mapped bytes E8 3D 9A 09 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x9a
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [esi + 26ch]
        mov edx, 7fffh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        push 54h
        ; Exact mapped bytes E8 55 39 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x39
        __asm _emit 0x11
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        mov byte ptr [esp + 20h], 11h
        cmp edi, ebx
        ; Exact mapped bytes 74 28: je 0x58869333
        __asm _emit 0x74
        __asm _emit 0x28
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 4]
        push 40h
        push ebx
        push ebx
        add eax, 56h
        add ecx, 0aah
        push eax
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 78 9E 09 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x9e
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebx
        ; Exact mapped bytes EB 02: jmp 0x58869335
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 0fch
        mov byte ptr [esp + 24h], bl
        mov dword ptr [esi + 268h], edi
        ; Exact mapped bytes E8 05 39 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x39
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 12h
        cmp eax, ebx
        ; Exact mapped bytes 74 49: je 0x588693a2
        __asm _emit 0x74
        __asm _emit 0x49
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 0cbh
        ; Exact mapped bytes 7E 16: jle 0x58869381
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], ebx
        ; Exact mapped bytes 74 0E: je 0x58869381
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx + 190h]
        add edx, 32c0h
        ; Exact mapped bytes EB 02: jmp 0x58869383
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        mov edi, dword ptr [esp + 2ch]
        lea ecx, [ebp + 89h]
        push ecx
        lea ecx, [edi + 11ah]
        push ecx
        push 4
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 60 DD 09 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xdd
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes EB 06: jmp 0x588693a8
        __asm _emit 0xeb
        __asm _emit 0x06
        mov edi, dword ptr [esp + 2ch]
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 24h], bl
        mov dword ptr [esi + 80h], eax
        ; Exact mapped bytes E8 62 99 09 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x99
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [esi + 80h]
        mov edx, 7fffh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        push 0fch
        ; Exact mapped bytes E8 77 38 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x38
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 13h
        cmp eax, ebx
        ; Exact mapped bytes 74 45: je 0x5886942c
        __asm _emit 0x74
        __asm _emit 0x45
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 0cbh
        ; Exact mapped bytes 7E 16: jle 0x5886940f
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], ebx
        ; Exact mapped bytes 74 0E: je 0x5886940f
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 190h]
        add ecx, 32c0h
        ; Exact mapped bytes EB 02: jmp 0x58869411
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebp + 89h]
        push edx
        lea edx, [edi + 140h]
        push edx
        push 4
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 D6 DC 09 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xdc
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5886942e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 24h], bl
        mov dword ptr [esi + 84h], eax
        ; Exact mapped bytes E8 DC 98 09 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x98
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [esi + 84h]
        mov ecx, 7fffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        push 0fch
        ; Exact mapped bytes E8 F1 37 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x37
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 14h
        cmp eax, ebx
        ; Exact mapped bytes 74 42: je 0x588694af
        __asm _emit 0x74
        __asm _emit 0x42
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 2ch
        ; Exact mapped bytes 7E 16: jle 0x58869492
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], ebx
        ; Exact mapped bytes 74 0E: je 0x58869492
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 190h]
        add ecx, 0b00h
        ; Exact mapped bytes EB 02: jmp 0x58869494
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebp + 0a3h]
        push edx
        lea edx, [edi + 0d7h]
        push edx
        push 5
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 53 DC 09 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xdc
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588694b1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 24h], bl
        mov dword ptr [esi + 90h], eax
        ; Exact mapped bytes E8 59 98 09 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x98
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [esi + 90h]
        mov ecx, 7fffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        push 0fch
        ; Exact mapped bytes E8 6E 37 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x37
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 15h
        cmp eax, ebx
        ; Exact mapped bytes 74 42: je 0x58869532
        __asm _emit 0x74
        __asm _emit 0x42
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 2ch
        ; Exact mapped bytes 7E 16: jle 0x58869515
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], ebx
        ; Exact mapped bytes 74 0E: je 0x58869515
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 190h]
        add ecx, 0b00h
        ; Exact mapped bytes EB 02: jmp 0x58869517
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebp + 0a5h]
        push edx
        lea edx, [edi + 118h]
        push edx
        push 6
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 D0 DB 09 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xdb
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58869534
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 24h], bl
        mov dword ptr [esi + 9ch], eax
        ; Exact mapped bytes E8 D6 97 09 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x97
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [esi + 9ch]
        mov ecx, 7fffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        push 100h
        ; Exact mapped bytes E8 EB 36 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x36
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 16h
        cmp eax, ebx
        ; Exact mapped bytes 74 43: je 0x588695b6
        __asm _emit 0x74
        __asm _emit 0x43
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 2ch
        ; Exact mapped bytes 7E 16: jle 0x58869598
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], ebx
        ; Exact mapped bytes 74 0E: je 0x58869598
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 190h]
        add ecx, 0b00h
        ; Exact mapped bytes EB 02: jmp 0x5886959a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push ebx
        lea edx, [ebp + 0a5h]
        push edx
        lea edx, [edi + 146h]
        push edx
        push 6
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 8C 07 F6 FF: call 0x587c9d40
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x07
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588695b8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 24h], bl
        mov dword ptr [esi + 0a8h], eax
        ; Exact mapped bytes E8 52 97 09 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x97
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0a8h]
        mov ecx, 7fffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        push 0fch
        ; Exact mapped bytes E8 67 36 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x36
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 17h
        cmp eax, ebx
        ; Exact mapped bytes 74 42: je 0x58869639
        __asm _emit 0x74
        __asm _emit 0x42
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 2ch
        ; Exact mapped bytes 7E 16: jle 0x5886961c
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], ebx
        ; Exact mapped bytes 74 0E: je 0x5886961c
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 190h]
        add ecx, 0b00h
        ; Exact mapped bytes EB 02: jmp 0x5886961e
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebp + 0cbh]
        push edx
        lea edx, [edi + 0d7h]
        push edx
        push 5
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 C9 DA 09 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xda
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x5886963b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 24h], bl
        mov dword ptr [esi + 8ch], eax
        ; Exact mapped bytes E8 CF 96 09 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x96
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [esi + 8ch]
        mov ecx, 7fffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        push 0fch
        ; Exact mapped bytes E8 E4 35 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x35
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 18h
        cmp eax, ebx
        ; Exact mapped bytes 74 42: je 0x588696bc
        __asm _emit 0x74
        __asm _emit 0x42
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 2ch
        ; Exact mapped bytes 7E 16: jle 0x5886969f
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], ebx
        ; Exact mapped bytes 74 0E: je 0x5886969f
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 190h]
        add ecx, 0b00h
        ; Exact mapped bytes EB 02: jmp 0x588696a1
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebp + 0cdh]
        push edx
        lea edx, [edi + 118h]
        push edx
        push 6
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 46 DA 09 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xda
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588696be
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 24h], bl
        mov dword ptr [esi + 98h], eax
        ; Exact mapped bytes E8 4C 96 09 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x96
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [esi + 98h]
        mov ecx, 7fffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        push 100h
        ; Exact mapped bytes E8 61 35 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x35
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 19h
        cmp eax, ebx
        ; Exact mapped bytes 74 43: je 0x58869740
        __asm _emit 0x74
        __asm _emit 0x43
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 2ch
        ; Exact mapped bytes 7E 16: jle 0x58869722
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], ebx
        ; Exact mapped bytes 74 0E: je 0x58869722
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 190h]
        add ecx, 0b00h
        ; Exact mapped bytes EB 02: jmp 0x58869724
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push ebx
        lea edx, [ebp + 0cdh]
        push edx
        lea edx, [edi + 146h]
        push edx
        push 6
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 02 06 F6 FF: call 0x587c9d40
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x06
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58869742
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 24h], bl
        mov dword ptr [esi + 0a4h], eax
        ; Exact mapped bytes E8 C8 95 09 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x95
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0a4h]
        mov ecx, 7fffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        push 0fch
        ; Exact mapped bytes E8 DD 34 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x34
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 1ah
        cmp eax, ebx
        ; Exact mapped bytes 74 42: je 0x588697c3
        __asm _emit 0x74
        __asm _emit 0x42
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 2ch
        ; Exact mapped bytes 7E 16: jle 0x588697a6
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], ebx
        ; Exact mapped bytes 74 0E: je 0x588697a6
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 190h]
        add ecx, 0b00h
        ; Exact mapped bytes EB 02: jmp 0x588697a8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebp + 0e7h]
        push edx
        lea edx, [edi + 0d7h]
        push edx
        push 5
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 3F D9 09 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xd9
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588697c5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 24h], bl
        mov dword ptr [esi + 88h], eax
        ; Exact mapped bytes E8 45 95 09 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x95
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [esi + 88h]
        mov ecx, 7fffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        push 0fch
        ; Exact mapped bytes E8 5A 34 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x34
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 1bh
        cmp eax, ebx
        ; Exact mapped bytes 74 42: je 0x58869846
        __asm _emit 0x74
        __asm _emit 0x42
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 2ch
        ; Exact mapped bytes 7E 16: jle 0x58869829
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], ebx
        ; Exact mapped bytes 74 0E: je 0x58869829
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 190h]
        add ecx, 0b00h
        ; Exact mapped bytes EB 02: jmp 0x5886982b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebp + 0e9h]
        push edx
        lea edx, [edi + 118h]
        push edx
        push 6
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 BC D8 09 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xd8
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58869848
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 24h], bl
        mov dword ptr [esi + 94h], eax
        ; Exact mapped bytes E8 C2 94 09 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x94
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [esi + 94h]
        mov ecx, 7fffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        push 100h
        ; Exact mapped bytes E8 D7 33 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x33
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 1ch
        cmp eax, ebx
        ; Exact mapped bytes 74 44: je 0x588698cb
        __asm _emit 0x74
        __asm _emit 0x44
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 2ch
        ; Exact mapped bytes 7E 16: jle 0x588698ac
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], ebx
        ; Exact mapped bytes 74 0E: je 0x588698ac
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 190h]
        add ecx, 0b00h
        ; Exact mapped bytes EB 02: jmp 0x588698ae
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 1
        lea edx, [ebp + 0e9h]
        push edx
        lea edx, [edi + 146h]
        push edx
        push 6
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 77 04 F6 FF: call 0x587c9d40
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x04
        __asm _emit 0xf6
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x588698cd
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 24h], bl
        mov dword ptr [esi + 0a0h], eax
        ; Exact mapped bytes E8 3D 94 09 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x94
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0a0h]
        mov ecx, 7fffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        push 0fch
        ; Exact mapped bytes E8 52 33 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x33
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 1dh
        cmp eax, ebx
        ; Exact mapped bytes 74 42: je 0x5886994e
        __asm _emit 0x74
        __asm _emit 0x42
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 0cbh
        ; Exact mapped bytes 7E 16: jle 0x58869934
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], ebx
        ; Exact mapped bytes 74 0E: je 0x58869934
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 190h]
        add ecx, 32c0h
        ; Exact mapped bytes EB 02: jmp 0x58869936
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebp + 109h]
        push edx
        lea edx, [edi + 46h]
        push edx
        push 8
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 B4 D7 09 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xd7
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58869950
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 24h], bl
        mov dword ptr [esi + 0c4h], eax
        ; Exact mapped bytes E8 BA 93 09 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x93
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0c4h]
        mov ecx, 7fffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 0c4h]
        push 0f423fh
        ; Exact mapped bytes E8 DB D9 09 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xd9
        __asm _emit 0x09
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 BF 32 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x32
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 1eh
        cmp eax, ebx
        ; Exact mapped bytes 74 45: je 0x588699e4
        __asm _emit 0x74
        __asm _emit 0x45
        ; Exact mapped bytes 8B 0D A4 46 A2 58: mov ecx, dword ptr [0x58a246a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 0cbh
        ; Exact mapped bytes 7E 16: jle 0x588699c7
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], ebx
        ; Exact mapped bytes 74 0E: je 0x588699c7
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 190h]
        add ecx, 32c0h
        ; Exact mapped bytes EB 02: jmp 0x588699c9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        lea edx, [ebp + 109h]
        push edx
        lea edx, [edi + 124h]
        push edx
        push 6
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 1E D7 09 00: call 0x58907100
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xd7
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x588699e6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 24h], bl
        mov dword ptr [esi + 0c8h], eax
        ; Exact mapped bytes E8 24 93 09 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x93
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0c8h]
        mov ecx, 7fffh
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 0c8h]
        push 1eh
        ; Exact mapped bytes E8 48 D9 09 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xd9
        __asm _emit 0x09
        __asm _emit 0x00
        push 0ach
        ; Exact mapped bytes E8 2C 32 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x32
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 1fh
        cmp eax, ebx
        ; Exact mapped bytes 74 50: je 0x58869a82
        __asm _emit 0x74
        __asm _emit 0x50
        ; Exact mapped bytes 8B 0D C4 46 A2 58: mov ecx, dword ptr [0x58a246c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [ecx + 160h], 25h
        ; Exact mapped bytes 7E 16: jle 0x58869a57
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [ecx + 190h], ebx
        ; Exact mapped bytes 74 0E: je 0x58869a57
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ecx + 190h]
        add ecx, 940h
        ; Exact mapped bytes EB 02: jmp 0x58869a59
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        ; Exact mapped bytes 8B 15 94 47 A2 58: mov edx, dword ptr [0x58a24794]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push 40h
        add ebp, 122h
        push ebp
        add edi, 146h
        push edi
        push ecx
        ; Exact mapped bytes 8B 0D 8C 47 A2 58: mov ecx, dword ptr [0x58a2478c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x8c
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push esi
        push edx
        push ecx
        mov ecx, eax
        ; Exact mapped bytes E8 20 43 EF FF: call 0x5875dda0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x43
        __asm _emit 0xef
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58869a84
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 24h], bl
        mov dword ptr [esi + 74h], eax
        ; Exact mapped bytes E8 89 92 09 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x92
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [esi + 74h]
        mov edx, 7fffh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        push 54h
        ; Exact mapped bytes E8 A4 31 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x31
        __asm _emit 0x11
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        mov byte ptr [esp + 20h], 20h
        cmp edi, ebx
        ; Exact mapped bytes 0F 84 80 00 00 00: je 0x58869b40
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 C4 46 A2 58: mov eax, dword ptr [0x58a246c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 408h
        ; Exact mapped bytes 7E 16: jle 0x58869ae7
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 18ch], ebx
        ; Exact mapped bytes 74 0E: je 0x58869ae7
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [eax + 18ch]
        mov ebp, dword ptr [eax + 1020h]
        ; Exact mapped bytes EB 02: jmp 0x58869ae9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov ecx, dword ptr [esp + 30h]
        mov edx, dword ptr [esp + 2ch]
        push 40h
        push ebx
        push ebx
        add ecx, 9bh
        push ecx
        add edx, 0d1h
        push edx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 95 96 09 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x96
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebp
        cmp ebp, ebx
        ; Exact mapped bytes 74 2A: je 0x58869b42
        __asm _emit 0x74
        __asm _emit 0x2a
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [edi + 0ch], eax
        mov ecx, dword ptr [ebp + 14h]
        lea eax, [ebp + 18h]
        mov dword ptr [edi + 10h], ecx
        mov edx, dword ptr [eax]
        mov dword ptr [edi + 14h], edx
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [edi + 18h], ecx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [edi + 1ch], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [edi + 20h], eax
        ; Exact mapped bytes EB 02: jmp 0x58869b42
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 101h
        mov ecx, edi
        mov byte ptr [esp + 24h], bl
        mov dword ptr [esi + 2c0h], edi
        ; Exact mapped bytes E8 C8 91 09 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x91
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [esi + 2c0h]
        mov ecx, 0fff0h
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        push 54h
        ; Exact mapped bytes E8 E0 30 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x30
        __asm _emit 0x11
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 3ch], edi
        mov byte ptr [esp + 20h], 21h
        cmp edi, ebx
        ; Exact mapped bytes 0F 84 80 00 00 00: je 0x58869c04
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 C4 46 A2 58: mov eax, dword ptr [0x58a246c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp dword ptr [eax + 164h], 408h
        ; Exact mapped bytes 7E 16: jle 0x58869bab
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 18ch], ebx
        ; Exact mapped bytes 74 0E: je 0x58869bab
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [eax + 18ch]
        mov ebp, dword ptr [edx + 1020h]
        ; Exact mapped bytes EB 02: jmp 0x58869bad
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esp + 30h]
        mov ecx, dword ptr [esp + 2ch]
        push 40h
        push ebx
        push ebx
        add eax, 0deh
        push eax
        add ecx, 0d1h
        push ecx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 D2 95 09 00: call 0x589031a0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x95
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [edi], 5898c55ch
        mov dword ptr [edi + 50h], ebp
        cmp ebp, ebx
        ; Exact mapped bytes 74 2B: je 0x58869c06
        __asm _emit 0x74
        __asm _emit 0x2b
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [edi + 0ch], edx
        mov eax, dword ptr [ebp + 14h]
        mov dword ptr [edi + 10h], eax
        mov ecx, dword ptr [ebp + 18h]
        lea eax, [ebp + 18h]
        mov dword ptr [edi + 14h], ecx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [edi + 18h], edx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [edi + 1ch], ecx
        mov edx, dword ptr [eax + 0ch]
        mov dword ptr [edi + 20h], edx
        ; Exact mapped bytes EB 02: jmp 0x58869c06
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        push 101h
        mov ecx, edi
        mov byte ptr [esp + 24h], bl
        mov dword ptr [esi + 2c4h], edi
        ; Exact mapped bytes E8 04 91 09 00: call 0x58902d20
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x91
        __asm _emit 0x09
        __asm _emit 0x00
        mov eax, dword ptr [esi + 2c4h]
        mov ecx, 0fff0h
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        push 8ch
        ; Exact mapped bytes E8 19 30 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x30
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 22h
        cmp eax, ebx
        ; Exact mapped bytes 74 1D: je 0x58869c62
        __asm _emit 0x74
        __asm _emit 0x1d
        mov edx, dword ptr [esp + 30h]
        mov ecx, dword ptr [esp + 2ch]
        add edx, 8ah
        push edx
        add ecx, 25h
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 D0 40 03 00: call 0x5889dd30
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x40
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58869c64
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edx, 0fff0h
        mov dword ptr [esi + 70h], eax
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        push 8ch
        mov byte ptr [esp + 24h], bl
        ; Exact mapped bytes E8 D0 2F 11 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x2f
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 3ch], eax
        mov byte ptr [esp + 20h], 23h
        cmp eax, ebx
        ; Exact mapped bytes 74 1D: je 0x58869cab
        __asm _emit 0x74
        __asm _emit 0x1d
        mov ecx, dword ptr [esp + 30h]
        mov edx, dword ptr [esp + 2ch]
        add ecx, 0cch
        push ecx
        add edx, 25h
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 A7 F9 03 00: call 0x588a9650
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xf9
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x58869cad
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 6ch], eax
        mov ecx, 0fff0h
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov edx, ecx
        ; Exact mapped bytes 66 21 56 24: and word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x56
        __asm _emit 0x24
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        mov ecx, 0e5ffh
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        mov edx, 500h
        ; Exact mapped bytes 66 0B C2: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc2
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        mov eax, esi
        mov ecx, dword ptr [esp + 18h]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 10h
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
