// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5871DF40 .. +0x189 bytes.
extern "C" __declspec(naked) void FUN_5871df40_5871DF40() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        push esi
        mov dword ptr [ebp - 4], ecx
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 0e4h]
        ; Exact mapped bytes E8 8F B7 E0 FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xb7
        __asm _emit 0xe0
        __asm _emit 0xff
        cmp eax, 8
        ; Exact mapped bytes 0F 8E 4F 01 00 00: jle 0x5871e0b9
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x4f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 6F: je 0x5871dfdf
        __asm _emit 0x74
        __asm _emit 0x6f
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 0e4h]
        ; Exact mapped bytes E8 E9 2C 0A 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x2c
        __asm _emit 0x0a
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7E 54: jle 0x5871dfdf
        __asm _emit 0x7e
        __asm _emit 0x54
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5871df9d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 3
        ; Exact mapped bytes 7D 37: jge 0x5871dfda
        __asm _emit 0x7d
        __asm _emit 0x37
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 0e4h]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx*4 + 0e4h]
        ; Exact mapped bytes E8 AB 2C 0A 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x2c
        __asm _emit 0x0a
        __asm _emit 0x00
        sub eax, 1
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 89 37 0A 00: call 0x587c1760
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x37
        __asm _emit 0x0a
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB BA: jmp 0x5871df94
        __asm _emit 0xeb
        __asm _emit 0xba
        ; Exact mapped bytes E9 90 00 00 00: jmp 0x5871e06f
        __asm _emit 0xe9
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 85 86 00 00 00: jne 0x5871e06f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0e4h]
        ; Exact mapped bytes E8 70 2C 0A 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x2c
        __asm _emit 0x0a
        __asm _emit 0x00
        mov esi, eax
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 0e4h]
        ; Exact mapped bytes E8 D7 B6 E0 FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xb6
        __asm _emit 0xe0
        __asm _emit 0xff
        sub eax, 8
        cmp esi, eax
        ; Exact mapped bytes 7D 4F: jge 0x5871e06f
        __asm _emit 0x7d
        __asm _emit 0x4f
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x5871e032
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 1
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 3
        ; Exact mapped bytes 7D 37: jge 0x5871e06f
        __asm _emit 0x7d
        __asm _emit 0x37
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 0e4h]
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 0e4h]
        ; Exact mapped bytes E8 16 2C 0A 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x2c
        __asm _emit 0x0a
        __asm _emit 0x00
        add eax, 1
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 F4 36 0A 00: call 0x587c1760
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x36
        __asm _emit 0x0a
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB BA: jmp 0x5871e029
        __asm _emit 0xeb
        __asm _emit 0xba
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax + 0e4h]
        ; Exact mapped bytes E8 EA 2B 0A 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x2b
        __asm _emit 0x0a
        __asm _emit 0x00
        imul esi, eax, 63h
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax + 0e4h]
        ; Exact mapped bytes E8 50 B6 E0 FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xb6
        __asm _emit 0xe0
        __asm _emit 0xff
        mov ecx, eax
        sub ecx, 8
        mov eax, esi
        cdq
        idiv ecx
        add eax, 0dfh
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 08 FD FF FF: call 0x5871ddc0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1F F3 FF FF: call 0x5871d3e0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
