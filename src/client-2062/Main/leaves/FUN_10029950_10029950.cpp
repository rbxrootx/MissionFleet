// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10029950 .. +0x190 bytes.
extern "C" __declspec(naked) void FUN_10029950_10029950() {
    __asm {
        push -1
        push 1016daf3h
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
        ; Exact mapped bytes A1 C4 57 1C 10: mov eax, dword ptr [0x101c57c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov ecx, dword ptr [eax + 160h]
        mov dword ptr [esp + 10h], esi
        cmp ecx, 9
        ; Exact mapped bytes 7E 14: jle 0x10029994
        __asm _emit 0x7e
        __asm _emit 0x14
        mov eax, dword ptr [eax + 190h]
        xor ebp, ebp
        cmp eax, ebp
        ; Exact mapped bytes 74 0A: je 0x10029996
        __asm _emit 0x74
        __asm _emit 0x0a
        lea edi, [eax + 240h]
        ; Exact mapped bytes EB 04: jmp 0x10029998
        __asm _emit 0xeb
        __asm _emit 0x04
        xor ebp, ebp
        xor edi, edi
        mov eax, dword ptr [esp + 34h]
        mov ebx, dword ptr [esp + 30h]
        mov ecx, dword ptr [esp + 2ch]
        mov edx, dword ptr [esp + 24h]
        push eax
        push ebp
        push ebp
        push ebx
        push ecx
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 FB 4F 0D 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x4f
        __asm _emit 0x0d
        __asm _emit 0x00
        cmp edi, ebp
        mov dword ptr [esi], 101751f8h
        mov dword ptr [esi + 50h], ebp
        mov dword ptr [esi + 54h], edi
        ; Exact mapped bytes 74 29: je 0x100299ee
        __asm _emit 0x74
        __asm _emit 0x29
        mov eax, dword ptr [edi + 18h]
        add edi, 20h
        mov dword ptr [esi + 0ch], eax
        mov ecx, dword ptr [edi - 4]
        mov dword ptr [esi + 10h], ecx
        mov eax, dword ptr [edi]
        lea edx, [esi + 14h]
        mov dword ptr [esi + 14h], eax
        mov ecx, dword ptr [edi + 4]
        mov dword ptr [edx + 4], ecx
        mov eax, dword ptr [edi + 8]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [edi + 0ch]
        mov dword ptr [edx + 0ch], ecx
        ; Exact mapped bytes 66 81 66 24 FF DF: and word ptr [esi + 0x24], 0xdfff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x66
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0xdf
        push 101h
        mov ecx, esi
        mov dword ptr [esp + 20h], ebp
        mov dword ptr [esi], 101756a4h
        ; Exact mapped bytes E8 56 57 0D 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x57
        __asm _emit 0x0d
        __asm _emit 0x00
        mov edx, dword ptr [esp + 28h]
        ; Exact mapped bytes 66 81 66 24 FF 3F: and word ptr [esi + 0x24], 0x3fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x66
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x3f
        push 54h
        mov dword ptr [esi + 58h], edx
        mov dword ptr [esi + 60h], ebp
        ; Exact mapped bytes E8 7F 2D 14 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x2d
        __asm _emit 0x14
        __asm _emit 0x00
        mov edi, eax
        add esp, 4
        mov dword ptr [esp + 34h], edi
        cmp edi, ebp
        mov byte ptr [esp + 1ch], 1
        ; Exact mapped bytes 74 70: je 0x10029aa3
        __asm _emit 0x74
        __asm _emit 0x70
        ; Exact mapped bytes A1 C4 57 1C 10: mov eax, dword ptr [0x101c57c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 0bch
        ; Exact mapped bytes 7E 10: jle 0x10029a54
        __asm _emit 0x7e
        __asm _emit 0x10
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebp
        ; Exact mapped bytes 74 06: je 0x10029a54
        __asm _emit 0x74
        __asm _emit 0x06
        mov ebp, dword ptr [eax + 2f0h]
        mov eax, dword ptr [esp + 2ch]
        push -1
        push 0
        push 0
        push ebx
        push eax
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 48 4F 0D 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x4f
        __asm _emit 0x0d
        __asm _emit 0x00
        test ebp, ebp
        mov dword ptr [edi], 1017523ch
        mov dword ptr [edi + 50h], ebp
        ; Exact mapped bytes 74 2A: je 0x10029a9f
        __asm _emit 0x74
        __asm _emit 0x2a
        mov ecx, dword ptr [ebp + 10h]
        add ebp, 18h
        mov dword ptr [edi + 0ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edi + 10h], edx
        mov ecx, dword ptr [ebp]
        lea eax, [edi + 14h]
        mov dword ptr [edi + 14h], ecx
        mov edx, dword ptr [ebp + 4]
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 8], ecx
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 0ch], edx
        mov ecx, edi
        ; Exact mapped bytes EB 02: jmp 0x10029aa5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        push 0fffffeffh
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esi + 5ch], ecx
        ; Exact mapped bytes E8 A9 56 0D 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x56
        __asm _emit 0x0d
        __asm _emit 0x00
        mov eax, dword ptr [esi + 5ch]
        mov ecx, dword ptr [esp + 14h]
        pop edi
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        mov eax, dword ptr [esi + 5ch]
        ; Exact mapped bytes 66 81 60 24 FF BF: and word ptr [eax + 0x24], 0xbfff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0xbf
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
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
