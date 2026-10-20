// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10001200 .. +0x116 bytes.
extern "C" __declspec(naked) void FUN_10001200_10001200() {
    __asm {
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push -1
        push 1016cdcbh
        push eax
        mov eax, dword ptr [esp + 10h]
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        push esi
        mov ebx, ecx
        push edi
        lea edi, [eax + 22h]
        cmp dword ptr [ebx + 60h], 1
        ; Exact mapped bytes 75 05: jne 0x1000122c
        __asm _emit 0x75
        __asm _emit 0x05
        mov edi, 27h
        push 58h
        ; Exact mapped bytes E8 6D B5 16 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xb5
        __asm _emit 0x16
        __asm _emit 0x00
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 1ch], esi
        test esi, esi
        mov dword ptr [esp + 14h], 0
        ; Exact mapped bytes 0F 84 82 00 00 00: je 0x100012ce
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 EC 57 1C 10: mov eax, dword ptr [0x101c57ec]
        __asm _emit 0xa1
        __asm _emit 0xec
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], edi
        ; Exact mapped bytes 7E 15: jle 0x1000126e
        __asm _emit 0x7e
        __asm _emit 0x15
        test edi, edi
        ; Exact mapped bytes 7C 11: jl 0x1000126e
        __asm _emit 0x7c
        __asm _emit 0x11
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x1000126e
        __asm _emit 0x74
        __asm _emit 0x07
        shl edi, 6
        add edi, eax
        ; Exact mapped bytes EB 02: jmp 0x10001270
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov eax, dword ptr [ebx + 8]
        mov ecx, dword ptr [esp + 20h]
        push 1388h
        add eax, ecx
        mov ecx, dword ptr [ebx + 4]
        push 0
        push 0
        push eax
        push ecx
        push ebx
        mov ecx, esi
        ; Exact mapped bytes E8 21 D7 0F 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xd7
        __asm _emit 0x0f
        __asm _emit 0x00
        test edi, edi
        mov dword ptr [esi], 101751f8h
        mov dword ptr [esi + 50h], 0
        mov dword ptr [esi + 54h], edi
        ; Exact mapped bytes 74 2D: je 0x100012d0
        __asm _emit 0x74
        __asm _emit 0x2d
        mov ecx, dword ptr [edi + 18h]
        add edi, 20h
        mov dword ptr [esi + 0ch], ecx
        mov edx, dword ptr [edi - 4]
        mov dword ptr [esi + 10h], edx
        mov ecx, dword ptr [edi]
        lea eax, [esi + 14h]
        mov dword ptr [esi + 14h], ecx
        mov edx, dword ptr [edi + 4]
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [edi + 8]
        mov dword ptr [eax + 8], ecx
        mov edx, dword ptr [edi + 0ch]
        mov dword ptr [eax + 0ch], edx
        ; Exact mapped bytes EB 02: jmp 0x100012d0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        mov dword ptr [ebx + 64h], esi
        ; Exact mapped bytes A1 F4 56 1C 10: mov eax, dword ptr [0x101c56f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push esi
        mov dword ptr [esp + 18h], 0ffffffffh
        mov ecx, dword ptr [eax + 104e0h]
        ; Exact mapped bytes E8 B4 DC 0F 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xdc
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ecx, dword ptr [ebx + 64h]
        push 0fffffeffh
        ; Exact mapped bytes E8 67 DE 0F 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xde
        __asm _emit 0x0f
        __asm _emit 0x00
        mov ebx, dword ptr [ebx + 64h]
        mov ecx, dword ptr [esp + 0ch]
        pop edi
        pop esi
        ; Exact mapped bytes 66 81 63 24 FF 7F: and word ptr [ebx + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x63
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ebx
        add esp, 0ch
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
