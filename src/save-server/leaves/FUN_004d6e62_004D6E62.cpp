// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D6E62 .. +0x4FB bytes.
extern "C" __declspec(naked) void FUN_004d6e62_004D6E62() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        push ebx
        push esi
        push edi
        push 42h
        push 6720f4h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 E5 33 00 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 8], 1
        cmp dword ptr [ebp + 20h], 0
        ; Exact mapped bytes 74 1B: je 0x4d6ea9
        __asm _emit 0x74
        __asm _emit 0x1b
        mov edx, dword ptr [ebp + 20h]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx], eax
        mov ecx, dword ptr [ebp + 20h]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 4], edx
        mov eax, 1
        ; Exact mapped bytes E9 AB 04 00 00: jmp 0x4d7354
        __asm _emit 0xe9
        __asm _emit 0xab
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 1ch]
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 24h]
        sub ecx, 2
        mov dword ptr [ebp - 24h], ecx
        cmp dword ptr [ebp - 24h], 2dh
        ; Exact mapped bytes 0F 87 68 04 00 00: ja 0x4d732a
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x68
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 24h]
        xor edx, edx
        mov dl, byte ptr [eax + 4d7391h]
        ; Exact mapped bytes FF 24 95 5D 73 4D 00: jmp dword ptr [edx*4 + 0x4d735d]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x5d
        __asm _emit 0x73
        __asm _emit 0x4d
        __asm _emit 0x00
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 74 01: je 0x4d6edb
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 F3: jne 0x4d6ed4
        __asm _emit 0x75
        __asm _emit 0xf3
        cmp dword ptr [ebp + 18h], 0
        ; Exact mapped bytes 74 11: je 0x4d6ef8
        __asm _emit 0x74
        __asm _emit 0x11
        push 56h
        push 6720f4h
        ; Exact mapped bytes E8 4D 1E 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x1e
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d6ef8
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E3: jne 0x4d6ee1
        __asm _emit 0x75
        __asm _emit 0xe3
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 55 FC: call dword ptr [ebp - 4]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes E9 48 04 00 00: jmp 0x4d7351
        __asm _emit 0xe9
        __asm _emit 0x48
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 74 01: je 0x4d6f10
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 F3: jne 0x4d6f09
        __asm _emit 0x75
        __asm _emit 0xf3
        cmp dword ptr [ebp + 18h], 0
        ; Exact mapped bytes 74 11: je 0x4d6f2d
        __asm _emit 0x74
        __asm _emit 0x11
        push 5dh
        push 6720f4h
        ; Exact mapped bytes E8 18 1E 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x1e
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d6f2d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E3: jne 0x4d6f16
        __asm _emit 0x75
        __asm _emit 0xe3
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 55 FC: call dword ptr [ebp - 4]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xfc
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes E9 10 04 00 00: jmp 0x4d7351
        __asm _emit 0xe9
        __asm _emit 0x10
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 74 01: je 0x4d6f48
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 F3: jne 0x4d6f41
        __asm _emit 0x75
        __asm _emit 0xf3
        cmp dword ptr [ebp + 18h], 0
        ; Exact mapped bytes 74 11: je 0x4d6f65
        __asm _emit 0x74
        __asm _emit 0x11
        push 64h
        push 6720f4h
        ; Exact mapped bytes E8 E0 1D 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x1d
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d6f65
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E3: jne 0x4d6f4e
        __asm _emit 0x75
        __asm _emit 0xe3
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 55 FC: call dword ptr [ebp - 4]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes E9 D7 03 00 00: jmp 0x4d7351
        __asm _emit 0xe9
        __asm _emit 0xd7
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 18h], 0
        ; Exact mapped bytes 74 11: je 0x4d6f91
        __asm _emit 0x74
        __asm _emit 0x11
        push 6ah
        push 6720f4h
        ; Exact mapped bytes E8 B4 1D 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x1d
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d6f91
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E3: jne 0x4d6f7a
        __asm _emit 0x75
        __asm _emit 0xe3
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 55 FC: call dword ptr [ebp - 4]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xfc
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes E9 A8 03 00 00: jmp 0x4d7351
        __asm _emit 0xe9
        __asm _emit 0xa8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 18h]
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 11: jne 0x4d6fc6
        __asm _emit 0x75
        __asm _emit 0x11
        push 71h
        push 6720f4h
        ; Exact mapped bytes E8 7F 1D 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x1d
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d6fc6
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E3: jne 0x4d6faf
        __asm _emit 0x75
        __asm _emit 0xe3
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 75 11: jne 0x4d6fe5
        __asm _emit 0x75
        __asm _emit 0x11
        push 72h
        push 6720f4h
        ; Exact mapped bytes E8 60 1D 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x1d
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d6fe5
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E1: jne 0x4d6fcc
        __asm _emit 0x75
        __asm _emit 0xe1
        mov edx, dword ptr [ebp - 0ch]
        cmp dword ptr [edx + 4], 0
        ; Exact mapped bytes 75 11: jne 0x4d7005
        __asm _emit 0x75
        __asm _emit 0x11
        push 73h
        push 6720f4h
        ; Exact mapped bytes E8 40 1D 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x1d
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d7005
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4d6feb
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 55 FC: call dword ptr [ebp - 4]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes E9 2E 03 00 00: jmp 0x4d7351
        __asm _emit 0xe9
        __asm _emit 0x2e
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 18h]
        mov dword ptr [ebp - 10h], edx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 11: jne 0x4d7040
        __asm _emit 0x75
        __asm _emit 0x11
        push 7ah
        push 6720f4h
        ; Exact mapped bytes E8 05 1D 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x1d
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d7040
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E3: jne 0x4d7029
        __asm _emit 0x75
        __asm _emit 0xe3
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx], 0
        ; Exact mapped bytes 75 11: jne 0x4d705f
        __asm _emit 0x75
        __asm _emit 0x11
        push 7bh
        push 6720f4h
        ; Exact mapped bytes E8 E6 1C 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x1c
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d705f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E1: jne 0x4d7046
        __asm _emit 0x75
        __asm _emit 0xe1
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 75 11: jne 0x4d707f
        __asm _emit 0x75
        __asm _emit 0x11
        push 7ch
        push 6720f4h
        ; Exact mapped bytes E8 C6 1C 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x1c
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d707f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4d7065
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 4]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 55 FC: call dword ptr [ebp - 4]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xfc
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes E9 B1 02 00 00: jmp 0x4d7351
        __asm _emit 0xe9
        __asm _emit 0xb1
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 18h]
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 75 14: jne 0x4d70c0
        __asm _emit 0x75
        __asm _emit 0x14
        push 83h
        push 6720f4h
        ; Exact mapped bytes E8 85 1C 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x1c
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d70c0
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4d70a6
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp - 14h]
        cmp dword ptr [edx], 0
        ; Exact mapped bytes 75 14: jne 0x4d70e2
        __asm _emit 0x75
        __asm _emit 0x14
        push 84h
        push 6720f4h
        ; Exact mapped bytes E8 63 1C 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x1c
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d70e2
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DE: jne 0x4d70c6
        __asm _emit 0x75
        __asm _emit 0xde
        mov ecx, dword ptr [ebp - 14h]
        cmp dword ptr [ecx + 4], 0
        ; Exact mapped bytes 75 14: jne 0x4d7105
        __asm _emit 0x75
        __asm _emit 0x14
        push 85h
        push 6720f4h
        ; Exact mapped bytes E8 40 1C 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x1c
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d7105
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x4d70e8
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 4]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 55 FC: call dword ptr [ebp - 4]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes E9 2A 02 00 00: jmp 0x4d7351
        __asm _emit 0xe9
        __asm _emit 0x2a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 18h]
        mov dword ptr [ebp - 18h], edx
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 75 14: jne 0x4d7147
        __asm _emit 0x75
        __asm _emit 0x14
        push 8dh
        push 6720f4h
        ; Exact mapped bytes E8 FE 1B 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x1b
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d7147
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4d712d
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp - 18h]
        cmp dword ptr [ecx], 0
        ; Exact mapped bytes 75 14: jne 0x4d7169
        __asm _emit 0x75
        __asm _emit 0x14
        push 8eh
        push 6720f4h
        ; Exact mapped bytes E8 DC 1B 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x1b
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d7169
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DE: jne 0x4d714d
        __asm _emit 0x75
        __asm _emit 0xde
        mov eax, dword ptr [ebp - 18h]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 75 14: jne 0x4d718c
        __asm _emit 0x75
        __asm _emit 0x14
        push 8fh
        push 6720f4h
        ; Exact mapped bytes E8 B9 1B 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x1b
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d718c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x4d716f
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 4]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 55 FC: call dword ptr [ebp - 4]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xfc
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes E9 A0 01 00 00: jmp 0x4d7351
        __asm _emit 0xe9
        __asm _emit 0xa0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 74 01: je 0x4d71b8
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 F3: jne 0x4d71b1
        __asm _emit 0x75
        __asm _emit 0xf3
        cmp dword ptr [ebp + 10h], -1
        ; Exact mapped bytes 74 1D: je 0x4d71e1
        __asm _emit 0x74
        __asm _emit 0x1d
        cmp dword ptr [ebp + 10h], 0ffffh
        ; Exact mapped bytes 74 14: je 0x4d71e1
        __asm _emit 0x74
        __asm _emit 0x14
        push 98h
        push 6720f4h
        ; Exact mapped bytes E8 64 1B 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x1b
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d71e1
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D7: jne 0x4d71be
        __asm _emit 0x75
        __asm _emit 0xd7
        cmp dword ptr [ebp + 18h], 0
        ; Exact mapped bytes 75 14: jne 0x4d7201
        __asm _emit 0x75
        __asm _emit 0x14
        push 99h
        push 6720f4h
        ; Exact mapped bytes E8 44 1B 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x1b
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d7201
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4d71e7
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp + 18h]
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 1ch]
        cmp dword ptr [eax + 1ch], 0
        ; Exact mapped bytes 74 14: je 0x4d722a
        __asm _emit 0x74
        __asm _emit 0x14
        push 9bh
        push 6720f4h
        ; Exact mapped bytes E8 1B 1B 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x1b
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d722a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x4d720d
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp - 1ch]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 55 FC: call dword ptr [ebp - 4]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xfc
        mov eax, dword ptr [ebp - 1ch]
        xor ecx, ecx
        cmp dword ptr [eax + 1ch], 0
        sete cl
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [edx + 1ch], 0
        ; Exact mapped bytes E9 F9 00 00 00: jmp 0x4d7351
        __asm _emit 0xe9
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 10h], -1
        ; Exact mapped bytes 74 14: je 0x4d7272
        __asm _emit 0x74
        __asm _emit 0x14
        push 0a5h
        push 6720f4h
        ; Exact mapped bytes E8 D3 1A 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x1a
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d7272
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4d7258
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp + 18h], 0
        ; Exact mapped bytes 75 14: jne 0x4d7292
        __asm _emit 0x75
        __asm _emit 0x14
        push 0a6h
        push 6720f4h
        ; Exact mapped bytes E8 B3 1A 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x1a
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d7292
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4d7278
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp + 18h]
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 4]
        cmp ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 74 14: je 0x4d72bd
        __asm _emit 0x74
        __asm _emit 0x14
        push 0a8h
        push 6720f4h
        ; Exact mapped bytes E8 88 1A 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x1a
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d72bd
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DB: jne 0x4d729e
        __asm _emit 0x75
        __asm _emit 0xdb
        mov eax, dword ptr [ebp - 20h]
        cmp dword ptr [eax + 1ch], 0
        ; Exact mapped bytes 74 14: je 0x4d72e0
        __asm _emit 0x74
        __asm _emit 0x14
        push 0a9h
        push 6720f4h
        ; Exact mapped bytes E8 65 1A 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x1a
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d72e0
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x4d72c3
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 55 FC: call dword ptr [ebp - 4]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xfc
        mov ecx, dword ptr [ebp - 20h]
        xor edx, edx
        cmp dword ptr [ecx + 1ch], 0
        sete dl
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [eax + 1ch], 0
        ; Exact mapped bytes EB 42: jmp 0x4d7351
        __asm _emit 0xeb
        __asm _emit 0x42
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 55 FC: call dword ptr [ebp - 4]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes EB 36: jmp 0x4d7351
        __asm _emit 0xeb
        __asm _emit 0x36
        mov edx, dword ptr [ebp + 18h]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes FF 55 FC: call dword ptr [ebp - 4]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xfc
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 27: jmp 0x4d7351
        __asm _emit 0xeb
        __asm _emit 0x27
        mov eax, 1
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x4d7347
        __asm _emit 0x74
        __asm _emit 0x14
        push 0b9h
        push 6720f4h
        ; Exact mapped bytes E8 FE 19 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x19
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d7347
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x4d732a
        __asm _emit 0x75
        __asm _emit 0xdd
        xor eax, eax
        ; Exact mapped bytes EB 03: jmp 0x4d7354
        __asm _emit 0xeb
        __asm _emit 0x03
        mov eax, dword ptr [ebp - 8]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 1C 00: ret 0x1c
        __asm _emit 0xc2
        __asm _emit 0x1c
        __asm _emit 0x00
    }
}
