// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58486B40 .. +0x11F bytes.
extern "C" __declspec(naked) void FUN_58486b40_58486B40() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5887d674h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 30h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp + 8]
        add eax, 22h
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 10h]
        cmp dword ptr [ecx + 60h], 1
        ; Exact mapped bytes 75 07: jne 0x58486b81
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 27h
        push 58h
        ; Exact mapped bytes E8 7C A4 3A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xa4
        __asm _emit 0x3a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 49: je 0x58486be4
        __asm _emit 0x74
        __asm _emit 0x49
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 8]
        add eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes 8B 0D F4 06 96 58: mov ecx, dword ptr [0x589606f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 11 DF FF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        push 1388h
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        mov edx, dword ptr [ebp - 24h]
        push edx
        mov eax, dword ptr [ebp - 28h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 31 FC FF FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x58486beb
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 2ch], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 2ch]
        mov dword ptr [eax + 64h], ecx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 D4 FD FF FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 64h]
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp - 30h]
        push ecx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 BC E0 32 00: call 0x587b4ce0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xe0
        __asm _emit 0x32
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 64h]
        mov dword ptr [ebp - 38h], eax
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 76 E9 32 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xe9
        __asm _emit 0x32
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 64h]
        mov dword ptr [ebp - 3ch], edx
        push 0
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 F3 F1 FF FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
