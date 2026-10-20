// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5888D040 .. +0xC1 bytes.
extern "C" __declspec(naked) void FUN_5888d040() {
    __asm {
        push esi
        mov esi, ecx
        mov cl, byte ptr [esp + 10h]
        push edi
        test cl, cl
        ; Exact mapped bytes 74 2F: je 0x5888d07b
        __asm _emit 0x74
        __asm _emit 0x2f
        cmp cl, 0ah
        ; Exact mapped bytes 73 21: jae 0x5888d072
        __asm _emit 0x73
        __asm _emit 0x21
        mov al, byte ptr [esp + 10h]
        cmp al, 0ah
        ; Exact mapped bytes 76 04: jbe 0x5888d05d
        __asm _emit 0x76
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 03: jmp 0x5888d060
        __asm _emit 0xeb
        __asm _emit 0x03
        movzx eax, al
        push 0eeeeeeh
        push eax
        movzx eax, cl
        push eax
        ; Exact mapped bytes FF 15 38 C0 98 58: call dword ptr [0x5898c038]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        ; Exact mapped bytes EB 1B: jmp 0x5888d08d
        __asm _emit 0xeb
        __asm _emit 0x1b
        push 0eeeeeeh
        push 0
        ; Exact mapped bytes EB 07: jmp 0x5888d082
        __asm _emit 0xeb
        __asm _emit 0x07
        push 0eeeeeeh
        push -1
        push 5899fcb8h
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        mov ecx, dword ptr [esi + 4cch]
        add esp, 4
        push eax
        ; Exact mapped bytes E8 34 B8 07 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xb8
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4cch]
        ; Exact mapped bytes E8 C9 B7 07 00: call 0x58908870
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xb7
        __asm _emit 0x07
        __asm _emit 0x00
        mov edi, dword ptr [esp + 0ch]
        mov ecx, dword ptr [esi + 4c8h]
        push 0eeeeeeh
        push -1
        push edi
        ; Exact mapped bytes E8 12 B8 07 00: call 0x589088d0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xb8
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4c8h]
        ; Exact mapped bytes E8 A7 B7 07 00: call 0x58908870
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xb7
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D A8 45 A2 58: mov ecx, dword ptr [0x58a245a8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa8
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [ecx + 174h]
        push 0
        push edi
        ; Exact mapped bytes E8 93 83 01 00: call 0x588a5470
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x83
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [esi + 4c8h]
        mov eax, dword ptr [edx + 88h]
        mov ecx, dword ptr [esi + 498h]
        push eax
        ; Exact mapped bytes E8 6B A2 07 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xa2
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 E4 FD FF FF: call 0x5888cee0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
