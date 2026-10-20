// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1007E400 .. +0x181 bytes.
extern "C" __declspec(naked) void FUN_1007e400_1007E400() {
    __asm {
        push -1
        push 1016fcceh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        push ebx
        mov ebx, dword ptr [esp + 24h]
        mov eax, dword ptr [esp + 18h]
        push ebp
        mov ebp, dword ptr [esp + 2ch]
        push esi
        push edi
        xor edi, edi
        push 40h
        push edi
        push edi
        push ebp
        mov esi, ecx
        push ebx
        push eax
        mov dword ptr [esp + 28h], esi
        ; Exact mapped bytes E8 76 05 08 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x05
        __asm _emit 0x08
        __asm _emit 0x00
        or byte ptr [esi + 24h], 20h
        mov dword ptr [esi + 50h], ebx
        mov dword ptr [esi + 54h], ebp
        mov dword ptr [esi + 58h], 100h
        mov dword ptr [esi + 5ch], edi
        push 58h
        mov dword ptr [esp + 20h], edi
        mov dword ptr [esi], 10175d64h
        ; Exact mapped bytes E8 41 E3 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xe3
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 1
        ; Exact mapped bytes 74 55: je 0x1007e4c6
        __asm _emit 0x74
        __asm _emit 0x55
        push 40h
        push 0
        push 0
        push ebp
        push ebx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 2F 05 08 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x05
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [esp + 2ch]
        mov dword ptr [edi], 101751f8h
        test eax, eax
        mov dword ptr [edi + 50h], 0
        mov dword ptr [edi + 54h], eax
        ; Exact mapped bytes 74 29: je 0x1007e4c2
        __asm _emit 0x74
        __asm _emit 0x29
        mov ecx, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [edi + 0ch], ecx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [edi + 10h], edx
        mov edx, dword ptr [eax]
        lea ecx, [edi + 14h]
        mov dword ptr [edi + 14h], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, edi
        ; Exact mapped bytes EB 02: jmp 0x1007e4c8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 0fffffeffh
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 64h], ecx
        ; Exact mapped bytes E8 86 0C 08 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x0c
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [esi + 64h]
        push 58h
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        mov eax, dword ptr [esi + 64h]
        ; Exact mapped bytes 66 81 60 24 FB FF: and word ptr [eax + 0x24], 0xfffb
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes E8 AD E2 0E 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xe2
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        test edi, edi
        mov byte ptr [esp + 1ch], 2
        ; Exact mapped bytes 74 53: je 0x1007e558
        __asm _emit 0x74
        __asm _emit 0x53
        push 40h
        push 0
        push 0
        push ebp
        push ebx
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 9B 04 08 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x04
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [esp + 28h]
        mov dword ptr [edi], 101751f8h
        test eax, eax
        mov dword ptr [edi + 50h], 0
        mov dword ptr [edi + 54h], eax
        ; Exact mapped bytes 74 2D: je 0x1007e55a
        __asm _emit 0x74
        __asm _emit 0x2d
        mov ecx, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [edi + 0ch], ecx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [edi + 10h], edx
        mov edx, dword ptr [eax]
        lea ecx, [edi + 14h]
        mov dword ptr [edi + 14h], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes EB 02: jmp 0x1007e55a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edi, edi
        mov ecx, dword ptr [esp + 14h]
        mov dword ptr [esi + 60h], edi
        ; Exact mapped bytes 66 81 67 24 FB FF: and word ptr [edi + 0x24], 0xfffb
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x67
        __asm _emit 0x24
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [esi + 68h], 1
        mov eax, esi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
