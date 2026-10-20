// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004FC109 .. +0x182 bytes.
extern "C" __declspec(naked) void FUN_004fc109_004FC109() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        push ebx
        push esi
        push edi
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 14: jne 0x4fc12c
        __asm _emit 0x75
        __asm _emit 0x14
        push 523h
        push 674fe8h
        ; Exact mapped bytes E8 19 CC 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xcc
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fc12c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4fc112
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp + 0ch]
        cmp dword ptr [ecx + 1ch], 0
        ; Exact mapped bytes 75 14: jne 0x4fc14f
        __asm _emit 0x75
        __asm _emit 0x14
        push 524h
        push 674fe8h
        ; Exact mapped bytes E8 F6 CB 02 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xcb
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4fc14f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x4fc132
        __asm _emit 0x75
        __asm _emit 0xdd
        cmp dword ptr [ebp + 20h], 0
        ; Exact mapped bytes 74 4E: je 0x4fc1a9
        __asm _emit 0x74
        __asm _emit 0x4e
        cmp dword ptr [ebp + 18h], 1
        ; Exact mapped bytes 7E 0F: jle 0x4fc170
        __asm _emit 0x7e
        __asm _emit 0x0f
        cmp dword ptr [ebp + 1ch], 1
        ; Exact mapped bytes 7E 09: jle 0x4fc170
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [ebp - 28h], 0
        ; Exact mapped bytes EB 07: jmp 0x4fc177
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 1
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 24h], eax
        push 0
        mov ecx, dword ptr [ebp - 24h]
        neg ecx
        sbb ecx, ecx
        and ecx, 800000h
        push ecx
        mov edx, dword ptr [ebp - 24h]
        neg edx
        sbb edx, edx
        and edx, 0ff800000h
        add edx, 800000h
        push edx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 B3 A1 FD FF: call 0x4d635c
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xa1
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 14h]
        add eax, dword ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        add ecx, dword ptr [ebp + 18h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 0E 60 03 00: call 0x5321d5
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x60
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 0C 6E 68 00 00: cmp dword ptr [0x686e0c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x0c
        __asm _emit 0x6e
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 25: jne 0x4fc1f5
        __asm _emit 0x75
        __asm _emit 0x25
        cmp dword ptr [ebp + 20h], 0
        ; Exact mapped bytes 74 0E: je 0x4fc1e4
        __asm _emit 0x74
        __asm _emit 0x0e
        push 1
        push 1
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 0C 63 03 00: call 0x5324ee
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x63
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes EB 11: jmp 0x4fc1f5
        __asm _emit 0xeb
        __asm _emit 0x11
        push 0
        lea ecx, [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes FF 50 68: call dword ptr [eax + 0x68]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x68
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 F8 A0 FD FF: call 0x4d62f5
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xa0
        __asm _emit 0xfd
        __asm _emit 0xff
        and eax, 200h
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x4fc217
        __asm _emit 0x75
        __asm _emit 0x11
        push 639850h
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 7D DF FD FF: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xdf
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 16: je 0x4fc22d
        __asm _emit 0x74
        __asm _emit 0x16
        ; Exact mapped bytes 8B 0D C4 6D 68 00: mov ecx, dword ptr [0x686dc4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes 8B 15 C0 6D 68 00: mov edx, dword ptr [0x686dc0]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        push edx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 C1 62 03 00: call 0x5324ee
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x62
        __asm _emit 0x03
        __asm _emit 0x00
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 92 5F 03 00: call 0x5321c7
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x5f
        __asm _emit 0x03
        __asm _emit 0x00
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 85 61 03 00: call 0x5323c2
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x61
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 C9 F8 02 00: call 0x52bb0f
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xf8
        __asm _emit 0x02
        __asm _emit 0x00
        lea eax, [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 47 08 03 00: call 0x52ca99
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x08
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 F4 B6 FE FF: call 0x4e794d
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0xb6
        __asm _emit 0xfe
        __asm _emit 0xff
        lea ecx, [ebp - 20h]
        push ecx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 DE 63 03 00: call 0x532643
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x63
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 19: je 0x4fc282
        __asm _emit 0x74
        __asm _emit 0x19
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 51 61 03 00: call 0x5323c2
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x61
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 B0 73 FD FF: call 0x4d3632
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x73
        __asm _emit 0xfd
        __asm _emit 0xff
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
