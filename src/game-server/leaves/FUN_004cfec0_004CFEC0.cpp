// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004CFEC0 .. +0x35F bytes.
extern "C" __declspec(naked) void FUN_004cfec0_004CFEC0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 07: jne 0x4cfed6
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 40 03 00 00: jmp 0x4d0216
        __asm _emit 0xe9
        __asm _emit 0x40
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 5de7b4h
        ; Exact mapped bytes E8 60 25 07 00: call 0x542440
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x25
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 18h], 0
        ; Exact mapped bytes 74 44: je 0x4cff30
        __asm _emit 0x74
        __asm _emit 0x44
        push 584bb8h
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 18h]
        ; Exact mapped bytes E8 94 B1 02 00: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xb1
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x4cff11
        __asm _emit 0x75
        __asm _emit 0x11
        push 2fh
        push 5c7ebch
        ; Exact mapped bytes E8 F4 4A 06 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x4a
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4cff11
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4cfeec
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 18h]
        ; Exact mapped bytes E8 B4 7A 02 00: call 0x4f79da
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x7a
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 18h], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 18h], 0
        ; Exact mapped bytes 74 11: je 0x4cff4a
        __asm _emit 0x74
        __asm _emit 0x11
        push 33h
        push 5c7ebch
        ; Exact mapped bytes E8 BB 4A 06 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x4a
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4cff4a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4cff30
        __asm _emit 0x75
        __asm _emit 0xe0
        cmp dword ptr [ebp + 0ch], 110h
        ; Exact mapped bytes 75 7A: jne 0x4cffd3
        __asm _emit 0x75
        __asm _emit 0x7a
        push 5c7ec8h
        ; Exact mapped bytes FF 15 F4 25 5E 00: call dword ptr [0x5e25f4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes A3 08 E8 5D 00: mov dword ptr [0x5de808], eax
        __asm _emit 0xa3
        __asm _emit 0x08
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        push 5c7ee4h
        ; Exact mapped bytes FF 15 F4 25 5E 00: call dword ptr [0x5e25f4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes A3 04 E8 5D 00: mov dword ptr [0x5de804], eax
        __asm _emit 0xa3
        __asm _emit 0x04
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        push 5c7efch
        ; Exact mapped bytes FF 15 F4 25 5E 00: call dword ptr [0x5e25f4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes A3 00 E8 5D 00: mov dword ptr [0x5de800], eax
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        push 5c7f10h
        ; Exact mapped bytes FF 15 F4 25 5E 00: call dword ptr [0x5e25f4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes A3 FC E7 5D 00: mov dword ptr [0x5de7fc], eax
        __asm _emit 0xa3
        __asm _emit 0xfc
        __asm _emit 0xe7
        __asm _emit 0x5d
        __asm _emit 0x00
        push 5c7f20h
        ; Exact mapped bytes FF 15 F4 25 5E 00: call dword ptr [0x5e25f4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes A3 F8 E7 5D 00: mov dword ptr [0x5de7f8], eax
        __asm _emit 0xa3
        __asm _emit 0xf8
        __asm _emit 0xe7
        __asm _emit 0x5d
        __asm _emit 0x00
        push 5c7f30h
        ; Exact mapped bytes FF 15 F4 25 5E 00: call dword ptr [0x5e25f4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes A3 F4 E7 5D 00: mov dword ptr [0x5de7f4], eax
        __asm _emit 0xa3
        __asm _emit 0xf4
        __asm _emit 0xe7
        __asm _emit 0x5d
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 22 F9 01 00: call 0x4ef8f0
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xf9
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E9 43 02 00 00: jmp 0x4d0216
        __asm _emit 0xe9
        __asm _emit 0x43
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 3B 05 F8 E7 5D 00: cmp eax, dword ptr [0x5de7f8]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0xf8
        __asm _emit 0xe7
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 74 1A: je 0x4cfff8
        __asm _emit 0x74
        __asm _emit 0x1a
        cmp dword ptr [ebp + 0ch], 111h
        ; Exact mapped bytes 75 31: jne 0x4d0018
        __asm _emit 0x75
        __asm _emit 0x31
        mov ecx, dword ptr [ebp + 10h]
        and ecx, 0ffffh
        cmp ecx, 40eh
        ; Exact mapped bytes 75 20: jne 0x4d0018
        __asm _emit 0x75
        __asm _emit 0x20
        push 0
        push 0e146h
        push 111h
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes FF 15 BC 27 5E 00: call dword ptr [0x5e27bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes E9 FE 01 00 00: jmp 0x4d0216
        __asm _emit 0xe9
        __asm _emit 0xfe
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0c000h
        ; Exact mapped bytes 73 07: jae 0x4d0028
        __asm _emit 0x73
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 EE 01 00 00: jmp 0x4d0216
        __asm _emit 0xe9
        __asm _emit 0xee
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 D3 19 02 00: call 0x4f1a04
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x19
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 11: jne 0x4d004b
        __asm _emit 0x75
        __asm _emit 0x11
        push 50h
        push 5c7ebch
        ; Exact mapped bytes E8 BA 49 06 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x49
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d004b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E3: jne 0x4d0034
        __asm _emit 0x75
        __asm _emit 0xe3
        push 582990h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 32 B0 02 00: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xb0
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x4d0073
        __asm _emit 0x75
        __asm _emit 0x11
        push 51h
        push 5c7ebch
        ; Exact mapped bytes E8 92 49 06 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x49
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d0073
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D8: jne 0x4d0051
        __asm _emit 0x75
        __asm _emit 0xd8
        push 584bb8h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 0A B0 02 00: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xb0
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 1A: je 0x4d00a4
        __asm _emit 0x74
        __asm _emit 0x1a
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 90h]
        and ecx, 80000h
        test ecx, ecx
        ; Exact mapped bytes 74 07: je 0x4d00a4
        __asm _emit 0x74
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 72 01 00 00: jmp 0x4d0216
        __asm _emit 0xe9
        __asm _emit 0x72
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 3B 15 04 E8 5D 00: cmp edx, dword ptr [0x5de804]
        __asm _emit 0x3b
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 75 3F: jne 0x4d00ee
        __asm _emit 0x75
        __asm _emit 0x3f
        push 584bb8h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 D4 AF 02 00: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xaf
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x4d00d1
        __asm _emit 0x75
        __asm _emit 0x11
        push 61h
        push 5c7ebch
        ; Exact mapped bytes E8 34 49 06 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x49
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d00d1
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D8: jne 0x4d00af
        __asm _emit 0x75
        __asm _emit 0xd8
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 90 D8 00 00 00: call dword ptr [eax + 0xd8]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 28 01 00 00: jmp 0x4d0216
        __asm _emit 0xe9
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 3B 0D 00 E8 5D 00: cmp ecx, dword ptr [0x5de800]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 75 63: jne 0x4d015c
        __asm _emit 0x75
        __asm _emit 0x63
        push 584bb8h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 8A AF 02 00: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xaf
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x4d011b
        __asm _emit 0x75
        __asm _emit 0x11
        push 66h
        push 5c7ebch
        ; Exact mapped bytes E8 EA 48 06 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x48
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d011b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D8: jne 0x4d00f9
        __asm _emit 0x75
        __asm _emit 0xd8
        ; Exact mapped bytes 83 3D F4 E8 5D 00 00: cmp dword ptr [0x5de8f4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xf4
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0C: je 0x4d0136
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp + 14h]
        mov dword ptr [eax + 1f4h], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 90 DC 00 00 00: call dword ptr [eax + 0xdc]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 1f4h], 0
        mov eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E9 BA 00 00 00: jmp 0x4d0216
        __asm _emit 0xe9
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 3B 15 08 E8 5D 00: cmp edx, dword ptr [0x5de808]
        __asm _emit 0x3b
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 75 5B: jne 0x4d01c2
        __asm _emit 0x75
        __asm _emit 0x5b
        push 584bb8h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 1C AF 02 00: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xaf
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x4d0189
        __asm _emit 0x75
        __asm _emit 0x11
        push 73h
        push 5c7ebch
        ; Exact mapped bytes E8 7C 48 06 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x48
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d0189
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D8: jne 0x4d0167
        __asm _emit 0x75
        __asm _emit 0xd8
        mov ecx, dword ptr [ebp + 14h]
        shr ecx, 10h
        and ecx, 0ffffh
        and ecx, 0ffffh
        push ecx
        mov edx, dword ptr [ebp + 14h]
        and edx, 0ffffh
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 92 E0 00 00 00: call dword ptr [edx + 0xe0]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes EB 54: jmp 0x4d0216
        __asm _emit 0xeb
        __asm _emit 0x54
        mov eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 3B 05 FC E7 5D 00: cmp eax, dword ptr [0x5de7fc]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0xfc
        __asm _emit 0xe7
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 75 38: jne 0x4d0205
        __asm _emit 0x75
        __asm _emit 0x38
        push 5870d8h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 B6 AE 02 00: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xae
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x4d01ef
        __asm _emit 0x75
        __asm _emit 0x11
        push 7ah
        push 5c7ebch
        ; Exact mapped bytes E8 16 48 06 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x48
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d01ef
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D8: jne 0x4d01cd
        __asm _emit 0x75
        __asm _emit 0xd8
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 90 D8 00 00 00: call dword ptr [eax + 0xd8]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 11: jmp 0x4d0216
        __asm _emit 0xeb
        __asm _emit 0x11
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 3B 0D F4 E7 5D 00: cmp ecx, dword ptr [0x5de7f4]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0xe7
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 75 04: jne 0x4d0214
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 02: jmp 0x4d0216
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
