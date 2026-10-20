// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A57A4 .. +0xAF8 bytes.
extern "C" __declspec(naked) void FUN_004a57a4_004A57A4() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57fcf5h
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
        sub esp, 0dch
        push ebx
        push esi
        push edi
        mov eax, dword ptr [ebp + 8]
        sub eax, 40h
        mov dword ptr [ebp - 58h], eax
        push 101h
        push 5d0270h
        mov ecx, dword ptr [ebp - 58h]
        push ecx
        ; Exact mapped bytes E8 7F 59 05 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x59
        __asm _emit 0x05
        __asm _emit 0x00
        cmp dword ptr [ebp + 24h], 0
        ; Exact mapped bytes 74 0C: je 0x4a57f3
        __asm _emit 0x74
        __asm _emit 0x0c
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 06: je 0x4a57f3
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 75 0A: jne 0x4a57fd
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, 80004003h
        ; Exact mapped bytes E9 8C 0A 00 00: jmp 0x4a6289
        __asm _emit 0xe9
        __asm _emit 0x8c
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 10h]
        cmp dword ptr [edx], 0
        ; Exact mapped bytes 75 0A: jne 0x4a580f
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, 80070057h
        ; Exact mapped bytes E9 7A 0A 00 00: jmp 0x4a6289
        __asm _emit 0xe9
        __asm _emit 0x7a
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 58h]
        mov eax, dword ptr [ebp + 20h]
        mov dword ptr [edx + 24h], eax
        mov ecx, dword ptr [ebp + 24h]
        mov dword ptr [ecx], 0
        mov dword ptr [ebp - 14h], 0
        mov edx, dword ptr [ebp - 58h]
        mov ecx, dword ptr [edx + 20h]
        mov eax, dword ptr [ebp - 58h]
        mov edx, dword ptr [eax + 20h]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 50 68: call dword ptr [eax + 0x68]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x68
        mov dword ptr [ebp - 54h], eax
        cmp dword ptr [ebp - 54h], 0
        ; Exact mapped bytes 74 18: je 0x4a5862
        __asm _emit 0x74
        __asm _emit 0x18
        lea ecx, [ebp - 54h]
        push ecx
        mov edx, dword ptr [ebp - 58h]
        mov ecx, dword ptr [edx + 20h]
        mov eax, dword ptr [ebp - 58h]
        mov edx, dword ptr [eax + 20h]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 50 6C: call dword ptr [eax + 0x6c]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x6c
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 75 0A: jne 0x4a5872
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, 8000ffffh
        ; Exact mapped bytes E9 17 0A 00 00: jmp 0x4a6289
        __asm _emit 0xe9
        __asm _emit 0x17
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 50h]
        ; Exact mapped bytes E8 73 22 0D 00: call 0x577aed
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x22
        __asm _emit 0x0d
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 50h], 0
        ; Exact mapped bytes 75 14: jne 0x4a589b
        __asm _emit 0x75
        __asm _emit 0x14
        push 11fh
        push 5d0270h
        ; Exact mapped bytes E8 6A F1 08 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xf1
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a589b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4a5881
        __asm _emit 0x75
        __asm _emit 0xe0
        mov dword ptr [ebp - 4ch], 1
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp + 20h]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp + 10h]
        mov edx, dword ptr [ecx]
        push edx
        ; Exact mapped bytes E8 04 9A 0A 00: call 0x54f2c3
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x9a
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 50h]
        mov edx, dword ptr [ecx + 5ch]
        mov dword ptr [edx + 10h], eax
        mov eax, dword ptr [ebp - 50h]
        mov ecx, dword ptr [eax + 5ch]
        cmp dword ptr [ecx + 10h], 0
        ; Exact mapped bytes 75 3C: jne 0x4a5910
        __asm _emit 0x75
        __asm _emit 0x3c
        mov edx, dword ptr [ebp + 0ch]
        and edx, 1
        test edx, edx
        ; Exact mapped bytes 74 0E: je 0x4a58ec
        __asm _emit 0x74
        __asm _emit 0x0e
        push -1
        push 0
        push 0f106h
        ; Exact mapped bytes E8 DD 7F 06 00: call 0x50d8c9
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x7f
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 0c4h], 8000ffffh
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 50h]
        ; Exact mapped bytes E8 16 23 0D 00: call 0x577c1b
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x23
        __asm _emit 0x0d
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0c4h]
        ; Exact mapped bytes E9 79 09 00 00: jmp 0x4a6289
        __asm _emit 0xe9
        __asm _emit 0x79
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 50h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 ED FB FF FF: call 0x4a550d
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 42 09 00 00: je 0x4a626a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x42
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 50h]
        mov eax, dword ptr [edx + 5ch]
        cmp dword ptr [eax + 10h], 0
        ; Exact mapped bytes 75 14: jne 0x4a5948
        __asm _emit 0x75
        __asm _emit 0x14
        push 12fh
        push 5d0270h
        ; Exact mapped bytes E8 BD F0 08 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xf0
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a5948
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DA: jne 0x4a5928
        __asm _emit 0x75
        __asm _emit 0xda
        lea ecx, [ebp - 78h]
        ; Exact mapped bytes E8 B1 B5 08 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xb5
        __asm _emit 0x08
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        mov edx, dword ptr [ebp + 0ch]
        and edx, 40h
        test edx, edx
        ; Exact mapped bytes 74 17: je 0x4a597b
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 10h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 08: mov cx, word ptr [eax + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 10h]
        add edx, ecx
        push edx
        lea ecx, [ebp - 78h]
        ; Exact mapped bytes E8 DD 81 04 00: call 0x4edb58
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x81
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        and eax, 2
        test eax, eax
        ; Exact mapped bytes 0F 84 13 02 00 00: je 0x4a5b9c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x13
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        and ecx, 4
        test ecx, ecx
        ; Exact mapped bytes 0F 84 81 00 00 00: je 0x4a5a18
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 50h]
        mov eax, dword ptr [edx + 5ch]
        mov ecx, dword ptr [eax + 0ch]
        push ecx
        ; Exact mapped bytes FF 15 A8 23 5E 00: call dword ptr [0x5e23a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 0b0h], eax
        mov edx, dword ptr [ebp - 50h]
        mov eax, dword ptr [edx + 5ch]
        mov ecx, dword ptr [eax + 8]
        push ecx
        ; Exact mapped bytes FF 15 A8 23 5E 00: call dword ptr [0x5e23a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 0b4h], eax
        cmp dword ptr [ebp - 0b0h], 0
        ; Exact mapped bytes 74 09: je 0x4a59d5
        __asm _emit 0x74
        __asm _emit 0x09
        cmp dword ptr [ebp - 0b4h], 0
        ; Exact mapped bytes 75 0B: jne 0x4a59e0
        __asm _emit 0x75
        __asm _emit 0x0b
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [edx], 0
        ; Exact mapped bytes EB 18: jmp 0x4a59f8
        __asm _emit 0xeb
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 0b4h]
        push eax
        mov ecx, dword ptr [ebp - 0b0h]
        push ecx
        ; Exact mapped bytes E8 C1 91 0A 00: call 0x54ebb4
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x91
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [edx], eax
        mov eax, dword ptr [ebp - 50h]
        mov ecx, dword ptr [eax + 5ch]
        mov edx, dword ptr [ecx + 0ch]
        push edx
        ; Exact mapped bytes FF 15 AC 23 5E 00: call dword ptr [0x5e23ac]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xac
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 50h]
        mov ecx, dword ptr [eax + 5ch]
        mov edx, dword ptr [ecx + 8]
        push edx
        ; Exact mapped bytes FF 15 AC 23 5E 00: call dword ptr [0x5e23ac]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xac
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 0ach], 0
        mov eax, dword ptr [ebp + 14h]
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 75 6B: jne 0x4a5a95
        __asm _emit 0x75
        __asm _emit 0x6b
        lea ecx, [ebp - 0ach]
        push ecx
        push 1
        ; Exact mapped bytes FF 15 DC 29 5E 00: call dword ptr [0x5e29dc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0x29
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 0b8h], eax
        cmp dword ptr [ebp - 0b8h], 0
        ; Exact mapped bytes 7D 32: jge 0x4a5a7a
        __asm _emit 0x7d
        __asm _emit 0x32
        mov edx, dword ptr [ebp - 0b8h]
        mov dword ptr [ebp - 0c8h], edx
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 78h]
        ; Exact mapped bytes E8 EC 7D 04 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x7d
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 50h]
        ; Exact mapped bytes E8 AC 21 0D 00: call 0x577c1b
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x21
        __asm _emit 0x0d
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0c8h]
        ; Exact mapped bytes E9 0F 08 00 00: jmp 0x4a6289
        __asm _emit 0xe9
        __asm _emit 0x0f
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        push 20h
        mov eax, dword ptr [ebp - 0ach]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 0ach]
        push edx
        ; Exact mapped bytes FF 51 0C: call dword ptr [ecx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp + 14h]
        mov dword ptr [ecx], eax
        ; Exact mapped bytes EB 45: jmp 0x4a5ada
        __asm _emit 0xeb
        __asm _emit 0x45
        mov edx, dword ptr [ebp + 14h]
        mov eax, dword ptr [edx]
        cmp dword ptr [eax + 0ch], 1
        ; Exact mapped bytes 72 0A: jb 0x4a5aaa
        __asm _emit 0x72
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp + 14h]
        mov edx, dword ptr [ecx]
        cmp dword ptr [edx], 18h
        ; Exact mapped bytes 74 30: je 0x4a5ada
        __asm _emit 0x74
        __asm _emit 0x30
        mov dword ptr [ebp - 0cch], 80070057h
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 78h]
        ; Exact mapped bytes E8 8C 7D 04 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x7d
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 50h]
        ; Exact mapped bytes E8 4C 21 0D 00: call 0x577c1b
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x21
        __asm _emit 0x0d
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0cch]
        ; Exact mapped bytes E9 AF 07 00 00: jmp 0x4a6289
        __asm _emit 0xe9
        __asm _emit 0xaf
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 14h]
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 74 4F: je 0x4a5b31
        __asm _emit 0x74
        __asm _emit 0x4f
        mov ecx, dword ptr [ebp + 14h]
        mov edx, dword ptr [ecx]
        mov dword ptr [edx], 18h
        mov eax, dword ptr [ebp + 14h]
        mov ecx, dword ptr [eax]
        mov dword ptr [ecx + 4], 1
        mov edx, dword ptr [ebp + 14h]
        mov eax, dword ptr [edx]
        mov dword ptr [eax + 8], 1
        mov ecx, dword ptr [ebp + 14h]
        mov edx, dword ptr [ecx]
        mov dword ptr [edx + 0ch], 1
        lea ecx, [ebp - 50h]
        ; Exact mapped bytes E8 23 EC 08 00: call 0x53473c
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xec
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 14h]
        mov edx, dword ptr [ecx]
        mov dword ptr [edx + 10h], eax
        lea ecx, [ebp - 50h]
        ; Exact mapped bytes E8 2C EC 08 00: call 0x534755
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xec
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 14h]
        mov edx, dword ptr [ecx]
        mov dword ptr [edx + 14h], eax
        cmp dword ptr [ebp - 0ach], 0
        ; Exact mapped bytes 74 1C: je 0x4a5b56
        __asm _emit 0x74
        __asm _emit 0x1c
        mov eax, dword ptr [ebp - 0ach]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 0ach]
        push edx
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        mov dword ptr [ebp - 0ach], 0
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D5: jne 0x4a5b31
        __asm _emit 0x75
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp + 10h]
        cmp dword ptr [ecx], 0
        ; Exact mapped bytes 74 08: je 0x4a5b6c
        __asm _emit 0x74
        __asm _emit 0x08
        mov edx, dword ptr [ebp + 14h]
        cmp dword ptr [edx], 0
        ; Exact mapped bytes 75 30: jne 0x4a5b9c
        __asm _emit 0x75
        __asm _emit 0x30
        mov dword ptr [ebp - 0d0h], 8000ffffh
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 78h]
        ; Exact mapped bytes E8 CA 7C 04 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x7c
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 50h]
        ; Exact mapped bytes E8 8A 20 0D 00: call 0x577c1b
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x20
        __asm _emit 0x0d
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0d0h]
        ; Exact mapped bytes E9 ED 06 00 00: jmp 0x4a6289
        __asm _emit 0xe9
        __asm _emit 0xed
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        and eax, 10h
        test eax, eax
        ; Exact mapped bytes 74 30: je 0x4a5bd6
        __asm _emit 0x74
        __asm _emit 0x30
        mov dword ptr [ebp - 0d4h], 0
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 78h]
        ; Exact mapped bytes E8 90 7C 04 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x7c
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 50h]
        ; Exact mapped bytes E8 50 20 0D 00: call 0x577c1b
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x20
        __asm _emit 0x0d
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0d4h]
        ; Exact mapped bytes E9 B3 06 00 00: jmp 0x4a6289
        __asm _emit 0xe9
        __asm _emit 0xb3
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 0a8h]
        ; Exact mapped bytes E8 26 B3 08 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xb3
        __asm _emit 0x08
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 58h]
        mov edx, dword ptr [ecx + 20h]
        mov dword ptr [ebp - 84h], edx
        cmp dword ptr [ebp - 84h], 0
        ; Exact mapped bytes 74 19: je 0x4a5c13
        __asm _emit 0x74
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 3E BE 09 00: call 0x541a43
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xbe
        __asm _emit 0x09
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 0a8h]
        ; Exact mapped bytes E8 35 7E 04 00: call 0x4eda46
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x7e
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes EB 16: jmp 0x4a5c29
        __asm _emit 0xeb
        __asm _emit 0x16
        lea eax, [ebp - 0a8h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 20 EF 04 00: call 0x4f4b42
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xef
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 C8 D4 04 00: call 0x4f30f1
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xd4
        __asm _emit 0x04
        __asm _emit 0x00
        lea ecx, [ebp - 0a8h]
        ; Exact mapped bytes E8 2C B3 08 00: call 0x530f60
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xb3
        __asm _emit 0x08
        __asm _emit 0x00
        cmp eax, 1fh
        ; Exact mapped bytes 7E 0D: jle 0x4a5c46
        __asm _emit 0x7e
        __asm _emit 0x0d
        push 1fh
        lea ecx, [ebp - 0a8h]
        ; Exact mapped bytes E8 ED 84 04 00: call 0x4ee133
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x84
        __asm _emit 0x04
        __asm _emit 0x00
        push 14h
        push 0
        lea ecx, [ebp - 0a4h]
        push ecx
        ; Exact mapped bytes E8 1A 37 00 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x37
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 0a4h], 14h
        lea ecx, [ebp - 0a8h]
        ; Exact mapped bytes E8 3C B3 08 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xb3
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 0a0h], eax
        lea ecx, [ebp - 80h]
        ; Exact mapped bytes E8 8B B2 08 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xb2
        __asm _emit 0x08
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 3
        lea ecx, [ebp - 78h]
        ; Exact mapped bytes E8 04 B3 08 00: call 0x530f8c
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xb3
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 2D: je 0x4a5cb9
        __asm _emit 0x74
        __asm _emit 0x2d
        mov dword ptr [ebp - 9ch], 0
        mov edx, dword ptr [ebp - 10h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 08: mov ax, word ptr [edx + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 10h]
        add ecx, eax
        push ecx
        lea ecx, [ebp - 80h]
        ; Exact mapped bytes E8 AB 7E 04 00: call 0x4edb58
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x7e
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 88h], 0f040h
        ; Exact mapped bytes EB 39: jmp 0x4a5cf2
        __asm _emit 0xeb
        __asm _emit 0x39
        lea ecx, [ebp - 78h]
        ; Exact mapped bytes E8 E9 B2 08 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xb2
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 9ch], eax
        push 104h
        push 104h
        lea ecx, [ebp - 80h]
        ; Exact mapped bytes E8 1F 83 04 00: call 0x4edff8
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x83
        __asm _emit 0x04
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 78h]
        ; Exact mapped bytes E8 C8 B2 08 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xb2
        __asm _emit 0x08
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 97 A2 05 00: call 0x4fff7f
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xa2
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 88h], 0f049h
        lea ecx, [ebp - 6ch]
        ; Exact mapped bytes E8 75 AF 05 00: call 0x500c6f
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xaf
        __asm _emit 0x05
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 4
        mov edx, dword ptr [ebp - 50h]
        mov eax, dword ptr [edx + 5ch]
        mov ecx, dword ptr [eax + 10h]
        push ecx
        lea ecx, [ebp - 6ch]
        ; Exact mapped bytes E8 57 B1 05 00: call 0x500e67
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xb1
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 60h], 1
        lea edx, [ebp - 50h]
        push edx
        lea eax, [ebp - 6ch]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 47 F8 FF FF: call 0x4a5572
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        push 576e50h
        lea ecx, [ebp - 6ch]
        ; Exact mapped bytes E8 3B 47 09 00: call 0x53a473
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x47
        __asm _emit 0x09
        __asm _emit 0x00
        push 0
        ; Exact mapped bytes E8 C1 F8 08 00: call 0x535600
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xf8
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 C3 96 04 00: call 0x4ef409
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x96
        __asm _emit 0x04
        __asm _emit 0x00
        lea ecx, [ebp - 90h]
        ; Exact mapped bytes E8 B6 B1 08 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xb1
        __asm _emit 0x08
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 5
        lea edx, [ebp - 0a4h]
        push edx
        lea ecx, [ebp - 6ch]
        ; Exact mapped bytes E8 46 46 09 00: call 0x53a3aa
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x46
        __asm _emit 0x09
        __asm _emit 0x00
        cmp eax, -1
        ; Exact mapped bytes 0F 85 9E 00 00 00: jne 0x4a5e0b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        ; Exact mapped bytes E8 8C F8 08 00: call 0x535600
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xf8
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 8E 96 04 00: call 0x4ef409
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x96
        __asm _emit 0x04
        __asm _emit 0x00
        lea eax, [ebp - 50h]
        push eax
        lea ecx, [ebp - 6ch]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 06 F8 FF FF: call 0x4a5595
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [ebp - 6ch]
        ; Exact mapped bytes E8 86 B1 05 00: call 0x500f1d
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xb1
        __asm _emit 0x05
        __asm _emit 0x00
        push -1
        push 0
        push 0f106h
        ; Exact mapped bytes E8 24 7B 06 00: call 0x50d8c9
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x7b
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 0d8h], 8000ffffh
        mov byte ptr [ebp - 4], 4
        lea ecx, [ebp - 90h]
        ; Exact mapped bytes E8 8E 7A 04 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x7a
        __asm _emit 0x04
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 3
        lea ecx, [ebp - 6ch]
        ; Exact mapped bytes E8 CD B1 05 00: call 0x500f97
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xb1
        __asm _emit 0x05
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 2
        lea ecx, [ebp - 80h]
        ; Exact mapped bytes E8 76 7A 04 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x7a
        __asm _emit 0x04
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 0a8h]
        ; Exact mapped bytes E8 67 7A 04 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x7a
        __asm _emit 0x04
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 78h]
        ; Exact mapped bytes E8 5B 7A 04 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x7a
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 50h]
        ; Exact mapped bytes E8 1B 1E 0D 00: call 0x577c1b
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x1e
        __asm _emit 0x0d
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0d8h]
        ; Exact mapped bytes E9 7E 04 00 00: jmp 0x4a6289
        __asm _emit 0xe9
        __asm _emit 0x7e
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 50h]
        ; Exact mapped bytes E8 42 E9 08 00: call 0x534755
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xe9
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 7ch], eax
        lea ecx, [ebp - 50h]
        ; Exact mapped bytes E8 1E E9 08 00: call 0x53473c
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xe9
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 74h], eax
        lea ecx, [ebp - 50h]
        ; Exact mapped bytes E8 E1 E8 08 00: call 0x53470a
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x00
        cmp dword ptr [ebp - 7ch], eax
        ; Exact mapped bytes 73 0B: jae 0x4a5e39
        __asm _emit 0x73
        __asm _emit 0x0b
        lea ecx, [ebp - 50h]
        ; Exact mapped bytes E8 D4 E8 08 00: call 0x53470a
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 7ch], eax
        lea ecx, [ebp - 50h]
        ; Exact mapped bytes E8 E2 E8 08 00: call 0x534723
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x00
        cmp dword ptr [ebp - 7ch], eax
        ; Exact mapped bytes 76 0B: jbe 0x4a5e51
        __asm _emit 0x76
        __asm _emit 0x0b
        lea ecx, [ebp - 50h]
        ; Exact mapped bytes E8 D5 E8 08 00: call 0x534723
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 7ch], eax
        lea ecx, [ebp - 50h]
        ; Exact mapped bytes E8 B1 E8 08 00: call 0x53470a
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x00
        cmp dword ptr [ebp - 74h], eax
        ; Exact mapped bytes 73 0B: jae 0x4a5e69
        __asm _emit 0x73
        __asm _emit 0x0b
        lea ecx, [ebp - 50h]
        ; Exact mapped bytes E8 A4 E8 08 00: call 0x53470a
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 74h], eax
        lea ecx, [ebp - 50h]
        ; Exact mapped bytes E8 B2 E8 08 00: call 0x534723
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x00
        cmp dword ptr [ebp - 74h], eax
        ; Exact mapped bytes 76 0B: jbe 0x4a5e81
        __asm _emit 0x76
        __asm _emit 0x0b
        lea ecx, [ebp - 50h]
        ; Exact mapped bytes E8 A5 E8 08 00: call 0x534723
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 74h], eax
        mov eax, dword ptr [ebp - 7ch]
        cmp eax, dword ptr [ebp - 74h]
        sbb ecx, ecx
        and ecx, 0fffffffeh
        add ecx, 1
        mov dword ptr [ebp - 8ch], ecx
        cmp dword ptr [ebp - 7ch], 0ffffh
        ; Exact mapped bytes 75 0C: jne 0x4a5eaa
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 0e8h], 0ffffh
        ; Exact mapped bytes EB 0F: jmp 0x4a5eb9
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 7ch]
        add edx, dword ptr [ebp - 8ch]
        mov dword ptr [ebp - 0e8h], edx
        mov eax, dword ptr [ebp - 0e8h]
        mov dword ptr [ebp - 7ch], eax
        push 0f043h
        lea ecx, [ebp - 90h]
        ; Exact mapped bytes E8 AE 4C 05 00: call 0x4fab80
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x4c
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4a5eea
        __asm _emit 0x75
        __asm _emit 0x14
        push 1c3h
        push 5d0270h
        ; Exact mapped bytes E8 1B EB 08 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xeb
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a5eea
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D2: jne 0x4a5ec2
        __asm _emit 0x75
        __asm _emit 0xd2
        mov dword ptr [ebp - 70h], 0
        mov dword ptr [ebp - 5ch], 0
        mov edx, dword ptr [ebp - 74h]
        mov dword ptr [ebp - 3ch], edx
        ; Exact mapped bytes EB 0C: jmp 0x4a5f12
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 3ch]
        add eax, dword ptr [ebp - 8ch]
        mov dword ptr [ebp - 3ch], eax
        mov ecx, dword ptr [ebp - 3ch]
        cmp ecx, dword ptr [ebp - 7ch]
        ; Exact mapped bytes 0F 84 EF 01 00 00: je 0x4a610d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xef
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 3ch]
        xor edx, edx
        mov ecx, 2
        div ecx
        cmp edx, 1
        ; Exact mapped bytes 75 0D: jne 0x4a5f3c
        __asm _emit 0x75
        __asm _emit 0x0d
        mov edx, dword ptr [ebp + 14h]
        mov eax, dword ptr [edx]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 75 02: jne 0x4a5f3c
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB CA: jmp 0x4a5f06
        __asm _emit 0xeb
        __asm _emit 0xca
        mov eax, dword ptr [ebp - 3ch]
        xor edx, edx
        mov ecx, 2
        div ecx
        test edx, edx
        ; Exact mapped bytes 75 0D: jne 0x4a5f59
        __asm _emit 0x75
        __asm _emit 0x0d
        mov edx, dword ptr [ebp + 14h]
        mov eax, dword ptr [edx]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 75 02: jne 0x4a5f59
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB AD: jmp 0x4a5f06
        __asm _emit 0xeb
        __asm _emit 0xad
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 0F 84 8F 00 00 00: je 0x4a5ff2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 14h]
        mov edx, dword ptr [ecx]
        cmp dword ptr [edx + 0ch], 0
        ; Exact mapped bytes 0F 86 80 00 00 00: jbe 0x4a5ff2
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0bch], 0
        mov dword ptr [ebp - 0c0h], 0
        ; Exact mapped bytes EB 0F: jmp 0x4a5f97
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 0c0h]
        add eax, 1
        mov dword ptr [ebp - 0c0h], eax
        mov ecx, dword ptr [ebp + 14h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 0c0h]
        cmp eax, dword ptr [edx + 0ch]
        ; Exact mapped bytes 73 3D: jae 0x4a5fe4
        __asm _emit 0x73
        __asm _emit 0x3d
        cmp dword ptr [ebp - 0bch], 0
        ; Exact mapped bytes 75 34: jne 0x4a5fe4
        __asm _emit 0x75
        __asm _emit 0x34
        mov ecx, dword ptr [ebp + 14h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 0c0h]
        mov ecx, dword ptr [edx + eax*8 + 10h]
        cmp ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes 7F 1E: jg 0x4a5fe2
        __asm _emit 0x7f
        __asm _emit 0x1e
        mov edx, dword ptr [ebp + 14h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 0c0h]
        mov edx, dword ptr [eax + ecx*8 + 14h]
        cmp edx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes 7C 0A: jl 0x4a5fe2
        __asm _emit 0x7c
        __asm _emit 0x0a
        mov dword ptr [ebp - 0bch], 1
        ; Exact mapped bytes EB A4: jmp 0x4a5f88
        __asm _emit 0xeb
        __asm _emit 0xa4
        cmp dword ptr [ebp - 0bch], 0
        ; Exact mapped bytes 75 05: jne 0x4a5ff2
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 14 FF FF FF: jmp 0x4a5f06
        __asm _emit 0xe9
        __asm _emit 0x14
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [ebp - 50h]
        push eax
        lea ecx, [ebp - 6ch]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 26 F5 FF FF: call 0x4a552c
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 40h], 0
        ; Exact mapped bytes 75 05: jne 0x4a6011
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 FC 00 00 00: jmp 0x4a610d
        __asm _emit 0xe9
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0ah
        lea ecx, [ebp - 6ch]
        ; Exact mapped bytes E8 01 1A 09 00: call 0x537a1c
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x1a
        __asm _emit 0x09
        __asm _emit 0x00
        push eax
        push 8
        lea ecx, [ebp - 6ch]
        ; Exact mapped bytes E8 F6 19 09 00: call 0x537a1c
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x19
        __asm _emit 0x09
        __asm _emit 0x00
        push eax
        push 0
        push 0
        lea ecx, [ebp - 2ch]
        ; Exact mapped bytes E8 CA FF 08 00: call 0x535ffd
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xff
        __asm _emit 0x08
        __asm _emit 0x00
        lea eax, [ebp - 2ch]
        push eax
        lea ecx, [ebp - 6ch]
        ; Exact mapped bytes E8 42 23 09 00: call 0x538381
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x23
        __asm _emit 0x09
        __asm _emit 0x00
        lea ecx, [ebp - 6ch]
        ; Exact mapped bytes E8 AA 43 09 00: call 0x53a3f1
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x43
        __asm _emit 0x09
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7D 0C: jge 0x4a6057
        __asm _emit 0x7d
        __asm _emit 0x0c
        mov dword ptr [ebp - 70h], 1
        ; Exact mapped bytes E9 B6 00 00 00: jmp 0x4a610d
        __asm _emit 0xe9
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 00 E9 5D 00 00: cmp dword ptr [0x5de900], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0xe9
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 14: je 0x4a6074
        __asm _emit 0x74
        __asm _emit 0x14
        lea ecx, [ebp - 50h]
        push ecx
        lea edx, [ebp - 6ch]
        push edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 B8 F4 FF FF: call 0x4a552c
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 40h], 0
        ; Exact mapped bytes 75 14: jne 0x4a608e
        __asm _emit 0x75
        __asm _emit 0x14
        push 1fch
        push 5d0270h
        ; Exact mapped bytes E8 77 E9 08 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xe9
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a608e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4a6074
        __asm _emit 0x75
        __asm _emit 0xe0
        mov dword ptr [ebp - 5ch], 0
        cmp dword ptr [ebp + 1ch], 0
        ; Exact mapped bytes 74 1C: je 0x4a60bd
        __asm _emit 0x74
        __asm _emit 0x1c
        push 0
        mov edx, dword ptr [ebp - 3ch]
        add edx, dword ptr [ebp - 1ch]
        push edx
        mov eax, dword ptr [ebp - 3ch]
        push eax
        mov ecx, dword ptr [ebp + 1ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp + 1ch]
        push eax
        ; Exact mapped bytes FF 52 10: call dword ptr [edx + 0x10]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x10
        mov dword ptr [ebp - 5ch], eax
        lea ecx, [ebp - 50h]
        push ecx
        lea edx, [ebp - 6ch]
        push edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 7E F4 FF FF: call 0x4a554f
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [ebp - 6ch]
        ; Exact mapped bytes E8 59 43 09 00: call 0x53a432
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x43
        __asm _emit 0x09
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7C 15: jl 0x4a60f2
        __asm _emit 0x7c
        __asm _emit 0x15
        push 0
        mov ecx, dword ptr [ebp - 68h]
        push ecx
        ; Exact mapped bytes E8 68 0D 0D 00: call 0x576e50
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x0d
        __asm _emit 0x0d
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 06: je 0x4a60f2
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp - 5ch], 0
        ; Exact mapped bytes 74 09: je 0x4a60fb
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 70h], 1
        ; Exact mapped bytes EB 12: jmp 0x4a610d
        __asm _emit 0xeb
        __asm _emit 0x12
        mov edx, dword ptr [ebp + 24h]
        mov eax, dword ptr [edx]
        add eax, 1
        mov ecx, dword ptr [ebp + 24h]
        mov dword ptr [ecx], eax
        ; Exact mapped bytes E9 F9 FD FF FF: jmp 0x4a5f06
        __asm _emit 0xe9
        __asm _emit 0xf9
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 70h], 0
        ; Exact mapped bytes 75 0A: jne 0x4a611d
        __asm _emit 0x75
        __asm _emit 0x0a
        lea ecx, [ebp - 6ch]
        ; Exact mapped bytes E8 E0 43 09 00: call 0x53a4fb
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x43
        __asm _emit 0x09
        __asm _emit 0x00
        ; Exact mapped bytes EB 08: jmp 0x4a6125
        __asm _emit 0xeb
        __asm _emit 0x08
        lea ecx, [ebp - 6ch]
        ; Exact mapped bytes E8 95 43 09 00: call 0x53a4ba
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x43
        __asm _emit 0x09
        __asm _emit 0x00
        push 1
        ; Exact mapped bytes E8 D4 F4 08 00: call 0x535600
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xf4
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 D6 92 04 00: call 0x4ef409
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x92
        __asm _emit 0x04
        __asm _emit 0x00
        lea edx, [ebp - 50h]
        push edx
        lea eax, [ebp - 6ch]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 58h]
        ; Exact mapped bytes E8 4E F4 FF FF: call 0x4a5595
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [ebp - 6ch]
        ; Exact mapped bytes E8 CE AD 05 00: call 0x500f1d
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xad
        __asm _emit 0x05
        __asm _emit 0x00
        cmp dword ptr [ebp - 70h], 0
        ; Exact mapped bytes 0F 84 CF 00 00 00: je 0x4a6228
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 5ch], 0
        ; Exact mapped bytes 74 66: je 0x4a61c5
        __asm _emit 0x74
        __asm _emit 0x66
        mov dword ptr [ebp - 0dch], 80040160h
        mov byte ptr [ebp - 4], 4
        lea ecx, [ebp - 90h]
        ; Exact mapped bytes E8 D4 76 04 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x76
        __asm _emit 0x04
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 3
        lea ecx, [ebp - 6ch]
        ; Exact mapped bytes E8 13 AE 05 00: call 0x500f97
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xae
        __asm _emit 0x05
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 2
        lea ecx, [ebp - 80h]
        ; Exact mapped bytes E8 BC 76 04 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x76
        __asm _emit 0x04
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 0a8h]
        ; Exact mapped bytes E8 AD 76 04 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x76
        __asm _emit 0x04
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 78h]
        ; Exact mapped bytes E8 A1 76 04 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x76
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 50h]
        ; Exact mapped bytes E8 61 1A 0D 00: call 0x577c1b
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x1a
        __asm _emit 0x0d
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0dch]
        ; Exact mapped bytes E9 C4 00 00 00: jmp 0x4a6289
        __asm _emit 0xe9
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0e0h], 8000ffffh
        mov byte ptr [ebp - 4], 4
        lea ecx, [ebp - 90h]
        ; Exact mapped bytes E8 6E 76 04 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x76
        __asm _emit 0x04
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 3
        lea ecx, [ebp - 6ch]
        ; Exact mapped bytes E8 AD AD 05 00: call 0x500f97
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xad
        __asm _emit 0x05
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 2
        lea ecx, [ebp - 80h]
        ; Exact mapped bytes E8 56 76 04 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x76
        __asm _emit 0x04
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 0a8h]
        ; Exact mapped bytes E8 47 76 04 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x76
        __asm _emit 0x04
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 78h]
        ; Exact mapped bytes E8 3B 76 04 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x76
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 50h]
        ; Exact mapped bytes E8 FB 19 0D 00: call 0x577c1b
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x19
        __asm _emit 0x0d
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0e0h]
        ; Exact mapped bytes EB 61: jmp 0x4a6289
        __asm _emit 0xeb
        __asm _emit 0x61
        mov byte ptr [ebp - 4], 4
        lea ecx, [ebp - 90h]
        ; Exact mapped bytes E8 15 76 04 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x76
        __asm _emit 0x04
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 3
        lea ecx, [ebp - 6ch]
        ; Exact mapped bytes E8 54 AD 05 00: call 0x500f97
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xad
        __asm _emit 0x05
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 2
        lea ecx, [ebp - 80h]
        ; Exact mapped bytes E8 FD 75 04 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x75
        __asm _emit 0x04
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 0a8h]
        ; Exact mapped bytes E8 EE 75 04 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x75
        __asm _emit 0x04
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 78h]
        ; Exact mapped bytes E8 E2 75 04 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x75
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 0e4h], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 50h]
        ; Exact mapped bytes E8 98 19 0D 00: call 0x577c1b
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x19
        __asm _emit 0x0d
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0e4h]
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
        ; Exact mapped bytes C2 24 00: ret 0x24
        __asm _emit 0xc2
        __asm _emit 0x24
        __asm _emit 0x00
    }
}
