// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00436DB3 .. +0x77 bytes.
extern "C" __declspec(naked) void FUN_00436db3_00436DB3() {
    __asm {
        push esi
        push edi
        mov edi, ecx
        cmp dword ptr [edi], 0
        ; Exact mapped bytes 75 2D: jne 0x436de9
        __asm _emit 0x75
        __asm _emit 0x2d
        ; Exact mapped bytes 8B 0D 44 F9 44 00: mov ecx, dword ptr [0x44f944]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0xf9
        __asm _emit 0x44
        __asm _emit 0x00
        test ecx, ecx
        ; Exact mapped bytes 75 1C: jne 0x436de2
        __asm _emit 0x75
        __asm _emit 0x1c
        mov ecx, 44f948h
        mov eax, ecx
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x436dda
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes E8 F9 FB FF FF: call 0x4369cf
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes EB 02: jmp 0x436ddc
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        ; Exact mapped bytes 89 0D 44 F9 44 00: mov dword ptr [0x44f944], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0xf9
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes E8 81 FC FF FF: call 0x436a68
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [edi], eax
        ; Exact mapped bytes A1 44 F9 44 00: mov eax, dword ptr [0x44f944]
        __asm _emit 0xa1
        __asm _emit 0x44
        __asm _emit 0xf9
        __asm _emit 0x44
        __asm _emit 0x00
        mov esi, dword ptr [edi]
        push dword ptr [eax]
        ; Exact mapped bytes FF 15 D8 C0 43 00: call dword ptr [0x43c0d8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd8
        __asm _emit 0xc0
        __asm _emit 0x43
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0D: je 0x436e09
        __asm _emit 0x74
        __asm _emit 0x0d
        cmp esi, dword ptr [eax + 8]
        ; Exact mapped bytes 7D 08: jge 0x436e09
        __asm _emit 0x7d
        __asm _emit 0x08
        mov eax, dword ptr [eax + 0ch]
        mov esi, dword ptr [eax + esi*4]
        ; Exact mapped bytes EB 02: jmp 0x436e0b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        test esi, esi
        ; Exact mapped bytes 75 14: jne 0x436e23
        __asm _emit 0x75
        __asm _emit 0x14
        ; Exact mapped bytes FF 54 24 0C: call dword ptr [esp + 0xc]
        __asm _emit 0xff
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 0D 44 F9 44 00: mov ecx, dword ptr [0x44f944]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x44
        __asm _emit 0xf9
        __asm _emit 0x44
        __asm _emit 0x00
        mov esi, eax
        push esi
        push dword ptr [edi]
        ; Exact mapped bytes E8 B4 FD FF FF: call 0x436bd7
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, esi
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
