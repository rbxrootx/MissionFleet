// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585C9AF0 .. +0x320 bytes.
extern "C" __declspec(naked) void FUN_585c9af0_585C9AF0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 5ch
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 0ch], 0ch
        ; Exact mapped bytes 0F 85 9E 00 00 00: jne 0x585c9ba1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 28: jne 0x585c9b31
        __asm _emit 0x75
        __asm _emit 0x28
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 10d68h], 0
        ; Exact mapped bytes 74 1A: je 0x585c9b2f
        __asm _emit 0x74
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 10d68h]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [eax + 10d68h]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 70: jmp 0x585c9ba1
        __asm _emit 0xeb
        __asm _emit 0x70
        cmp dword ptr [ebp + 10h], 1
        ; Exact mapped bytes 75 6A: jne 0x585c9ba1
        __asm _emit 0x75
        __asm _emit 0x6a
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 10d68h], 0
        ; Exact mapped bytes 74 5E: je 0x585c9ba1
        __asm _emit 0x74
        __asm _emit 0x5e
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 10d68h]
        ; Exact mapped bytes A3 F8 1F 96 58: mov dword ptr [0x58961ff8], eax
        __asm _emit 0xa3
        __asm _emit 0xf8
        __asm _emit 0x1f
        __asm _emit 0x96
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 10d68h]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10d68h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0ch]
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes 8B 0D 64 20 96 58: mov ecx, dword ptr [0x58962064]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x64
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 55 EC: call dword ptr [ebp - 0x14]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xec
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 10d68h]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 10d68h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 1ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 55 E4: call dword ptr [ebp - 0x1c]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xe4
        nop
        cmp dword ptr [ebp + 0ch], 2
        ; Exact mapped bytes 0F 85 5D 02 00 00: jne 0x585c9e08
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x5d
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + eax + 20ff0h]
        ; Exact mapped bytes 0F 85 16 01 00 00: jne 0x585c9cdc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x16
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 5
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 20fe0h]
        ; Exact mapped bytes E8 DC CD EB FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xcd
        __asm _emit 0xeb
        __asm _emit 0xff
        cmp eax, 0fffffed4h
        ; Exact mapped bytes 7E 3B: jle 0x585c9c26
        __asm _emit 0x7e
        __asm _emit 0x3b
        mov dword ptr [ebp - 8], 0fffffed4h
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 20ff0h]
        mov dword ptr [ebp - 24h], eax
        push 9
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 BC AE EB FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xae
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 3D D0 EB FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xd0
        __asm _emit 0xeb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 32: jmp 0x585c9c58
        __asm _emit 0xeb
        __asm _emit 0x32
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 20ff0h]
        mov dword ptr [ebp - 2ch], edx
        push 8
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 88 AE EB FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xae
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        mov eax, dword ptr [ebp - 28h]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 09 D0 EB FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xd0
        __asm _emit 0xeb
        __asm _emit 0xff
        nop
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 20fe0h]
        mov dword ptr [ebp - 34h], ecx
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax + 20fe0h]
        ; Exact mapped bytes E8 2C 24 EC FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x24
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        mov edx, dword ptr [ebp - 30h]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 99 23 FA FF: call 0x5856c030
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x23
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 20fe8h]
        mov dword ptr [ebp - 3ch], ecx
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax + 20fe8h]
        ; Exact mapped bytes E8 ED 23 EC FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x23
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        mov edx, dword ptr [ebp - 38h]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 5A 23 FA FF: call 0x5856c030
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x23
        __asm _emit 0xfa
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 2C 01 00 00: jmp 0x585c9e08
        __asm _emit 0xe9
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + ecx + 20ff0h]
        ; Exact mapped bytes 0F 85 11 01 00 00: jne 0x585c9e08
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x11
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], 5
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 20fe0h]
        ; Exact mapped bytes E8 AB CC EB FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xcc
        __asm _emit 0xeb
        __asm _emit 0xff
        cmp eax, 0fffffed4h
        ; Exact mapped bytes 7E 3B: jle 0x585c9d57
        __asm _emit 0x7e
        __asm _emit 0x3b
        mov dword ptr [ebp - 0ch], 0fffffed4h
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 20ff0h]
        mov dword ptr [ebp - 44h], edx
        push 9
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 8B AD EB FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xad
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        mov eax, dword ptr [ebp - 40h]
        push eax
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 0C CF EB FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xcf
        __asm _emit 0xeb
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 32: jmp 0x585c9d89
        __asm _emit 0xeb
        __asm _emit 0x32
        mov ecx, 4
        shl ecx, 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 20ff0h]
        mov dword ptr [ebp - 4ch], eax
        push 8
        ; Exact mapped bytes 8B 0D 6C 75 94 58: mov ecx, dword ptr [0x5894756c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 57 AD EB FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xad
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 48h], eax
        mov ecx, dword ptr [ebp - 48h]
        push ecx
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 D8 CE EB FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xce
        __asm _emit 0xeb
        __asm _emit 0xff
        nop
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 20fe0h]
        mov dword ptr [ebp - 54h], ecx
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 20fe0h]
        ; Exact mapped bytes E8 FB 22 EC FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x22
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 50h], eax
        mov ecx, dword ptr [ebp - 50h]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 54h]
        ; Exact mapped bytes E8 68 22 FA FF: call 0x5856c030
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x22
        __asm _emit 0xfa
        __asm _emit 0xff
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 20fe8h]
        mov dword ptr [ebp - 5ch], edx
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax + 20fe8h]
        ; Exact mapped bytes E8 BC 22 EC FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x22
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 58h], eax
        mov edx, dword ptr [ebp - 58h]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 5ch]
        ; Exact mapped bytes E8 29 22 FA FF: call 0x5856c030
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x22
        __asm _emit 0xfa
        __asm _emit 0xff
        nop
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
