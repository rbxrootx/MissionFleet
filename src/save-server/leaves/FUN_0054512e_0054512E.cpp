// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054512E .. +0x910 bytes.
extern "C" __declspec(naked) void FUN_0054512e_0054512E() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58e4c4h
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
        sub esp, 44h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 50h], ecx
        mov ecx, dword ptr [ebp - 50h]
        add ecx, 4
        ; Exact mapped bytes E8 F0 17 FE FF: call 0x52694a
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x17
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x545172
        __asm _emit 0x74
        __asm _emit 0x14
        push 0d3h
        push 678024h
        ; Exact mapped bytes E8 D3 3B FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x3b
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x545172
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D7: jne 0x54514f
        __asm _emit 0x75
        __asm _emit 0xd7
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 87 FB FD FF: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xfb
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 78 FB FD FF: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xfb
        __asm _emit 0xfd
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 1ch]
        push ecx
        ; Exact mapped bytes E8 E1 C8 FE FF: call 0x531a7d
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xc8
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 C2 9F F9 FF: call 0x4df164
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x9f
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 50h]
        add ecx, 4
        ; Exact mapped bytes E8 AA 18 FE FF: call 0x526a57
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x18
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 10h], 1
        ; Exact mapped bytes EB 09: jmp 0x5451c2
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 10h]
        add edx, 1
        mov dword ptr [ebp - 10h], edx
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 0F 84 44 08 00 00: je 0x545a10
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x44
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 50h]
        add ecx, 4
        ; Exact mapped bytes E8 9E 18 FE FF: call 0x526a79
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x18
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 24h], ecx
        lea edx, [ebp - 1ch]
        push edx
        lea ecx, [ebp - 34h]
        ; Exact mapped bytes E8 2E 73 F8 FF: call 0x4cc51a
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x73
        __asm _emit 0xf8
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 2
        lea eax, [ebp - 1ch]
        push eax
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 1E 73 F8 FF: call 0x4cc51a
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x73
        __asm _emit 0xf8
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 3
        lea ecx, [ebp - 1ch]
        push ecx
        lea ecx, [ebp - 38h]
        ; Exact mapped bytes E8 0E 73 F8 FF: call 0x4cc51a
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x73
        __asm _emit 0xf8
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 4
        lea edx, [ebp - 1ch]
        push edx
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 FE 72 F8 FF: call 0x4cc51a
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x72
        __asm _emit 0xf8
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 5
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 7A: je 0x5452a0
        __asm _emit 0x74
        __asm _emit 0x7a
        lea ecx, [ebp - 44h]
        ; Exact mapped bytes E8 D9 FA FD FF: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xfa
        __asm _emit 0xfd
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 6
        mov eax, dword ptr [ebp - 10h]
        push eax
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 6C FB FD FF: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xfb
        __asm _emit 0xfd
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 39 C8 FE FF: call 0x531a7d
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xc8
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes FF 15 EC BB 68 00: call dword ptr [0x68bbec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0xbb
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 40h], eax
        cmp dword ptr [ebp - 40h], 0
        ; Exact mapped bytes 74 21: je 0x545275
        __asm _emit 0x74
        __asm _emit 0x21
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        push 63a098h
        lea edx, [ebp - 44h]
        push edx
        ; Exact mapped bytes E8 40 C9 F5 FF: call 0x4a1ba6
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xc9
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 0ch
        mov eax, dword ptr [ebp - 40h]
        push eax
        ; Exact mapped bytes FF 15 30 BC 68 00: call dword ptr [0x68bc30]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xbc
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes EB 13: jmp 0x545288
        __asm _emit 0xeb
        __asm _emit 0x13
        push 0
        push 63a098h
        lea ecx, [ebp - 44h]
        push ecx
        ; Exact mapped bytes E8 21 C9 F5 FF: call 0x4a1ba6
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xc9
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 0ch
        lea edx, [ebp - 44h]
        push edx
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 DA 7D F8 FF: call 0x4cd06e
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x7d
        __asm _emit 0xf8
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 5
        lea ecx, [ebp - 44h]
        ; Exact mapped bytes E8 4C 76 F8 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x76
        __asm _emit 0xf8
        __asm _emit 0xff
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 5F FA FD FF: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xfa
        __asm _emit 0xfd
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 7
        lea ecx, [ebp - 3ch]
        ; Exact mapped bytes E8 53 FA FD FF: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xfa
        __asm _emit 0xfd
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 8
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 47 FA FD FF: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xfa
        __asm _emit 0xfd
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 9
        push 5
        lea eax, [ebp - 3ch]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes FF 52 6C: call dword ptr [edx + 0x6c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x6c
        test eax, eax
        ; Exact mapped bytes 0F 84 DA 06 00 00: je 0x5459b7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xda
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 3ch]
        ; Exact mapped bytes E8 A7 FA FD FF: call 0x524d8c
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xfa
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 85 CA 06 00 00: jne 0x5459b7
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xca
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        push 6
        lea eax, [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes FF 52 6C: call dword ptr [edx + 0x6c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x6c
        test eax, eax
        ; Exact mapped bytes 75 0C: jne 0x54530e
        __asm _emit 0x75
        __asm _emit 0x0c
        lea eax, [ebp - 3ch]
        push eax
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 D8 77 F8 FF: call 0x4ccae6
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x77
        __asm _emit 0xf8
        __asm _emit 0xff
        push 20h
        lea ecx, [ebp - 3ch]
        ; Exact mapped bytes E8 0D 81 F8 FF: call 0x4cd425
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x81
        __asm _emit 0xf8
        __asm _emit 0xff
        cmp eax, -1
        ; Exact mapped bytes 74 14: je 0x545331
        __asm _emit 0x74
        __asm _emit 0x14
        push 0fch
        push 678024h
        ; Exact mapped bytes E8 14 3A FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x3a
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x545331
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D7: jne 0x54530e
        __asm _emit 0x75
        __asm _emit 0xd7
        push 0
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 69 FA FD FF: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xfa
        __asm _emit 0xfd
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 3ch]
        ; Exact mapped bytes E8 60 FA FD FF: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xfa
        __asm _emit 0xfd
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 ED F8 FF FF: call 0x544c3d
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 59: jne 0x5453ad
        __asm _emit 0x75
        __asm _emit 0x59
        mov byte ptr [ebp - 4], 8
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 8C 75 F8 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x75
        __asm _emit 0xf8
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 7
        lea ecx, [ebp - 3ch]
        ; Exact mapped bytes E8 80 75 F8 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x75
        __asm _emit 0xf8
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 5
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 74 75 F8 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0xf8
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 4
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 68 75 F8 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x75
        __asm _emit 0xf8
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 3
        lea ecx, [ebp - 38h]
        ; Exact mapped bytes E8 5C 75 F8 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x75
        __asm _emit 0xf8
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 2
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 50 75 F8 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x75
        __asm _emit 0xf8
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 34h]
        ; Exact mapped bytes E8 44 75 F8 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x75
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes E9 0C FE FF FF: jmp 0x5451b9
        __asm _emit 0xe9
        __asm _emit 0x0c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 84 90 00 00 00: je 0x545447
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 3ch]
        ; Exact mapped bytes E8 EB F9 FD FF: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xf9
        __asm _emit 0xfd
        __asm _emit 0xff
        push eax
        push 63a0a8h
        lea edx, [ebp - 14h]
        push edx
        ; Exact mapped bytes E8 D8 C7 F5 FF: call 0x4a1ba6
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xc7
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 0ch
        push 0
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 CF F9 FD FF: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xf9
        __asm _emit 0xfd
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 C6 F9 FD FF: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xf9
        __asm _emit 0xfd
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 53 F8 FF FF: call 0x544c3d
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 59: jne 0x545447
        __asm _emit 0x75
        __asm _emit 0x59
        mov byte ptr [ebp - 4], 8
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 F2 74 F8 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x74
        __asm _emit 0xf8
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 7
        lea ecx, [ebp - 3ch]
        ; Exact mapped bytes E8 E6 74 F8 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x74
        __asm _emit 0xf8
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 5
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 DA 74 F8 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x74
        __asm _emit 0xf8
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 4
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 CE 74 F8 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x74
        __asm _emit 0xf8
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 3
        lea ecx, [ebp - 38h]
        ; Exact mapped bytes E8 C2 74 F8 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x74
        __asm _emit 0xf8
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 2
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 B6 74 F8 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x74
        __asm _emit 0xf8
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 34h]
        ; Exact mapped bytes E8 AA 74 F8 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x74
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes E9 72 FD FF FF: jmp 0x5451b9
        __asm _emit 0xe9
        __asm _emit 0x72
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        lea eax, [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes FF 52 6C: call dword ptr [edx + 0x6c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x6c
        test eax, eax
        ; Exact mapped bytes 74 10: je 0x54546c
        __asm _emit 0x74
        __asm _emit 0x10
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 28 F9 FD FF: call 0x524d8c
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xf9
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 F5 01 00 00: je 0x545661
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 63a050h
        lea ecx, [ebp - 3ch]
        ; Exact mapped bytes E8 31 F9 FD FF: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xf9
        __asm _emit 0xfd
        __asm _emit 0xff
        push eax
        push 63a0e0h
        lea eax, [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 1E C7 F5 FF: call 0x4a1ba6
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xc7
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 10h
        push 0
        push 63a040h
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 10 F9 FD FF: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xf9
        __asm _emit 0xfd
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 9D F7 FF FF: call 0x544c3d
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 59: jne 0x5454fd
        __asm _emit 0x75
        __asm _emit 0x59
        mov byte ptr [ebp - 4], 8
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 3C 74 F8 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x74
        __asm _emit 0xf8
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 7
        lea ecx, [ebp - 3ch]
        ; Exact mapped bytes E8 30 74 F8 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x74
        __asm _emit 0xf8
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 5
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 24 74 F8 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x74
        __asm _emit 0xf8
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 4
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 18 74 F8 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x74
        __asm _emit 0xf8
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 3
        lea ecx, [ebp - 38h]
        ; Exact mapped bytes E8 0C 74 F8 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x74
        __asm _emit 0xf8
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 2
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 00 74 F8 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x74
        __asm _emit 0xf8
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 34h]
        ; Exact mapped bytes E8 F4 73 F8 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x73
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes E9 BC FC FF FF: jmp 0x5451b9
        __asm _emit 0xe9
        __asm _emit 0xbc
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 84 4B 01 00 00: je 0x545652
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x4b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 63a050h
        lea ecx, [ebp - 3ch]
        ; Exact mapped bytes E8 96 F8 FD FF: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xf8
        __asm _emit 0xfd
        __asm _emit 0xff
        push eax
        push 63a0cch
        lea ecx, [ebp - 14h]
        push ecx
        ; Exact mapped bytes E8 83 C6 F5 FF: call 0x4a1ba6
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xc6
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 10h
        push 0
        push 63a030h
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 75 F8 FD FF: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xf8
        __asm _emit 0xfd
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 02 F7 FF FF: call 0x544c3d
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 59: jne 0x545598
        __asm _emit 0x75
        __asm _emit 0x59
        mov byte ptr [ebp - 4], 8
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 A1 73 F8 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x73
        __asm _emit 0xf8
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 7
        lea ecx, [ebp - 3ch]
        ; Exact mapped bytes E8 95 73 F8 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x73
        __asm _emit 0xf8
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 5
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 89 73 F8 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x73
        __asm _emit 0xf8
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 4
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 7D 73 F8 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x73
        __asm _emit 0xf8
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 3
        lea ecx, [ebp - 38h]
        ; Exact mapped bytes E8 71 73 F8 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x73
        __asm _emit 0xf8
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 2
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 65 73 F8 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x73
        __asm _emit 0xf8
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 34h]
        ; Exact mapped bytes E8 59 73 F8 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x73
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes E9 21 FC FF FF: jmp 0x5451b9
        __asm _emit 0xe9
        __asm _emit 0x21
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        push 63a050h
        lea ecx, [ebp - 3ch]
        ; Exact mapped bytes E8 05 F8 FD FF: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0xfd
        __asm _emit 0xff
        push eax
        push 63a0b8h
        lea edx, [ebp - 14h]
        push edx
        ; Exact mapped bytes E8 F2 C5 F5 FF: call 0x4a1ba6
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xc5
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 10h
        push 0
        push 63a010h
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 E4 F7 FD FF: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xf7
        __asm _emit 0xfd
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 71 F6 FF FF: call 0x544c3d
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 59: jne 0x545629
        __asm _emit 0x75
        __asm _emit 0x59
        mov byte ptr [ebp - 4], 8
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 10 73 F8 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x73
        __asm _emit 0xf8
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 7
        lea ecx, [ebp - 3ch]
        ; Exact mapped bytes E8 04 73 F8 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x73
        __asm _emit 0xf8
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 5
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 F8 72 F8 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x72
        __asm _emit 0xf8
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 4
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 EC 72 F8 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x72
        __asm _emit 0xf8
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 3
        lea ecx, [ebp - 38h]
        ; Exact mapped bytes E8 E0 72 F8 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x72
        __asm _emit 0xf8
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 2
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 D4 72 F8 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x72
        __asm _emit 0xf8
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 34h]
        ; Exact mapped bytes E8 C8 72 F8 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x72
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes E9 90 FB FF FF: jmp 0x5451b9
        __asm _emit 0xe9
        __asm _emit 0x90
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        push 63a058h
        lea ecx, [ebp - 34h]
        ; Exact mapped bytes E8 BF 79 F8 FF: call 0x4ccff5
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x79
        __asm _emit 0xf8
        __asm _emit 0xff
        push 63a058h
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 B2 79 F8 FF: call 0x4ccff5
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x79
        __asm _emit 0xf8
        __asm _emit 0xff
        push 63a058h
        lea ecx, [ebp - 38h]
        ; Exact mapped bytes E8 A5 79 F8 FF: call 0x4ccff5
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x79
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes EB 0D: jmp 0x54565f
        __asm _emit 0xeb
        __asm _emit 0x0d
        push 63a088h
        lea ecx, [ebp - 34h]
        ; Exact mapped bytes E8 96 79 F8 FF: call 0x4ccff5
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x79
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes EB 2D: jmp 0x54568e
        __asm _emit 0xeb
        __asm _emit 0x2d
        push 63a088h
        lea ecx, [ebp - 34h]
        ; Exact mapped bytes E8 87 79 F8 FF: call 0x4ccff5
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x79
        __asm _emit 0xf8
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 1A: je 0x54568e
        __asm _emit 0x74
        __asm _emit 0x1a
        push 63a07ch
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 74 79 F8 FF: call 0x4ccff5
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x79
        __asm _emit 0xf8
        __asm _emit 0xff
        push 63a060h
        lea ecx, [ebp - 38h]
        ; Exact mapped bytes E8 67 79 F8 FF: call 0x4ccff5
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x79
        __asm _emit 0xf8
        __asm _emit 0xff
        push 63a090h
        lea ecx, [ebp - 3ch]
        ; Exact mapped bytes E8 0F F7 FD FF: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xf7
        __asm _emit 0xfd
        __asm _emit 0xff
        push eax
        push 63a0e0h
        lea eax, [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 FC C4 F5 FF: call 0x4a1ba6
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xc4
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 10h
        push 0
        lea ecx, [ebp - 34h]
        ; Exact mapped bytes E8 F3 F6 FD FF: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xf6
        __asm _emit 0xfd
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 EA F6 FD FF: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xf6
        __asm _emit 0xfd
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 77 F5 FF FF: call 0x544c3d
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 59: jne 0x545723
        __asm _emit 0x75
        __asm _emit 0x59
        mov byte ptr [ebp - 4], 8
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 16 72 F8 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x72
        __asm _emit 0xf8
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 7
        lea ecx, [ebp - 3ch]
        ; Exact mapped bytes E8 0A 72 F8 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x72
        __asm _emit 0xf8
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 5
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 FE 71 F8 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x71
        __asm _emit 0xf8
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 4
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 F2 71 F8 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x71
        __asm _emit 0xf8
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 3
        lea ecx, [ebp - 38h]
        ; Exact mapped bytes E8 E6 71 F8 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x71
        __asm _emit 0xf8
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 2
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 DA 71 F8 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x71
        __asm _emit 0xf8
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 34h]
        ; Exact mapped bytes E8 CE 71 F8 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x71
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes E9 96 FA FF FF: jmp 0x5451b9
        __asm _emit 0xe9
        __asm _emit 0x96
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 84 2A 01 00 00: je 0x545857
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 63a090h
        lea ecx, [ebp - 3ch]
        ; Exact mapped bytes E8 70 F6 FD FF: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xf6
        __asm _emit 0xfd
        __asm _emit 0xff
        push eax
        push 63a0cch
        lea ecx, [ebp - 14h]
        push ecx
        ; Exact mapped bytes E8 5D C4 F5 FF: call 0x4a1ba6
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xc4
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 10h
        push 0
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 54 F6 FD FF: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xf6
        __asm _emit 0xfd
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 4B F6 FD FF: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xf6
        __asm _emit 0xfd
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 D8 F4 FF FF: call 0x544c3d
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 59: jne 0x5457c2
        __asm _emit 0x75
        __asm _emit 0x59
        mov byte ptr [ebp - 4], 8
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 77 71 F8 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x71
        __asm _emit 0xf8
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 7
        lea ecx, [ebp - 3ch]
        ; Exact mapped bytes E8 6B 71 F8 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x71
        __asm _emit 0xf8
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 5
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 5F 71 F8 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x71
        __asm _emit 0xf8
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 4
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 53 71 F8 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x71
        __asm _emit 0xf8
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 3
        lea ecx, [ebp - 38h]
        ; Exact mapped bytes E8 47 71 F8 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x71
        __asm _emit 0xf8
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 2
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 3B 71 F8 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x71
        __asm _emit 0xf8
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 34h]
        ; Exact mapped bytes E8 2F 71 F8 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x71
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes E9 F7 F9 FF FF: jmp 0x5451b9
        __asm _emit 0xe9
        __asm _emit 0xf7
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        push 63a090h
        lea ecx, [ebp - 3ch]
        ; Exact mapped bytes E8 DB F5 FD FF: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xf5
        __asm _emit 0xfd
        __asm _emit 0xff
        push eax
        push 63a0b8h
        lea edx, [ebp - 14h]
        push edx
        ; Exact mapped bytes E8 C8 C3 F5 FF: call 0x4a1ba6
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xc3
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 10h
        push 0
        lea ecx, [ebp - 38h]
        ; Exact mapped bytes E8 BF F5 FD FF: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xf5
        __asm _emit 0xfd
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 B6 F5 FD FF: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xf5
        __asm _emit 0xfd
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 43 F4 FF FF: call 0x544c3d
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 59: jne 0x545857
        __asm _emit 0x75
        __asm _emit 0x59
        mov byte ptr [ebp - 4], 8
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 E2 70 F8 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x70
        __asm _emit 0xf8
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 7
        lea ecx, [ebp - 3ch]
        ; Exact mapped bytes E8 D6 70 F8 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x70
        __asm _emit 0xf8
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 5
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 CA 70 F8 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x70
        __asm _emit 0xf8
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 4
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 BE 70 F8 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x70
        __asm _emit 0xf8
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 3
        lea ecx, [ebp - 38h]
        ; Exact mapped bytes E8 B2 70 F8 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x70
        __asm _emit 0xf8
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 2
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 A6 70 F8 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x70
        __asm _emit 0xf8
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 34h]
        ; Exact mapped bytes E8 9A 70 F8 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x70
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes E9 62 F9 FF FF: jmp 0x5451b9
        __asm _emit 0xe9
        __asm _emit 0x62
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        push 4
        lea eax, [ebp - 28h]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes FF 52 6C: call dword ptr [edx + 0x6c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x6c
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 1C F5 FD FF: call 0x524d8c
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xf5
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 85 3F 01 00 00: jne 0x5459b7
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x3f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 01 F7 FD FF: call 0x524f83
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xf7
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 0F BE C0: movsx eax, al
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0xc0
        cmp eax, 2eh
        ; Exact mapped bytes 74 14: je 0x54589e
        __asm _emit 0x74
        __asm _emit 0x14
        push 153h
        push 678024h
        ; Exact mapped bytes E8 A7 34 FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x34
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54589e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D4: jne 0x545878
        __asm _emit 0x75
        __asm _emit 0xd4
        mov dword ptr [ebp - 48h], 208h
        lea edx, [ebp - 48h]
        push edx
        mov eax, dword ptr [ebp - 48h]
        push eax
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 DD 77 F8 FF: call 0x4cd098
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x77
        __asm _emit 0xf8
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 E6 F4 FD FF: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xf4
        __asm _emit 0xfd
        __asm _emit 0xff
        push eax
        push 80000000h
        ; Exact mapped bytes FF 15 B8 B2 68 00: call dword ptr [0x68b2b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0xb2
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4ch], eax
        push -1
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 F6 78 F8 FF: call 0x4cd1d3
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x78
        __asm _emit 0xf8
        __asm _emit 0xff
        cmp dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes 75 26: jne 0x545909
        __asm _emit 0x75
        __asm _emit 0x26
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 A1 F4 FD FF: call 0x524d8c
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 1A: jne 0x545909
        __asm _emit 0x75
        __asm _emit 0x1a
        lea ecx, [ebp - 3ch]
        push ecx
        lea edx, [ebp - 14h]
        push edx
        ; Exact mapped bytes E8 EF F6 FD FF: call 0x524feb
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0xf6
        __asm _emit 0xfd
        __asm _emit 0xff
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 0F 84 AE 00 00 00: je 0x5459b7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        lea ecx, [ebp - 3ch]
        ; Exact mapped bytes E8 97 F4 FD FF: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xf4
        __asm _emit 0xfd
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 8E F4 FD FF: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xf4
        __asm _emit 0xfd
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 1B F3 FF FF: call 0x544c3d
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 59: jne 0x54597f
        __asm _emit 0x75
        __asm _emit 0x59
        mov byte ptr [ebp - 4], 8
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 BA 6F F8 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x6f
        __asm _emit 0xf8
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 7
        lea ecx, [ebp - 3ch]
        ; Exact mapped bytes E8 AE 6F F8 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x6f
        __asm _emit 0xf8
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 5
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 A2 6F F8 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x6f
        __asm _emit 0xf8
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 4
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 96 6F F8 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x6f
        __asm _emit 0xf8
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 3
        lea ecx, [ebp - 38h]
        ; Exact mapped bytes E8 8A 6F F8 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x6f
        __asm _emit 0xf8
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 2
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 7E 6F F8 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x6f
        __asm _emit 0xf8
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 34h]
        ; Exact mapped bytes E8 72 6F F8 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x6f
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes E9 3A F8 FF FF: jmp 0x5451b9
        __asm _emit 0xe9
        __asm _emit 0x3a
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 32: je 0x5459b7
        __asm _emit 0x74
        __asm _emit 0x32
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 1D F4 FD FF: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xf4
        __asm _emit 0xfd
        __asm _emit 0xff
        push eax
        push 63a09ch
        lea eax, [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 0A C2 F5 FF: call 0x4a1ba6
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xc2
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 0ch
        push 63a004h
        push 63a000h
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 F9 F3 FD FF: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xf3
        __asm _emit 0xfd
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 86 F2 FF FF: call 0x544c3d
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 8
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 29 6F F8 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x6f
        __asm _emit 0xf8
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 7
        lea ecx, [ebp - 3ch]
        ; Exact mapped bytes E8 1D 6F F8 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x6f
        __asm _emit 0xf8
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 5
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 11 6F F8 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x6f
        __asm _emit 0xf8
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 4
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 05 6F F8 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x6f
        __asm _emit 0xf8
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 3
        lea ecx, [ebp - 38h]
        ; Exact mapped bytes E8 F9 6E F8 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x6e
        __asm _emit 0xf8
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 2
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 ED 6E F8 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x6e
        __asm _emit 0xf8
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 34h]
        ; Exact mapped bytes E8 E1 6E F8 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x6e
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes E9 A9 F7 FF FF: jmp 0x5451b9
        __asm _emit 0xe9
        __asm _emit 0xa9
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 D0 6E F8 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x6e
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 C1 6E F8 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x6e
        __asm _emit 0xf8
        __asm _emit 0xff
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
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
