// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585CA760 .. +0x120 bytes.
extern "C" __declspec(naked) void FUN_585ca760_585CA760() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 10h], ecx
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 45 C2 EB FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xc2
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 BE 1C EC FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x1c
        __asm _emit 0xec
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 57 A2 EB FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xa2
        __asm _emit 0xeb
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
        cmp ecx, 9
        ; Exact mapped bytes 75 17: jne 0x585ca7b0
        __asm _emit 0x75
        __asm _emit 0x17
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 4C B2 EC FF: call 0x584959f0
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xb2
        __asm _emit 0xec
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 45 7F 00 00: call 0x585d26f0
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x7f
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 15: jmp 0x585ca7c5
        __asm _emit 0xeb
        __asm _emit 0x15
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 15 B2 EC FF: call 0x584959d0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xb2
        __asm _emit 0xec
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 AE 18 EC FF: call 0x5848c070
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x18
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x585ca7d7
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 8
        ; Exact mapped bytes 0F 8D 9B 00 00 00: jge 0x585ca87c
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + eax*4 + 29ch], 0
        push 0
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes 8B 0D 34 06 96 58: mov ecx, dword ptr [0x58960634]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 BD F7 01 00: call 0x585e9fc0
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xf7
        __asm _emit 0x01
        __asm _emit 0x00
        nop
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 B1 C1 EB FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xc1
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 E2 14 EC FF: call 0x5848bd00
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x14
        __asm _emit 0xec
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 9B C1 EB FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xc1
        __asm _emit 0xeb
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 0B: jmp 0x585ca835
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 7E 18 EC FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x18
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 3C: je 0x585ca877
        __asm _emit 0x74
        __asm _emit 0x3c
        mov ecx, dword ptr [ebp - 4]
        cmp ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 75 1A: jne 0x585ca85d
        __asm _emit 0x75
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 95 16 EC FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x16
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        push 1
        push 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 36 4D ED FF: call 0x5849f590
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x4d
        __asm _emit 0xed
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 18: jmp 0x585ca875
        __asm _emit 0xeb
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 7B 16 EC FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x16
        __asm _emit 0xec
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        push 0
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 1C 4D ED FF: call 0x5849f590
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x4d
        __asm _emit 0xed
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB B3: jmp 0x585ca82a
        __asm _emit 0xeb
        __asm _emit 0xb3
        ; Exact mapped bytes E9 52 FF FF FF: jmp 0x585ca7ce
        __asm _emit 0xe9
        __asm _emit 0x52
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
