// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584B0F00 .. +0x1AE bytes.
extern "C" __declspec(naked) void FUN_584b0f00_584B0F00() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        mov dword ptr [ebp - 2ch], ecx
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 7C ED FF FF: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 C5 3A FD FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x3a
        __asm _emit 0xfd
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
        mov dword ptr [ebp - 14h], ecx
        mov edx, 44ch
        ; Exact mapped bytes 66 89 55 F8: mov word ptr [ebp - 8], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf8
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 53 ED FF FF: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 9C 3A FD FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x3a
        __asm _emit 0xfd
        __asm _emit 0xff
        movzx eax, byte ptr [eax + 35ch]
        cmp eax, 7
        ; Exact mapped bytes 75 09: jne 0x584b0f59
        __asm _emit 0x75
        __asm _emit 0x09
        mov ecx, 3e8h
        ; Exact mapped bytes 66 89 4D F8: mov word ptr [ebp - 8], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xf8
        cmp dword ptr [ebp - 14h], 6
        ; Exact mapped bytes 74 0A: je 0x584b0f69
        __asm _emit 0x74
        __asm _emit 0x0a
        cmp dword ptr [ebp - 14h], 7
        ; Exact mapped bytes 0F 85 3F 01 00 00: jne 0x584b10a8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x3f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 1], 0
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x584b0f7f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 0ch]
        add edx, 1
        mov dword ptr [ebp - 0ch], edx
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 06 ED FF FF: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 4F 3A FD FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x3a
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 40 0C: mov ax, word ptr [eax + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x0c
        ; Exact mapped bytes 66 C1 E8 0A: shr ax, 0xa
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x0a
        ; Exact mapped bytes 66 83 E0 1F: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        movzx ecx, ax
        cmp dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes 0F 8D A1 00 00 00: jge 0x584b104a
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 D5 EC FF FF: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 1E 3A FD FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x3a
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, 1fh
        sub ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax + 268h]
        shr edx, cl
        and edx, 1
        mov dword ptr [ebp - 18h], edx
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 AD EC FF FF: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 F6 39 FD FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x39
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, 1fh
        sub ecx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [eax + 26ch]
        shr eax, cl
        and eax, 1
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 75 3F: jne 0x584b1045
        __asm _emit 0x75
        __asm _emit 0x3f
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 75 39: jne 0x584b1045
        __asm _emit 0x75
        __asm _emit 0x39
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 79 EC FF FF: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 1A C0 FD FF: call 0x5848d040
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xc0
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 16: je 0x584b1045
        __asm _emit 0x74
        __asm _emit 0x16
        mov edx, dword ptr [ebp - 10h]
        movzx eax, word ptr [edx + 0a0h]
        movzx ecx, word ptr [ebp - 8]
        cmp eax, ecx
        ; Exact mapped bytes 7C 04: jl 0x584b1045
        __asm _emit 0x7c
        __asm _emit 0x04
        mov byte ptr [ebp - 1], 1
        ; Exact mapped bytes E9 2C FF FF FF: jmp 0x584b0f76
        __asm _emit 0xe9
        __asm _emit 0x2c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        movzx edx, byte ptr [ebp - 1]
        test edx, edx
        ; Exact mapped bytes 75 56: jne 0x584b10a8
        __asm _emit 0x75
        __asm _emit 0x56
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 33 EC FF FF: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 7C 39 FD FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x39
        __asm _emit 0xfd
        __asm _emit 0xff
        movzx eax, byte ptr [eax + 35ch]
        cmp eax, 7
        ; Exact mapped bytes 75 1B: jne 0x584b108b
        __asm _emit 0x75
        __asm _emit 0x1b
        ; Exact mapped bytes E8 7B 61 02 00: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x61
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], eax
        push 0
        push 0
        push 0
        push 30h
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 E8 7C 02 00: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x02
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 19: jmp 0x584b10a4
        __asm _emit 0xeb
        __asm _emit 0x19
        ; Exact mapped bytes E8 60 61 02 00: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x61
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], eax
        push 0
        push 0
        push 0
        push 29h
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 CD 7C 02 00: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x7c
        __asm _emit 0x02
        __asm _emit 0x00
        nop
        xor al, al
        ; Exact mapped bytes EB 02: jmp 0x584b10aa
        __asm _emit 0xeb
        __asm _emit 0x02
        mov al, 1
        mov esp, ebp
        pop ebp
        ret
    }
}
