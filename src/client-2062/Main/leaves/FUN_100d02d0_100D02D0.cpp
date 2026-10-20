// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100D02D0 .. +0x19F bytes.
extern "C" __declspec(naked) void FUN_100d02d0_100D02D0() {
    __asm {
        push -1
        push 10172f5eh
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
        mov ebx, dword ptr [esp + 20h]
        push ebp
        mov ebp, dword ptr [esp + 20h]
        mov edx, dword ptr [esp + 1ch]
        push esi
        push edi
        mov edi, ecx
        lea eax, [ebx + 64h]
        push 40h
        lea ecx, [ebp + 400h]
        push eax
        push ecx
        push ebx
        push ebp
        push edx
        mov ecx, edi
        mov dword ptr [esp + 28h], edi
        ; Exact mapped bytes E8 9D E6 02 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xe6
        __asm _emit 0x02
        __asm _emit 0x00
        push 54h
        mov dword ptr [esp + 20h], 0
        mov dword ptr [edi], 101763e8h
        ; Exact mapped bytes E8 78 C4 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xc4
        __asm _emit 0x09
        __asm _emit 0x00
        mov esi, eax
        add esp, 4
        mov dword ptr [esp + 2ch], esi
        test esi, esi
        mov byte ptr [esp + 1ch], 1
        ; Exact mapped bytes 74 73: je 0x100d03ad
        __asm _emit 0x74
        __asm _emit 0x73
        ; Exact mapped bytes A1 A4 57 1C 10: mov eax, dword ptr [0x101c57a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 2
        ; Exact mapped bytes 7E 0F: jle 0x100d0357
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x100d0357
        __asm _emit 0x74
        __asm _emit 0x05
        mov ebp, dword ptr [eax + 8]
        ; Exact mapped bytes EB 02: jmp 0x100d0359
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esp + 30h]
        mov ecx, dword ptr [esp + 28h]
        push eax
        push 0
        push 0
        push ebx
        push ecx
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 40 E6 02 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xe6
        __asm _emit 0x02
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [esi], 1017523ch
        mov dword ptr [esi + 50h], ebp
        ; Exact mapped bytes 74 2A: je 0x100d03a7
        __asm _emit 0x74
        __asm _emit 0x2a
        mov edx, dword ptr [ebp + 10h]
        add ebp, 18h
        mov dword ptr [esi + 0ch], edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [esi + 10h], eax
        mov edx, dword ptr [ebp]
        lea ecx, [esi + 14h]
        mov dword ptr [esi + 14h], edx
        mov eax, dword ptr [ebp + 4]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ebp, dword ptr [esp + 28h]
        ; Exact mapped bytes EB 02: jmp 0x100d03af
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        mov dword ptr [edi + 7ch], esi
        mov byte ptr [esp + 1ch], 0
        lea esi, [edi + 5ch]
        mov dword ptr [esp + 28h], 8
        push 0fch
        ; Exact mapped bytes E8 D4 C3 09 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xc3
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 2ch], eax
        test eax, eax
        mov byte ptr [esp + 1ch], 2
        ; Exact mapped bytes 74 39: je 0x100d0415
        __asm _emit 0x74
        __asm _emit 0x39
        ; Exact mapped bytes 8B 0D A4 57 1C 10: mov ecx, dword ptr [0x101c57a4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 23h
        ; Exact mapped bytes 7E 12: jle 0x100d03fd
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100d03fd
        __asm _emit 0x74
        __asm _emit 0x08
        lea edx, [ecx + 8c0h]
        ; Exact mapped bytes EB 02: jmp 0x100d03ff
        __asm _emit 0xeb
        __asm _emit 0x02
        xor edx, edx
        ; Exact mapped bytes 0F BF 4C 24 30: movsx ecx, word ptr [esp + 0x30]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x30
        add ecx, 2
        push ecx
        push ebx
        push ebp
        push edx
        push edi
        mov ecx, eax
        ; Exact mapped bytes E8 7D EE 02 00: call 0x100ff290
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xee
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x100d0417
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        push 101h
        mov ecx, eax
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi], eax
        ; Exact mapped bytes E8 36 ED 02 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xed
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        add esi, 4
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        mov eax, dword ptr [esp + 28h]
        dec eax
        mov dword ptr [esp + 28h], eax
        ; Exact mapped bytes 75 82: jne 0x100d03c2
        __asm _emit 0x75
        __asm _emit 0x82
        ; Exact mapped bytes 66 8B 57 24: mov dx, word ptr [edi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x57
        __asm _emit 0x24
        mov ecx, dword ptr [esp + 14h]
        and edx, 0e5f0h
        mov dword ptr [edi + 58h], 100h
        or dh, 5
        mov eax, edi
        ; Exact mapped bytes 66 89 57 24: mov word ptr [edi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x24
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
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
