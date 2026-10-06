// Complete Ghidra body ranges for the selected function.
// 2 discontiguous segments; total 156 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588059B0 .. +0x17 bytes.
extern "C" __declspec(naked) void FUN_588059b0_segment_00() {
    __asm {
        ; Exact mapped bytes A1 F8 47 A2 58: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xa1
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        push ebx
        mov ebx, dword ptr [esp + 10h]
        push esi
        mov esi, dword ptr [eax + 0ch]
        push edi
        mov edi, ecx
        test esi, esi
        ; Exact mapped bytes 74 28: je 0x588059ed
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes EB 09: jmp 0x588059d0
        __asm _emit 0xeb
        __asm _emit 0x09
    }
}

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588059D0 .. +0x85 bytes.
extern "C" __declspec(naked) void FUN_588059b0_segment_01() {
    __asm {
        mov cl, byte ptr [esp + 10h]
        cmp byte ptr [esi + 354h], cl
        ; Exact mapped bytes 75 0A: jne 0x588059e6
        __asm _emit 0x75
        __asm _emit 0x0a
        push ebx
        push 0
        mov ecx, esi
        ; Exact mapped bytes E8 BA 59 0D 00: call 0x588db3a0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x59
        __asm _emit 0x0d
        __asm _emit 0x00
        mov esi, dword ptr [esi + 78h]
        test esi, esi
        ; Exact mapped bytes 75 E3: jne 0x588059d0
        __asm _emit 0x75
        __asm _emit 0xe3
        ; Exact mapped bytes 66 8B 74 24 14: mov si, word ptr [esp + 0x14]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 8B 0D F8 47 A2 58: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        movzx edx, si
        push edx
        ; Exact mapped bytes E8 5F 47 F8 FF: call 0x5878a160
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x47
        __asm _emit 0xf8
        __asm _emit 0xff
        add bl, 0ah
        movzx ecx, bl
        push ecx
        push 1
        mov ecx, eax
        ; Exact mapped bytes E8 8F 59 0D 00: call 0x588db3a0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x59
        __asm _emit 0x0d
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 F8 47 A2 58: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes 66 39 B0 50 03 00 00: cmp word ptr [eax + 0x350], si
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 15: jne 0x58805a38
        __asm _emit 0x75
        __asm _emit 0x15
        mov ecx, dword ptr [edi + 174h]
        or dword ptr [edi + 78h], 4
        ; Exact mapped bytes E8 0E 38 0A 00: call 0x588a9240
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x38
        __asm _emit 0x0a
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov cl, byte ptr [esp + 10h]
        cmp cl, byte ptr [eax + 354h]
        ; Exact mapped bytes 75 0B: jne 0x58805a4f
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, dword ptr [edi + 174h]
        ; Exact mapped bytes E8 31 0C 0A 00: call 0x588a6680
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x0c
        __asm _emit 0x0a
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
