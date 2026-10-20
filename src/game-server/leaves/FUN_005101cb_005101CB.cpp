// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005101CB .. +0x396 bytes.
extern "C" __declspec(naked) void FUN_005101cb_005101CB() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57db70h
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
        sub esp, 54h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], esp
        mov dword ptr [ebp - 60h], ecx
        push 0f4h
        push 5c84b0h
        mov eax, dword ptr [ebp - 60h]
        push eax
        ; Exact mapped bytes E8 5D AF FE FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xaf
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7C 0B: jl 0x510214
        __asm _emit 0x7c
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 60h]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 68h]
        ; Exact mapped bytes 7C 14: jl 0x510228
        __asm _emit 0x7c
        __asm _emit 0x14
        push 0f5h
        push 5c84b0h
        ; Exact mapped bytes E8 DD 47 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x47
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x510228
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D5: jne 0x510203
        __asm _emit 0x75
        __asm _emit 0xd5
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 7C 0B: jl 0x51023f
        __asm _emit 0x7c
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 60h]
        mov edx, dword ptr [ebp + 0ch]
        cmp edx, dword ptr [ecx + 6ch]
        ; Exact mapped bytes 7C 14: jl 0x510253
        __asm _emit 0x7c
        __asm _emit 0x14
        push 0f6h
        push 5c84b0h
        ; Exact mapped bytes E8 B2 47 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x47
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x510253
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D5: jne 0x51022e
        __asm _emit 0x75
        __asm _emit 0xd5
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 14: jne 0x510273
        __asm _emit 0x75
        __asm _emit 0x14
        push 0f7h
        push 5c84b0h
        ; Exact mapped bytes E8 92 47 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x47
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x510273
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x510259
        __asm _emit 0x75
        __asm _emit 0xe0
        push 582b80h
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 A4 B1 FE FF: call 0x4fb42a
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xb1
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x51029e
        __asm _emit 0x75
        __asm _emit 0x14
        push 0f8h
        push 5c84b0h
        ; Exact mapped bytes E8 67 47 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x47
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51029e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x510279
        __asm _emit 0x75
        __asm _emit 0xd5
        push 0
        push 18h
        mov eax, dword ptr [ebp + 10h]
        push eax
        ; Exact mapped bytes E8 A5 FB FB FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xfb
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x5102c9
        __asm _emit 0x75
        __asm _emit 0x14
        push 0f9h
        push 5c84b0h
        ; Exact mapped bytes E8 3C 47 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x47
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5102c9
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x5102a4
        __asm _emit 0x75
        __asm _emit 0xd5
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 7D 03 00 00: call 0x51065c
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 F9 E5 FD FF: call 0x4ee8e1
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xe5
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 3F: je 0x51032b
        __asm _emit 0x74
        __asm _emit 0x3f
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        push 5c84f4h
        ; Exact mapped bytes E8 17 F9 FB FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xf9
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 0ch
        mov eax, 1
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x51031e
        __asm _emit 0x74
        __asm _emit 0x14
        push 0ffh
        push 5c84b0h
        ; Exact mapped bytes E8 E7 46 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x46
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51031e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x510301
        __asm _emit 0x75
        __asm _emit 0xdd
        xor eax, eax
        ; Exact mapped bytes E9 75 02 00 00: jmp 0x5105a0
        __asm _emit 0xe9
        __asm _emit 0x75
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        imul edx, edx, 0ch
        mov eax, dword ptr [ebp - 60h]
        mov ecx, dword ptr [eax + 78h]
        mov eax, dword ptr [ebp + 14h]
        mov dword ptr [ecx + edx + 4], eax
        mov ecx, dword ptr [ebp + 8]
        imul ecx, ecx, 0ch
        mov edx, dword ptr [ebp - 60h]
        mov eax, dword ptr [edx + 7ch]
        mov edx, dword ptr [ebp + 18h]
        mov dword ptr [eax + ecx + 4], edx
        mov dword ptr [ebp - 3ch], 0
        lea ecx, [ebp - 38h]
        ; Exact mapped bytes E8 B3 3C 02 00: call 0x534013
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x3c
        __asm _emit 0x02
        __asm _emit 0x00
        cmp dword ptr [ebp + 1ch], 0
        ; Exact mapped bytes 75 7B: jne 0x5103e1
        __asm _emit 0x75
        __asm _emit 0x7b
        push 0
        push 0
        mov ecx, dword ptr [ebp - 60h]
        mov eax, dword ptr [ebp - 60h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 92 E8 00 00 00: call dword ptr [edx + 0xe8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 44h], eax
        cmp dword ptr [ebp - 44h], 0
        ; Exact mapped bytes 74 53: je 0x5103d4
        __asm _emit 0x74
        __asm _emit 0x53
        push 585e68h
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 02 AD FE FF: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xad
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 42: je 0x5103d4
        __asm _emit 0x74
        __asm _emit 0x42
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 14: je 0x5103ac
        __asm _emit 0x74
        __asm _emit 0x14
        push 113h
        push 5c84b0h
        ; Exact mapped bytes E8 59 46 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x46
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5103ac
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x510392
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 2ch], ecx
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 05 16 03 00: call 0x5419c5
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x16
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 34h], eax
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 74 0B: je 0x5103d4
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 E0 16 03 00: call 0x541ab1
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x16
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], eax
        lea edx, [ebp - 38h]
        mov dword ptr [ebp + 1ch], edx
        mov dword ptr [ebp - 3ch], 1
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 F9 AE FE FF: call 0x4fb2e9
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xae
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 64h], eax
        mov eax, dword ptr [ebp - 64h]
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 75 05: jne 0x510404
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 A8 F9 FB FF: call 0x4cfdac
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xf9
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes EB 52: jmp 0x510458
        __asm _emit 0xeb
        __asm _emit 0x52
        push 584850h
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 7D AC FE FF: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xac
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x51042b
        __asm _emit 0x75
        __asm _emit 0x14
        push 125h
        push 5c84b0h
        ; Exact mapped bytes E8 DA 45 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x45
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51042b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x510406
        __asm _emit 0x75
        __asm _emit 0xd5
        push 5c8534h
        push 5c8560h
        ; Exact mapped bytes E8 D5 F7 FB FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xf7
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 4ch], 0
        mov eax, 510450h
        ret
        mov eax, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E9 48 01 00 00: jmp 0x5105a0
        __asm _emit 0xe9
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        push 582b80h
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 24 AC FE FF: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xac
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x510484
        __asm _emit 0x75
        __asm _emit 0x14
        push 12dh
        push 5c84b0h
        ; Exact mapped bytes E8 81 45 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x45
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x510484
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x51045f
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp - 14h]
        cmp dword ptr [eax + 1ch], 0
        ; Exact mapped bytes 74 14: je 0x5104a7
        __asm _emit 0x74
        __asm _emit 0x14
        push 12eh
        push 5c84b0h
        ; Exact mapped bytes E8 5E 45 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x45
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5104a7
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x51048a
        __asm _emit 0x75
        __asm _emit 0xdd
        mov dword ptr [ebp - 40h], 50800000h
        ; Exact mapped bytes 83 3D F4 E8 5D 00 00: cmp dword ptr [0x5de8f4], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xf4
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0C: je 0x5104c9
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 40h]
        and edx, 0ff7fffffh
        mov dword ptr [ebp - 40h], edx
        push 0
        push 0
        lea ecx, [ebp - 5ch]
        ; Exact mapped bytes E8 94 54 02 00: call 0x535969
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 54h], ecx
        mov dword ptr [ebp - 50h], edx
        mov eax, dword ptr [ebp + 18h]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp - 50h]
        push edx
        mov eax, dword ptr [ebp - 54h]
        push eax
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 D6 58 02 00: call 0x535dce
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 1ch]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 50 01 00 00: call 0x51065c
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 60h]
        push ecx
        lea edx, [ebp - 24h]
        push edx
        mov eax, dword ptr [ebp - 40h]
        push eax
        push 0
        push 0
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 50 5C: call dword ptr [eax + 0x5c]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x5c
        test eax, eax
        ; Exact mapped bytes 75 16: jne 0x510542
        __asm _emit 0x75
        __asm _emit 0x16
        push 5c8564h
        push 5c8598h
        ; Exact mapped bytes E8 DA F6 FB FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xf6
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 8
        xor eax, eax
        ; Exact mapped bytes EB 5E: jmp 0x5105a0
        __asm _emit 0xeb
        __asm _emit 0x5e
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 0A 01 00 00: call 0x51065c
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, eax
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 1C 26 5E 00: call dword ptr [0x5e261c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
    }
}
