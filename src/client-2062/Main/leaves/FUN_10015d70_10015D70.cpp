// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10015D70 .. +0x161 bytes.
extern "C" __declspec(naked) void FUN_10015d70_10015D70() {
    __asm {
        push -1
        push 1016d413h
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
        ; Exact mapped bytes A1 A4 57 1C 10: mov eax, dword ptr [0x101c57a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push ebx
        push ebp
        push esi
        mov esi, ecx
        xor ebx, ebx
        mov ecx, dword ptr [eax + 160h]
        push edi
        cmp ecx, 0cdh
        mov dword ptr [esp + 10h], esi
        ; Exact mapped bytes 7E 11: jle 0x10015db6
        __asm _emit 0x7e
        __asm _emit 0x11
        mov eax, dword ptr [eax + 190h]
        cmp eax, ebx
        ; Exact mapped bytes 74 07: je 0x10015db6
        __asm _emit 0x74
        __asm _emit 0x07
        add eax, 3340h
        ; Exact mapped bytes EB 02: jmp 0x10015db8
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ebp, dword ptr [esp + 38h]
        mov ecx, dword ptr [esp + 34h]
        mov edx, dword ptr [esp + 30h]
        push ebp
        push ecx
        push 6
        push eax
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 BF 94 0E 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x94
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 40h]
        mov dword ptr [esp + 1ch], ebx
        cmp ecx, ebx
        mov dword ptr [esi], 1017544ch
        ; Exact mapped bytes 66 C7 46 26 20 4E: mov word ptr [esi + 0x26], 0x4e20
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x46
        __asm _emit 0x26
        __asm _emit 0x20
        __asm _emit 0x4e
        ; Exact mapped bytes 74 06: je 0x10015dee
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 B2 91 0E 00: call 0x100fefa0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x91
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 30h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 06: je 0x10015dfb
        __asm _emit 0x74
        __asm _emit 0x06
        push esi
        ; Exact mapped bytes E8 05 91 0E 00: call 0x100fef00
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x91
        __asm _emit 0x0e
        __asm _emit 0x00
        push 0fffffeffh
        mov ecx, esi
        ; Exact mapped bytes E8 59 93 0E 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x93
        __asm _emit 0x0e
        __asm _emit 0x00
        mov edi, dword ptr [esp + 24h]
        ; Exact mapped bytes 66 81 66 24 FF 7F: and word ptr [esi + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x66
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 07 99 0E 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x99
        __asm _emit 0x0e
        __asm _emit 0x00
        push 0fch
        ; Exact mapped bytes E8 7D 69 15 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x69
        __asm _emit 0x15
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 1
        ; Exact mapped bytes 74 17: je 0x10015e4a
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [esp + 34h]
        mov edx, dword ptr [esp + 2ch]
        push ebp
        push ecx
        push 6
        push edx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 48 94 0E 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x94
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x10015e4c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push edi
        mov ecx, eax
        mov byte ptr [esp + 20h], bl
        mov dword ptr [esi + 118h], eax
        ; Exact mapped bytes E8 C2 98 0E 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x98
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 118h]
        push 101h
        ; Exact mapped bytes E8 F2 92 0E 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x92
        __asm _emit 0x0e
        __asm _emit 0x00
        mov eax, dword ptr [esp + 28h]
        mov dword ptr [esi + 110h], ebx
        mov dword ptr [esi + 100h], eax
        mov dword ptr [esi + 10ch], ebx
        mov dword ptr [esi + 108h], 1
        ; Exact mapped bytes FF 15 20 51 17 10: call dword ptr [0x10175120]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        cdq
        mov ecx, 64h
        pop edi
        idiv ecx
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esp + 10h]
        lea eax, [eax + eax*4]
        add edx, 3e8h
        mov dword ptr [esi + 0fch], edx
        lea edx, [eax + eax*4]
        shl edx, 2
        mov dword ptr [esi + 114h], edx
        mov eax, esi
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
        ; Exact mapped bytes C2 1C 00: ret 0x1c
        __asm _emit 0xc2
        __asm _emit 0x1c
        __asm _emit 0x00
    }
}
