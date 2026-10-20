// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58745080 .. +0x1CD bytes.
extern "C" __declspec(naked) void FUN_58745080_58745080() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        mov dword ptr [ebp - 28h], ecx
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 FC AB D6 FF: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xab
        __asm _emit 0xd6
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 45 F9 D3 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xf9
        __asm _emit 0xd3
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 40 04: mov ax, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E0 1F: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        movzx ecx, ax
        cmp ecx, 6
        ; Exact mapped bytes 74 26: je 0x587450d1
        __asm _emit 0x74
        __asm _emit 0x26
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 DA AB D6 FF: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xab
        __asm _emit 0xd6
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 23 F9 D3 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xf9
        __asm _emit 0xd3
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 50 04: mov dx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        movzx eax, dx
        cmp eax, 7
        ; Exact mapped bytes 0F 85 73 01 00 00: jne 0x58745244
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x73
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], 0
        mov ecx, 44ch
        ; Exact mapped bytes 66 89 4D FC: mov word ptr [ebp - 4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 A4 AB D6 FF: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xab
        __asm _emit 0xd6
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 ED F8 D3 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xf8
        __asm _emit 0xd3
        __asm _emit 0xff
        movzx edx, byte ptr [eax + 35ch]
        cmp edx, 7
        ; Exact mapped bytes 75 09: jne 0x58745108
        __asm _emit 0x75
        __asm _emit 0x09
        mov eax, 3e8h
        ; Exact mapped bytes 66 89 45 FC: mov word ptr [ebp - 4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfc
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5874511a
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 6B AB D6 FF: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xab
        __asm _emit 0xd6
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 B4 F8 D3 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xf8
        __asm _emit 0xd3
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 50 0C: mov dx, word ptr [eax + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x0c
        ; Exact mapped bytes 66 C1 EA 0A: shr dx, 0xa
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x0a
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        movzx eax, dx
        cmp dword ptr [ebp - 8], eax
        ; Exact mapped bytes 0F 8D A4 00 00 00: jge 0x587451e8
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 3A AB D6 FF: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0xab
        __asm _emit 0xd6
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 83 F8 D3 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0xd3
        __asm _emit 0xff
        mov ecx, 1fh
        sub ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [eax + 268h]
        shr edx, cl
        and edx, 1
        mov dword ptr [ebp - 14h], edx
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 12 AB D6 FF: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xab
        __asm _emit 0xd6
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 5B F8 D3 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xf8
        __asm _emit 0xd3
        __asm _emit 0xff
        mov ecx, 1fh
        sub ecx, dword ptr [ebp - 8]
        mov eax, dword ptr [eax + 26ch]
        shr eax, cl
        and eax, 1
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 75 42: jne 0x587451e3
        __asm _emit 0x75
        __asm _emit 0x42
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 75 3C: jne 0x587451e3
        __asm _emit 0x75
        __asm _emit 0x3c
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 DE AA D6 FF: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xaa
        __asm _emit 0xd6
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 7F 7E D4 FF: call 0x5848d040
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x7e
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 19: je 0x587451e3
        __asm _emit 0x74
        __asm _emit 0x19
        mov edx, dword ptr [ebp - 0ch]
        movzx eax, word ptr [edx + 0a0h]
        movzx ecx, word ptr [ebp - 4]
        cmp eax, ecx
        ; Exact mapped bytes 7C 07: jl 0x587451e3
        __asm _emit 0x7c
        __asm _emit 0x07
        mov dword ptr [ebp - 10h], 1
        ; Exact mapped bytes E9 29 FF FF FF: jmp 0x58745111
        __asm _emit 0xe9
        __asm _emit 0x29
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 56: jne 0x58745244
        __asm _emit 0x75
        __asm _emit 0x56
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 97 AA D6 FF: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xaa
        __asm _emit 0xd6
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 E0 F7 D3 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xf7
        __asm _emit 0xd3
        __asm _emit 0xff
        movzx edx, byte ptr [eax + 35ch]
        cmp edx, 7
        ; Exact mapped bytes 75 1B: jne 0x58745227
        __asm _emit 0x75
        __asm _emit 0x1b
        ; Exact mapped bytes E8 DF 1F D9 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x1f
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        push 0
        push 0
        push 0
        push 31h
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 4C 3B D9 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x3b
        __asm _emit 0xd9
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 19: jmp 0x58745240
        __asm _emit 0xeb
        __asm _emit 0x19
        ; Exact mapped bytes E8 C4 1F D9 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x1f
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        push 0
        push 0
        push 0
        push 2bh
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 31 3B D9 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x3b
        __asm _emit 0xd9
        __asm _emit 0xff
        nop
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x58745249
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 1
        mov esp, ebp
        pop ebp
        ret
    }
}
