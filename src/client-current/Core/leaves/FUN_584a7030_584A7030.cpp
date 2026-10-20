// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A7030 .. +0x3B8 bytes.
extern "C" __declspec(naked) void FUN_584a7030_584A7030() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 5ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 5D E4 FF FF: call 0x584a54a0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xe4
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 0F 85 A8 00 00 00: jne 0x584a70f4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + 0b8h]
        test edx, edx
        ; Exact mapped bytes 74 31: je 0x584a708b
        __asm _emit 0x74
        __asm _emit 0x31
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0ach], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0b0h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0b4h], 0
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax + 0b8h], 0
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx]
        ; Exact mapped bytes E8 2B F9 FD FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xf9
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0ach], eax
        ; Exact mapped bytes 75 15: jne 0x584a70b5
        __asm _emit 0x75
        __asm _emit 0x15
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 06 50 FE FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x50
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0b0h], eax
        ; Exact mapped bytes 74 3D: je 0x584a70f2
        __asm _emit 0x74
        __asm _emit 0x3d
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx]
        ; Exact mapped bytes E8 01 F9 FD FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xf9
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0ach], eax
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx]
        ; Exact mapped bytes E8 DE 4F FE FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x4f
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0b0h], eax
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0b4h], 1
        mov eax, 1
        ; Exact mapped bytes E9 F2 02 00 00: jmp 0x584a73e4
        __asm _emit 0xe9
        __asm _emit 0xf2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 24: jmp 0x584a7118
        __asm _emit 0xeb
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0b4h], 0
        ; Exact mapped bytes 74 18: je 0x584a7118
        __asm _emit 0x74
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + 0b8h]
        test edx, edx
        ; Exact mapped bytes 75 0A: jne 0x584a7118
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax + 0b8h], 1
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0b4h], 1
        ; Exact mapped bytes 0F 85 92 00 00 00: jne 0x584a71ba
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx]
        ; Exact mapped bytes E8 4E E3 FF FF: call 0x584a5480
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xe3
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 4E: je 0x584a7184
        __asm _emit 0x74
        __asm _emit 0x4e
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 40 E3 FF FF: call 0x584a5480
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xe3
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 7E 19: jle 0x584a715d
        __asm _emit 0x7e
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 8], edx
        push 0
        push 0
        push 9
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 86 33 2C 00: call 0x5876a4e0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x33
        __asm _emit 0x2c
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 25: jmp 0x584a7182
        __asm _emit 0xeb
        __asm _emit 0x25
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 19 E3 FF FF: call 0x584a5480
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xe3
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 7D 17: jge 0x584a7182
        __asm _emit 0x7d
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 0ch], edx
        push 0
        push 0
        push 8
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 5F 33 2C 00: call 0x5876a4e0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x33
        __asm _emit 0x2c
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 2C: jmp 0x584a71b0
        __asm _emit 0xeb
        __asm _emit 0x2c
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 F2 E2 FF FF: call 0x584a5480
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 1E: jne 0x584a71b0
        __asm _emit 0x75
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx]
        ; Exact mapped bytes E8 A4 4D FE FF: call 0x5848bf40
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x4d
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 ED B8 0B 00: call 0x58562a90
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xb8
        __asm _emit 0x0b
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0b4h], 2
        mov eax, 1
        ; Exact mapped bytes E9 2A 02 00 00: jmp 0x584a73e4
        __asm _emit 0xe9
        __asm _emit 0x2a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0b4h], 2
        ; Exact mapped bytes 0F 85 A2 00 00 00: jne 0x584a726c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0b0h]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ach]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx]
        ; Exact mapped bytes E8 C4 4E FE FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x4e
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 C7 F7 FD FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xf7
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        ; Exact mapped bytes E8 0F 12 00 00: call 0x584a8420
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ; Exact mapped bytes DD 5D AC: fstp qword ptr [ebp - 0x54]
        __asm _emit 0xdd
        __asm _emit 0x5d
        __asm _emit 0xac
        ; Exact mapped bytes F2 0F 10 45 AC: movsd xmm0, qword ptr [ebp - 0x54]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0xac
        ; Exact mapped bytes 66 0F 2F 05 E8 51 89 58: comisd xmm0, xmmword ptr [0x588951e8]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x2f
        __asm _emit 0x05
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 72 25: jb 0x584a724b
        __asm _emit 0x72
        __asm _emit 0x25
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 20h], eax
        push 0
        push 0
        push 8
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 A4 32 2C 00: call 0x5876a4e0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x32
        __asm _emit 0x2c
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0b4h], 3
        ; Exact mapped bytes EB 17: jmp 0x584a7262
        __asm _emit 0xeb
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 24h], eax
        push 0
        push 0
        push 9
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 7F 32 2C 00: call 0x5876a4e0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x32
        __asm _emit 0x2c
        __asm _emit 0x00
        nop
        mov eax, 1
        ; Exact mapped bytes E9 78 01 00 00: jmp 0x584a73e4
        __asm _emit 0xe9
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0b4h], 3
        ; Exact mapped bytes 0F 85 C2 00 00 00: jne 0x584a733e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx]
        ; Exact mapped bytes E8 FA E1 FF FF: call 0x584a5480
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xe1
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 85 B0 00 00 00: jne 0x584a733e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 A8 4C FE FF: call 0x5848bf40
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x4c
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 F1 B7 0B 00: call 0x58562a90
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xb7
        __asm _emit 0x0b
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0b0h]
        mov dword ptr [ebp - 28h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ach]
        mov dword ptr [ebp - 2ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx]
        ; Exact mapped bytes E8 EF 4D FE FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x4d
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 F2 F6 FD FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xf6
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        lea ecx, [ebp - 38h]
        push ecx
        lea edx, [ebp - 3ch]
        push edx
        sub esp, 8
        ; Exact mapped bytes F2 0F 10 05 C8 51 89 58: movsd xmm0, qword ptr [0x588951c8]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0xc8
        __asm _emit 0x51
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        sub esp, 8
        ; Exact mapped bytes F2 0F 10 05 D0 51 89 58: movsd xmm0, qword ptr [0x588951d0]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0xd0
        __asm _emit 0x51
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 28h]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        push ecx
        mov edx, dword ptr [ebp - 30h]
        push edx
        mov eax, dword ptr [ebp - 34h]
        push eax
        ; Exact mapped bytes E8 62 0C 00 00: call 0x584a7f70
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 28h
        mov ecx, dword ptr [ebp - 38h]
        push ecx
        mov edx, dword ptr [ebp - 3ch]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes E8 DC 18 00 00: call 0x584a8c00
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0b4h], 4
        mov eax, 1
        ; Exact mapped bytes E9 A6 00 00 00: jmp 0x584a73e4
        __asm _emit 0xe9
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0b4h], 4
        ; Exact mapped bytes 0F 85 94 00 00 00: jne 0x584a73e2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0b0h]
        mov dword ptr [ebp - 40h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ach]
        mov dword ptr [ebp - 44h], ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx]
        ; Exact mapped bytes E8 40 4D FE FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x4d
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 43 F6 FD FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xf6
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 4ch], eax
        mov ecx, dword ptr [ebp - 40h]
        push ecx
        mov edx, dword ptr [ebp - 44h]
        push edx
        mov eax, dword ptr [ebp - 48h]
        push eax
        mov ecx, dword ptr [ebp - 4ch]
        push ecx
        ; Exact mapped bytes E8 8B 10 00 00: call 0x584a8420
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ; Exact mapped bytes DD 5D A4: fstp qword ptr [ebp - 0x5c]
        __asm _emit 0xdd
        __asm _emit 0x5d
        __asm _emit 0xa4
        ; Exact mapped bytes F2 0F 10 45 A4: movsd xmm0, qword ptr [ebp - 0x5c]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0xa4
        ; Exact mapped bytes 66 0F 2F 05 F0 51 89 58: comisd xmm0, xmmword ptr [0x588951f0]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x2f
        __asm _emit 0x05
        __asm _emit 0xf0
        __asm _emit 0x51
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 72 31: jb 0x584a73db
        __asm _emit 0x72
        __asm _emit 0x31
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0b4h], 0
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax + 0b8h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0ach], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0b0h], 0
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x584a73e4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov esp, ebp
        pop ebp
        ret
    }
}
