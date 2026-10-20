// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004635AA .. +0x852 bytes.
extern "C" __declspec(naked) void FUN_004635aa_004635AA() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58f814h
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
        sub esp, 8ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 80h], ecx
        mov dword ptr [ebp - 34h], 0
        mov dword ptr [ebp - 1ch], 0
        mov dword ptr [ebp - 18h], 0
        mov dword ptr [ebp - 2ch], 0
        push 22h
        push 67cd04h
        mov eax, dword ptr [ebp - 80h]
        push eax
        ; Exact mapped bytes E8 66 6C 07 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x6c
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], 80004005h
        mov ecx, dword ptr [ebp - 80h]
        mov edx, dword ptr [ecx + 20h]
        cmp dword ptr [edx + 0ach], 0
        ; Exact mapped bytes 75 07: jne 0x463617
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 CE 07 00 00: jmp 0x463de5
        __asm _emit 0xe9
        __asm _emit 0xce
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 E8 16 0C 00: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp - 3ch]
        ; Exact mapped bytes E8 D9 16 0C 00: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x16
        __asm _emit 0x0c
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        lea eax, [ebp - 30h]
        push eax
        mov ecx, dword ptr [ebp - 80h]
        mov ecx, dword ptr [ecx + 20h]
        mov edx, dword ptr [ebp - 80h]
        mov eax, dword ptr [edx + 20h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 92 38 01 00 00: call dword ptr [edx + 0x138]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 2A: jne 0x463678
        __asm _emit 0x75
        __asm _emit 0x2a
        mov dword ptr [ebp - 60h], 80004005h
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 3ch]
        ; Exact mapped bytes E8 8B 92 06 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x92
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 7C 92 06 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x92
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 60h]
        ; Exact mapped bytes E9 6D 07 00 00: jmp 0x463de5
        __asm _emit 0xe9
        __asm _emit 0x6d
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 2A 17 0C 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x17
        __asm _emit 0x0c
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 96 E4 0C 00: call 0x531b1c
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xe4
        __asm _emit 0x0c
        __asm _emit 0x00
        push eax
        push 0e005h
        lea eax, [ebp - 3ch]
        push eax
        ; Exact mapped bytes E8 14 18 0A 00: call 0x504ea9
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x18
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], 0
        mov ecx, dword ptr [ebp - 80h]
        mov edx, dword ptr [ecx + 2ch]
        mov dword ptr [ebp - 20h], edx
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 75 2A: jne 0x4636d5
        __asm _emit 0x75
        __asm _emit 0x2a
        mov dword ptr [ebp - 64h], 80004005h
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 3ch]
        ; Exact mapped bytes E8 2E 92 06 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x92
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 1F 92 06 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x92
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 64h]
        ; Exact mapped bytes E9 10 07 00 00: jmp 0x463de5
        __asm _emit 0xe9
        __asm _emit 0x10
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 20h]
        push edx
        ; Exact mapped bytes FF 51 04: call dword ptr [ecx + 4]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x04
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 20h]
        push edx
        ; Exact mapped bytes FF 51 18: call dword ptr [ecx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x18
        mov dword ptr [ebp - 24h], eax
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 05: je 0x4636fb
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 9A 06 00 00: jmp 0x463d95
        __asm _emit 0xe9
        __asm _emit 0x9a
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 20h]
        push eax
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x463720
        __asm _emit 0x74
        __asm _emit 0x11
        push 3eh
        push 67cd04h
        ; Exact mapped bytes E8 25 56 0C 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x56
        __asm _emit 0x0c
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x463720
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x4636fb
        __asm _emit 0x75
        __asm _emit 0xd5
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes E8 80 C1 06 00: call 0x4cf8af
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xc1
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], eax
        mov eax, dword ptr [ebp - 80h]
        mov ecx, dword ptr [eax + 20h]
        cmp dword ptr [ecx + 0c0h], 0
        ; Exact mapped bytes 74 14: je 0x463755
        __asm _emit 0x74
        __asm _emit 0x14
        mov edx, dword ptr [ebp - 80h]
        mov eax, dword ptr [edx + 20h]
        mov ecx, dword ptr [eax + 0c0h]
        mov dword ptr [ebp - 38h], ecx
        ; Exact mapped bytes E9 B0 02 00 00: jmp 0x463a05
        __asm _emit 0xe9
        __asm _emit 0xb0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 28h]
        push edx
        mov eax, dword ptr [ebp - 80h]
        mov ecx, dword ptr [eax + 20h]
        mov edx, dword ptr [ebp - 80h]
        mov eax, dword ptr [edx + 20h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 92 2C 01 00 00: call dword ptr [edx + 0x12c]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 38h], eax
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 75 2E: jne 0x4637a4
        __asm _emit 0x75
        __asm _emit 0x2e
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 75 11: jne 0x46378d
        __asm _emit 0x75
        __asm _emit 0x11
        push 4fh
        push 67cd04h
        ; Exact mapped bytes E8 B8 55 0C 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x55
        __asm _emit 0x0c
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x46378d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E3: jne 0x463776
        __asm _emit 0x75
        __asm _emit 0xe3
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 20h]
        push eax
        ; Exact mapped bytes FF 52 2C: call dword ptr [edx + 0x2c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x2c
        ; Exact mapped bytes E9 F1 05 00 00: jmp 0x463d95
        __asm _emit 0xe9
        __asm _emit 0xf1
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 ED 92 0C 00: call 0x52ca99
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x92
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, dword ptr [ebp - 28h]
        ; Exact mapped bytes 74 11: je 0x4637c2
        __asm _emit 0x74
        __asm _emit 0x11
        push 54h
        push 67cd04h
        ; Exact mapped bytes E8 83 55 0C 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x55
        __asm _emit 0x0c
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4637c2
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DC: jne 0x4637a4
        __asm _emit 0x75
        __asm _emit 0xdc
        mov edx, dword ptr [ebp - 80h]
        mov eax, dword ptr [edx + 20h]
        mov ecx, dword ptr [ebp - 38h]
        mov dword ptr [eax + 0c0h], ecx
        mov edx, dword ptr [ebp - 38h]
        add edx, 0c0h
        push edx
        lea eax, [ebp - 4ch]
        push eax
        lea ecx, [ebp - 5ch]
        push ecx
        mov edx, dword ptr [ebp - 38h]
        add edx, 0d8h
        push edx
        mov eax, dword ptr [ebp - 38h]
        add eax, 0d4h
        push eax
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 20h]
        push eax
        ; Exact mapped bytes FF 52 20: call dword ptr [edx + 0x20]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x20
        mov dword ptr [ebp - 24h], eax
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 05: je 0x463816
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 FC 04 00 00: jmp 0x463d12
        __asm _emit 0xe9
        __asm _emit 0xfc
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 38h]
        cmp dword ptr [ecx + 0d4h], 0
        ; Exact mapped bytes 75 11: jne 0x463833
        __asm _emit 0x75
        __asm _emit 0x11
        push 5fh
        push 67cd04h
        ; Exact mapped bytes E8 12 55 0C 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x55
        __asm _emit 0x0c
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x463833
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x463816
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 20h]
        push edx
        ; Exact mapped bytes FF 51 1C: call dword ptr [ecx + 0x1c]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x1c
        mov dword ptr [ebp - 24h], eax
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 05: je 0x463853
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 BF 04 00 00: jmp 0x463d12
        __asm _emit 0xe9
        __asm _emit 0xbf
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 38h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes FF 92 0C 01 00 00: call dword ptr [edx + 0x10c]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x46386a
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 7A 04 00 00: jmp 0x463ce4
        __asm _emit 0xe9
        __asm _emit 0x7a
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx + 0d4h]
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 0d4h]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x46389b
        __asm _emit 0x74
        __asm _emit 0x11
        push 6bh
        push 67cd04h
        ; Exact mapped bytes E8 AA 54 0C 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x54
        __asm _emit 0x0c
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x46389b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 C9: jne 0x46386a
        __asm _emit 0x75
        __asm _emit 0xc9
        push 6dh
        push 67cd04h
        push 0c0h
        ; Exact mapped bytes E8 4D 88 06 00: call 0x4cc0ff
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x88
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 6ch], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 6ch], 0
        ; Exact mapped bytes 74 14: je 0x4638d3
        __asm _emit 0x74
        __asm _emit 0x14
        mov edx, dword ptr [ebp - 38h]
        push edx
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 B5 6B 10 00: call 0x56a480
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x6b
        __asm _emit 0x10
        __asm _emit 0x00
        mov dword ptr [ebp - 84h], eax
        ; Exact mapped bytes EB 0A: jmp 0x4638dd
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 84h], 0
        mov eax, dword ptr [ebp - 84h]
        mov dword ptr [ebp - 68h], eax
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ebp - 68h]
        mov dword ptr [ecx + 0dch], edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        mov ecx, dword ptr [ecx + 0dch]
        ; Exact mapped bytes E8 92 C0 06 00: call 0x4cf99a
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xc0
        __asm _emit 0x06
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 38h]
        cmp dword ptr [edx + 0d8h], 0
        ; Exact mapped bytes 0F 84 9E 00 00 00: je 0x4639b6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx + 0d8h]
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 0d8h]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x463949
        __asm _emit 0x74
        __asm _emit 0x11
        push 72h
        push 67cd04h
        ; Exact mapped bytes E8 FC 53 0C 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x53
        __asm _emit 0x0c
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x463949
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 C9: jne 0x463918
        __asm _emit 0x75
        __asm _emit 0xc9
        push 73h
        push 67cd04h
        push 0c0h
        ; Exact mapped bytes E8 9F 87 06 00: call 0x4cc0ff
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x87
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 74h], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 74h], 0
        ; Exact mapped bytes 74 14: je 0x463981
        __asm _emit 0x74
        __asm _emit 0x14
        mov edx, dword ptr [ebp - 38h]
        push edx
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 07 6B 10 00: call 0x56a480
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x6b
        __asm _emit 0x10
        __asm _emit 0x00
        mov dword ptr [ebp - 88h], eax
        ; Exact mapped bytes EB 0A: jmp 0x46398b
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 88h], 0
        mov eax, dword ptr [ebp - 88h]
        mov dword ptr [ebp - 70h], eax
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ebp - 70h]
        mov dword ptr [ecx + 0e0h], edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        mov ecx, dword ptr [ecx + 0e0h]
        ; Exact mapped bytes E8 E4 BF 06 00: call 0x4cf99a
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xbf
        __asm _emit 0x06
        __asm _emit 0x00
        lea edx, [ebp - 5ch]
        push edx
        mov ecx, dword ptr [ebp - 38h]
        add ecx, 104h
        ; Exact mapped bytes E8 F0 EA 0C 00: call 0x5324b8
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xea
        __asm _emit 0x0c
        __asm _emit 0x00
        lea eax, [ebp - 4ch]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        add ecx, 114h
        ; Exact mapped bytes E8 DE EA 0C 00: call 0x5324b8
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xea
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx + 0e0h]
        push edx
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 0dch]
        push ecx
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes FF 90 FC 00 00 00: call dword ptr [eax + 0xfc]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x463a05
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 DF 02 00 00: jmp 0x463ce4
        __asm _emit 0xe9
        __asm _emit 0xdf
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 38h]
        cmp dword ptr [ecx + 0d4h], 0
        ; Exact mapped bytes 75 14: jne 0x463a25
        __asm _emit 0x75
        __asm _emit 0x14
        push 81h
        push 67cd04h
        ; Exact mapped bytes E8 20 53 0C 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x53
        __asm _emit 0x0c
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x463a25
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DA: jne 0x463a05
        __asm _emit 0x75
        __asm _emit 0xda
        push 6412a8h
        mov eax, dword ptr [ebp - 80h]
        mov ecx, dword ptr [eax + 20h]
        ; Exact mapped bytes E8 69 70 0E 00: call 0x54aaa4
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x70
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        lea ecx, [ebp - 3ch]
        ; Exact mapped bytes E8 64 13 0C 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x13
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [ebp - 2ch], eax
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 75 0C: jne 0x463a5b
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 8ch], 0
        ; Exact mapped bytes EB 3F: jmp 0x463a9a
        __asm _emit 0xeb
        __asm _emit 0x3f
        mov ecx, dword ptr [ebp - 2ch]
        push ecx
        ; Exact mapped bytes FF 15 BC B7 68 00: call dword ptr [0x68b7bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        add eax, 1
        mov dword ptr [ebp - 34h], eax
        mov eax, dword ptr [ebp - 34h]
        shl eax, 1
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 26 25 00 00: call 0x465fa0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 90h], esp
        mov edx, dword ptr [ebp - 34h]
        push edx
        mov eax, dword ptr [ebp - 2ch]
        push eax
        mov ecx, dword ptr [ebp - 90h]
        push ecx
        ; Exact mapped bytes E8 5C 9B FE FF: call 0x44d5f0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x9b
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 8ch], eax
        mov edx, dword ptr [ebp - 8ch]
        push edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx + 0d4h]
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 0d4h]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 50 20: call dword ptr [eax + 0x20]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 38h]
        cmp dword ptr [ecx + 0d8h], 0
        ; Exact mapped bytes 74 7F: je 0x463b48
        __asm _emit 0x74
        __asm _emit 0x7f
        lea ecx, [ebp - 3ch]
        ; Exact mapped bytes E8 D9 12 0C 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x12
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [ebp - 2ch], eax
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 75 0C: jne 0x463ae6
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 94h], 0
        ; Exact mapped bytes EB 3F: jmp 0x463b25
        __asm _emit 0xeb
        __asm _emit 0x3f
        mov edx, dword ptr [ebp - 2ch]
        push edx
        ; Exact mapped bytes FF 15 BC B7 68 00: call dword ptr [0x68b7bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        add eax, 1
        mov dword ptr [ebp - 34h], eax
        mov eax, dword ptr [ebp - 34h]
        shl eax, 1
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 9B 24 00 00: call 0x465fa0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 98h], esp
        mov eax, dword ptr [ebp - 34h]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        push ecx
        mov edx, dword ptr [ebp - 98h]
        push edx
        ; Exact mapped bytes E8 D1 9A FE FF: call 0x44d5f0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x9a
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 94h], eax
        mov eax, dword ptr [ebp - 94h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx + 0d8h]
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx + 0d8h]
        mov ecx, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF 51 20: call dword ptr [ecx + 0x20]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 80h]
        mov eax, dword ptr [edx + 20h]
        mov ecx, dword ptr [eax + 0c0h]
        cmp ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes 74 14: je 0x463b6d
        __asm _emit 0x74
        __asm _emit 0x14
        push 90h
        push 67cd04h
        ; Exact mapped bytes E8 D8 51 0C 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x51
        __asm _emit 0x0c
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x463b6d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x463b48
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp - 38h]
        cmp dword ptr [eax + 0d4h], 0
        ; Exact mapped bytes 75 14: jne 0x463b93
        __asm _emit 0x75
        __asm _emit 0x14
        push 91h
        push 67cd04h
        ; Exact mapped bytes E8 B2 51 0C 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x51
        __asm _emit 0x0c
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x463b93
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DA: jne 0x463b73
        __asm _emit 0x75
        __asm _emit 0xda
        push 1
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx + 0dch]
        push eax
        mov ecx, dword ptr [ebp - 80h]
        mov ecx, dword ptr [ecx + 20h]
        mov edx, dword ptr [ebp - 80h]
        mov eax, dword ptr [edx + 20h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 92 28 01 00 00: call dword ptr [edx + 0x128]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 38h]
        cmp dword ptr [eax + 0d8h], 0
        ; Exact mapped bytes 74 20: je 0x463be5
        __asm _emit 0x74
        __asm _emit 0x20
        push 1
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx + 0e0h]
        push edx
        mov eax, dword ptr [ebp - 80h]
        mov ecx, dword ptr [eax + 20h]
        mov edx, dword ptr [ebp - 80h]
        mov eax, dword ptr [edx + 20h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 92 28 01 00 00: call dword ptr [edx + 0x128]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 19 E6 0A 00: call 0x512208
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xe6
        __asm _emit 0x0a
        __asm _emit 0x00
        push 1
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 0d4h]
        push ecx
        push 0
        mov edx, dword ptr [ebp - 80h]
        mov ecx, dword ptr [edx + 20h]
        mov eax, dword ptr [ebp - 80h]
        mov edx, dword ptr [eax + 20h]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 90 34 01 00 00: call dword ptr [eax + 0x134]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 38h]
        cmp dword ptr [ecx + 0d8h], 0
        ; Exact mapped bytes 74 22: je 0x463c3f
        __asm _emit 0x74
        __asm _emit 0x22
        push 0
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx + 0d8h]
        push eax
        push 0
        mov ecx, dword ptr [ebp - 80h]
        mov ecx, dword ptr [ecx + 20h]
        mov edx, dword ptr [ebp - 80h]
        mov eax, dword ptr [edx + 20h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 92 34 01 00 00: call dword ptr [edx + 0x134]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx + 100h]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx + 0e4h]
        push edx
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 0d4h]
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx + 0d4h]
        mov edx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 52 28: call dword ptr [edx + 0x28]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x28
        push 5
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 43 2B 07 00: call 0x4d67bf
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x2b
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 87 2C 07 00: call 0x4d690b
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x2c
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 E8 81 0C 00: call 0x52be74
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x0c
        __asm _emit 0x00
        push 1
        mov eax, dword ptr [ebp - 80h]
        mov ecx, dword ptr [eax + 20h]
        mov edx, dword ptr [ebp - 80h]
        mov eax, dword ptr [edx + 20h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 92 20 01 00 00: call dword ptr [edx + 0x120]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 38h]
        mov dword ptr [eax + 0bch], 1
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 20h]
        push eax
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 78h], ecx
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 3ch]
        ; Exact mapped bytes E8 1F 8C 06 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x8c
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 10 8C 06 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x8c
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 78h]
        ; Exact mapped bytes E9 01 01 00 00: jmp 0x463de5
        __asm _emit 0xe9
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 75 14: jne 0x463cfe
        __asm _emit 0x75
        __asm _emit 0x14
        push 0b1h
        push 67cd04h
        ; Exact mapped bytes E8 47 50 0C 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x50
        __asm _emit 0x0c
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x463cfe
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x463ce4
        __asm _emit 0x75
        __asm _emit 0xe0
        push 0
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 20h]
        push edx
        ; Exact mapped bytes FF 51 28: call dword ptr [ecx + 0x28]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x28
        mov eax, dword ptr [ebp - 80h]
        mov ecx, dword ptr [eax + 20h]
        cmp dword ptr [ecx + 0c0h], 0
        ; Exact mapped bytes 74 74: je 0x463d95
        __asm _emit 0x74
        __asm _emit 0x74
        cmp dword ptr [ebp - 38h], 0
        ; Exact mapped bytes 75 14: jne 0x463d3b
        __asm _emit 0x75
        __asm _emit 0x14
        push 0b7h
        push 67cd04h
        ; Exact mapped bytes E8 0A 50 0C 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x50
        __asm _emit 0x0c
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x463d3b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x463d21
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, dword ptr [ebp - 38h]
        push eax
        mov ecx, dword ptr [ebp - 80h]
        mov ecx, dword ptr [ecx + 20h]
        mov edx, dword ptr [ebp - 80h]
        mov eax, dword ptr [edx + 20h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 92 30 01 00 00: call dword ptr [edx + 0x130]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 80h]
        mov ecx, dword ptr [eax + 20h]
        mov dword ptr [ecx + 0c0h], 0
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 75 14: jne 0x463d83
        __asm _emit 0x75
        __asm _emit 0x14
        push 0bch
        push 67cd04h
        ; Exact mapped bytes E8 C2 4F 0C 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x4f
        __asm _emit 0x0c
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x463d83
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x463d69
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 20h]
        push edx
        ; Exact mapped bytes FF 51 2C: call dword ptr [ecx + 0x2c]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x2c
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 75 14: jne 0x463daf
        __asm _emit 0x75
        __asm _emit 0x14
        push 0c0h
        push 67cd04h
        ; Exact mapped bytes E8 96 4F 0C 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x4f
        __asm _emit 0x0c
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x463daf
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x463d95
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 20h]
        push eax
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 7ch], ecx
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 3ch]
        ; Exact mapped bytes E8 19 8B 06 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x8b
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 0A 8B 06 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x8b
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 7ch]
        lea esp, [ebp - 0a4h]
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
        ret
    }
}
