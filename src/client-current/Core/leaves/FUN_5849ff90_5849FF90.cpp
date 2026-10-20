// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5849FF90 .. +0x222 bytes.
extern "C" __declspec(naked) void FUN_5849ff90_5849FF90() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 40h
        mov dword ptr [ebp - 10h], ecx
        mov dword ptr [ebp - 18h], 0
        mov dword ptr [ebp - 30h], 0
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 18h], 4
        ; Exact mapped bytes 76 07: jbe 0x5849ffb7
        __asm _emit 0x76
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 F5 01 00 00: jmp 0x584a01ac
        __asm _emit 0xe9
        __asm _emit 0xf5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], 12ch
        mov dword ptr [ebp - 0ch], 0
        mov dword ptr [ebp - 14h], 0
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 8
        mov dword ptr [ebp - 20h], ecx
        lea edx, [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 98 80 FE FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x80
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0F: jmp 0x5849fffa
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 0
        lea eax, [ebp - 34h]
        push eax
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 87 7A FE FF: call 0x58487a80
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x7a
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 8
        mov dword ptr [ebp - 24h], ecx
        lea edx, [ebp - 38h]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 81 81 FE FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x81
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 B8 79 FE FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x79
        __asm _emit 0xfe
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 0F 84 7C 01 00 00: je 0x584a019f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 15 7A FE FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x7a
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 BE 57 FF FF: call 0x584957f0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x57
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 85 3D 01 00 00: jne 0x584a0177
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x3d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 FE 79 FE FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x79
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 F7 D0 FE FF: call 0x5848d140
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xd0
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 26 01 00 00: je 0x584a0177
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x26
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 E7 79 FE FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x79
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes E8 C0 9E FE FF: call 0x58489f20
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x9e
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 0F 01 00 00: je 0x584a0177
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 40h], edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 3ch], ecx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DC C2 FE FF: call 0x5848c360
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xc2
        __asm _emit 0xfe
        __asm _emit 0xff
        add eax, dword ptr [ebp - 0ch]
        imul edx, eax, 0dh
        add edx, 1dh
        push edx
        mov ecx, 589620d8h
        ; Exact mapped bytes E8 18 BC FE FF: call 0x5848bcb0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xbc
        __asm _emit 0xfe
        __asm _emit 0xff
        xor edx, edx
        div dword ptr [ebp - 28h]
        add edx, 64h
        mov dword ptr [ebp - 4], edx
        imul eax, dword ptr [ebp - 14h], 0c8h
        add eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        cdq
        mov ecx, 9
        idiv ecx
        mov dword ptr [ebp - 1ch], edx
        cmp dword ptr [ebp - 1ch], 7
        ; Exact mapped bytes 0F 87 84 00 00 00: ja 0x584a014c
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes FF 24 95 B4 01 4A 58: jmp dword ptr [edx*4 + 0x584a01b4]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0xb4
        __asm _emit 0x01
        __asm _emit 0x4a
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 40h]
        add eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 40h], eax
        mov ecx, dword ptr [ebp - 3ch]
        add ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 3ch], ecx
        ; Exact mapped bytes EB 66: jmp 0x584a014c
        __asm _emit 0xeb
        __asm _emit 0x66
        mov edx, dword ptr [ebp - 40h]
        sub edx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 40h], edx
        mov eax, dword ptr [ebp - 3ch]
        add eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 3ch], eax
        ; Exact mapped bytes EB 52: jmp 0x584a014c
        __asm _emit 0xeb
        __asm _emit 0x52
        mov ecx, dword ptr [ebp - 40h]
        sub ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 40h], ecx
        mov edx, dword ptr [ebp - 3ch]
        sub edx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 3ch], edx
        ; Exact mapped bytes EB 3E: jmp 0x584a014c
        __asm _emit 0xeb
        __asm _emit 0x3e
        mov eax, dword ptr [ebp - 40h]
        add eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 40h], eax
        mov ecx, dword ptr [ebp - 3ch]
        sub ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 3ch], ecx
        ; Exact mapped bytes EB 2A: jmp 0x584a014c
        __asm _emit 0xeb
        __asm _emit 0x2a
        mov edx, dword ptr [ebp - 40h]
        add edx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 40h], edx
        ; Exact mapped bytes EB 1F: jmp 0x584a014c
        __asm _emit 0xeb
        __asm _emit 0x1f
        mov eax, dword ptr [ebp - 40h]
        sub eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 40h], eax
        ; Exact mapped bytes EB 14: jmp 0x584a014c
        __asm _emit 0xeb
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 3ch]
        add ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 3ch], ecx
        ; Exact mapped bytes EB 09: jmp 0x584a014c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 3ch]
        sub edx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 3ch], edx
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 EC 78 FE FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x78
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        lea eax, [ebp - 40h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 1F 0B FF FF: call 0x58490c90
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x0b
        __asm _emit 0xff
        __asm _emit 0xff
        add eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 18h], eax
        mov edx, dword ptr [ebp - 0ch]
        add edx, 1
        mov dword ptr [ebp - 0ch], edx
        ; Exact mapped bytes 74 18: je 0x584a019a
        __asm _emit 0x74
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 0ch]
        cdq
        mov ecx, 9
        idiv ecx
        test edx, edx
        ; Exact mapped bytes 75 09: jne 0x584a019a
        __asm _emit 0x75
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        ; Exact mapped bytes E9 4C FE FF FF: jmp 0x5849ffeb
        __asm _emit 0xe9
        __asm _emit 0x4c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 18h], 4
        mov eax, dword ptr [ebp - 18h]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
