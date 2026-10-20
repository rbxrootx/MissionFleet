// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004EFE20 .. +0x33E bytes.
extern "C" __declspec(naked) void FUN_004efe20_004EFE20() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 33ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 33ch], ecx
        mov ecx, dword ptr [ebp - 33ch]
        add ecx, 4
        ; Exact mapped bytes E8 17 6C 03 00: call 0x526a57
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x6c
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 320h], eax
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 10ch], 0
        mov dword ptr [ebp - 31ch], 0
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 BC B7 68 00: call dword ptr [0x68b7bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp eax, 104h
        ; Exact mapped bytes 72 14: jb 0x4efe86
        __asm _emit 0x72
        __asm _emit 0x14
        push 37ah
        push 678024h
        ; Exact mapped bytes E8 BF 8E 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x8e
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4efe86
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x4efe61
        __asm _emit 0x75
        __asm _emit 0xd5
        mov edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        cmp eax, 22h
        ; Exact mapped bytes 75 09: jne 0x4efea0
        __asm _emit 0x75
        __asm _emit 0x09
        mov ecx, dword ptr [ebp + 8]
        add ecx, 1
        mov dword ptr [ebp + 8], ecx
        push 104h
        mov edx, dword ptr [ebp + 8]
        push edx
        lea eax, [ebp - 210h]
        push eax
        ; Exact mapped bytes FF 15 EC B7 68 00: call dword ptr [0x68b7ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        push 22h
        lea ecx, [ebp - 210h]
        push ecx
        ; Exact mapped bytes E8 43 14 F1 FF: call 0x401307
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x14
        __asm _emit 0xf1
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 318h], eax
        cmp dword ptr [ebp - 318h], 0
        ; Exact mapped bytes 74 09: je 0x4efedf
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 318h]
        mov byte ptr [edx], 0
        lea eax, [ebp - 210h]
        push eax
        lea ecx, [ebp - 108h]
        push ecx
        ; Exact mapped bytes E8 AD EB FE FF: call 0x4dea9f
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xeb
        __asm _emit 0xfe
        __asm _emit 0xff
        push 104h
        lea edx, [ebp - 314h]
        push edx
        lea eax, [ebp - 108h]
        push eax
        ; Exact mapped bytes E8 66 1C 04 00: call 0x531b70
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x1c
        __asm _emit 0x04
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 EB E9 FE FF: call 0x4de8fb
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xe9
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x4eff28
        __asm _emit 0x74
        __asm _emit 0x14
        lea ecx, [ebp - 314h]
        push ecx
        lea edx, [ebp - 108h]
        push edx
        ; Exact mapped bytes FF 15 B4 B7 68 00: call dword ptr [0x68b7b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp dword ptr [ebp - 320h], 0
        ; Exact mapped bytes 0F 84 C3 00 00 00: je 0x4efff8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 320h]
        push eax
        mov ecx, dword ptr [ebp - 33ch]
        add ecx, 4
        ; Exact mapped bytes E8 2F 6B 03 00: call 0x526a79
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x6b
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 324h], ecx
        push 639040h
        mov ecx, dword ptr [ebp - 324h]
        ; Exact mapped bytes E8 2E A2 FE FF: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xa2
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4eff7a
        __asm _emit 0x75
        __asm _emit 0x14
        push 38ah
        push 678024h
        ; Exact mapped bytes E8 CB 8D 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x8d
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4eff7a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D2: jne 0x4eff52
        __asm _emit 0x75
        __asm _emit 0xd2
        cmp dword ptr [ebp - 31ch], 0
        ; Exact mapped bytes 74 14: je 0x4eff9d
        __asm _emit 0x74
        __asm _emit 0x14
        push 38dh
        push 678024h
        ; Exact mapped bytes E8 A8 8D 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x8d
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4eff9d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x4eff80
        __asm _emit 0x75
        __asm _emit 0xdd
        lea ecx, [ebp - 31ch]
        push ecx
        lea edx, [ebp - 108h]
        push edx
        mov eax, dword ptr [ebp - 324h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 324h]
        ; Exact mapped bytes FF 52 70: call dword ptr [edx + 0x70]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x70
        mov dword ptr [ebp - 328h], eax
        mov eax, dword ptr [ebp - 328h]
        cmp eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 7E 15: jle 0x4effe8
        __asm _emit 0x7e
        __asm _emit 0x15
        mov ecx, dword ptr [ebp - 328h]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 324h]
        mov dword ptr [ebp - 10ch], edx
        cmp dword ptr [ebp - 328h], 5
        ; Exact mapped bytes 75 02: jne 0x4efff3
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 05: jmp 0x4efff8
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 30 FF FF FF: jmp 0x4eff28
        __asm _emit 0xe9
        __asm _emit 0x30
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 31ch], 0
        ; Exact mapped bytes 0F 84 18 01 00 00: je 0x4f011d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 31ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 31ch]
        ; Exact mapped bytes FF 52 68: call dword ptr [edx + 0x68]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x68
        mov dword ptr [ebp - 32ch], eax
        cmp dword ptr [ebp - 32ch], 0
        ; Exact mapped bytes 0F 84 DA 00 00 00: je 0x4f0103
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 32ch]
        push eax
        mov ecx, dword ptr [ebp - 31ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 31ch]
        ; Exact mapped bytes FF 52 6C: call dword ptr [edx + 0x6c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x6c
        mov dword ptr [ebp - 330h], eax
        push 39eh
        push 678024h
        mov eax, dword ptr [ebp - 330h]
        push eax
        ; Exact mapped bytes E8 03 A2 FE FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xa2
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 330h]
        ; Exact mapped bytes E8 0A 2A FE FF: call 0x4d2a72
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x2a
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 334h], eax
        cmp dword ptr [ebp - 334h], 0
        ; Exact mapped bytes 74 18: je 0x4f008f
        __asm _emit 0x74
        __asm _emit 0x18
        push -1
        mov ecx, dword ptr [ebp - 334h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 334h]
        ; Exact mapped bytes FF 92 D4 00 00 00: call dword ptr [edx + 0xd4]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 12: jmp 0x4f00a1
        __asm _emit 0xeb
        __asm _emit 0x12
        push 678180h
        push 6781b8h
        ; Exact mapped bytes E8 77 05 FB FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x05
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes E8 CA 19 04 00: call 0x531a70
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x19
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [eax + 1ch]
        mov dword ptr [ebp - 338h], eax
        mov ecx, dword ptr [ebp - 334h]
        cmp ecx, dword ptr [ebp - 338h]
        ; Exact mapped bytes 74 44: je 0x4f0101
        __asm _emit 0x74
        __asm _emit 0x44
        push 636f38h
        mov ecx, dword ptr [ebp - 338h]
        ; Exact mapped bytes E8 C3 A0 FE FF: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xa0
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4f00e5
        __asm _emit 0x75
        __asm _emit 0x14
        push 3a7h
        push 678024h
        ; Exact mapped bytes E8 60 8C 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x8c
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f00e5
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D2: jne 0x4f00bd
        __asm _emit 0x75
        __asm _emit 0xd2
        push -1
        mov eax, dword ptr [ebp - 338h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 338h]
        ; Exact mapped bytes FF 92 D4 00 00 00: call dword ptr [edx + 0xd4]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 12: jmp 0x4f0115
        __asm _emit 0xeb
        __asm _emit 0x12
        push 6781bch
        push 6781f4h
        ; Exact mapped bytes E8 03 05 FB FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x05
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [ebp - 31ch]
        ; Exact mapped bytes EB 38: jmp 0x4f0155
        __asm _emit 0xeb
        __asm _emit 0x38
        cmp dword ptr [ebp - 10ch], 0
        ; Exact mapped bytes 75 12: jne 0x4f0138
        __asm _emit 0x75
        __asm _emit 0x12
        push -1
        push 0
        push 0f101h
        ; Exact mapped bytes E8 F5 69 00 00: call 0x4f6b29
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x69
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes EB 1D: jmp 0x4f0155
        __asm _emit 0xeb
        __asm _emit 0x1d
        push 1
        lea eax, [ebp - 108h]
        push eax
        mov ecx, dword ptr [ebp - 10ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes FF 92 88 00 00 00: call dword ptr [edx + 0x88]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x88
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
