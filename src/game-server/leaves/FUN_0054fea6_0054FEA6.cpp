// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054FEA6 .. +0x26C bytes.
extern "C" __declspec(naked) void FUN_0054fea6_0054FEA6() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 174h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 164h], ecx
        mov dword ptr [ebp - 5ch], 0
        mov dword ptr [ebp - 50h], 0
        mov dword ptr [ebp - 4ch], 0
        mov dword ptr [ebp - 58h], 0
        push 0f4h
        push 5cf710h
        mov eax, dword ptr [ebp - 164h]
        push eax
        ; Exact mapped bytes E8 76 B2 FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xb2
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 164h]
        cmp dword ptr [ecx + 10h], 0
        ; Exact mapped bytes 74 14: je 0x54ff0a
        __asm _emit 0x74
        __asm _emit 0x14
        push 0f5h
        push 5cf710h
        ; Exact mapped bytes E8 FB 4A FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x4a
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54ff0a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DA: jne 0x54feea
        __asm _emit 0x75
        __asm _emit 0xda
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x54ff2a
        __asm _emit 0x75
        __asm _emit 0x14
        push 0f6h
        push 5cf710h
        ; Exact mapped bytes E8 DB 4A FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x4a
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54ff2a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x54ff10
        __asm _emit 0x75
        __asm _emit 0xe0
        push -1
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 F7 FE F7 FF: call 0x4cfe32
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xfe
        __asm _emit 0xf7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x54ff53
        __asm _emit 0x75
        __asm _emit 0x14
        push 0f7h
        push 5cf710h
        ; Exact mapped bytes E8 B2 4A FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x4a
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54ff53
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D7: jne 0x54ff30
        __asm _emit 0x75
        __asm _emit 0xd7
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 74 25: je 0x54ff84
        __asm _emit 0x74
        __asm _emit 0x25
        push 1
        push 18h
        mov eax, dword ptr [ebp + 14h]
        push eax
        ; Exact mapped bytes E8 EA FE F7 FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xfe
        __asm _emit 0xf7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x54ff84
        __asm _emit 0x75
        __asm _emit 0x14
        push 0f9h
        push 5cf710h
        ; Exact mapped bytes E8 81 4A FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x4a
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54ff84
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 CF: jne 0x54ff59
        __asm _emit 0x75
        __asm _emit 0xcf
        push 0
        lea edx, [ebp - 48h]
        push edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes FF 51 44: call dword ptr [ecx + 0x44]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x44
        test eax, eax
        ; Exact mapped bytes 0F 85 92 00 00 00: jne 0x550036
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 48h], 0
        ; Exact mapped bytes 0F 84 88 00 00 00: je 0x550036
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 4ch], eax
        cmp dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes 75 0C: jne 0x54ffc6
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 168h], 0
        ; Exact mapped bytes EB 3E: jmp 0x550004
        __asm _emit 0xeb
        __asm _emit 0x3e
        mov ecx, dword ptr [ebp - 4ch]
        push ecx
        ; Exact mapped bytes FF 15 D8 22 5E 00: call dword ptr [0x5e22d8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd8
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        lea edx, [eax + eax + 2]
        mov dword ptr [ebp - 5ch], edx
        mov eax, dword ptr [ebp - 5ch]
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 DC 97 F5 FF: call 0x4a97c0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x97
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 16ch], esp
        mov eax, dword ptr [ebp - 5ch]
        push eax
        mov ecx, dword ptr [ebp - 4ch]
        push ecx
        mov edx, dword ptr [ebp - 16ch]
        push edx
        ; Exact mapped bytes E8 B2 C7 F4 FF: call 0x49c7b0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xc7
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 168h], eax
        mov eax, dword ptr [ebp - 168h]
        push eax
        lea ecx, [ebp - 160h]
        push ecx
        ; Exact mapped bytes E8 88 F9 FA FF: call 0x4ff99f
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xf9
        __asm _emit 0xfa
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 48h]
        push edx
        ; Exact mapped bytes FF 15 84 2A 5E 00: call dword ptr [0x5e2a84]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x2a
        __asm _emit 0x5e
        __asm _emit 0x00
        lea eax, [ebp - 160h]
        push eax
        mov ecx, dword ptr [ebp - 164h]
        add ecx, 14h
        ; Exact mapped bytes E8 C7 DA F9 FF: call 0x4edafd
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xda
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 58h], ecx
        cmp dword ptr [ebp - 58h], 0
        ; Exact mapped bytes 75 0C: jne 0x55004e
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 170h], 0
        ; Exact mapped bytes EB 3F: jmp 0x55008d
        __asm _emit 0xeb
        __asm _emit 0x3f
        mov edx, dword ptr [ebp - 58h]
        push edx
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        add eax, 1
        mov dword ptr [ebp - 5ch], eax
        mov eax, dword ptr [ebp - 5ch]
        shl eax, 1
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 53 97 F5 FF: call 0x4a97c0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x97
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 174h], esp
        mov eax, dword ptr [ebp - 5ch]
        push eax
        mov ecx, dword ptr [ebp - 58h]
        push ecx
        mov edx, dword ptr [ebp - 174h]
        push edx
        ; Exact mapped bytes E8 39 0F F4 FF: call 0x490fc0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x0f
        __asm _emit 0xf4
        __asm _emit 0xff
        mov dword ptr [ebp - 170h], eax
        mov eax, dword ptr [ebp - 164h]
        add eax, 10h
        push eax
        push 0
        push 0
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp - 170h]
        push edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes FF 51 0C: call dword ptr [ecx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x0c
        mov dword ptr [ebp - 54h], eax
        cmp dword ptr [ebp - 54h], 0
        ; Exact mapped bytes 7D 13: jge 0x5500ce
        __asm _emit 0x7d
        __asm _emit 0x13
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 74 0D: je 0x5500ce
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 54h]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        ; Exact mapped bytes E8 2D F8 FF FF: call 0x54f8fb
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 54h], 0
        ; Exact mapped bytes 7C 20: jl 0x5500f4
        __asm _emit 0x7c
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 164h]
        cmp dword ptr [edx + 10h], 0
        ; Exact mapped bytes 75 14: jne 0x5500f4
        __asm _emit 0x75
        __asm _emit 0x14
        push 10fh
        push 5cf710h
        ; Exact mapped bytes E8 11 49 FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x49
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5500f4
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D4: jne 0x5500ce
        __asm _emit 0x75
        __asm _emit 0xd4
        xor eax, eax
        cmp dword ptr [ebp - 54h], 0
        setge al
        lea esp, [ebp - 180h]
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
