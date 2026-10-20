// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F93FB .. +0x396 bytes.
extern "C" __declspec(naked) void FUN_004f93fb_004F93FB() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58d6d0h
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
        push 674fe8h
        mov eax, dword ptr [ebp - 60h]
        push eax
        ; Exact mapped bytes E8 2D 0E FE FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x0e
        __asm _emit 0xfe
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7C 0B: jl 0x4f9444
        __asm _emit 0x7c
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 60h]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 68h]
        ; Exact mapped bytes 7C 14: jl 0x4f9458
        __asm _emit 0x7c
        __asm _emit 0x14
        push 0f5h
        push 674fe8h
        ; Exact mapped bytes E8 ED F8 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xf8
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f9458
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D5: jne 0x4f9433
        __asm _emit 0x75
        __asm _emit 0xd5
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 7C 0B: jl 0x4f946f
        __asm _emit 0x7c
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 60h]
        mov edx, dword ptr [ebp + 0ch]
        cmp edx, dword ptr [ecx + 6ch]
        ; Exact mapped bytes 7C 14: jl 0x4f9483
        __asm _emit 0x7c
        __asm _emit 0x14
        push 0f6h
        push 674fe8h
        ; Exact mapped bytes E8 C2 F8 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xf8
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f9483
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D5: jne 0x4f945e
        __asm _emit 0x75
        __asm _emit 0xd5
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 14: jne 0x4f94a3
        __asm _emit 0x75
        __asm _emit 0x14
        push 0f7h
        push 674fe8h
        ; Exact mapped bytes E8 A2 F8 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xf8
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f94a3
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4f9489
        __asm _emit 0x75
        __asm _emit 0xe0
        push 634aa0h
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 74 10 FE FF: call 0x4da52a
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x10
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4f94ce
        __asm _emit 0x75
        __asm _emit 0x14
        push 0f8h
        push 674fe8h
        ; Exact mapped bytes E8 77 F8 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xf8
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f94ce
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4f94a9
        __asm _emit 0x75
        __asm _emit 0xd5
        push 0
        push 18h
        mov eax, dword ptr [ebp + 10h]
        push eax
        ; Exact mapped bytes E8 85 9F FA FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x9f
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4f94f9
        __asm _emit 0x75
        __asm _emit 0x14
        push 0f9h
        push 674fe8h
        ; Exact mapped bytes E8 4C F8 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xf8
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f94f9
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x4f94d4
        __asm _emit 0x75
        __asm _emit 0xd5
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 7D 03 00 00: call 0x4f988c
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 59 C8 FD FF: call 0x4d5d71
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xc8
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 3F: je 0x4f955b
        __asm _emit 0x74
        __asm _emit 0x3f
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        push 67502ch
        ; Exact mapped bytes E8 E7 70 FA FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x70
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 0ch
        mov eax, 1
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x4f954e
        __asm _emit 0x74
        __asm _emit 0x14
        push 0ffh
        push 674fe8h
        ; Exact mapped bytes E8 F7 F7 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xf7
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f954e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x4f9531
        __asm _emit 0x75
        __asm _emit 0xdd
        xor eax, eax
        ; Exact mapped bytes E9 75 02 00 00: jmp 0x4f97d0
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
        ; Exact mapped bytes E8 3D E8 02 00: call 0x527dcd
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x00
        cmp dword ptr [ebp + 1ch], 0
        ; Exact mapped bytes 75 7B: jne 0x4f9611
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
        ; Exact mapped bytes 74 53: je 0x4f9604
        __asm _emit 0x74
        __asm _emit 0x53
        push 636f20h
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 D2 0B FE FF: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x0b
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 42: je 0x4f9604
        __asm _emit 0x74
        __asm _emit 0x42
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 14: je 0x4f95dc
        __asm _emit 0x74
        __asm _emit 0x14
        push 113h
        push 674fe8h
        ; Exact mapped bytes E8 69 F7 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xf7
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f95dc
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4f95c2
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 2ch], ecx
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 26 7E 03 00: call 0x531416
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x7e
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 34h], eax
        cmp dword ptr [ebp - 34h], 0
        ; Exact mapped bytes 74 0B: je 0x4f9604
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 01 7F 03 00: call 0x531502
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x7f
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 30h], eax
        lea edx, [ebp - 38h]
        mov dword ptr [ebp + 1ch], edx
        mov dword ptr [ebp - 3ch], 1
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 C9 0D FE FF: call 0x4da3e9
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x0d
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 64h], eax
        mov eax, dword ptr [ebp - 64h]
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 75 05: jne 0x4f9634
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 A8 98 FA FF: call 0x4a2edc
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x98
        __asm _emit 0xfa
        __asm _emit 0xff
        ; Exact mapped bytes EB 52: jmp 0x4f9688
        __asm _emit 0xeb
        __asm _emit 0x52
        push 636e20h
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 4D 0B FE FF: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x0b
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4f965b
        __asm _emit 0x75
        __asm _emit 0x14
        push 125h
        push 674fe8h
        ; Exact mapped bytes E8 EA F6 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xf6
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f965b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x4f9636
        __asm _emit 0x75
        __asm _emit 0xd5
        push 67506ch
        push 675098h
        ; Exact mapped bytes E8 A5 6F FA FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x6f
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 4ch], 0
        mov eax, 4f9680h
        ret
        mov eax, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E9 48 01 00 00: jmp 0x4f97d0
        __asm _emit 0xe9
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        push 634aa0h
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 F4 0A FE FF: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x0a
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4f96b4
        __asm _emit 0x75
        __asm _emit 0x14
        push 12dh
        push 674fe8h
        ; Exact mapped bytes E8 91 F6 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xf6
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f96b4
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4f968f
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp - 14h]
        cmp dword ptr [eax + 1ch], 0
        ; Exact mapped bytes 74 14: je 0x4f96d7
        __asm _emit 0x74
        __asm _emit 0x14
        push 12eh
        push 674fe8h
        ; Exact mapped bytes E8 6E F6 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xf6
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f96d7
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x4f96ba
        __asm _emit 0x75
        __asm _emit 0xdd
        mov dword ptr [ebp - 40h], 50800000h
        ; Exact mapped bytes 83 3D 0C 6E 68 00 00: cmp dword ptr [0x686e0c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x0c
        __asm _emit 0x6e
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 0C: je 0x4f96f9
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 40h]
        and edx, 0ff7fffffh
        mov dword ptr [ebp - 40h], edx
        push 0
        push 0
        lea ecx, [ebp - 5ch]
        ; Exact mapped bytes E8 57 87 03 00: call 0x531e5c
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x87
        __asm _emit 0x03
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
        ; Exact mapped bytes E8 1C 8B 03 00: call 0x532244
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x8b
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 1ch]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 50 01 00 00: call 0x4f988c
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
        ; Exact mapped bytes 75 16: jne 0x4f9772
        __asm _emit 0x75
        __asm _emit 0x16
        push 67509ch
        push 6750d0h
        ; Exact mapped bytes E8 AA 6E FA FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x6e
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 8
        xor eax, eax
        ; Exact mapped bytes EB 5E: jmp 0x4f97d0
        __asm _emit 0xeb
        __asm _emit 0x5e
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 0A 01 00 00: call 0x4f988c
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, eax
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 08 BF 68 00: call dword ptr [0x68bf08]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
    }
}
