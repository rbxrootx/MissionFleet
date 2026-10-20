// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A40D0 .. +0x142 bytes.
extern "C" __declspec(naked) void FUN_584a40d0_584A40D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 8], ecx
        imul eax, dword ptr [ebp + 8], 38h
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + eax + 30h]
        ; Exact mapped bytes E8 67 D5 02 00: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xd5
        __asm _emit 0x02
        __asm _emit 0x00
        cmp eax, 40000000h
        ; Exact mapped bytes 74 14: je 0x584a4104
        __asm _emit 0x74
        __asm _emit 0x14
        imul edx, dword ptr [ebp + 8], 38h
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + edx + 30h], 0
        ; Exact mapped bytes E9 08 01 00 00: jmp 0x584a420c
        __asm _emit 0xe9
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        imul ecx, dword ptr [ebp + 8], 38h
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx + 34h]
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 11: je 0x584a4129
        __asm _emit 0x74
        __asm _emit 0x11
        cmp dword ptr [ebp - 10h], 2
        ; Exact mapped bytes 74 0B: je 0x584a4129
        __asm _emit 0x74
        __asm _emit 0x0b
        cmp dword ptr [ebp - 10h], 1
        ; Exact mapped bytes 74 05: je 0x584a4129
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 E3 00 00 00: jmp 0x584a420c
        __asm _emit 0xe9
        __asm _emit 0xe3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 1], 0
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 BF 7B FE FF: call 0x5848bd00
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x7b
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 74 28 FE FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x28
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 0B: jmp 0x584a415c
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 57 7F FE FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x7f
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 27: je 0x584a4189
        __asm _emit 0x74
        __asm _emit 0x27
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 76 7D FE FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x7d
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 19: je 0x584a4187
        __asm _emit 0x74
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 6A 7D FE FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x7d
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 A3 EA FF FF: call 0x584a2c20
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 7E 06: jle 0x584a4187
        __asm _emit 0x7e
        __asm _emit 0x06
        mov byte ptr [ebp - 1], 1
        ; Exact mapped bytes EB 02: jmp 0x584a4189
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB C8: jmp 0x584a4151
        __asm _emit 0xeb
        __asm _emit 0xc8
        movzx ecx, byte ptr [ebp - 1]
        test ecx, ecx
        ; Exact mapped bytes 75 2D: jne 0x584a41be
        __asm _emit 0x75
        __asm _emit 0x2d
        imul edx, dword ptr [ebp + 8], 38h
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + edx + 30h], 0
        imul ecx, dword ptr [ebp + 8], 38h
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + ecx + 34h], 6
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 D5 EB FF FF: call 0x584a2d90
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xeb
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 4E: jmp 0x584a420c
        __asm _emit 0xeb
        __asm _emit 0x4e
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 11: jne 0x584a41d5
        __asm _emit 0x75
        __asm _emit 0x11
        imul ecx, dword ptr [ebp + 8], 38h
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + ecx + 34h], 1
        ; Exact mapped bytes EB 37: jmp 0x584a420c
        __asm _emit 0xeb
        __asm _emit 0x37
        cmp dword ptr [ebp - 10h], 2
        ; Exact mapped bytes 75 31: jne 0x584a420c
        __asm _emit 0x75
        __asm _emit 0x31
        imul eax, dword ptr [ebp + 8], 38h
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + eax + 30h]
        ; Exact mapped bytes E8 65 7F FE FF: call 0x5848c150
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x7f
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 45 FC: mov word ptr [ebp - 4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfc
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 1ch], eax
        movzx ecx, word ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 1ch]
        push eax
        ; Exact mapped bytes E8 A7 3F 00 00: call 0x584a81b0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x3f
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
