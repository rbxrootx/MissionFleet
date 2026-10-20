// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100BEC90 .. +0x2AF bytes.
extern "C" __declspec(naked) void FUN_100bec90_100BEC90() {
    __asm {
        push -1
        push 10172399h
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
        mov eax, dword ptr [esp + 28h]
        mov edx, dword ptr [esp + 20h]
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 24h]
        push esi
        mov esi, ecx
        push edi
        mov ecx, dword ptr [esp + 34h]
        mov edi, dword ptr [esp + 28h]
        push eax
        mov eax, dword ptr [esp + 28h]
        push ecx
        push edx
        push ebp
        push edi
        push eax
        mov ecx, esi
        mov dword ptr [esp + 28h], esi
        ; Exact mapped bytes E8 DB FC 03 00: call 0x100fe9b0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xfc
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, 20h
        ; Exact mapped bytes 66 09 4E 24: or word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x4e
        __asm _emit 0x24
        mov eax, 40h
        xor ebx, ebx
        mov dword ptr [esi + 578h], eax
        mov dword ptr [esi + 57ch], eax
        lea eax, [esi + 580h]
        xor edx, edx
        mov dword ptr [esi], 10176260h
        mov dword ptr [esi + 50h], edi
        mov dword ptr [esi + 54h], ebp
        mov dword ptr [esi + 58h], 100h
        mov dword ptr [esi + 5ch], ebx
        mov dword ptr [esi + 0d4h], 1900h
        mov dword ptr [eax], edx
        mov dword ptr [esp + 1ch], ebx
        mov dword ptr [eax + 4], edx
        ; Exact mapped bytes A1 A4 57 1C 10: mov eax, dword ptr [0x101c57a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 15h
        ; Exact mapped bytes 7E 0F: jle 0x100bed3f
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        cmp eax, ebx
        ; Exact mapped bytes 74 05: je 0x100bed3f
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [eax + 54h]
        ; Exact mapped bytes EB 02: jmp 0x100bed41
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov dword ptr [esi + 4e4h], eax
        xor eax, eax
        lea edi, [esi + 4e8h]
        push 0ffff40h
        push 1
        push ebx
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov dword ptr [esi + 568h], ebx
        ; Exact mapped bytes FF 15 50 50 17 10: call dword ptr [0x10175050]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        lea edx, [esi + 74h]
        xor ecx, ecx
        mov dword ptr [esi + 68h], eax
        xor eax, eax
        mov dword ptr [edx], ecx
        lea edi, [esi + 84h]
        push 6ch
        mov dword ptr [edx + 4], ecx
        lea ecx, [esi + 7ch]
        mov dword ptr [esi + 7ch], eax
        mov dword ptr [ecx + 4], eax
        mov ecx, 0ah
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        ; Exact mapped bytes E8 0F DA 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xda
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 34h], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 1
        ; Exact mapped bytes 74 38: je 0x100bedd9
        __asm _emit 0x74
        __asm _emit 0x38
        ; Exact mapped bytes 8B 0D A0 57 1C 10: mov ecx, dword ptr [0x101c57a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 27h
        ; Exact mapped bytes 7E 12: jle 0x100bedc2
        __asm _emit 0x7e
        __asm _emit 0x12
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 08: je 0x100bedc2
        __asm _emit 0x74
        __asm _emit 0x08
        add ecx, 9c0h
        ; Exact mapped bytes EB 02: jmp 0x100bedc4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edi, dword ptr [esp + 38h]
        lea edx, [ebp - 19h]
        push edi
        push edx
        push ebx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 89 35 F7 FF: call 0x10032360
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes EB 06: jmp 0x100beddf
        __asm _emit 0xeb
        __asm _emit 0x06
        mov edi, dword ptr [esp + 38h]
        xor eax, eax
        mov ecx, eax
        mov byte ptr [esp + 1ch], bl
        mov dword ptr [esi + 588h], eax
        ; Exact mapped bytes E8 E0 37 F7 FF: call 0x100325d0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x37
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 588h]
        push 0fffffeffh
        ; Exact mapped bytes E8 60 03 04 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x03
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 588h]
        push 3ch
        ; Exact mapped bytes 66 81 60 24 FF 7F: and word ptr [eax + 0x24], 0x7fff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0x7f
        mov ecx, dword ptr [esi + 588h]
        ; Exact mapped bytes E8 07 03 04 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x03
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 588h]
        push 6ch
        ; Exact mapped bytes 66 81 60 24 FF BF: and word ptr [eax + 0x24], 0xbfff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0xbf
        ; Exact mapped bytes E8 74 D9 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xd9
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 2
        ; Exact mapped bytes 74 43: je 0x100bee7f
        __asm _emit 0x74
        __asm _emit 0x43
        ; Exact mapped bytes 8B 0D A0 57 1C 10: mov ecx, dword ptr [0x101c57a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 28h
        ; Exact mapped bytes 7E 21: jle 0x100bee6c
        __asm _emit 0x7e
        __asm _emit 0x21
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 17: je 0x100bee6c
        __asm _emit 0x74
        __asm _emit 0x17
        lea edx, [ebp - 19h]
        push edi
        add ecx, 0a00h
        push edx
        push ebx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 F6 34 F7 FF: call 0x10032360
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x34
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes EB 15: jmp 0x100bee81
        __asm _emit 0xeb
        __asm _emit 0x15
        lea edx, [ebp - 19h]
        push edi
        xor ecx, ecx
        push edx
        push ebx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 E3 34 F7 FF: call 0x10032360
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x34
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100bee81
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, eax
        mov byte ptr [esp + 1ch], bl
        mov dword ptr [esi + 58ch], eax
        ; Exact mapped bytes E8 3E 37 F7 FF: call 0x100325d0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x37
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 58ch]
        push 3ch
        ; Exact mapped bytes E8 81 02 04 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x02
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 58ch]
        push 6ch
        ; Exact mapped bytes 66 81 60 24 FF BF: and word ptr [eax + 0x24], 0xbfff
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0xbf
        ; Exact mapped bytes E8 EE D8 0A 00: call 0x1016c7a0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xd8
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esp + 38h], eax
        cmp eax, ebx
        mov byte ptr [esp + 1ch], 3
        ; Exact mapped bytes 74 43: je 0x100bef05
        __asm _emit 0x74
        __asm _emit 0x43
        ; Exact mapped bytes 8B 0D A0 57 1C 10: mov ecx, dword ptr [0x101c57a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 160h], 2bh
        ; Exact mapped bytes 7E 21: jle 0x100beef2
        __asm _emit 0x7e
        __asm _emit 0x21
        mov ecx, dword ptr [ecx + 190h]
        cmp ecx, ebx
        ; Exact mapped bytes 74 17: je 0x100beef2
        __asm _emit 0x74
        __asm _emit 0x17
        add ebp, -19h
        push edi
        add ecx, 0ac0h
        push ebp
        push ebx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 70 34 F7 FF: call 0x10032360
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x34
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes EB 15: jmp 0x100bef07
        __asm _emit 0xeb
        __asm _emit 0x15
        add ebp, -19h
        push edi
        xor ecx, ecx
        push ebp
        push ebx
        push ecx
        push esi
        mov ecx, eax
        ; Exact mapped bytes E8 5D 34 F7 FF: call 0x10032360
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x34
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x100bef07
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, eax
        mov byte ptr [esp + 1ch], bl
        mov dword ptr [esi + 590h], eax
        ; Exact mapped bytes E8 B8 36 F7 FF: call 0x100325d0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x36
        __asm _emit 0xf7
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        mov ecx, dword ptr [esp + 14h]
        and eax, 0e5f0h
        pop edi
        or ah, 5
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
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
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
