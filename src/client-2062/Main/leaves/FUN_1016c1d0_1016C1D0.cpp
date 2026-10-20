// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1016C1D0 .. +0xF8 bytes.
extern "C" __declspec(naked) void FUN_1016c1d0_1016C1D0() {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        test eax, eax
        mov esi, ecx
        ; Exact mapped bytes 0F 84 8E 00 00 00: je 0x1016c26d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 0F 85 83 00 00 00: jne 0x1016c26d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 2ch], eax
        mov eax, dword ptr [esi + 4]
        cmp eax, -1
        ; Exact mapped bytes 75 1A: jne 0x1016c20f
        __asm _emit 0x75
        __asm _emit 0x1a
        push 1
        push 0
        push 0
        push 0
        push 1
        push 2
        ; Exact mapped bytes FF 15 A8 51 17 10: call dword ptr [0x101751a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        cmp eax, -1
        mov dword ptr [esi + 4], eax
        ; Exact mapped bytes 74 5E: je 0x1016c26d
        __asm _emit 0x74
        __asm _emit 0x5e
        mov eax, dword ptr [esi + 2ch]
        mov ecx, dword ptr [esi + 4]
        push 10h
        push 462h
        mov eax, dword ptr [eax + 118h]
        push eax
        push ecx
        ; Exact mapped bytes FF 15 C0 51 17 10: call dword ptr [0x101751c0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        cmp eax, -1
        ; Exact mapped bytes 74 3E: je 0x1016c26d
        __asm _emit 0x74
        __asm _emit 0x3e
        mov eax, dword ptr [esi + 4]
        lea edx, [esp + 8]
        push 4
        push edx
        push 1002h
        push 0ffffh
        push eax
        mov dword ptr [esp + 1ch], 40000h
        ; Exact mapped bytes FF 15 BC 51 17 10: call dword ptr [0x101751bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        cmp eax, -1
        ; Exact mapped bytes 75 1C: jne 0x1016c273
        __asm _emit 0x75
        __asm _emit 0x1c
        mov ecx, dword ptr [esi + 4]
        push ecx
        ; Exact mapped bytes FF 15 A4 51 17 10: call dword ptr [0x101751a4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        mov edx, dword ptr [esi + 4]
        mov ecx, dword ptr [esi + 2ch]
        push edx
        ; Exact mapped bytes E8 73 04 00 00: call 0x1016c6e0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4]
        push edi
        mov edi, dword ptr [esi + 2ch]
        push esi
        push eax
        lea ecx, [edi + 120h]
        ; Exact mapped bytes E8 29 02 00 00: call 0x1016c4b0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 11ch]
        mov edx, dword ptr [esp + 10h]
        inc ecx
        mov dword ptr [edi + 11ch], ecx
        mov ecx, dword ptr [esp + 14h]
        mov eax, dword ptr [esi + 4]
        push ecx
        push edx
        push eax
        ; Exact mapped bytes FF 15 B0 51 17 10: call dword ptr [0x101751b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        test eax, eax
        pop edi
        ; Exact mapped bytes 75 12: jne 0x1016c2bf
        __asm _emit 0x75
        __asm _emit 0x12
        mov ecx, dword ptr [esi + 4]
        push ecx
        mov ecx, dword ptr [esi + 2ch]
        ; Exact mapped bytes E8 27 04 00 00: call 0x1016c6e0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, 1
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
