// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883E837 .. +0x146 bytes.
extern "C" __declspec(naked) void FUN_5883e837_5883E837() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 494h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 10h]
        push ebx
        mov ebx, dword ptr [ebp + 18h]
        push esi
        mov esi, dword ptr [ebp + 0ch]
        push edi
        mov edi, dword ptr [ebp + 14h]
        push eax
        lea eax, [ebp - 84h]
        mov dword ptr [ebp - 488h], ecx
        mov ecx, dword ptr [ebp + 1ch]
        push 588c1df0h
        push eax
        mov dword ptr [ebp - 48ch], ecx
        ; Exact mapped bytes E8 E3 E2 CC FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xe2
        __asm _emit 0xcc
        __asm _emit 0xff
        push esi
        lea eax, [ebp - 44h]
        push 588c1df8h
        push eax
        ; Exact mapped bytes E8 D4 E2 CC FF: call 0x5850cb60
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xe2
        __asm _emit 0xcc
        __asm _emit 0xff
        lea eax, [ebp - 84h]
        push eax
        ; Exact mapped bytes E8 E8 28 01 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 490h], eax
        lea eax, [ebp - 44h]
        push eax
        ; Exact mapped bytes E8 D9 28 01 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        mov esi, dword ptr [ebp - 48ch]
        add esp, 20h
        mov dword ptr [ebp - 494h], eax
        lea eax, [ebp - 484h]
        push eax
        push esi
        ; Exact mapped bytes E8 B7 FE FF FF: call 0x5883e77a
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push dword ptr [ebp - 490h]
        mov esi, eax
        lea eax, [ebp - 484h]
        push eax
        lea eax, [ebp - 84h]
        push eax
        ; Exact mapped bytes E8 B2 82 02 00: call 0x58866b90
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x82
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 14h
        test eax, eax
        ; Exact mapped bytes 74 31: je 0x5883e916
        __asm _emit 0x74
        __asm _emit 0x31
        cmp byte ptr [esi], 0
        ; Exact mapped bytes 75 CC: jne 0x5883e8b6
        __asm _emit 0x75
        __asm _emit 0xcc
        push ebx
        push dword ptr [ebp - 488h]
        push edi
        ; Exact mapped bytes E8 A3 7D 02 00: call 0x5886669a
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x7d
        __asm _emit 0x02
        __asm _emit 0x00
        push edi
        mov byte ptr [ebx + edi - 1], 0
        ; Exact mapped bytes E8 7E 28 01 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 10h
        mov ecx, dword ptr [ebp - 4]
        pop edi
        pop esi
        xor ecx, ebp
        pop ebx
        ; Exact mapped bytes E8 3E 27 FF FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x27
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
        lea eax, [ebp - 484h]
        push eax
        push esi
        ; Exact mapped bytes E8 57 FE FF FF: call 0x5883e77a
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        cmp byte ptr [ebp - 484h], 5bh
        mov esi, eax
        pop ecx
        pop ecx
        ; Exact mapped bytes 74 BA: je 0x5883e8ea
        __asm _emit 0x74
        __asm _emit 0xba
        push dword ptr [ebp - 494h]
        lea eax, [ebp - 484h]
        push eax
        lea eax, [ebp - 44h]
        push eax
        ; Exact mapped bytes E8 4A 82 02 00: call 0x58866b90
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x82
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x5883e954
        __asm _emit 0x74
        __asm _emit 0x07
        cmp byte ptr [esi], 0
        ; Exact mapped bytes 75 C4: jne 0x5883e916
        __asm _emit 0x75
        __asm _emit 0xc4
        ; Exact mapped bytes EB 96: jmp 0x5883e8ea
        __asm _emit 0xeb
        __asm _emit 0x96
        lea eax, [ebp - 44h]
        push eax
        ; Exact mapped bytes E8 23 28 01 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        lea ecx, [ebp - 484h]
        add eax, ecx
        push ebx
        push eax
        push edi
        ; Exact mapped bytes E8 2D 7D 02 00: call 0x5886669a
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x7d
        __asm _emit 0x02
        __asm _emit 0x00
        push edi
        mov byte ptr [ebx + edi - 1], 0
        ; Exact mapped bytes E8 08 28 01 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 14h
        ; Exact mapped bytes EB 88: jmp 0x5883e905
        __asm _emit 0xeb
        __asm _emit 0x88
    }
}
