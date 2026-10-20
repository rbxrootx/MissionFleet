// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004DDBB3 .. +0x30D bytes.
extern "C" __declspec(naked) void FUN_004ddbb3_004DDBB3() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 12ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 124h], ecx
        push 72h
        push 677f28h
        mov eax, dword ptr [ebp - 124h]
        push eax
        ; Exact mapped bytes E8 88 C6 FF FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xc6
        __asm _emit 0xff
        __asm _emit 0xff
        push -1
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 5F 58 FC FF: call 0x4a3442
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x58
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x4ddbf8
        __asm _emit 0x75
        __asm _emit 0x11
        push 73h
        push 677f28h
        ; Exact mapped bytes E8 4D B1 04 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xb1
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ddbf8
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DA: jne 0x4ddbd8
        __asm _emit 0x75
        __asm _emit 0xda
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 22: je 0x4ddc26
        __asm _emit 0x74
        __asm _emit 0x22
        push 1
        push 18h
        mov eax, dword ptr [ebp + 10h]
        push eax
        ; Exact mapped bytes E8 55 58 FC FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x58
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x4ddc26
        __asm _emit 0x75
        __asm _emit 0x11
        push 75h
        push 677f28h
        ; Exact mapped bytes E8 1F B1 04 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xb1
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ddc26
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D2: jne 0x4ddbfe
        __asm _emit 0x75
        __asm _emit 0xd2
        mov edx, dword ptr [ebp + 0ch]
        and edx, 4000h
        test edx, edx
        ; Exact mapped bytes 74 11: je 0x4ddc4a
        __asm _emit 0x74
        __asm _emit 0x11
        push 76h
        push 677f28h
        ; Exact mapped bytes E8 FB B0 04 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xb0
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ddc4a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DC: jne 0x4ddc2c
        __asm _emit 0x75
        __asm _emit 0xdc
        mov ecx, dword ptr [ebp + 0ch]
        and ch, 7fh
        mov dword ptr [ebp + 0ch], ecx
        mov edx, dword ptr [ebp - 124h]
        mov dword ptr [edx + 8], 0
        mov eax, dword ptr [ebp - 124h]
        mov dword ptr [eax + 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 124h]
        add ecx, 0ch
        ; Exact mapped bytes E8 D1 EA FE FF: call 0x4cc752
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xea
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        push ecx
        lea edx, [ebp - 110h]
        push edx
        ; Exact mapped bytes E8 0E 0E 00 00: call 0x4dea9f
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 110h]
        push eax
        mov ecx, dword ptr [ebp - 124h]
        add ecx, 0ch
        ; Exact mapped bytes E8 F7 EE FE FF: call 0x4ccb9d
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xee
        __asm _emit 0xfe
        __asm _emit 0xff
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 74 01: je 0x4ddcad
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 F3: jne 0x4ddca6
        __asm _emit 0x75
        __asm _emit 0xf3
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ddcba
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 F3: jne 0x4ddcb3
        __asm _emit 0x75
        __asm _emit 0xf3
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 74 01: je 0x4ddcc7
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 F3: jne 0x4ddcc0
        __asm _emit 0x75
        __asm _emit 0xf3
        mov dword ptr [ebp - 120h], 0
        mov ecx, dword ptr [ebp + 0ch]
        and ecx, 3
        mov dword ptr [ebp - 128h], ecx
        cmp dword ptr [ebp - 128h], 0
        ; Exact mapped bytes 74 14: je 0x4ddd00
        __asm _emit 0x74
        __asm _emit 0x14
        cmp dword ptr [ebp - 128h], 1
        ; Exact mapped bytes 74 17: je 0x4ddd0c
        __asm _emit 0x74
        __asm _emit 0x17
        cmp dword ptr [ebp - 128h], 2
        ; Exact mapped bytes 74 1A: je 0x4ddd18
        __asm _emit 0x74
        __asm _emit 0x1a
        ; Exact mapped bytes EB 24: jmp 0x4ddd24
        __asm _emit 0xeb
        __asm _emit 0x24
        mov dword ptr [ebp - 120h], 80000000h
        ; Exact mapped bytes EB 3B: jmp 0x4ddd47
        __asm _emit 0xeb
        __asm _emit 0x3b
        mov dword ptr [ebp - 120h], 40000000h
        ; Exact mapped bytes EB 2F: jmp 0x4ddd47
        __asm _emit 0xeb
        __asm _emit 0x2f
        mov dword ptr [ebp - 120h], 0c0000000h
        ; Exact mapped bytes EB 23: jmp 0x4ddd47
        __asm _emit 0xeb
        __asm _emit 0x23
        mov edx, 1
        test edx, edx
        ; Exact mapped bytes 74 14: je 0x4ddd41
        __asm _emit 0x74
        __asm _emit 0x14
        push 95h
        push 677f28h
        ; Exact mapped bytes E8 04 B0 04 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xb0
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ddd41
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x4ddd24
        __asm _emit 0x75
        __asm _emit 0xdd
        mov dword ptr [ebp - 118h], 0
        mov ecx, dword ptr [ebp + 0ch]
        and ecx, 70h
        mov dword ptr [ebp - 12ch], ecx
        cmp dword ptr [ebp - 12ch], 40h
        ; Exact mapped bytes 77 15: ja 0x4ddd7b
        __asm _emit 0x77
        __asm _emit 0x15
        mov eax, dword ptr [ebp - 12ch]
        xor edx, edx
        mov dl, byte ptr [eax + 4dded4h]
        ; Exact mapped bytes FF 24 95 C0 DE 4D 00: jmp dword ptr [edx*4 + 0x4ddec0]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0xc0
        __asm _emit 0xde
        __asm _emit 0x4d
        __asm _emit 0x00
        mov ecx, 1
        test ecx, ecx
        ; Exact mapped bytes 74 14: je 0x4ddd98
        __asm _emit 0x74
        __asm _emit 0x14
        push 9dh
        push 677f28h
        ; Exact mapped bytes E8 AD AF 04 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xaf
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ddd98
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x4ddd7b
        __asm _emit 0x75
        __asm _emit 0xdd
        mov dword ptr [ebp - 118h], 0
        ; Exact mapped bytes EB 22: jmp 0x4dddcc
        __asm _emit 0xeb
        __asm _emit 0x22
        mov dword ptr [ebp - 118h], 1
        ; Exact mapped bytes EB 16: jmp 0x4dddcc
        __asm _emit 0xeb
        __asm _emit 0x16
        mov dword ptr [ebp - 118h], 2
        ; Exact mapped bytes EB 0A: jmp 0x4dddcc
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 118h], 3
        mov dword ptr [ebp - 0ch], 0ch
        mov dword ptr [ebp - 8], 0
        mov eax, dword ptr [ebp + 0ch]
        and eax, 80h
        neg eax
        sbb eax, eax
        inc eax
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 0ch]
        and ecx, 1000h
        test ecx, ecx
        ; Exact mapped bytes 74 25: je 0x4dde1c
        __asm _emit 0x74
        __asm _emit 0x25
        mov edx, dword ptr [ebp + 0ch]
        and edx, 2000h
        test edx, edx
        ; Exact mapped bytes 74 0C: je 0x4dde10
        __asm _emit 0x74
        __asm _emit 0x0c
        mov dword ptr [ebp - 114h], 4
        ; Exact mapped bytes EB 0A: jmp 0x4dde1a
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 114h], 2
        ; Exact mapped bytes EB 0A: jmp 0x4dde26
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 114h], 3
        push 0
        push 80h
        mov eax, dword ptr [ebp - 114h]
        push eax
        lea ecx, [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp - 118h]
        push edx
        mov eax, dword ptr [ebp - 120h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 15 D0 B7 68 00: call dword ptr [0x68b7d0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd0
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 11ch], eax
        cmp dword ptr [ebp - 11ch], -1
        ; Exact mapped bytes 75 37: jne 0x4dde96
        __asm _emit 0x75
        __asm _emit 0x37
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 2D: je 0x4dde92
        __asm _emit 0x74
        __asm _emit 0x2d
        ; Exact mapped bytes FF 15 B8 B7 68 00: call dword ptr [0x68b7b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [edx + 10h], eax
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [eax + 10h]
        push ecx
        ; Exact mapped bytes E8 71 CB FF FF: call 0x4da9ee
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xcb
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [edx + 0ch], eax
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, 14h
        ; Exact mapped bytes E8 0B ED FE FF: call 0x4ccb9d
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xed
        __asm _emit 0xfe
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes EB 21: jmp 0x4ddeb7
        __asm _emit 0xeb
        __asm _emit 0x21
        mov ecx, dword ptr [ebp - 124h]
        mov edx, dword ptr [ebp - 11ch]
        mov dword ptr [ecx + 4], edx
        mov eax, dword ptr [ebp - 124h]
        mov dword ptr [eax + 8], 1
        mov eax, 1
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
