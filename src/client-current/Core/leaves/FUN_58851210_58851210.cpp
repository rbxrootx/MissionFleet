// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58851210 .. +0xFA bytes.
extern "C" __declspec(naked) void FUN_58851210_58851210() {
    __asm {
        ; Exact mapped bytes 83 3D A8 9C 96 58 00: cmp dword ptr [0x58969ca8], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xa8
        __asm _emit 0x9c
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 62 AE 01 00: je 0x5886c07f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x62
        __asm _emit 0xae
        __asm _emit 0x01
        __asm _emit 0x00
        sub esp, 8
        ; Exact mapped bytes 0F AE 5C 24 04: stmxcsr dword ptr [esp + 4]
        __asm _emit 0x0f
        __asm _emit 0xae
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x04
        mov eax, dword ptr [esp + 4]
        and eax, 7f80h
        cmp eax, 1f80h
        ; Exact mapped bytes 75 0F: jne 0x58851244
        __asm _emit 0x75
        __asm _emit 0x0f
        ; Exact mapped bytes D9 3C 24: fnstcw word ptr [esp]
        __asm _emit 0xd9
        __asm _emit 0x3c
        __asm _emit 0x24
        ; Exact mapped bytes 66 8B 04 24: mov ax, word ptr [esp]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 E0 7F: and ax, 0x7f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x7f
        ; Exact mapped bytes 66 83 F8 7F: cmp ax, 0x7f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf8
        __asm _emit 0x7f
        lea esp, [esp + 8]
        ; Exact mapped bytes 0F 85 31 AE 01 00: jne 0x5886c07f
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x31
        __asm _emit 0xae
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes E9 05 AF 01 00: jmp 0x5886c158
        __asm _emit 0xe9
        __asm _emit 0x05
        __asm _emit 0xaf
        __asm _emit 0x01
        __asm _emit 0x00
        push 10h
        push 588ed080h
        ; Exact mapped bytes E8 01 15 FE FF: call 0x58832760
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x15
        __asm _emit 0xfe
        __asm _emit 0xff
        mov esi, dword ptr [ebp + 8]
        test esi, esi
        ; Exact mapped bytes 75 14: jne 0x5885127a
        __asm _emit 0x75
        __asm _emit 0x14
        ; Exact mapped bytes E8 04 12 01 00: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x12
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [eax], 16h
        ; Exact mapped bytes E8 35 FD FF FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes EB 66: jmp 0x588512e0
        __asm _emit 0xeb
        __asm _emit 0x66
        mov edi, dword ptr [ebp + 0ch]
        test edi, edi
        ; Exact mapped bytes 74 E5: je 0x58851266
        __asm _emit 0x74
        __asm _emit 0xe5
        cmp byte ptr [edi], 0
        ; Exact mapped bytes 74 E0: je 0x58851266
        __asm _emit 0x74
        __asm _emit 0xe0
        cmp byte ptr [esi], 0
        ; Exact mapped bytes 75 0D: jne 0x58851298
        __asm _emit 0x75
        __asm _emit 0x0d
        ; Exact mapped bytes E8 DF 11 01 00: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x11
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [eax], 16h
        ; Exact mapped bytes EB DE: jmp 0x58851276
        __asm _emit 0xeb
        __asm _emit 0xde
        lea eax, [ebp - 1ch]
        push eax
        ; Exact mapped bytes E8 1F B4 01 00: call 0x5886c6c0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xb4
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 75 0D: jne 0x588512b5
        __asm _emit 0x75
        __asm _emit 0x0d
        ; Exact mapped bytes E8 C2 11 01 00: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x11
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [eax], 18h
        ; Exact mapped bytes EB C1: jmp 0x58851276
        __asm _emit 0xeb
        __asm _emit 0xc1
        and dword ptr [ebp - 20h], 0
        and dword ptr [ebp - 4], 0
        push dword ptr [ebp - 1ch]
        push dword ptr [ebp + 10h]
        push edi
        push esi
        ; Exact mapped bytes E8 34 B9 01 00: call 0x5886cbfe
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xb9
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 10h
        mov esi, eax
        mov dword ptr [ebp - 20h], esi
        mov dword ptr [ebp - 4], 0fffffffeh
        ; Exact mapped bytes E8 15 00 00 00: call 0x588512f3
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, esi
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop edi
        pop esi
        pop ebx
        leave
        ret
        mov esi, dword ptr [ebp - 20h]
        test esi, esi
        ; Exact mapped bytes 75 09: jne 0x58851300
        __asm _emit 0x75
        __asm _emit 0x09
        push dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 2A B4 01 00: call 0x5886c729
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xb4
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        push dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 0E 8A 00 00: call 0x58859d16
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        ret
    }
}
