// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10096FE0 .. +0x183 bytes.
extern "C" __declspec(naked) void FUN_10096fe0_10096FE0() {
    __asm {
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push -1
        push 10170c16h
        push eax
        mov eax, dword ptr [esp + 24h]
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr [esp + 2ch]
        mov dword ptr [esi + 58h], eax
        mov eax, 66666667h
        imul edi
        sar edx, 1
        mov ecx, edx
        push 74h
        shr ecx, 1fh
        add edx, ecx
        mov dword ptr [esi + 54h], edi
        mov dword ptr [esi + 68h], edx
        lea eax, [edx + edx*2]
        lea ecx, [edx + edx]
        mov dword ptr [esi + 60h], eax
        mov dword ptr [esi + 64h], ecx
        ; Exact mapped bytes E8 71 57 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x57
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        mov ebx, dword ptr [esp + 28h]
        xor edx, edx
        cmp eax, edx
        mov dword ptr [esp + 18h], edx
        ; Exact mapped bytes 74 4F: je 0x10097093
        __asm _emit 0x74
        __asm _emit 0x4f
        mov ecx, dword ptr [esi + 7ch]
        mov ebp, dword ptr [ecx + 8]
        mov ecx, dword ptr [ecx + 4]
        mov dword ptr [esp + 34h], ecx
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 164h], 207h
        ; Exact mapped bytes 7E 10: jle 0x10097073
        __asm _emit 0x7e
        __asm _emit 0x10
        mov ecx, dword ptr [ecx + 18ch]
        cmp ecx, edx
        ; Exact mapped bytes 74 06: je 0x10097073
        __asm _emit 0x74
        __asm _emit 0x06
        mov edx, dword ptr [ecx + 81ch]
        ; Exact mapped bytes 66 8B 4E 70: mov cx, word ptr [esi + 0x70]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x70
        add ebp, 4
        push ecx
        mov ecx, dword ptr [esp + 38h]
        add ecx, 11h
        push ebp
        push ecx
        push edx
        push esi
        push 0
        push edi
        push ebx
        mov ecx, eax
        ; Exact mapped bytes E8 CF 2E F9 FF: call 0x10029f60
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x2e
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x10097095
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov dword ptr [esp + 1ch], 0ffffffffh
        mov dword ptr [esi + 5ch], eax
        ; Exact mapped bytes E8 B4 80 06 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x80
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [esi + 5ch]
        push 74h
        ; Exact mapped bytes 66 81 60 24 FF BF: and word ptr [eax + 0x24], 0xbfff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0xbf
        mov eax, dword ptr [esi + 5ch]
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        ; Exact mapped bytes E8 DB 56 0D 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x56
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        test eax, eax
        mov dword ptr [esp + 18h], 1
        ; Exact mapped bytes 74 51: je 0x10097129
        __asm _emit 0x74
        __asm _emit 0x51
        ; Exact mapped bytes 8B 15 A4 57 1C 10: mov edx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 7ch]
        mov ebp, dword ptr [edx + 164h]
        mov ebx, dword ptr [ecx + 8]
        mov ecx, dword ptr [ecx + 4]
        cmp ebp, 99eh
        ; Exact mapped bytes 7E 12: jle 0x10097107
        __asm _emit 0x7e
        __asm _emit 0x12
        mov edx, dword ptr [edx + 18ch]
        test edx, edx
        ; Exact mapped bytes 74 08: je 0x10097107
        __asm _emit 0x74
        __asm _emit 0x08
        mov edx, dword ptr [edx + 2678h]
        ; Exact mapped bytes EB 02: jmp 0x10097109
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        ; Exact mapped bytes 66 8B 6E 70: mov bp, word ptr [esi + 0x70]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x6e
        __asm _emit 0x70
        add ebx, 4
        push ebp
        add ecx, 11h
        push ebx
        mov ebx, dword ptr [esp + 30h]
        push ecx
        push edx
        push esi
        push 0
        push edi
        push ebx
        mov ecx, eax
        ; Exact mapped bytes E8 39 2E F9 FF: call 0x10029f60
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x2e
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x1009712b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 50h], eax
        ; Exact mapped bytes 66 81 60 24 FF BF: and word ptr [eax + 0x24], 0xbfff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0xbf
        mov eax, dword ptr [esi + 50h]
        push ebx
        mov dword ptr [esp + 1ch], 0ffffffffh
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        mov ecx, dword ptr [esi + 78h]
        ; Exact mapped bytes E8 D2 85 06 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x85
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 10h]
        pop edi
        pop esi
        pop ebp
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
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
