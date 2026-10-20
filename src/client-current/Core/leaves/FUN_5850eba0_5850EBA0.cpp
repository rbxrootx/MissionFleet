// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5850EBA0 .. +0xE7 bytes.
extern "C" __declspec(naked) void FUN_5850eba0_5850EBA0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push esi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 8fch], 0
        ; Exact mapped bytes 0F 84 C8 00 00 00: je 0x5850ec82
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 8f8h], 0
        ; Exact mapped bytes 0F 84 B8 00 00 00: je 0x5850ec82
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 EB 7D F7 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x7d
        __asm _emit 0xf7
        __asm _emit 0xff
        imul esi, eax, 3e8h
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 8fch]
        ; Exact mapped bytes E8 27 6E F8 FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x6e
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, eax
        mov eax, esi
        cdq
        idiv ecx
        mov esi, eax
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 8fch]
        ; Exact mapped bytes E8 C0 5D F7 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x5d
        __asm _emit 0xf7
        __asm _emit 0xff
        add esi, eax
        mov dword ptr [ebp - 14h], esi
        ; Exact mapped bytes 8B 0D 24 5F 96 58: mov ecx, dword ptr [0x58965f24]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x24
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A0 D4 F7 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xd4
        __asm _emit 0xf7
        __asm _emit 0xff
        imul esi, eax, 3e8h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8fch]
        ; Exact mapped bytes E8 EC 6D F8 FF: call 0x58495a10
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x6d
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, eax
        mov eax, esi
        cdq
        idiv ecx
        mov esi, eax
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 8fch]
        ; Exact mapped bytes E8 F5 6A F8 FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x6a
        __asm _emit 0xf8
        __asm _emit 0xff
        add esi, eax
        mov dword ptr [ebp - 10h], esi
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5850ec52
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + 874h]
        cmp dword ptr [ebp - 8], edx
        ; Exact mapped bytes 7D 21: jge 0x5850ec82
        __asm _emit 0x7d
        __asm _emit 0x21
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8f8h]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 0ch], eax
        lea ecx, [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 61 78 00 00: call 0x585164e0
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x78
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB C7: jmp 0x5850ec49
        __asm _emit 0xeb
        __asm _emit 0xc7
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
