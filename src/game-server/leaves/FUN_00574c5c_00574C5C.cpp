// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00574C5C .. +0x858 bytes.
extern "C" __declspec(naked) void FUN_00574c5c_00574C5C() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57ed8ah
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
        push ecx
        sub esp, 78h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], esp
        mov eax, dword ptr [ebp + 8]
        sub eax, 10h
        mov dword ptr [ebp - 6ch], eax
        cmp dword ptr [ebp + 20h], 0
        ; Exact mapped bytes 74 25: je 0x574cb2
        __asm _emit 0x74
        __asm _emit 0x25
        push 0
        push 10h
        mov ecx, dword ptr [ebp + 20h]
        push ecx
        ; Exact mapped bytes E8 BC B1 F5 FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xb1
        __asm _emit 0xf5
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x574cb2
        __asm _emit 0x75
        __asm _emit 0x14
        push 4ach
        push 5cbcc4h
        ; Exact mapped bytes E8 53 FD FB FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xfd
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x574cb2
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 CF: jne 0x574c87
        __asm _emit 0x75
        __asm _emit 0xcf
        cmp dword ptr [ebp + 24h], 0
        ; Exact mapped bytes 74 25: je 0x574ce3
        __asm _emit 0x74
        __asm _emit 0x25
        push 0
        push 20h
        mov eax, dword ptr [ebp + 24h]
        push eax
        ; Exact mapped bytes E8 8B B1 F5 FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xb1
        __asm _emit 0xf5
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x574ce3
        __asm _emit 0x75
        __asm _emit 0x14
        push 4adh
        push 5cbcc4h
        ; Exact mapped bytes E8 22 FD FB FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xfd
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x574ce3
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 CF: jne 0x574cb8
        __asm _emit 0x75
        __asm _emit 0xcf
        cmp dword ptr [ebp + 28h], 0
        ; Exact mapped bytes 74 25: je 0x574d14
        __asm _emit 0x74
        __asm _emit 0x25
        push 0
        push 4
        mov edx, dword ptr [ebp + 28h]
        push edx
        ; Exact mapped bytes E8 5A B1 F5 FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xb1
        __asm _emit 0xf5
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x574d14
        __asm _emit 0x75
        __asm _emit 0x14
        push 4aeh
        push 5cbcc4h
        ; Exact mapped bytes E8 F1 FC FB FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xfc
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x574d14
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 CF: jne 0x574ce9
        __asm _emit 0x75
        __asm _emit 0xcf
        cmp dword ptr [ebp + 20h], 0
        ; Exact mapped bytes 74 09: je 0x574d29
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [ebp + 20h]
        push ecx
        ; Exact mapped bytes E8 5F 8D F2 FF: call 0x49da88
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x8d
        __asm _emit 0xf2
        __asm _emit 0xff
        push 58e530h
        mov edx, dword ptr [ebp + 10h]
        push edx
        ; Exact mapped bytes E8 59 7A F2 FF: call 0x49c790
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x7a
        __asm _emit 0xf2
        __asm _emit 0xff
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 74 0A: je 0x574d48
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, 80020001h
        ; Exact mapped bytes E9 FA 07 00 00: jmp 0x575542
        __asm _emit 0xe9
        __asm _emit 0xfa
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 6ch]
        mov edx, dword ptr [ebp - 6ch]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 50 1C: call dword ptr [eax + 0x1c]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x1c
        test eax, eax
        ; Exact mapped bytes 75 0A: jne 0x574d65
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, 8000ffffh
        ; Exact mapped bytes E9 DD 07 00 00: jmp 0x575542
        __asm _emit 0xe9
        __asm _emit 0xdd
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 1ch]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 4ch], edx
        mov eax, dword ptr [ecx + 4]
        mov dword ptr [ebp - 48h], eax
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 44h], edx
        mov eax, dword ptr [ecx + 0ch]
        mov dword ptr [ebp - 40h], eax
        lea ecx, [ebp - 4ch]
        mov dword ptr [ebp + 1ch], ecx
        mov edx, dword ptr [ebp + 1ch]
        cmp dword ptr [edx + 0ch], 0
        ; Exact mapped bytes 74 1E: je 0x574dac
        __asm _emit 0x74
        __asm _emit 0x1e
        mov eax, dword ptr [ebp + 1ch]
        cmp dword ptr [eax + 0ch], 1
        ; Exact mapped bytes 75 0B: jne 0x574da2
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp + 1ch]
        mov edx, dword ptr [ecx + 4]
        cmp dword ptr [edx], -3
        ; Exact mapped bytes 74 0A: je 0x574dac
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, 80020007h
        ; Exact mapped bytes E9 96 07 00 00: jmp 0x575542
        __asm _emit 0xe9
        __asm _emit 0x96
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 6ch]
        push ecx
        ; Exact mapped bytes E8 FE E8 FF FF: call 0x5736b7
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 50h], eax
        cmp dword ptr [ebp - 50h], 0
        ; Exact mapped bytes 75 0A: jne 0x574dcc
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, 80020003h
        ; Exact mapped bytes E9 76 07 00 00: jmp 0x575542
        __asm _emit 0xe9
        __asm _emit 0x76
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 18h]
        and edx, 0ffffh
        cmp edx, 1
        ; Exact mapped bytes 0F 85 97 00 00 00: jne 0x574e75
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 50h]
        cmp dword ptr [eax + 10h], 0
        ; Exact mapped bytes 75 09: jne 0x574df0
        __asm _emit 0x75
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 50h]
        cmp dword ptr [ecx + 14h], 0
        ; Exact mapped bytes 74 24: je 0x574e14
        __asm _emit 0x74
        __asm _emit 0x24
        mov edx, dword ptr [ebp - 50h]
        cmp dword ptr [edx + 10h], 0
        ; Exact mapped bytes 75 09: jne 0x574e02
        __asm _emit 0x75
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 50h]
        cmp dword ptr [eax + 14h], 0
        ; Exact mapped bytes 75 12: jne 0x574e14
        __asm _emit 0x75
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 50h]
        cmp dword ptr [ecx + 10h], 0
        ; Exact mapped bytes 74 6A: je 0x574e75
        __asm _emit 0x74
        __asm _emit 0x6a
        mov edx, dword ptr [ebp - 50h]
        cmp dword ptr [edx + 14h], 0
        ; Exact mapped bytes 74 61: je 0x574e75
        __asm _emit 0x74
        __asm _emit 0x61
        ; Exact mapped bytes 66 8B 45 18: mov ax, word ptr [ebp + 0x18]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x18
        ; Exact mapped bytes 66 25 FE FF: and ax, 0xfffe
        __asm _emit 0x66
        __asm _emit 0x25
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 45 18: mov word ptr [ebp + 0x18], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 50h]
        cmp dword ptr [ecx + 8], 0
        ; Exact mapped bytes 74 12: je 0x574e3b
        __asm _emit 0x74
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 50h]
        mov eax, dword ptr [edx + 8]
        push eax
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 80h], eax
        ; Exact mapped bytes EB 07: jmp 0x574e42
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 80h], 0
        mov ecx, dword ptr [ebp - 80h]
        mov dword ptr [ebp - 70h], ecx
        mov edx, dword ptr [ebp + 1ch]
        mov eax, dword ptr [edx + 8]
        cmp eax, dword ptr [ebp - 70h]
        ; Exact mapped bytes 77 0D: ja 0x574e60
        __asm _emit 0x77
        __asm _emit 0x0d
        ; Exact mapped bytes 66 8B 4D 18: mov cx, word ptr [ebp + 0x18]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x18
        or cl, 2
        ; Exact mapped bytes 66 89 4D 18: mov word ptr [ebp + 0x18], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0x18
        ; Exact mapped bytes EB 15: jmp 0x574e75
        __asm _emit 0xeb
        __asm _emit 0x15
        ; Exact mapped bytes 66 8B 55 18: mov dx, word ptr [ebp + 0x18]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x18
        or dl, 8
        ; Exact mapped bytes 66 89 55 18: mov word ptr [ebp + 0x18], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0x18
        mov eax, dword ptr [ebp + 1ch]
        mov dword ptr [eax + 0ch], 1
        mov ecx, dword ptr [ebp + 18h]
        and ecx, 0ffffh
        and ecx, 0ch
        test ecx, ecx
        ; Exact mapped bytes 74 23: je 0x574ea8
        __asm _emit 0x74
        __asm _emit 0x23
        mov dword ptr [ebp + 20h], 0
        mov edx, dword ptr [ebp - 50h]
        cmp dword ptr [edx + 10h], 0
        ; Exact mapped bytes 74 13: je 0x574ea8
        __asm _emit 0x74
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 50h]
        cmp dword ptr [eax + 14h], 0
        ; Exact mapped bytes 75 0A: jne 0x574ea8
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, 80020005h
        ; Exact mapped bytes E9 9A 06 00 00: jmp 0x575542
        __asm _emit 0xe9
        __asm _emit 0x9a
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], 0ffffffffh
        mov dword ptr [ebp - 3ch], 0
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 66 C7 45 D8 0A 00: mov word ptr [ebp - 0x28], 0xa
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xd8
        __asm _emit 0x0a
        __asm _emit 0x00
        lea ecx, [ebp - 68h]
        push ecx
        ; Exact mapped bytes E8 BC 8B F2 FF: call 0x49da88
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x8b
        __asm _emit 0xf2
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 18h]
        and edx, 0ffffh
        cmp edx, 4
        ; Exact mapped bytes 0F 85 96 02 00 00: jne 0x575174
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x96
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 0F 84 8C 02 00 00: je 0x575174
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 1ch]
        mov ecx, dword ptr [eax]
        xor edx, edx
        ; Exact mapped bytes 66 8B 11: mov dx, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x11
        cmp edx, 9
        ; Exact mapped bytes 75 77: jne 0x574f6e
        __asm _emit 0x75
        __asm _emit 0x77
        mov eax, dword ptr [ebp + 1ch]
        mov ecx, dword ptr [eax]
        cmp dword ptr [ecx + 8], 0
        ; Exact mapped bytes 74 6C: je 0x574f6e
        __asm _emit 0x74
        __asm _emit 0x6c
        mov edx, dword ptr [ebp + 1ch]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp + 1ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [edx + 4]
        mov dword ptr [ebp - 24h], ecx
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [edx + 0ch]
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp + 1ch]
        mov eax, dword ptr [edx]
        push eax
        ; Exact mapped bytes E8 57 8B F2 FF: call 0x49da88
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x8b
        __asm _emit 0xf2
        __asm _emit 0xff
        push 10h
        push 0
        lea ecx, [ebp - 38h]
        push ecx
        ; Exact mapped bytes E8 32 44 F3 FF: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x44
        __asm _emit 0xf3
        __asm _emit 0xff
        add esp, 0ch
        mov edx, dword ptr [ebp + 28h]
        push edx
        mov eax, dword ptr [ebp + 24h]
        push eax
        mov ecx, dword ptr [ebp + 1ch]
        mov edx, dword ptr [ecx]
        push edx
        lea eax, [ebp - 38h]
        push eax
        push 2
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        push 0
        mov eax, dword ptr [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 18: call dword ptr [edx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x18
        mov dword ptr [ebp - 3ch], eax
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 0F 85 E8 01 00 00: jne 0x575160
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 50h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 0C: mov cx, word ptr [eax + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0c
        cmp ecx, 9
        ; Exact mapped bytes 0F 85 D6 01 00 00: jne 0x575160
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 10h
        push 0
        lea edx, [ebp - 38h]
        push edx
        ; Exact mapped bytes E8 D9 43 F3 FF: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x43
        __asm _emit 0xf3
        __asm _emit 0xff
        add esp, 0ch
        mov eax, dword ptr [ebp - 50h]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 0F 85 B6 00 00 00: jne 0x57505d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 28h]
        push ecx
        mov edx, dword ptr [ebp + 24h]
        push edx
        lea eax, [ebp - 68h]
        push eax
        lea ecx, [ebp - 38h]
        push ecx
        push 3
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes FF 51 18: call dword ptr [ecx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x18
        mov dword ptr [ebp - 3ch], eax
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 75 1D: jne 0x574ff7
        __asm _emit 0x75
        __asm _emit 0x1d
        mov edx, dword ptr [ebp - 68h]
        and edx, 0ffffh
        cmp edx, 9
        ; Exact mapped bytes 75 06: jne 0x574fee
        __asm _emit 0x75
        __asm _emit 0x06
        cmp dword ptr [ebp - 60h], 0
        ; Exact mapped bytes 75 09: jne 0x574ff7
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 3ch], 80020005h
        ; Exact mapped bytes EB 61: jmp 0x575058
        __asm _emit 0xeb
        __asm _emit 0x61
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 75 5B: jne 0x575058
        __asm _emit 0x75
        __asm _emit 0x5b
        mov eax, dword ptr [ebp - 68h]
        and eax, 0ffffh
        cmp eax, 9
        ; Exact mapped bytes 75 06: jne 0x575010
        __asm _emit 0x75
        __asm _emit 0x06
        cmp dword ptr [ebp - 60h], 0
        ; Exact mapped bytes 75 14: jne 0x575024
        __asm _emit 0x75
        __asm _emit 0x14
        push 521h
        push 5cbcc4h
        ; Exact mapped bytes E8 E1 F9 FB FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xf9
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x575024
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D3: jne 0x574ffd
        __asm _emit 0x75
        __asm _emit 0xd3
        mov edx, dword ptr [ebp + 28h]
        push edx
        mov eax, dword ptr [ebp + 24h]
        push eax
        mov ecx, dword ptr [ebp + 20h]
        push ecx
        mov edx, dword ptr [ebp + 1ch]
        push edx
        ; Exact mapped bytes 66 8B 45 18: mov ax, word ptr [ebp + 0x18]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x18
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        push 0
        mov eax, dword ptr [ebp - 60h]
        push eax
        mov ecx, dword ptr [ebp - 60h]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 18: call dword ptr [edx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x18
        mov dword ptr [ebp - 3ch], eax
        ; Exact mapped bytes E9 EB 00 00 00: jmp 0x575148
        __asm _emit 0xe9
        __asm _emit 0xeb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 1ch]
        mov ecx, dword ptr [eax]
        add ecx, 10h
        mov dword ptr [ebp - 38h], ecx
        mov edx, dword ptr [ebp + 1ch]
        mov eax, dword ptr [edx + 8]
        sub eax, 1
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp + 28h]
        push ecx
        mov edx, dword ptr [ebp + 24h]
        push edx
        lea eax, [ebp - 68h]
        push eax
        lea ecx, [ebp - 38h]
        push ecx
        push 3
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes FF 51 18: call dword ptr [ecx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x18
        mov dword ptr [ebp - 3ch], eax
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 75 20: jne 0x5750c7
        __asm _emit 0x75
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 68h]
        and edx, 0ffffh
        cmp edx, 9
        ; Exact mapped bytes 75 06: jne 0x5750bb
        __asm _emit 0x75
        __asm _emit 0x06
        cmp dword ptr [ebp - 60h], 0
        ; Exact mapped bytes 75 0C: jne 0x5750c7
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 3ch], 80020005h
        ; Exact mapped bytes E9 81 00 00 00: jmp 0x575148
        __asm _emit 0xe9
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 75 7B: jne 0x575148
        __asm _emit 0x75
        __asm _emit 0x7b
        mov eax, dword ptr [ebp - 68h]
        and eax, 0ffffh
        cmp eax, 9
        ; Exact mapped bytes 75 06: jne 0x5750e0
        __asm _emit 0x75
        __asm _emit 0x06
        cmp dword ptr [ebp - 60h], 0
        ; Exact mapped bytes 75 14: jne 0x5750f4
        __asm _emit 0x75
        __asm _emit 0x14
        push 535h
        push 5cbcc4h
        ; Exact mapped bytes E8 11 F9 FB FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xf9
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5750f4
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D3: jne 0x5750cd
        __asm _emit 0x75
        __asm _emit 0xd3
        mov edx, dword ptr [ebp + 1ch]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [edx + 4]
        mov dword ptr [ebp - 34h], ecx
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [edx + 0ch]
        mov dword ptr [ebp - 2ch], ecx
        mov edx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 30h], edx
        mov eax, dword ptr [ebp + 28h]
        push eax
        mov ecx, dword ptr [ebp + 24h]
        push ecx
        mov edx, dword ptr [ebp + 20h]
        push edx
        lea eax, [ebp - 38h]
        push eax
        ; Exact mapped bytes 66 8B 4D 18: mov cx, word ptr [ebp + 0x18]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x18
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        push 0
        mov ecx, dword ptr [ebp - 60h]
        push ecx
        mov edx, dword ptr [ebp - 60h]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 50 18: call dword ptr [eax + 0x18]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x18
        mov dword ptr [ebp - 3ch], eax
        lea ecx, [ebp - 68h]
        push ecx
        ; Exact mapped bytes FF 15 78 24 5E 00: call dword ptr [0x5e2478]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp dword ptr [ebp - 3ch], 80020003h
        ; Exact mapped bytes 74 05: je 0x575160
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 97 03 00 00: jmp 0x5754f7
        __asm _emit 0xe9
        __asm _emit 0x97
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 74 0E: je 0x575174
        __asm _emit 0x74
        __asm _emit 0x0e
        cmp dword ptr [ebp - 3ch], 80020003h
        ; Exact mapped bytes 74 05: je 0x575174
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 83 03 00 00: jmp 0x5754f7
        __asm _emit 0xe9
        __asm _emit 0x83
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 3ch], 80020003h
        ; Exact mapped bytes 74 1A: je 0x575197
        __asm _emit 0x74
        __asm _emit 0x1a
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 74 14: je 0x575197
        __asm _emit 0x74
        __asm _emit 0x14
        push 54ah
        push 5cbcc4h
        ; Exact mapped bytes E8 6E F8 FB FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xf8
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x575197
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D7: jne 0x575174
        __asm _emit 0x75
        __asm _emit 0xd7
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 74 35: je 0x5751d8
        __asm _emit 0x74
        __asm _emit 0x35
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 2F: je 0x5751d8
        __asm _emit 0x74
        __asm _emit 0x2f
        mov dword ptr [ebp - 14h], 0
        mov eax, dword ptr [ebp + 1ch]
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 15 78 24 5E 00: call dword ptr [0x5e2478]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 1ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [eax + 8], ecx
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [eax + 0ch], edx
        mov dword ptr [ebp - 3ch], 0
        mov eax, dword ptr [ebp + 1ch]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 58h], ecx
        mov edx, dword ptr [ebp + 18h]
        and edx, 0ffffh
        and edx, 3
        test edx, edx
        ; Exact mapped bytes 74 76: je 0x57526e
        __asm _emit 0x74
        __asm _emit 0x76
        mov eax, dword ptr [ebp + 18h]
        and eax, 0ffffh
        and eax, 1
        test eax, eax
        ; Exact mapped bytes 75 27: jne 0x57522e
        __asm _emit 0x75
        __asm _emit 0x27
        mov ecx, dword ptr [ebp - 50h]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 0C: mov dx, word ptr [ecx + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x0c
        test edx, edx
        ; Exact mapped bytes 75 0A: jne 0x57521e
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, 8002000eh
        ; Exact mapped bytes E9 24 03 00 00: jmp 0x575542
        __asm _emit 0xe9
        __asm _emit 0x24
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 20h], 0
        ; Exact mapped bytes 75 0A: jne 0x57522e
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, 8002000fh
        ; Exact mapped bytes E9 14 03 00 00: jmp 0x575542
        __asm _emit 0xe9
        __asm _emit 0x14
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 50h]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 75 37: jne 0x57526e
        __asm _emit 0x75
        __asm _emit 0x37
        mov ecx, dword ptr [ebp + 1ch]
        cmp dword ptr [ecx + 8], 0
        ; Exact mapped bytes 76 2E: jbe 0x57526e
        __asm _emit 0x76
        __asm _emit 0x2e
        mov edx, dword ptr [ebp - 50h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 0C: mov ax, word ptr [edx + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x0c
        cmp eax, 9
        ; Exact mapped bytes 74 0A: je 0x575258
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, 8002000eh
        ; Exact mapped bytes E9 EA 02 00 00: jmp 0x575542
        __asm _emit 0xe9
        __asm _emit 0xea
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 1ch]
        mov dword ptr [ecx + 8], 0
        cmp dword ptr [ebp + 20h], 0
        ; Exact mapped bytes 75 06: jne 0x57526e
        __asm _emit 0x75
        __asm _emit 0x06
        lea edx, [ebp - 68h]
        mov dword ptr [ebp + 20h], edx
        mov eax, dword ptr [ebp + 1ch]
        cmp dword ptr [eax + 8], 1
        ; Exact mapped bytes 76 25: jbe 0x57529c
        __asm _emit 0x76
        __asm _emit 0x25
        mov ecx, dword ptr [ebp + 18h]
        and ecx, 0ffffh
        and ecx, 0ch
        test ecx, ecx
        ; Exact mapped bytes 74 15: je 0x57529c
        __asm _emit 0x74
        __asm _emit 0x15
        mov edx, dword ptr [ebp - 50h]
        cmp dword ptr [edx + 10h], 0
        ; Exact mapped bytes 75 0C: jne 0x57529c
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 3ch], 8002000eh
        ; Exact mapped bytes E9 5B 02 00 00: jmp 0x5754f7
        __asm _emit 0xe9
        __asm _emit 0x5b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 50h]
        cmp dword ptr [eax + 10h], 0
        ; Exact mapped bytes 75 1B: jne 0x5752c0
        __asm _emit 0x75
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp + 1ch]
        cmp dword ptr [ecx + 8], 0
        ; Exact mapped bytes 75 12: jne 0x5752c0
        __asm _emit 0x75
        __asm _emit 0x12
        cmp dword ptr [ebp + 20h], 0
        ; Exact mapped bytes 75 0C: jne 0x5752c0
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 3ch], 8002000fh
        ; Exact mapped bytes E9 37 02 00 00: jmp 0x5754f7
        __asm _emit 0xe9
        __asm _emit 0x37
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 6ch]
        mov eax, dword ptr [edx + 14h]
        mov dword ptr [ebp - 54h], eax
        xor ecx, ecx
        cmp dword ptr [ebp + 20h], 0
        setne cl
        mov edx, dword ptr [ebp - 6ch]
        mov dword ptr [edx + 14h], ecx
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 50h]
        cmp dword ptr [eax + 10h], 0
        ; Exact mapped bytes 75 44: jne 0x57532c
        __asm _emit 0x75
        __asm _emit 0x44
        mov ecx, dword ptr [ebp + 1ch]
        cmp dword ptr [ecx + 8], 0
        ; Exact mapped bytes 75 16: jne 0x575307
        __asm _emit 0x75
        __asm _emit 0x16
        lea edx, [ebp - 18h]
        push edx
        mov eax, dword ptr [ebp + 20h]
        push eax
        mov ecx, dword ptr [ebp - 50h]
        push ecx
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 7B DD FF FF: call 0x573080
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xdd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 23: jmp 0x57532a
        __asm _emit 0xeb
        __asm _emit 0x23
        lea edx, [ebp - 18h]
        push edx
        mov eax, dword ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp - 50h]
        push ecx
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 49 DF FF FF: call 0x573264
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 84h], eax
        mov edx, dword ptr [ebp - 84h]
        mov dword ptr [ebp - 3ch], edx
        ; Exact mapped bytes EB 2C: jmp 0x575358
        __asm _emit 0xeb
        __asm _emit 0x2c
        lea eax, [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp + 1ch]
        push ecx
        mov edx, dword ptr [ebp + 20h]
        push edx
        ; Exact mapped bytes 66 8B 45 18: mov ax, word ptr [ebp + 0x18]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x18
        push eax
        mov ecx, dword ptr [ebp - 50h]
        push ecx
        mov ecx, dword ptr [ebp - 6ch]
        ; Exact mapped bytes E8 23 F0 FF FF: call 0x57436c
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 88h], eax
        mov edx, dword ptr [ebp - 88h]
        mov dword ptr [ebp - 3ch], edx
        ; Exact mapped bytes E9 A1 00 00 00: jmp 0x5753fe
        __asm _emit 0xe9
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 588860h
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 26 5D F8 FF: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x5d
        __asm _emit 0xf8
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x575382
        __asm _emit 0x75
        __asm _emit 0x14
        push 596h
        push 5cbcc4h
        ; Exact mapped bytes E8 83 F6 FB FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xf6
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x575382
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D5: jne 0x57535d
        __asm _emit 0x75
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp - 74h]
        mov edx, dword ptr [ecx + 0ch]
        mov dword ptr [ebp - 3ch], edx
        mov ecx, dword ptr [ebp - 74h]
        ; Exact mapped bytes E8 FF 5A F8 FF: call 0x4fae98
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x5a
        __asm _emit 0xf8
        __asm _emit 0xff
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 F2: jne 0x575391
        __asm _emit 0x75
        __asm _emit 0xf2
        mov eax, 5753feh
        ret
        push 584850h
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 DE 5C F8 FF: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x5c
        __asm _emit 0xf8
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x5753ca
        __asm _emit 0x75
        __asm _emit 0x14
        push 59bh
        push 5cbcc4h
        ; Exact mapped bytes E8 3B F6 FB FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xf6
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5753ca
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x5753a5
        __asm _emit 0x75
        __asm _emit 0xd5
        cmp dword ptr [ebp + 24h], 0
        ; Exact mapped bytes 74 0D: je 0x5753e3
        __asm _emit 0x74
        __asm _emit 0x0d
        mov edx, dword ptr [ebp - 78h]
        push edx
        mov eax, dword ptr [ebp + 24h]
        push eax
        ; Exact mapped bytes E8 E4 01 00 00: call 0x5755c7
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 78h]
        ; Exact mapped bytes E8 AD 5A F8 FF: call 0x4fae98
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x5a
        __asm _emit 0xf8
        __asm _emit 0xff
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 F2: jne 0x5753e3
        __asm _emit 0x75
        __asm _emit 0xf2
        mov dword ptr [ebp - 3ch], 80020009h
        mov eax, 5753feh
        ret
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 6ch]
        mov eax, dword ptr [ebp - 54h]
        mov dword ptr [edx + 14h], eax
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 0F 85 DF 00 00 00: jne 0x5754f7
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xdf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 1ch]
        mov edx, dword ptr [ebp - 58h]
        cmp edx, dword ptr [ecx + 8]
        ; Exact mapped bytes 0F 86 D0 00 00 00: jbe 0x5754f7
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 18h]
        and eax, 0ffffh
        and eax, 3
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x57544a
        __asm _emit 0x75
        __asm _emit 0x14
        push 5aeh
        push 5cbcc4h
        ; Exact mapped bytes E8 BB F5 FB FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xf5
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x57544a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D7: jne 0x575427
        __asm _emit 0x75
        __asm _emit 0xd7
        cmp dword ptr [ebp + 20h], 0
        ; Exact mapped bytes 75 14: jne 0x57546a
        __asm _emit 0x75
        __asm _emit 0x14
        push 5afh
        push 5cbcc4h
        ; Exact mapped bytes E8 9B F5 FB FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xf5
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x57546a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x575450
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, dword ptr [ebp + 20h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        cmp ecx, 9
        ; Exact mapped bytes 75 09: jne 0x575486
        __asm _emit 0x75
        __asm _emit 0x09
        mov edx, dword ptr [ebp + 20h]
        cmp dword ptr [edx + 8], 0
        ; Exact mapped bytes 75 09: jne 0x57548f
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 3ch], 80020005h
        ; Exact mapped bytes EB 68: jmp 0x5754f7
        __asm _emit 0xeb
        __asm _emit 0x68
        mov eax, dword ptr [ebp + 1ch]
        mov ecx, dword ptr [ebp - 58h]
        mov dword ptr [eax + 8], ecx
        mov edx, dword ptr [ebp + 20h]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 7ch], eax
        mov ecx, dword ptr [ebp + 20h]
        lea edx, [ebp - 68h]
        cmp ecx, edx
        ; Exact mapped bytes 74 0B: je 0x5754b6
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ebp + 20h]
        push eax
        ; Exact mapped bytes E8 D4 85 F2 FF: call 0x49da88
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x85
        __asm _emit 0xf2
        __asm _emit 0xff
    }
}
