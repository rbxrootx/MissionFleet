// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584E8340 .. +0x166 bytes.
extern "C" __declspec(naked) void FUN_584e8340_584E8340() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        mov dword ptr [ebp - 28h], ecx
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 6C E6 F9 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xe6
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes EB 0B: jmp 0x584e8364
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 4F 3D FA FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x3d
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 1C: je 0x584e8386
        __asm _emit 0x74
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 6E C6 F9 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xc6
        __asm _emit 0xf9
        __asm _emit 0xff
        movzx eax, byte ptr [eax + 35ch]
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x584e8384
        __asm _emit 0x74
        __asm _emit 0x07
        xor al, al
        ; Exact mapped bytes E9 1E 01 00 00: jmp 0x584e84a2
        __asm _emit 0xe9
        __asm _emit 0x1e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB D3: jmp 0x584e8359
        __asm _emit 0xeb
        __asm _emit 0xd3
        mov dword ptr [ebp - 18h], 0
        mov dword ptr [ebp - 0ch], 0
        mov dword ptr [ebp - 1ch], 0
        mov dword ptr [ebp - 2ch], 0
        mov dword ptr [ebp - 20h], 0
        mov dword ptr [ebp - 24h], 0
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 4E 12 00 00: call 0x584e9610
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 0B: jmp 0x584e83d2
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 E1 3C FA FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x3c
        __asm _emit 0xfa
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 0F 84 85 00 00 00: je 0x584e8461
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 FC 3A FA FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x3a
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 85 78 FC FF: call 0x584afc70
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x78
        __asm _emit 0xfc
        __asm _emit 0xff
        movzx ecx, al
        xor ecx, 55h
        mov dword ptr [ebp - 20h], ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 E4 3A FA FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x3a
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 6D AF FD FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xaf
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 50 0E: mov dx, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x0e
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        movzx eax, dx
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 C7 3A FA FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x3a
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 D0 11 00 00: call 0x584e95f0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 20h], 0ch
        ; Exact mapped bytes 7C 15: jl 0x584e843e
        __asm _emit 0x7c
        __asm _emit 0x15
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 75 0F: jne 0x584e843e
        __asm _emit 0x75
        __asm _emit 0x0f
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 75 09: jne 0x584e843e
        __asm _emit 0x75
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 1
        mov dword ptr [ebp - 18h], ecx
        cmp dword ptr [ebp - 14h], 1
        ; Exact mapped bytes 75 09: jne 0x584e844d
        __asm _emit 0x75
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 0ch]
        add edx, 1
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 14h], 3
        ; Exact mapped bytes 75 09: jne 0x584e845c
        __asm _emit 0x75
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 1ch]
        add eax, 1
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes E9 66 FF FF FF: jmp 0x584e83c7
        __asm _emit 0xe9
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 1], 0
        cmp dword ptr [ebp - 18h], 1
        ; Exact mapped bytes 7C 0C: jl 0x584e8477
        __asm _emit 0x7c
        __asm _emit 0x0c
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 06: jne 0x584e8477
        __asm _emit 0x75
        __asm _emit 0x06
        mov byte ptr [ebp - 1], 1
        ; Exact mapped bytes EB 28: jmp 0x584e849f
        __asm _emit 0xeb
        __asm _emit 0x28
        cmp dword ptr [ebp - 18h], 1
        ; Exact mapped bytes 7C 12: jl 0x584e848f
        __asm _emit 0x7c
        __asm _emit 0x12
        cmp dword ptr [ebp - 0ch], 1
        ; Exact mapped bytes 7C 0C: jl 0x584e848f
        __asm _emit 0x7c
        __asm _emit 0x0c
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 75 06: jne 0x584e848f
        __asm _emit 0x75
        __asm _emit 0x06
        mov byte ptr [ebp - 1], 2
        ; Exact mapped bytes EB 10: jmp 0x584e849f
        __asm _emit 0xeb
        __asm _emit 0x10
        cmp dword ptr [ebp - 0ch], 1
        ; Exact mapped bytes 7C 0A: jl 0x584e849f
        __asm _emit 0x7c
        __asm _emit 0x0a
        cmp dword ptr [ebp - 1ch], 2
        ; Exact mapped bytes 7C 04: jl 0x584e849f
        __asm _emit 0x7c
        __asm _emit 0x04
        mov byte ptr [ebp - 1], 3
        mov al, byte ptr [ebp - 1]
        mov esp, ebp
        pop ebp
        ret
    }
}
