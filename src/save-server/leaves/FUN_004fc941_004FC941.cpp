// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004FC941 .. +0x2BC bytes.
extern "C" __declspec(naked) void FUN_004fc941_004FC941() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 40h
        mov dword ptr [ebp - 40h], ecx
        push 5d6h
        push 674fe8h
        mov eax, dword ptr [ebp - 40h]
        push eax
        ; Exact mapped bytes E8 03 D9 FD FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xd9
        __asm _emit 0xfd
        __asm _emit 0xff
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 62 58 03 00: call 0x5321c7
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x58
        __asm _emit 0x03
        __asm _emit 0x00
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 55 5A 03 00: call 0x5323c2
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x5a
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 E5 F1 02 00: call 0x52bb5b
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xf1
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 40h]
        mov edx, dword ptr [ebp - 14h]
        add edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 14h], edx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x4fc994
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 40h]
        mov edx, dword ptr [ecx + 6ch]
        sub edx, 1
        cmp dword ptr [ebp - 4], edx
        ; Exact mapped bytes 7D 5A: jge 0x4fc9fc
        __asm _emit 0x7d
        __asm _emit 0x5a
        mov eax, dword ptr [ebp - 4]
        imul eax, eax, 0ch
        mov ecx, dword ptr [ebp - 40h]
        mov edx, dword ptr [ecx + 78h]
        mov eax, dword ptr [edx + eax + 8]
        mov ecx, dword ptr [ebp - 40h]
        add eax, dword ptr [ecx + 50h]
        mov edx, dword ptr [ebp - 14h]
        add edx, eax
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 40h]
        mov ecx, dword ptr [ebp - 14h]
        add ecx, dword ptr [eax + 48h]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 14h]
        cmp edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 7E 02: jle 0x4fc9d6
        __asm _emit 0x7e
        __asm _emit 0x02
        ; Exact mapped bytes EB 26: jmp 0x4fc9fc
        __asm _emit 0xeb
        __asm _emit 0x26
        lea eax, [ebp - 14h]
        push eax
        push 1
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 40h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes FF 90 C8 00 00 00: call dword ptr [eax + 0xc8]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 40h]
        mov edx, dword ptr [ebp - 0ch]
        add edx, dword ptr [ecx + 50h]
        mov dword ptr [ebp - 14h], edx
        ; Exact mapped bytes EB 8F: jmp 0x4fc98b
        __asm _emit 0xeb
        __asm _emit 0x8f
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 BE 59 03 00: call 0x5323c2
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x59
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 4E F1 02 00: call 0x52bb5b
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xf1
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 40h]
        mov ecx, dword ptr [ebp - 10h]
        add ecx, dword ptr [eax + 64h]
        mov dword ptr [ebp - 10h], ecx
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x4fca2b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 18h]
        add edx, 1
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 40h]
        mov ecx, dword ptr [eax + 68h]
        sub ecx, 1
        cmp dword ptr [ebp - 18h], ecx
        ; Exact mapped bytes 7D 5A: jge 0x4fca93
        __asm _emit 0x7d
        __asm _emit 0x5a
        mov edx, dword ptr [ebp - 18h]
        imul edx, edx, 0ch
        mov eax, dword ptr [ebp - 40h]
        mov ecx, dword ptr [eax + 7ch]
        mov edx, dword ptr [ecx + edx + 8]
        mov eax, dword ptr [ebp - 40h]
        add edx, dword ptr [eax + 54h]
        mov ecx, dword ptr [ebp - 10h]
        add ecx, edx
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 40h]
        mov eax, dword ptr [ebp - 10h]
        add eax, dword ptr [edx + 4ch]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 10h]
        cmp ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 7E 02: jle 0x4fca6d
        __asm _emit 0x7e
        __asm _emit 0x02
        ; Exact mapped bytes EB 26: jmp 0x4fca93
        __asm _emit 0xeb
        __asm _emit 0x26
        lea edx, [ebp - 14h]
        push edx
        push 1
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 40h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes FF 92 C8 00 00 00: call dword ptr [edx + 0xc8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 40h]
        mov ecx, dword ptr [ebp - 8]
        add ecx, dword ptr [eax + 54h]
        mov dword ptr [ebp - 10h], ecx
        ; Exact mapped bytes EB 8F: jmp 0x4fca22
        __asm _emit 0xeb
        __asm _emit 0x8f
        ; Exact mapped bytes 83 3D 0C 6E 68 00 00: cmp dword ptr [0x686e0c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x0c
        __asm _emit 0x6e
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 57 01 00 00: je 0x4fcbf7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x57
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 1A 59 03 00: call 0x5323c2
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x59
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 AA F0 02 00: call 0x52bb5b
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xf0
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 1ch], edx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x4fcac9
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 40h]
        mov edx, dword ptr [ebp - 4]
        cmp edx, dword ptr [ecx + 6ch]
        ; Exact mapped bytes 0F 8D 1F 01 00 00: jge 0x4fcbf7
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x1f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        imul eax, eax, 0ch
        mov ecx, dword ptr [ebp - 40h]
        mov edx, dword ptr [ecx + 78h]
        mov ecx, dword ptr [ebp - 40h]
        mov ecx, dword ptr [ecx + 60h]
        mov edx, dword ptr [edx + eax + 8]
        lea eax, [edx + ecx*2]
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 40h]
        mov edx, dword ptr [ecx + 6ch]
        sub edx, 1
        cmp dword ptr [ebp - 4], edx
        ; Exact mapped bytes 75 19: jne 0x4fcb1b
        __asm _emit 0x75
        __asm _emit 0x19
        mov eax, dword ptr [ebp - 40h]
        cmp dword ptr [eax + 74h], 0
        ; Exact mapped bytes 74 10: je 0x4fcb1b
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D B0 6D 68 00: mov ecx, dword ptr [0x686db0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb0
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 28h]
        lea eax, [edx + ecx - 1]
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 24h], ecx
        mov dword ptr [ebp - 20h], 0
        ; Exact mapped bytes EB 09: jmp 0x4fcb33
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 20h]
        add edx, 1
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 40h]
        mov ecx, dword ptr [ebp - 20h]
        cmp ecx, dword ptr [eax + 68h]
        ; Exact mapped bytes 0F 8D 95 00 00 00: jge 0x4fcbd7
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 20h]
        imul edx, edx, 0ch
        mov eax, dword ptr [ebp - 40h]
        mov ecx, dword ptr [eax + 7ch]
        mov eax, dword ptr [ebp - 40h]
        mov eax, dword ptr [eax + 64h]
        mov ecx, dword ptr [ecx + edx + 8]
        lea edx, [ecx + eax*2]
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp - 40h]
        mov ecx, dword ptr [eax + 68h]
        sub ecx, 1
        cmp dword ptr [ebp - 20h], ecx
        ; Exact mapped bytes 75 18: jne 0x4fcb84
        __asm _emit 0x75
        __asm _emit 0x18
        mov edx, dword ptr [ebp - 40h]
        cmp dword ptr [edx + 70h], 0
        ; Exact mapped bytes 74 0F: je 0x4fcb84
        __asm _emit 0x74
        __asm _emit 0x0f
        ; Exact mapped bytes A1 B4 6D 68 00: mov eax, dword ptr [0x686db4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x6d
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 2ch]
        lea edx, [ecx + eax - 1]
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp - 24h]
        add eax, dword ptr [ebp - 2ch]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, dword ptr [ebp - 28h]
        push ecx
        mov edx, dword ptr [ebp - 24h]
        push edx
        mov eax, dword ptr [ebp - 1ch]
        push eax
        lea ecx, [ebp - 3ch]
        ; Exact mapped bytes E8 33 56 03 00: call 0x5321d5
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x56
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        push 3
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 40h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes FF 90 C8 00 00 00: call dword ptr [eax + 0xc8]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 40h]
        mov edx, dword ptr [ebp - 2ch]
        add edx, dword ptr [ecx + 5ch]
        mov eax, dword ptr [ebp - 40h]
        mov ecx, dword ptr [eax + 64h]
        shl ecx, 1
        sub edx, ecx
        mov eax, dword ptr [ebp - 24h]
        add eax, edx
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes E9 53 FF FF FF: jmp 0x4fcb2a
        __asm _emit 0xe9
        __asm _emit 0x53
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 40h]
        mov edx, dword ptr [ebp - 28h]
        add edx, dword ptr [ecx + 58h]
        mov eax, dword ptr [ebp - 40h]
        mov ecx, dword ptr [eax + 60h]
        shl ecx, 1
        sub edx, ecx
        mov eax, dword ptr [ebp - 1ch]
        add eax, edx
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes E9 C9 FE FF FF: jmp 0x4fcac0
        __asm _emit 0xe9
        __asm _emit 0xc9
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
