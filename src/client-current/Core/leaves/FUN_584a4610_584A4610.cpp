// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A4610 .. +0x138 bytes.
extern "C" __declspec(naked) void FUN_584a4610_584A4610() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 30h
        mov dword ptr [ebp - 8], ecx
        imul eax, dword ptr [ebp + 8], 38h
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + eax + 30h], 0
        ; Exact mapped bytes 74 05: je 0x584a462c
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 16 01 00 00: jmp 0x584a4742
        __asm _emit 0xe9
        __asm _emit 0x16
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        imul edx, dword ptr [ebp + 8], 38h
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + edx + 34h], 0
        ; Exact mapped bytes 74 05: je 0x584a463f
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 03 01 00 00: jmp 0x584a4742
        __asm _emit 0xe9
        __asm _emit 0x03
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 1], 0
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 A9 76 FE FF: call 0x5848bd00
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x76
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 5E 23 FE FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x23
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 0B: jmp 0x584a4672
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 41 7A FE FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x7a
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 78: je 0x584a46f0
        __asm _emit 0x74
        __asm _emit 0x78
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 60 78 FE FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x78
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 62: je 0x584a46eb
        __asm _emit 0x74
        __asm _emit 0x62
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 1F 7A FE FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x7a
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 24 23 FE FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x23
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        imul ecx, dword ptr [ebp + 8], 38h
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx + 28h]
        mov dword ptr [ebp - 24h], eax
        imul ecx, dword ptr [ebp + 8], 38h
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx + 24h]
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        mov edx, dword ptr [ebp - 20h]
        push edx
        mov eax, dword ptr [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        push ecx
        ; Exact mapped bytes E8 50 3D 00 00: call 0x584a8420
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ; Exact mapped bytes DD 5D D0: fstp qword ptr [ebp - 0x30]
        __asm _emit 0xdd
        __asm _emit 0x5d
        __asm _emit 0xd0
        ; Exact mapped bytes F2 0F 10 05 98 51 89 58: movsd xmm0, qword ptr [0x58895198]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x05
        __asm _emit 0x98
        __asm _emit 0x51
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 66 0F 2F 45 D0: comisd xmm0, xmmword ptr [ebp - 0x30]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x2f
        __asm _emit 0x45
        __asm _emit 0xd0
        ; Exact mapped bytes 72 06: jb 0x584a46eb
        __asm _emit 0x72
        __asm _emit 0x06
        mov byte ptr [ebp - 1], 1
        ; Exact mapped bytes EB 05: jmp 0x584a46f0
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 77 FF FF FF: jmp 0x584a4667
        __asm _emit 0xe9
        __asm _emit 0x77
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        movzx edx, byte ptr [ebp - 1]
        test edx, edx
        ; Exact mapped bytes 74 20: je 0x584a4718
        __asm _emit 0x74
        __asm _emit 0x20
        imul eax, dword ptr [ebp + 8], 38h
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + eax + 24h], 0
        imul edx, dword ptr [ebp + 8], 38h
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + edx + 28h], 0
        ; Exact mapped bytes EB 2A: jmp 0x584a4742
        __asm _emit 0xeb
        __asm _emit 0x2a
        imul ecx, dword ptr [ebp + 8], 38h
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx + 28h]
        push eax
        imul ecx, dword ptr [ebp + 8], 38h
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx + 24h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        push eax
        ; Exact mapped bytes E8 31 3B 00 00: call 0x584a8270
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x3b
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
