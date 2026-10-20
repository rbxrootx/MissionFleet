// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B2FC0 .. +0x18E bytes.
extern "C" __declspec(naked) void FUN_587b2fc0_587B2FC0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 430h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 420h], 0
        push 400h
        push 0
        lea eax, [ebp - 404h]
        push eax
        ; Exact mapped bytes E8 20 9E 09 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x9e
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 0ch
        push 588bd9e0h
        push 400h
        lea ecx, [ebp - 404h]
        push ecx
        push 588bd9a0h
        push 588bd9fch
        push 588bda0ch
        ; Exact mapped bytes FF 15 EC 42 89 58: call dword ptr [0x588942ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        push 588bd9a0h
        lea edx, [ebp - 404h]
        push edx
        lea ecx, [ebp - 41ch]
        ; Exact mapped bytes E8 0F EC D4 FF: call 0x58501c40
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xec
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 430h], eax
        mov eax, dword ptr [ebp - 430h]
        push eax
        ; Exact mapped bytes E8 5D BD D6 FF: call 0x5851eda0
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xbd
        __asm _emit 0xd6
        __asm _emit 0xff
        add esp, 8
        mov byte ptr [ebp - 421h], al
        lea ecx, [ebp - 41ch]
        ; Exact mapped bytes E8 49 BD D1 FF: call 0x584ceda0
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xbd
        __asm _emit 0xd1
        __asm _emit 0xff
        movzx ecx, byte ptr [ebp - 421h]
        test ecx, ecx
        ; Exact mapped bytes 74 26: je 0x587b3088
        __asm _emit 0x74
        __asm _emit 0x26
        lea edx, [ebp - 404h]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 CF EB D4 FF: call 0x58501c40
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xeb
        __asm _emit 0xd4
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 420h]
        or eax, 1
        mov dword ptr [ebp - 420h], eax
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes E9 BC 00 00 00: jmp 0x587b3144
        __asm _emit 0xe9
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 42ch]
        push ecx
        ; Exact mapped bytes E8 7C CC D6 FF: call 0x5851fd10
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xcc
        __asm _emit 0xd6
        __asm _emit 0xff
        add esp, 4
        cmp dword ptr [ebp - 42ch], 9
        ; Exact mapped bytes 75 26: jne 0x587b30c6
        __asm _emit 0x75
        __asm _emit 0x26
        push 588bda20h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 93 EB D4 FF: call 0x58501c40
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xeb
        __asm _emit 0xd4
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 420h]
        or edx, 1
        mov dword ptr [ebp - 420h], edx
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes E9 80 00 00 00: jmp 0x587b3144
        __asm _emit 0xe9
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 5F: jmp 0x587b3125
        __asm _emit 0xeb
        __asm _emit 0x5f
        cmp dword ptr [ebp - 42ch], 4
        ; Exact mapped bytes 75 56: jne 0x587b3125
        __asm _emit 0x75
        __asm _emit 0x56
        cmp dword ptr [ebp - 428h], 2
        ; Exact mapped bytes 75 23: jne 0x587b30fb
        __asm _emit 0x75
        __asm _emit 0x23
        push 588bda2ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 5B EB D4 FF: call 0x58501c40
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xeb
        __asm _emit 0xd4
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 420h]
        or eax, 1
        mov dword ptr [ebp - 420h], eax
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes EB 4B: jmp 0x587b3144
        __asm _emit 0xeb
        __asm _emit 0x4b
        ; Exact mapped bytes EB 2A: jmp 0x587b3125
        __asm _emit 0xeb
        __asm _emit 0x2a
        cmp dword ptr [ebp - 428h], 1
        ; Exact mapped bytes 75 21: jne 0x587b3125
        __asm _emit 0x75
        __asm _emit 0x21
        push 588bda38h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 2F EB D4 FF: call 0x58501c40
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xeb
        __asm _emit 0xd4
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 420h]
        or ecx, 1
        mov dword ptr [ebp - 420h], ecx
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes EB 1F: jmp 0x587b3144
        __asm _emit 0xeb
        __asm _emit 0x1f
        push 588bda20h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 0E EB D4 FF: call 0x58501c40
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xeb
        __asm _emit 0xd4
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 420h]
        or edx, 1
        mov dword ptr [ebp - 420h], edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 02 DF 07 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xdf
        __asm _emit 0x07
        __asm _emit 0x00
    }
}
