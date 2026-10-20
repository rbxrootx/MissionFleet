// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004965A9 .. +0x8B2 bytes.
extern "C" __declspec(naked) void FUN_004965a9_004965A9() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57e532h
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
        sub esp, 21ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 19ch], ecx
        mov dword ptr [ebp - 198h], 0
        mov eax, dword ptr [ebp - 19ch]
        cmp dword ptr [eax + 48h], 0
        ; Exact mapped bytes 75 14: jne 0x4965fa
        __asm _emit 0x75
        __asm _emit 0x14
        push 9c9h
        push 5ca8a4h
        ; Exact mapped bytes E8 0B E4 09 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xe4
        __asm _emit 0x09
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4965fa
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DA: jne 0x4965da
        __asm _emit 0x75
        __asm _emit 0xda
        mov edx, dword ptr [ebp - 19ch]
        cmp dword ptr [edx + 54h], 0
        ; Exact mapped bytes 75 14: jne 0x496620
        __asm _emit 0x75
        __asm _emit 0x14
        push 9cah
        push 5ca8a4h
        ; Exact mapped bytes E8 E5 E3 09 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xe3
        __asm _emit 0x09
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x496620
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DA: jne 0x496600
        __asm _emit 0x75
        __asm _emit 0xda
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 65 5F 0B 00: call 0x54c593
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x5f
        __asm _emit 0x0b
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 1
        lea ecx, [ebp - 24h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 19ch]
        mov ecx, dword ptr [eax + 54h]
        ; Exact mapped bytes E8 E5 3C 00 00: call 0x49a330
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x3c
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 24h], 3
        ; Exact mapped bytes 75 2F: jne 0x496680
        __asm _emit 0x75
        __asm _emit 0x2f
        lea ecx, [ebp - 20h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 43 68 00 00: call 0x49cea0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 198h]
        or edx, 1
        mov dword ptr [ebp - 198h], edx
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 32 5F 0B 00: call 0x54c5aa
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x5f
        __asm _emit 0x0b
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes E9 C8 07 00 00: jmp 0x496e48
        __asm _emit 0xe9
        __asm _emit 0xc8
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 19ch]
        mov ecx, dword ptr [edx + 54h]
        ; Exact mapped bytes E8 1A 3C 00 00: call 0x49a2b0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x3c
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 75 2F: jne 0x4966ce
        __asm _emit 0x75
        __asm _emit 0x2f
        lea eax, [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F5 67 00 00: call 0x49cea0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x67
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 198h]
        or ecx, 1
        mov dword ptr [ebp - 198h], ecx
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 E4 5E 0B 00: call 0x54c5aa
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x5e
        __asm _emit 0x0b
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes E9 7A 07 00 00: jmp 0x496e48
        __asm _emit 0xe9
        __asm _emit 0x7a
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        and edx, 0ffffh
        mov dword ptr [ebp - 1a0h], edx
        cmp dword ptr [ebp - 1a0h], 87h
        ; Exact mapped bytes 0F 87 16 07 00 00: ja 0x496e03
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x16
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1a0h]
        xor eax, eax
        mov al, byte ptr [ecx + 496e9fh]
        ; Exact mapped bytes FF 24 85 5B 6E 49 00: jmp dword ptr [eax*4 + 0x496e5b]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x5b
        __asm _emit 0x6e
        __asm _emit 0x49
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 19ch]
        mov ecx, dword ptr [eax + 54h]
        ; Exact mapped bytes E8 DC 3B 00 00: call 0x49a2f0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x3b
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 0a0h]
        ; Exact mapped bytes E8 53 67 00 00: call 0x49ce73
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x67
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1a4h], eax
        mov ecx, dword ptr [ebp - 1a4h]
        mov dword ptr [ebp - 1a8h], ecx
        mov byte ptr [ebp - 4], 2
        mov edx, dword ptr [ebp - 1a8h]
        push edx
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 05 6F 00 00: call 0x49d64a
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x6f
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 0a0h]
        ; Exact mapped bytes E8 56 5E 0B 00: call 0x54c5aa
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x5e
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes E9 C5 06 00 00: jmp 0x496e1e
        __asm _emit 0xe9
        __asm _emit 0xc5
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        push 8
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 19ch]
        mov ecx, dword ptr [ecx + 54h]
        ; Exact mapped bytes E8 83 3B 00 00: call 0x49a2f0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x3b
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 0b4h]
        ; Exact mapped bytes E8 5F 71 05 00: call 0x4ed8d8
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x71
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 1ach], eax
        mov edx, dword ptr [ebp - 1ach]
        mov dword ptr [ebp - 1b0h], edx
        mov byte ptr [ebp - 4], 3
        mov ecx, dword ptr [ebp - 1b0h]
        ; Exact mapped bytes E8 10 A8 09 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xa8
        __asm _emit 0x09
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 0b0h]
        ; Exact mapped bytes E8 27 67 00 00: call 0x49cecd
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x67
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1b4h], eax
        mov eax, dword ptr [ebp - 1b4h]
        mov dword ptr [ebp - 1b8h], eax
        mov byte ptr [ebp - 4], 4
        mov ecx, dword ptr [ebp - 1b8h]
        push ecx
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 7F 6E 00 00: call 0x49d64a
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x6e
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 3
        lea ecx, [ebp - 0b0h]
        ; Exact mapped bytes E8 D0 5D 0B 00: call 0x54c5aa
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x5d
        __asm _emit 0x0b
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 0b4h]
        ; Exact mapped bytes E8 63 70 05 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x70
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes E9 30 06 00 00: jmp 0x496e1e
        __asm _emit 0xe9
        __asm _emit 0x30
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        push 8
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 19ch]
        mov ecx, dword ptr [eax + 54h]
        ; Exact mapped bytes E8 EE 3A 00 00: call 0x49a2f0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x3a
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 0c8h]
        ; Exact mapped bytes E8 61 71 05 00: call 0x4ed96f
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x71
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 1bch], eax
        mov ecx, dword ptr [ebp - 1bch]
        mov dword ptr [ebp - 1c0h], ecx
        mov byte ptr [ebp - 4], 5
        mov ecx, dword ptr [ebp - 1c0h]
        ; Exact mapped bytes E8 7B A7 09 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xa7
        __asm _emit 0x09
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 0c4h]
        ; Exact mapped bytes E8 92 66 00 00: call 0x49cecd
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x66
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1c4h], eax
        mov edx, dword ptr [ebp - 1c4h]
        mov dword ptr [ebp - 1c8h], edx
        mov byte ptr [ebp - 4], 6
        mov eax, dword ptr [ebp - 1c8h]
        push eax
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 EA 6D 00 00: call 0x49d64a
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x6d
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 5
        lea ecx, [ebp - 0c4h]
        ; Exact mapped bytes E8 3B 5D 0B 00: call 0x54c5aa
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x5d
        __asm _emit 0x0b
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 0c8h]
        ; Exact mapped bytes E8 CE 6F 05 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x6f
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes E9 9B 05 00 00: jmp 0x496e1e
        __asm _emit 0xe9
        __asm _emit 0x9b
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 19ch]
        mov ecx, dword ptr [edx + 54h]
        ; Exact mapped bytes E8 5B 3A 00 00: call 0x49a2f0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x3a
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [eax]
        push eax
        lea ecx, [ebp - 0d8h]
        ; Exact mapped bytes E8 BB 5D 0B 00: call 0x54c65e
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x5d
        __asm _emit 0x0b
        __asm _emit 0x00
        mov dword ptr [ebp - 1cch], eax
        mov ecx, dword ptr [ebp - 1cch]
        mov dword ptr [ebp - 1d0h], ecx
        mov byte ptr [ebp - 4], 7
        mov edx, dword ptr [ebp - 1d0h]
        push edx
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 82 6D 00 00: call 0x49d64a
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x6d
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 0d8h]
        ; Exact mapped bytes E8 D3 5C 0B 00: call 0x54c5aa
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x5c
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes E9 42 05 00 00: jmp 0x496e1e
        __asm _emit 0xe9
        __asm _emit 0x42
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        push 2
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 19ch]
        mov ecx, dword ptr [ecx + 54h]
        ; Exact mapped bytes E8 00 3A 00 00: call 0x49a2f0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x3a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 10: mov dx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x10
        push edx
        lea ecx, [ebp - 0e8h]
        ; Exact mapped bytes E8 17 68 00 00: call 0x49d116
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1d4h], eax
        mov eax, dword ptr [ebp - 1d4h]
        mov dword ptr [ebp - 1d8h], eax
        mov byte ptr [ebp - 4], 8
        mov ecx, dword ptr [ebp - 1d8h]
        push ecx
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 26 6D 00 00: call 0x49d64a
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x6d
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 0e8h]
        ; Exact mapped bytes E8 77 5C 0B 00: call 0x54c5aa
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x5c
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes E9 E6 04 00 00: jmp 0x496e1e
        __asm _emit 0xe9
        __asm _emit 0xe6
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        push 3
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 19ch]
        mov ecx, dword ptr [eax + 54h]
        ; Exact mapped bytes E8 A4 39 00 00: call 0x49a2f0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        push ecx
        lea ecx, [ebp - 0f8h]
        ; Exact mapped bytes E8 4D 68 00 00: call 0x49d1a7
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1dch], eax
        mov edx, dword ptr [ebp - 1dch]
        mov dword ptr [ebp - 1e0h], edx
        mov byte ptr [ebp - 4], 9
        mov eax, dword ptr [ebp - 1e0h]
        push eax
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 CB 6C 00 00: call 0x49d64a
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x6c
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 0f8h]
        ; Exact mapped bytes E8 1C 5C 0B 00: call 0x54c5aa
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x5c
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes E9 8B 04 00 00: jmp 0x496e1e
        __asm _emit 0xe9
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 19ch]
        mov ecx, dword ptr [edx + 54h]
        ; Exact mapped bytes E8 4B 39 00 00: call 0x49a2f0
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax]
        push eax
        lea ecx, [ebp - 108h]
        ; Exact mapped bytes E8 F5 5C 0B 00: call 0x54c6a8
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x5c
        __asm _emit 0x0b
        __asm _emit 0x00
        mov dword ptr [ebp - 1e4h], eax
        mov ecx, dword ptr [ebp - 1e4h]
        mov dword ptr [ebp - 1e8h], ecx
        mov byte ptr [ebp - 4], 0ah
        mov edx, dword ptr [ebp - 1e8h]
        push edx
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 72 6C 00 00: call 0x49d64a
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x6c
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 108h]
        ; Exact mapped bytes E8 C3 5B 0B 00: call 0x54c5aa
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x5b
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes E9 32 04 00 00: jmp 0x496e1e
        __asm _emit 0xe9
        __asm _emit 0x32
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 19ch]
        mov ecx, dword ptr [ecx + 54h]
        ; Exact mapped bytes E8 F2 38 00 00: call 0x49a2f0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x38
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax + 4]
        push edx
        mov eax, dword ptr [eax]
        push eax
        lea ecx, [ebp - 118h]
        ; Exact mapped bytes E8 B9 5C 0B 00: call 0x54c6c9
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x5c
        __asm _emit 0x0b
        __asm _emit 0x00
        mov dword ptr [ebp - 1ech], eax
        mov ecx, dword ptr [ebp - 1ech]
        mov dword ptr [ebp - 1f0h], ecx
        mov byte ptr [ebp - 4], 0bh
        mov edx, dword ptr [ebp - 1f0h]
        push edx
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 15 6C 00 00: call 0x49d64a
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x6c
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 118h]
        ; Exact mapped bytes E8 66 5B 0B 00: call 0x54c5aa
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x5b
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes E9 D5 03 00 00: jmp 0x496e1e
        __asm _emit 0xe9
        __asm _emit 0xd5
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push 0bh
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 19ch]
        mov ecx, dword ptr [ecx + 54h]
        ; Exact mapped bytes E8 93 38 00 00: call 0x49a2f0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x38
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 10: mov dx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x10
        push edx
        lea ecx, [ebp - 128h]
        ; Exact mapped bytes E8 AA 66 00 00: call 0x49d116
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x66
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1f4h], eax
        mov eax, dword ptr [ebp - 1f4h]
        mov dword ptr [ebp - 1f8h], eax
        mov byte ptr [ebp - 4], 0ch
        mov ecx, dword ptr [ebp - 1f8h]
        push ecx
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 B9 6B 00 00: call 0x49d64a
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x6b
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 128h]
        ; Exact mapped bytes E8 0A 5B 0B 00: call 0x54c5aa
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x5b
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes E9 79 03 00 00: jmp 0x496e1e
        __asm _emit 0xe9
        __asm _emit 0x79
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 19ch]
        mov ecx, dword ptr [eax + 54h]
        ; Exact mapped bytes E8 39 38 00 00: call 0x49a2f0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x38
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov edx, dword ptr [eax]
        push edx
        lea ecx, [ebp - 30h]
        ; Exact mapped bytes E8 62 5F 0B 00: call 0x54ca28
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x5f
        __asm _emit 0x0b
        __asm _emit 0x00
        lea eax, [ebp - 30h]
        push eax
        lea ecx, [ebp - 138h]
        ; Exact mapped bytes E8 1B 5C 0B 00: call 0x54c6f0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x5c
        __asm _emit 0x0b
        __asm _emit 0x00
        mov dword ptr [ebp - 1fch], eax
        mov ecx, dword ptr [ebp - 1fch]
        mov dword ptr [ebp - 200h], ecx
        mov byte ptr [ebp - 4], 0dh
        mov edx, dword ptr [ebp - 200h]
        push edx
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 50 6B 00 00: call 0x49d64a
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x6b
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 138h]
        ; Exact mapped bytes E8 A1 5A 0B 00: call 0x54c5aa
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x5a
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes E9 10 03 00 00: jmp 0x496e1e
        __asm _emit 0xe9
        __asm _emit 0x10
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 19ch]
        mov ecx, dword ptr [ecx + 54h]
        ; Exact mapped bytes E8 D0 37 00 00: call 0x49a2f0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x37
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax + 4]
        push edx
        mov eax, dword ptr [eax]
        push eax
        lea ecx, [ebp - 3ch]
        ; Exact mapped bytes E8 92 5C 0B 00: call 0x54c7c1
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x5c
        __asm _emit 0x0b
        __asm _emit 0x00
        lea ecx, [ebp - 3ch]
        push ecx
        lea ecx, [ebp - 148h]
        ; Exact mapped bytes E8 41 5B 0B 00: call 0x54c67f
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x5b
        __asm _emit 0x0b
        __asm _emit 0x00
        mov dword ptr [ebp - 204h], eax
        mov edx, dword ptr [ebp - 204h]
        mov dword ptr [ebp - 208h], edx
        mov byte ptr [ebp - 4], 0eh
        mov eax, dword ptr [ebp - 208h]
        push eax
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 E7 6A 00 00: call 0x49d64a
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x6a
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 148h]
        ; Exact mapped bytes E8 38 5A 0B 00: call 0x54c5aa
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x5a
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes E9 A7 02 00 00: jmp 0x496e1e
        __asm _emit 0xe9
        __asm _emit 0xa7
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 50h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 19ch]
        mov ecx, dword ptr [eax + 54h]
        ; Exact mapped bytes E8 23 42 00 00: call 0x49adb0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 0F 84 85 00 00 00: je 0x496c1f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes DF 6D B3: fild qword ptr [ebp - 0x4d]
        __asm _emit 0xdf
        __asm _emit 0x6d
        __asm _emit 0xb3
        ; Exact mapped bytes DD 5D A8: fstp qword ptr [ebp - 0x58]
        __asm _emit 0xdd
        __asm _emit 0x5d
        __asm _emit 0xa8
        mov ecx, dword ptr [ebp - 4fh]
        and ecx, 0ffh
        mov dl, byte ptr [ebp - 4fh]
        sub dl, 1
        mov byte ptr [ebp - 4fh], dl
        test ecx, ecx
        ; Exact mapped bytes 7E 0E: jle 0x496bc4
        __asm _emit 0x7e
        __asm _emit 0x0e
        ; Exact mapped bytes DD 45 A8: fld qword ptr [ebp - 0x58]
        __asm _emit 0xdd
        __asm _emit 0x45
        __asm _emit 0xa8
        ; Exact mapped bytes DC 35 10 11 58 00: fdiv qword ptr [0x581110]
        __asm _emit 0xdc
        __asm _emit 0x35
        __asm _emit 0x10
        __asm _emit 0x11
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes DD 5D A8: fstp qword ptr [ebp - 0x58]
        __asm _emit 0xdd
        __asm _emit 0x5d
        __asm _emit 0xa8
        ; Exact mapped bytes EB DC: jmp 0x496ba0
        __asm _emit 0xeb
        __asm _emit 0xdc
        mov eax, dword ptr [ebp - 4eh]
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 75 08: jne 0x496bd8
        __asm _emit 0x75
        __asm _emit 0x08
        ; Exact mapped bytes DD 45 A8: fld qword ptr [ebp - 0x58]
        __asm _emit 0xdd
        __asm _emit 0x45
        __asm _emit 0xa8
        ; Exact mapped bytes D9 E0: fchs
        __asm _emit 0xd9
        __asm _emit 0xe0
        ; Exact mapped bytes DD 5D A8: fstp qword ptr [ebp - 0x58]
        __asm _emit 0xdd
        __asm _emit 0x5d
        __asm _emit 0xa8
        mov ecx, dword ptr [ebp - 54h]
        push ecx
        mov edx, dword ptr [ebp - 58h]
        push edx
        lea ecx, [ebp - 158h]
        ; Exact mapped bytes E8 DE 5A 0B 00: call 0x54c6c9
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x5a
        __asm _emit 0x0b
        __asm _emit 0x00
        mov dword ptr [ebp - 20ch], eax
        mov eax, dword ptr [ebp - 20ch]
        mov dword ptr [ebp - 210h], eax
        mov byte ptr [ebp - 4], 0fh
        mov ecx, dword ptr [ebp - 210h]
        push ecx
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 3A 6A 00 00: call 0x49d64a
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x6a
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 158h]
        ; Exact mapped bytes E8 8B 59 0B 00: call 0x54c5aa
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x59
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes E9 FA 01 00 00: jmp 0x496e1e
        __asm _emit 0xe9
        __asm _emit 0xfa
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 60h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 19ch]
        mov ecx, dword ptr [ecx + 54h]
        ; Exact mapped bytes E8 B6 41 00 00: call 0x49adf0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x41
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 6B: je 0x496cae
        __asm _emit 0x74
        __asm _emit 0x6b
        lea ecx, [ebp - 6ch]
        ; Exact mapped bytes E8 6D 5D 0B 00: call 0x54c9b8
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x5d
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 5ch]
        and edx, 0ffffh
        push edx
        mov eax, dword ptr [ebp - 5eh]
        and eax, 0ffffh
        push eax
        ; Exact mapped bytes 0F BF 4D A0: movsx ecx, word ptr [ebp - 0x60]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xa0
        push ecx
        lea ecx, [ebp - 6ch]
        ; Exact mapped bytes E8 D3 5F 0B 00: call 0x54cc3e
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x5f
        __asm _emit 0x0b
        __asm _emit 0x00
        lea edx, [ebp - 6ch]
        push edx
        lea ecx, [ebp - 168h]
        ; Exact mapped bytes E8 76 5A 0B 00: call 0x54c6f0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x5a
        __asm _emit 0x0b
        __asm _emit 0x00
        mov dword ptr [ebp - 214h], eax
        mov eax, dword ptr [ebp - 214h]
        mov dword ptr [ebp - 218h], eax
        mov byte ptr [ebp - 4], 10h
        mov ecx, dword ptr [ebp - 218h]
        push ecx
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 AB 69 00 00: call 0x49d64a
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x69
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 168h]
        ; Exact mapped bytes E8 FC 58 0B 00: call 0x54c5aa
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x58
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes E9 6B 01 00 00: jmp 0x496e1e
        __asm _emit 0xe9
        __asm _emit 0x6b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 74h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 19ch]
        mov ecx, dword ptr [ecx + 54h]
        ; Exact mapped bytes E8 67 41 00 00: call 0x49ae30
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x41
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 70: je 0x496d42
        __asm _emit 0x74
        __asm _emit 0x70
        lea ecx, [ebp - 80h]
        ; Exact mapped bytes E8 DE 5C 0B 00: call 0x54c9b8
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x5c
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 70h]
        and edx, 0ffffh
        push edx
        mov eax, dword ptr [ebp - 72h]
        and eax, 0ffffh
        push eax
        mov ecx, dword ptr [ebp - 74h]
        and ecx, 0ffffh
        push ecx
        lea ecx, [ebp - 80h]
        ; Exact mapped bytes E8 66 5F 0B 00: call 0x54cc65
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x5f
        __asm _emit 0x0b
        __asm _emit 0x00
        lea edx, [ebp - 80h]
        push edx
        lea ecx, [ebp - 178h]
        ; Exact mapped bytes E8 E2 59 0B 00: call 0x54c6f0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x59
        __asm _emit 0x0b
        __asm _emit 0x00
        mov dword ptr [ebp - 21ch], eax
        mov eax, dword ptr [ebp - 21ch]
        mov dword ptr [ebp - 220h], eax
        mov byte ptr [ebp - 4], 11h
        mov ecx, dword ptr [ebp - 220h]
        push ecx
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 17 69 00 00: call 0x49d64a
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x69
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 178h]
        ; Exact mapped bytes E8 68 58 0B 00: call 0x54c5aa
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes E9 D7 00 00 00: jmp 0x496e1e
        __asm _emit 0xe9
        __asm _emit 0xd7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 90h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 19ch]
        mov ecx, dword ptr [ecx + 54h]
        ; Exact mapped bytes E8 10 41 00 00: call 0x49ae70
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x41
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 0F 84 92 00 00 00: je 0x496dff
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 86h]
        and edx, 0ffffh
        push edx
        mov eax, dword ptr [ebp - 88h]
        and eax, 0ffffh
        push eax
        mov ecx, dword ptr [ebp - 8ah]
        and ecx, 0ffffh
        push ecx
        mov edx, dword ptr [ebp - 8ch]
        and edx, 0ffffh
        push edx
        mov eax, dword ptr [ebp - 8eh]
        and eax, 0ffffh
        push eax
        ; Exact mapped bytes 0F BF 8D 70 FF FF FF: movsx ecx, word ptr [ebp - 0x90]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x8d
        __asm _emit 0x70
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push ecx
        lea ecx, [ebp - 194h]
        ; Exact mapped bytes E8 E5 5C 0B 00: call 0x54caa4
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x5c
        __asm _emit 0x0b
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 188h]
        ; Exact mapped bytes E8 25 59 0B 00: call 0x54c6f0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x59
        __asm _emit 0x0b
        __asm _emit 0x00
        mov dword ptr [ebp - 224h], eax
        mov edx, dword ptr [ebp - 224h]
        mov dword ptr [ebp - 228h], edx
        mov byte ptr [ebp - 4], 12h
        mov eax, dword ptr [ebp - 228h]
        push eax
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 5A 68 00 00: call 0x49d64a
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 188h]
        ; Exact mapped bytes E8 AB 57 0B 00: call 0x54c5aa
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x57
        __asm _emit 0x0b
        __asm _emit 0x00
        ; Exact mapped bytes EB 1D: jmp 0x496e1e
        __asm _emit 0xeb
        __asm _emit 0x1d
        ; Exact mapped bytes EB 1B: jmp 0x496e1e
        __asm _emit 0xeb
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        and edx, 0ffffh
        push edx
        push 5cab28h
        ; Exact mapped bytes E8 FA 8D 03 00: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x8d
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        lea eax, [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 76 60 00 00: call 0x49cea0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 198h]
        or ecx, 1
        mov dword ptr [ebp - 198h], ecx
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 65 57 0B 00: call 0x54c5aa
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x57
        __asm _emit 0x0b
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
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
