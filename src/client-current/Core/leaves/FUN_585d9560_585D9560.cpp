// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585D9560 .. +0x17A bytes.
extern "C" __declspec(naked) void FUN_585d9560_585D9560() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        push esi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 20f1ch], 2
        ; Exact mapped bytes 0F 8E C7 00 00 00: jle 0x585d9641
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 ED 76 27 00: call 0x58850c6c
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x76
        __asm _emit 0x27
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cdq
        idiv dword ptr [ecx + 20f1ch]
        mov dword ptr [ebp - 8], edx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 20f1ch]
        sub eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 07: jne 0x585d95a8
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 1
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 07: jne 0x585d95b5
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 1
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 106fch]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 106fch]
        ; Exact mapped bytes E8 61 C1 EB FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xc1
        __asm _emit 0xeb
        __asm _emit 0xff
        mov esi, eax
        ; Exact mapped bytes E8 96 76 27 00: call 0x58850c6c
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x76
        __asm _emit 0x27
        __asm _emit 0x00
        cdq
        idiv dword ptr [ebp - 0ch]
        mov eax, edx
        cdq
        sub eax, edx
        mov ecx, eax
        sar ecx, 1
        mov eax, dword ptr [ebp - 0ch]
        cdq
        sub eax, edx
        sar eax, 1
        sub ecx, eax
        add esi, ecx
        mov dword ptr [ebp - 10h], esi
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 106fch]
        ; Exact mapped bytes E8 C0 B3 EA FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xb3
        __asm _emit 0xea
        __asm _emit 0xff
        mov esi, eax
        ; Exact mapped bytes E8 65 76 27 00: call 0x58850c6c
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x76
        __asm _emit 0x27
        __asm _emit 0x00
        cdq
        idiv dword ptr [ebp - 8]
        mov ecx, edx
        mov eax, dword ptr [ebp - 8]
        cdq
        sub eax, edx
        sar eax, 1
        sub ecx, eax
        add esi, ecx
        mov dword ptr [ebp - 14h], esi
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 04 D8 ED FF: call 0x584b6e30
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xd8
        __asm _emit 0xed
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 20f1ch]
        sub edx, 1
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 20f1ch], edx
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 5a8h], 0
        ; Exact mapped bytes 0F 84 84 00 00 00: je 0x585d96d5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 5a8h]
        sub eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 5a8h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 106fch]
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 106fch]
        ; Exact mapped bytes E8 B0 C0 EB FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xc0
        __asm _emit 0xeb
        __asm _emit 0xff
        mov esi, eax
        ; Exact mapped bytes E8 E5 75 27 00: call 0x58850c6c
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x75
        __asm _emit 0x27
        __asm _emit 0x00
        cdq
        mov ecx, 3
        idiv ecx
        mov eax, 1
        sub eax, edx
        add esi, eax
        mov dword ptr [ebp - 1ch], esi
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 106fch]
        ; Exact mapped bytes E8 17 B3 EA FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xb3
        __asm _emit 0xea
        __asm _emit 0xff
        mov esi, eax
        ; Exact mapped bytes E8 BC 75 27 00: call 0x58850c6c
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x75
        __asm _emit 0x27
        __asm _emit 0x00
        cdq
        mov ecx, 5
        idiv ecx
        mov eax, 2
        sub eax, edx
        add esi, eax
        mov dword ptr [ebp - 20h], esi
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        mov edx, dword ptr [ebp - 20h]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 5C D7 ED FF: call 0x584b6e30
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xd7
        __asm _emit 0xed
        __asm _emit 0xff
        nop
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
