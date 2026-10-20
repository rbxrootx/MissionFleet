// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586E7430 .. +0x1D0 bytes.
extern "C" __declspec(naked) void FUN_586e7430_586E7430() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        push esi
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 75 07: jne 0x586e7447
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp + 14h], 1
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 0F 84 A9 00 00 00: je 0x586e74fa
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 54: je 0x586e74ab
        __asm _emit 0x74
        __asm _emit 0x54
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 148h]
        add ecx, dword ptr [ebp + 14h]
        cmp ecx, 80h
        ; Exact mapped bytes 7F 3E: jg 0x586e74a9
        __asm _emit 0x7f
        __asm _emit 0x3e
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 0f4h]
        ; Exact mapped bytes E8 33 E3 DA FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xe3
        __asm _emit 0xda
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp - 4]
        cmp eax, dword ptr [edx + ecx*4 + 188h]
        ; Exact mapped bytes 7D 1D: jge 0x586e74a9
        __asm _emit 0x7d
        __asm _emit 0x1d
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 0f4h]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 A8 36 0D 00: call 0x587bab50
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x36
        __asm _emit 0x0d
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 4A: jmp 0x586e74f5
        __asm _emit 0xeb
        __asm _emit 0x4a
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx*4 + 0d8h]
        ; Exact mapped bytes E8 F3 E2 DA FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xe2
        __asm _emit 0xda
        __asm _emit 0xff
        mov esi, eax
        add esi, dword ptr [ebp + 14h]
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax*4 + 0f4h]
        ; Exact mapped bytes E8 DC E2 DA FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xe2
        __asm _emit 0xda
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 7F 1D: jg 0x586e74f5
        __asm _emit 0x7f
        __asm _emit 0x1d
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 0d8h]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 5C 36 0D 00: call 0x587bab50
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x36
        __asm _emit 0x0d
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 EA 00 00 00: jmp 0x586e75e4
        __asm _emit 0xe9
        __asm _emit 0xea
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 84 C3 00 00 00: je 0x586e75c7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 0ch]
        cmp ecx, dword ptr [eax + 184h]
        ; Exact mapped bytes 74 4C: je 0x586e755e
        __asm _emit 0x74
        __asm _emit 0x4c
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 0f4h]
        ; Exact mapped bytes E8 8C E2 DA FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xe2
        __asm _emit 0xda
        __asm _emit 0xff
        mov esi, eax
        sub esi, dword ptr [ebp + 14h]
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx*4 + 0d8h]
        ; Exact mapped bytes E8 75 E2 DA FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xe2
        __asm _emit 0xda
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 7C 1D: jl 0x586e755c
        __asm _emit 0x7c
        __asm _emit 0x1d
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 0f4h]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 65 3C 0D 00: call 0x587bb1c0
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x3c
        __asm _emit 0x0d
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 67: jmp 0x586e75c5
        __asm _emit 0xeb
        __asm _emit 0x67
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx*4 + 0f4h]
        ; Exact mapped bytes E8 40 E2 DA FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xe2
        __asm _emit 0xda
        __asm _emit 0xff
        mov esi, eax
        sub esi, dword ptr [ebp + 14h]
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax*4 + 0d8h]
        ; Exact mapped bytes E8 29 E2 DA FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xe2
        __asm _emit 0xda
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 7C 3A: jl 0x586e75c5
        __asm _emit 0x7c
        __asm _emit 0x3a
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 184h]
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax*4 + 0f4h]
        ; Exact mapped bytes E8 0D E2 DA FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0xe2
        __asm _emit 0xda
        __asm _emit 0xff
        sub eax, dword ptr [ebp + 14h]
        ; Exact mapped bytes 74 1D: je 0x586e75c5
        __asm _emit 0x74
        __asm _emit 0x1d
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 0f4h]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 FC 3B 0D 00: call 0x587bb1c0
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 1D: jmp 0x586e75e4
        __asm _emit 0xeb
        __asm _emit 0x1d
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 0d8h]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 DD 3B 0D 00: call 0x587bb1c0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 1ach], 1
        ; Exact mapped bytes 75 09: jne 0x586e75f9
        __asm _emit 0x75
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 48 F3 FF FF: call 0x586e6940
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
