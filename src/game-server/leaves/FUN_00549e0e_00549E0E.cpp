// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00549E0E .. +0x910 bytes.
extern "C" __declspec(naked) void FUN_00549e0e_00549E0E() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57e9e4h
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
        ; Exact mapped bytes E8 47 8D FE FF: call 0x532b81
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x8d
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x549e52
        __asm _emit 0x74
        __asm _emit 0x14
        push 0d3h
        push 5cb84ch
        ; Exact mapped bytes E8 B3 AB FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xab
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x549e52
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D7: jne 0x549e2f
        __asm _emit 0x75
        __asm _emit 0xd7
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 A7 70 FE FF: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x70
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 98 70 FE FF: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x70
        __asm _emit 0xfe
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 1ch]
        push ecx
        ; Exact mapped bytes E8 91 B6 FE FF: call 0x53550d
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xb6
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 E2 61 FB FF: call 0x500064
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x61
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 50h]
        add ecx, 4
        ; Exact mapped bytes E8 01 8E FE FF: call 0x532c8e
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x8e
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 10h], 1
        ; Exact mapped bytes EB 09: jmp 0x549ea2
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 10h]
        add edx, 1
        mov dword ptr [ebp - 10h], edx
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 0F 84 44 08 00 00: je 0x54a6f0
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
        ; Exact mapped bytes E8 F5 8D FE FF: call 0x532cb0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x8d
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 24h], ecx
        lea edx, [ebp - 1ch]
        push edx
        lea ecx, [ebp - 34h]
        ; Exact mapped bytes E8 AE 35 FA FF: call 0x4ed47a
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x35
        __asm _emit 0xfa
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 2
        lea eax, [ebp - 1ch]
        push eax
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 9E 35 FA FF: call 0x4ed47a
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x35
        __asm _emit 0xfa
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 3
        lea ecx, [ebp - 1ch]
        push ecx
        lea ecx, [ebp - 38h]
        ; Exact mapped bytes E8 8E 35 FA FF: call 0x4ed47a
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x35
        __asm _emit 0xfa
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 4
        lea edx, [ebp - 1ch]
        push edx
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 7E 35 FA FF: call 0x4ed47a
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x35
        __asm _emit 0xfa
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 5
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 7A: je 0x549f80
        __asm _emit 0x74
        __asm _emit 0x7a
        lea ecx, [ebp - 44h]
        ; Exact mapped bytes E8 F9 6F FE FF: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x6f
        __asm _emit 0xfe
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 6
        mov eax, dword ptr [ebp - 10h]
        push eax
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 8C 70 FE FF: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x70
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 E9 B5 FE FF: call 0x53550d
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xb5
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes FF 15 20 25 5E 00: call dword ptr [0x5e2520]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 40h], eax
        cmp dword ptr [ebp - 40h], 0
        ; Exact mapped bytes 74 21: je 0x549f55
        __asm _emit 0x74
        __asm _emit 0x21
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        push 587a78h
        lea edx, [ebp - 44h]
        push edx
        ; Exact mapped bytes E8 16 4A F8 FF: call 0x4ce95c
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x4a
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 0ch
        mov eax, dword ptr [ebp - 40h]
        push eax
        ; Exact mapped bytes FF 15 28 28 5E 00: call dword ptr [0x5e2828]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes EB 13: jmp 0x549f68
        __asm _emit 0xeb
        __asm _emit 0x13
        push 0
        push 587a78h
        lea ecx, [ebp - 44h]
        push ecx
        ; Exact mapped bytes E8 F7 49 F8 FF: call 0x4ce95c
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x49
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 0ch
        lea edx, [ebp - 44h]
        push edx
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 5A 40 FA FF: call 0x4edfce
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x40
        __asm _emit 0xfa
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 5
        lea ecx, [ebp - 44h]
        ; Exact mapped bytes E8 CC 38 FA FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x38
        __asm _emit 0xfa
        __asm _emit 0xff
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 7F 6F FE FF: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x6f
        __asm _emit 0xfe
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 7
        lea ecx, [ebp - 3ch]
        ; Exact mapped bytes E8 73 6F FE FF: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x6f
        __asm _emit 0xfe
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 8
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 67 6F FE FF: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x6f
        __asm _emit 0xfe
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
        ; Exact mapped bytes 0F 84 DA 06 00 00: je 0x54a697
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xda
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 3ch]
        ; Exact mapped bytes E8 C7 6F FE FF: call 0x530f8c
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x6f
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 85 CA 06 00 00: jne 0x54a697
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
        ; Exact mapped bytes 75 0C: jne 0x549fee
        __asm _emit 0x75
        __asm _emit 0x0c
        lea eax, [ebp - 3ch]
        push eax
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 58 3A FA FF: call 0x4eda46
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x3a
        __asm _emit 0xfa
        __asm _emit 0xff
        push 20h
        lea ecx, [ebp - 3ch]
        ; Exact mapped bytes E8 8D 43 FA FF: call 0x4ee385
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x43
        __asm _emit 0xfa
        __asm _emit 0xff
        cmp eax, -1
        ; Exact mapped bytes 74 14: je 0x54a011
        __asm _emit 0x74
        __asm _emit 0x14
        push 0fch
        push 5cb84ch
        ; Exact mapped bytes E8 F4 A9 FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xa9
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54a011
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D7: jne 0x549fee
        __asm _emit 0x75
        __asm _emit 0xd7
        push 0
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 89 6F FE FF: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x6f
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 3ch]
        ; Exact mapped bytes E8 80 6F FE FF: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x6f
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 ED F8 FF FF: call 0x54991d
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 59: jne 0x54a08d
        __asm _emit 0x75
        __asm _emit 0x59
        mov byte ptr [ebp - 4], 8
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 0C 38 FA FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x38
        __asm _emit 0xfa
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 7
        lea ecx, [ebp - 3ch]
        ; Exact mapped bytes E8 00 38 FA FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x38
        __asm _emit 0xfa
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 5
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 F4 37 FA FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x37
        __asm _emit 0xfa
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 4
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 E8 37 FA FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xfa
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 3
        lea ecx, [ebp - 38h]
        ; Exact mapped bytes E8 DC 37 FA FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x37
        __asm _emit 0xfa
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 2
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 D0 37 FA FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x37
        __asm _emit 0xfa
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 34h]
        ; Exact mapped bytes E8 C4 37 FA FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x37
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes E9 0C FE FF FF: jmp 0x549e99
        __asm _emit 0xe9
        __asm _emit 0x0c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 84 90 00 00 00: je 0x54a127
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 3ch]
        ; Exact mapped bytes E8 0B 6F FE FF: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x6f
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        push 587a88h
        lea edx, [ebp - 14h]
        push edx
        ; Exact mapped bytes E8 AE 48 F8 FF: call 0x4ce95c
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x48
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 0ch
        push 0
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 EF 6E FE FF: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x6e
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 E6 6E FE FF: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x6e
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 53 F8 FF FF: call 0x54991d
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 59: jne 0x54a127
        __asm _emit 0x75
        __asm _emit 0x59
        mov byte ptr [ebp - 4], 8
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 72 37 FA FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x37
        __asm _emit 0xfa
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 7
        lea ecx, [ebp - 3ch]
        ; Exact mapped bytes E8 66 37 FA FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x37
        __asm _emit 0xfa
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 5
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 5A 37 FA FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x37
        __asm _emit 0xfa
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 4
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 4E 37 FA FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x37
        __asm _emit 0xfa
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 3
        lea ecx, [ebp - 38h]
        ; Exact mapped bytes E8 42 37 FA FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x37
        __asm _emit 0xfa
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 2
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 36 37 FA FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x37
        __asm _emit 0xfa
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 34h]
        ; Exact mapped bytes E8 2A 37 FA FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x37
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes E9 72 FD FF FF: jmp 0x549e99
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
        ; Exact mapped bytes 74 10: je 0x54a14c
        __asm _emit 0x74
        __asm _emit 0x10
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 48 6E FE FF: call 0x530f8c
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x6e
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 F5 01 00 00: je 0x54a341
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 587a30h
        lea ecx, [ebp - 3ch]
        ; Exact mapped bytes E8 51 6E FE FF: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x6e
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        push 587ac0h
        lea eax, [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 F4 47 F8 FF: call 0x4ce95c
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x47
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 10h
        push 0
        push 587a20h
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 30 6E FE FF: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x6e
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 9D F7 FF FF: call 0x54991d
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 59: jne 0x54a1dd
        __asm _emit 0x75
        __asm _emit 0x59
        mov byte ptr [ebp - 4], 8
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 BC 36 FA FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x36
        __asm _emit 0xfa
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 7
        lea ecx, [ebp - 3ch]
        ; Exact mapped bytes E8 B0 36 FA FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x36
        __asm _emit 0xfa
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 5
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 A4 36 FA FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x36
        __asm _emit 0xfa
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 4
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 98 36 FA FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x36
        __asm _emit 0xfa
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 3
        lea ecx, [ebp - 38h]
        ; Exact mapped bytes E8 8C 36 FA FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x36
        __asm _emit 0xfa
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 2
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 80 36 FA FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x36
        __asm _emit 0xfa
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 34h]
        ; Exact mapped bytes E8 74 36 FA FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x36
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes E9 BC FC FF FF: jmp 0x549e99
        __asm _emit 0xe9
        __asm _emit 0xbc
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 84 4B 01 00 00: je 0x54a332
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x4b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 587a30h
        lea ecx, [ebp - 3ch]
        ; Exact mapped bytes E8 B6 6D FE FF: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x6d
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        push 587aach
        lea ecx, [ebp - 14h]
        push ecx
        ; Exact mapped bytes E8 59 47 F8 FF: call 0x4ce95c
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x47
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 10h
        push 0
        push 587a10h
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 95 6D FE FF: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x6d
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 02 F7 FF FF: call 0x54991d
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 59: jne 0x54a278
        __asm _emit 0x75
        __asm _emit 0x59
        mov byte ptr [ebp - 4], 8
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 21 36 FA FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x36
        __asm _emit 0xfa
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 7
        lea ecx, [ebp - 3ch]
        ; Exact mapped bytes E8 15 36 FA FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x36
        __asm _emit 0xfa
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 5
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 09 36 FA FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x36
        __asm _emit 0xfa
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 4
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 FD 35 FA FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x35
        __asm _emit 0xfa
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 3
        lea ecx, [ebp - 38h]
        ; Exact mapped bytes E8 F1 35 FA FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x35
        __asm _emit 0xfa
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 2
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 E5 35 FA FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x35
        __asm _emit 0xfa
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 34h]
        ; Exact mapped bytes E8 D9 35 FA FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x35
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes E9 21 FC FF FF: jmp 0x549e99
        __asm _emit 0xe9
        __asm _emit 0x21
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        push 587a30h
        lea ecx, [ebp - 3ch]
        ; Exact mapped bytes E8 25 6D FE FF: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x6d
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        push 587a98h
        lea edx, [ebp - 14h]
        push edx
        ; Exact mapped bytes E8 C8 46 F8 FF: call 0x4ce95c
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x46
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 10h
        push 0
        push 5879f0h
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 04 6D FE FF: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x6d
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 71 F6 FF FF: call 0x54991d
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 59: jne 0x54a309
        __asm _emit 0x75
        __asm _emit 0x59
        mov byte ptr [ebp - 4], 8
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 90 35 FA FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x35
        __asm _emit 0xfa
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 7
        lea ecx, [ebp - 3ch]
        ; Exact mapped bytes E8 84 35 FA FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x35
        __asm _emit 0xfa
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 5
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 78 35 FA FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x35
        __asm _emit 0xfa
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 4
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 6C 35 FA FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x35
        __asm _emit 0xfa
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 3
        lea ecx, [ebp - 38h]
        ; Exact mapped bytes E8 60 35 FA FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x35
        __asm _emit 0xfa
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 2
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 54 35 FA FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x35
        __asm _emit 0xfa
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 34h]
        ; Exact mapped bytes E8 48 35 FA FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x35
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes E9 90 FB FF FF: jmp 0x549e99
        __asm _emit 0xe9
        __asm _emit 0x90
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        push 587a38h
        lea ecx, [ebp - 34h]
        ; Exact mapped bytes E8 3F 3C FA FF: call 0x4edf55
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x3c
        __asm _emit 0xfa
        __asm _emit 0xff
        push 587a38h
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 32 3C FA FF: call 0x4edf55
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x3c
        __asm _emit 0xfa
        __asm _emit 0xff
        push 587a38h
        lea ecx, [ebp - 38h]
        ; Exact mapped bytes E8 25 3C FA FF: call 0x4edf55
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x3c
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes EB 0D: jmp 0x54a33f
        __asm _emit 0xeb
        __asm _emit 0x0d
        push 587a68h
        lea ecx, [ebp - 34h]
        ; Exact mapped bytes E8 16 3C FA FF: call 0x4edf55
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x3c
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes EB 2D: jmp 0x54a36e
        __asm _emit 0xeb
        __asm _emit 0x2d
        push 587a68h
        lea ecx, [ebp - 34h]
        ; Exact mapped bytes E8 07 3C FA FF: call 0x4edf55
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x3c
        __asm _emit 0xfa
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 1A: je 0x54a36e
        __asm _emit 0x74
        __asm _emit 0x1a
        push 587a5ch
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 F4 3B FA FF: call 0x4edf55
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x3b
        __asm _emit 0xfa
        __asm _emit 0xff
        push 587a40h
        lea ecx, [ebp - 38h]
        ; Exact mapped bytes E8 E7 3B FA FF: call 0x4edf55
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x3b
        __asm _emit 0xfa
        __asm _emit 0xff
        push 587a70h
        lea ecx, [ebp - 3ch]
        ; Exact mapped bytes E8 2F 6C FE FF: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x6c
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        push 587ac0h
        lea eax, [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 D2 45 F8 FF: call 0x4ce95c
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x45
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 10h
        push 0
        lea ecx, [ebp - 34h]
        ; Exact mapped bytes E8 13 6C FE FF: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x6c
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 0A 6C FE FF: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x6c
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 77 F5 FF FF: call 0x54991d
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 59: jne 0x54a403
        __asm _emit 0x75
        __asm _emit 0x59
        mov byte ptr [ebp - 4], 8
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 96 34 FA FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x34
        __asm _emit 0xfa
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 7
        lea ecx, [ebp - 3ch]
        ; Exact mapped bytes E8 8A 34 FA FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x34
        __asm _emit 0xfa
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 5
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 7E 34 FA FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x34
        __asm _emit 0xfa
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 4
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 72 34 FA FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x34
        __asm _emit 0xfa
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 3
        lea ecx, [ebp - 38h]
        ; Exact mapped bytes E8 66 34 FA FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x34
        __asm _emit 0xfa
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 2
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 5A 34 FA FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x34
        __asm _emit 0xfa
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 34h]
        ; Exact mapped bytes E8 4E 34 FA FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x34
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes E9 96 FA FF FF: jmp 0x549e99
        __asm _emit 0xe9
        __asm _emit 0x96
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 84 2A 01 00 00: je 0x54a537
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 587a70h
        lea ecx, [ebp - 3ch]
        ; Exact mapped bytes E8 90 6B FE FF: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x6b
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        push 587aach
        lea ecx, [ebp - 14h]
        push ecx
        ; Exact mapped bytes E8 33 45 F8 FF: call 0x4ce95c
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x45
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 10h
        push 0
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 74 6B FE FF: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x6b
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 6B 6B FE FF: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x6b
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 D8 F4 FF FF: call 0x54991d
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 59: jne 0x54a4a2
        __asm _emit 0x75
        __asm _emit 0x59
        mov byte ptr [ebp - 4], 8
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 F7 33 FA FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x33
        __asm _emit 0xfa
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 7
        lea ecx, [ebp - 3ch]
        ; Exact mapped bytes E8 EB 33 FA FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x33
        __asm _emit 0xfa
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 5
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 DF 33 FA FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x33
        __asm _emit 0xfa
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 4
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 D3 33 FA FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x33
        __asm _emit 0xfa
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 3
        lea ecx, [ebp - 38h]
        ; Exact mapped bytes E8 C7 33 FA FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x33
        __asm _emit 0xfa
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 2
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 BB 33 FA FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x33
        __asm _emit 0xfa
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 34h]
        ; Exact mapped bytes E8 AF 33 FA FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x33
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes E9 F7 F9 FF FF: jmp 0x549e99
        __asm _emit 0xe9
        __asm _emit 0xf7
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        push 587a70h
        lea ecx, [ebp - 3ch]
        ; Exact mapped bytes E8 FB 6A FE FF: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x6a
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        push 587a98h
        lea edx, [ebp - 14h]
        push edx
        ; Exact mapped bytes E8 9E 44 F8 FF: call 0x4ce95c
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x44
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 10h
        push 0
        lea ecx, [ebp - 38h]
        ; Exact mapped bytes E8 DF 6A FE FF: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x6a
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 D6 6A FE FF: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x6a
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 43 F4 FF FF: call 0x54991d
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 59: jne 0x54a537
        __asm _emit 0x75
        __asm _emit 0x59
        mov byte ptr [ebp - 4], 8
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 62 33 FA FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x33
        __asm _emit 0xfa
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 7
        lea ecx, [ebp - 3ch]
        ; Exact mapped bytes E8 56 33 FA FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x33
        __asm _emit 0xfa
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 5
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 4A 33 FA FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x33
        __asm _emit 0xfa
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 4
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 3E 33 FA FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x33
        __asm _emit 0xfa
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 3
        lea ecx, [ebp - 38h]
        ; Exact mapped bytes E8 32 33 FA FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x33
        __asm _emit 0xfa
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 2
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 26 33 FA FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x33
        __asm _emit 0xfa
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 34h]
        ; Exact mapped bytes E8 1A 33 FA FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x33
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes E9 62 F9 FF FF: jmp 0x549e99
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
        ; Exact mapped bytes E8 3C 6A FE FF: call 0x530f8c
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x6a
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 85 3F 01 00 00: jne 0x54a697
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x3f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 21 6C FE FF: call 0x531183
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x6c
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 0F BE C0: movsx eax, al
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0xc0
        cmp eax, 2eh
        ; Exact mapped bytes 74 14: je 0x54a57e
        __asm _emit 0x74
        __asm _emit 0x14
        push 153h
        push 5cb84ch
        ; Exact mapped bytes E8 87 A4 FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xa4
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54a57e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D4: jne 0x54a558
        __asm _emit 0x75
        __asm _emit 0xd4
        mov dword ptr [ebp - 48h], 208h
        lea edx, [ebp - 48h]
        push edx
        mov eax, dword ptr [ebp - 48h]
        push eax
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 5D 3A FA FF: call 0x4edff8
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x3a
        __asm _emit 0xfa
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 06 6A FE FF: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x6a
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        push 80000000h
        ; Exact mapped bytes FF 15 28 1E 5E 00: call dword ptr [0x5e1e28]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0x1e
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4ch], eax
        push -1
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 76 3B FA FF: call 0x4ee133
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x3b
        __asm _emit 0xfa
        __asm _emit 0xff
        cmp dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes 75 26: jne 0x54a5e9
        __asm _emit 0x75
        __asm _emit 0x26
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 C1 69 FE FF: call 0x530f8c
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x69
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 1A: jne 0x54a5e9
        __asm _emit 0x75
        __asm _emit 0x1a
        lea ecx, [ebp - 3ch]
        push ecx
        lea edx, [ebp - 14h]
        push edx
        ; Exact mapped bytes E8 0F 6C FE FF: call 0x5311eb
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x6c
        __asm _emit 0xfe
        __asm _emit 0xff
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 0F 84 AE 00 00 00: je 0x54a697
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        lea ecx, [ebp - 3ch]
        ; Exact mapped bytes E8 B7 69 FE FF: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x69
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 AE 69 FE FF: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x69
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 1B F3 FF FF: call 0x54991d
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 59: jne 0x54a65f
        __asm _emit 0x75
        __asm _emit 0x59
        mov byte ptr [ebp - 4], 8
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 3A 32 FA FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x32
        __asm _emit 0xfa
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 7
        lea ecx, [ebp - 3ch]
        ; Exact mapped bytes E8 2E 32 FA FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x32
        __asm _emit 0xfa
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 5
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 22 32 FA FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x32
        __asm _emit 0xfa
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 4
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 16 32 FA FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x32
        __asm _emit 0xfa
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 3
        lea ecx, [ebp - 38h]
        ; Exact mapped bytes E8 0A 32 FA FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x32
        __asm _emit 0xfa
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 2
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 FE 31 FA FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x31
        __asm _emit 0xfa
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 34h]
        ; Exact mapped bytes E8 F2 31 FA FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x31
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes E9 3A F8 FF FF: jmp 0x549e99
        __asm _emit 0xe9
        __asm _emit 0x3a
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 32: je 0x54a697
        __asm _emit 0x74
        __asm _emit 0x32
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 3D 69 FE FF: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x69
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        push 587a7ch
        lea eax, [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 E0 42 F8 FF: call 0x4ce95c
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x42
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 0ch
        push 5879e4h
        push 5879e0h
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 19 69 FE FF: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x69
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 86 F2 FF FF: call 0x54991d
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 8
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 A9 31 FA FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x31
        __asm _emit 0xfa
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 7
        lea ecx, [ebp - 3ch]
        ; Exact mapped bytes E8 9D 31 FA FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x31
        __asm _emit 0xfa
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 5
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 91 31 FA FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x31
        __asm _emit 0xfa
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 4
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 85 31 FA FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x31
        __asm _emit 0xfa
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 3
        lea ecx, [ebp - 38h]
        ; Exact mapped bytes E8 79 31 FA FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x31
        __asm _emit 0xfa
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 2
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 6D 31 FA FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x31
        __asm _emit 0xfa
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 34h]
        ; Exact mapped bytes E8 61 31 FA FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x31
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes E9 A9 F7 FF FF: jmp 0x549e99
        __asm _emit 0xe9
        __asm _emit 0xa9
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 50 31 FA FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x31
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 1ch]
        ; Exact mapped bytes E8 41 31 FA FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x31
        __asm _emit 0xfa
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
