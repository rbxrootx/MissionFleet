// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004BC007 .. +0x2D7 bytes.
extern "C" __declspec(naked) void FUN_004bc007_004BC007() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 20h], ecx
        push 34h
        push 674470h
        mov eax, dword ptr [ebp - 20h]
        push eax
        ; Exact mapped bytes E8 3D E2 01 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xe2
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7D 11: jge 0x4bc03a
        __asm _emit 0x7d
        __asm _emit 0x11
        push 35h
        push 674470h
        ; Exact mapped bytes E8 0B CD 06 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xcd
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4bc03a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E3: jne 0x4bc023
        __asm _emit 0x75
        __asm _emit 0xe3
        cmp dword ptr [ebp + 0ch], -1
        ; Exact mapped bytes 74 09: je 0x4bc04f
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 10h], eax
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 38: jne 0x4bc08d
        __asm _emit 0x75
        __asm _emit 0x38
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 42 04 01 00: call 0x4cc4a9
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 4], 0
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [edx + 0ch], 0
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [eax + 8], 0
        ; Exact mapped bytes E9 48 02 00 00: jmp 0x4bc2d5
        __asm _emit 0xe9
        __asm _emit 0x48
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 20h]
        cmp dword ptr [ecx + 4], 0
        ; Exact mapped bytes 75 68: jne 0x4bc0fe
        __asm _emit 0x75
        __asm _emit 0x68
        cmp dword ptr [ebp + 8], -1
        ; Exact mapped bytes 76 11: jbe 0x4bc0ad
        __asm _emit 0x76
        __asm _emit 0x11
        push 45h
        push 674470h
        ; Exact mapped bytes E8 98 CC 06 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xcc
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4bc0ad
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E3: jne 0x4bc096
        __asm _emit 0x75
        __asm _emit 0xe3
        push 47h
        push 674470h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 10 00 01 00: call 0x4cc0d3
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 4], edx
        mov eax, dword ptr [ebp + 8]
        push eax
        push 0
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 4]
        push edx
        ; Exact mapped bytes E8 DC 97 FA FF: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x97
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 0ch
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 0ch], ecx
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 8], eax
        ; Exact mapped bytes E9 D7 01 00 00: jmp 0x4bc2d5
        __asm _emit 0xe9
        __asm _emit 0xd7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 0ch]
        ; Exact mapped bytes 7F 3A: jg 0x4bc143
        __asm _emit 0x7f
        __asm _emit 0x3a
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 8]
        ; Exact mapped bytes 7E 21: jle 0x4bc135
        __asm _emit 0x7e
        __asm _emit 0x21
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp + 8]
        sub eax, dword ptr [edx + 8]
        push eax
        push 0
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [ebp - 20h]
        add edx, dword ptr [eax + 8]
        push edx
        ; Exact mapped bytes E8 8E 97 FA FF: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x97
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 8], edx
        ; Exact mapped bytes E9 92 01 00 00: jmp 0x4bc2d5
        __asm _emit 0xe9
        __asm _emit 0x92
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 10h]
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 7C: jne 0x4bc1ce
        __asm _emit 0x75
        __asm _emit 0x7c
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 8]
        cdq
        and edx, 7
        add eax, edx
        sar eax, 3
        cmp eax, 4
        ; Exact mapped bytes 7D 09: jge 0x4bc16f
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 24h], 4
        ; Exact mapped bytes EB 12: jmp 0x4bc181
        __asm _emit 0xeb
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 20h]
        mov eax, dword ptr [eax + 8]
        cdq
        and edx, 7
        add eax, edx
        sar eax, 3
        mov dword ptr [ebp - 24h], eax
        cmp dword ptr [ebp - 24h], 400h
        ; Exact mapped bytes 7E 09: jle 0x4bc193
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [ebp - 28h], 400h
        ; Exact mapped bytes EB 35: jmp 0x4bc1c8
        __asm _emit 0xeb
        __asm _emit 0x35
        mov ecx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ecx + 8]
        cdq
        and edx, 7
        add eax, edx
        sar eax, 3
        cmp eax, 4
        ; Exact mapped bytes 7D 09: jge 0x4bc1b0
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 2ch], 4
        ; Exact mapped bytes EB 12: jmp 0x4bc1c2
        __asm _emit 0xeb
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 8]
        cdq
        and edx, 7
        add eax, edx
        sar eax, 3
        mov dword ptr [ebp - 2ch], eax
        mov eax, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 0ch]
        add eax, dword ptr [ebp - 8]
        cmp dword ptr [ebp + 8], eax
        ; Exact mapped bytes 7D 0E: jge 0x4bc1ea
        __asm _emit 0x7d
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 0ch]
        add edx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 0ch], edx
        ; Exact mapped bytes EB 06: jmp 0x4bc1f0
        __asm _emit 0xeb
        __asm _emit 0x06
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp - 0ch]
        cmp edx, dword ptr [ecx + 0ch]
        ; Exact mapped bytes 7D 11: jge 0x4bc20c
        __asm _emit 0x7d
        __asm _emit 0x11
        push 6ah
        push 674470h
        ; Exact mapped bytes E8 39 CB 06 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xcb
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4bc20c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DE: jne 0x4bc1f0
        __asm _emit 0x75
        __asm _emit 0xde
        cmp dword ptr [ebp - 0ch], -1
        ; Exact mapped bytes 76 11: jbe 0x4bc229
        __asm _emit 0x76
        __asm _emit 0x11
        push 6ch
        push 674470h
        ; Exact mapped bytes E8 1C CB 06 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xcb
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4bc229
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E3: jne 0x4bc212
        __asm _emit 0x75
        __asm _emit 0xe3
        push 6eh
        push 674470h
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes E8 94 FE 00 00: call 0x4cc0d3
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xfe
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 18h], eax
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 8]
        push edx
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 9E 90 FA FF: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x90
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 0ch
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 8]
        ; Exact mapped bytes 7F 11: jg 0x4bc281
        __asm _emit 0x7f
        __asm _emit 0x11
        push 74h
        push 674470h
        ; Exact mapped bytes E8 C4 CA 06 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xca
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4bc281
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DE: jne 0x4bc265
        __asm _emit 0x75
        __asm _emit 0xde
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp + 8]
        sub ecx, dword ptr [eax + 8]
        push ecx
        push 0
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 4]
        add eax, dword ptr [edx + 8]
        push eax
        ; Exact mapped bytes E8 1E 96 FA FF: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x96
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 1ch]
        push eax
        ; Exact mapped bytes E8 F2 01 01 00: call 0x4cc4a9
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 4], edx
        mov eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 8], ecx
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [edx + 0ch], eax
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
