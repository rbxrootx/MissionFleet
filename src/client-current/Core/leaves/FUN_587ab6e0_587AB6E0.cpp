// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587AB6E0 .. +0x40F bytes.
extern "C" __declspec(naked) void FUN_587ab6e0_587AB6E0() {
    __asm {
        sub esp, 14h
        mov edx, dword ptr [esp + 1ch]
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 24h]
        push edi
        mov eax, dword ptr [esi + 0ch]
        mov ecx, dword ptr [esi + 2ch]
        add eax, -5
        cmp eax, ecx
        cmovbe ecx, eax
        mov eax, dword ptr [esi]
        mov dword ptr [esp + 1ch], ecx
        xor ebp, ebp
        mov eax, dword ptr [eax + 4]
        mov dword ptr [esp + 20h], eax
        ; Exact mapped bytes 0F 1F 40 00: nop dword ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x40
        __asm _emit 0x00
        mov eax, dword ptr [esi + 16bch]
        mov ebx, 0ffffh
        mov ecx, dword ptr [esi]
        add eax, 2ah
        shr eax, 3
        mov ecx, dword ptr [ecx + 10h]
        cmp ecx, eax
        ; Exact mapped bytes 0F 82 6A 01 00 00: jb 0x587ab898
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x6a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [esi + 6ch]
        sub ecx, eax
        mov eax, dword ptr [esi]
        sub edi, dword ptr [esi + 5ch]
        mov eax, dword ptr [eax + 4]
        mov dword ptr [esp + 18h], eax
        add eax, edi
        cmp eax, ebx
        cmovb ebx, eax
        cmp ebx, ecx
        cmova ebx, ecx
        cmp ebx, dword ptr [esp + 1ch]
        ; Exact mapped bytes 73 25: jae 0x587ab776
        __asm _emit 0x73
        __asm _emit 0x25
        test ebx, ebx
        ; Exact mapped bytes 75 0B: jne 0x587ab760
        __asm _emit 0x75
        __asm _emit 0x0b
        cmp edx, 4
        ; Exact mapped bytes 0F 85 3A 01 00 00: jne 0x587ab898
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x3a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 08: jmp 0x587ab768
        __asm _emit 0xeb
        __asm _emit 0x08
        test edx, edx
        ; Exact mapped bytes 0F 84 30 01 00 00: je 0x587ab898
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 18h]
        add eax, edi
        cmp ebx, eax
        ; Exact mapped bytes 0F 85 22 01 00 00: jne 0x587ab898
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x22
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edx, 4
        ; Exact mapped bytes 75 10: jne 0x587ab78b
        __asm _emit 0x75
        __asm _emit 0x10
        mov eax, dword ptr [esi]
        mov eax, dword ptr [eax + 4]
        add eax, edi
        cmp ebx, eax
        ; Exact mapped bytes 75 05: jne 0x587ab78b
        __asm _emit 0x75
        __asm _emit 0x05
        lea ebp, [edx - 3]
        ; Exact mapped bytes EB 02: jmp 0x587ab78d
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        push ebp
        push 0
        push 0
        push esi
        ; Exact mapped bytes E8 E8 4F 00 00: call 0x587b0780
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 8]
        mov edx, ebx
        mov eax, dword ptr [esi + 14h]
        shr edx, 8
        mov byte ptr [ecx + eax - 4], bl
        mov ecx, dword ptr [esi + 14h]
        mov eax, dword ptr [esi + 8]
        mov byte ptr [ecx + eax - 3], dl
        mov dl, bl
        mov ecx, dword ptr [esi + 14h]
        not dl
        mov eax, dword ptr [esi + 8]
        mov byte ptr [ecx + eax - 2], dl
        mov edx, ebx
        mov eax, dword ptr [esi + 8]
        not edx
        mov ecx, dword ptr [esi + 14h]
        shr edx, 8
        mov byte ptr [ecx + eax - 1], dl
        mov eax, dword ptr [esi]
        mov dword ptr [esp + 20h], eax
        mov eax, dword ptr [eax + 1ch]
        push eax
        mov dword ptr [esp + 2ch], eax
        ; Exact mapped bytes E8 4D 4B 00 00: call 0x587b0330
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x4b
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 2ch]
        add esp, 14h
        mov edx, dword ptr [esp + 10h]
        mov esi, dword ptr [edx + 10h]
        cmp dword ptr [ecx + 14h], esi
        cmovbe esi, dword ptr [ecx + 14h]
        mov eax, esi
        mov dword ptr [esp + 14h], esi
        mov esi, dword ptr [esp + 28h]
        test eax, eax
        ; Exact mapped bytes 74 32: je 0x587ab838
        __asm _emit 0x74
        __asm _emit 0x32
        push eax
        push dword ptr [ecx + 10h]
        push dword ptr [edx + 0ch]
        ; Exact mapped bytes E8 7E 10 0A 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x10
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [esp + 1ch]
        add esp, 0ch
        mov edx, dword ptr [esp + 14h]
        mov ecx, dword ptr [esp + 18h]
        add dword ptr [eax + 0ch], edx
        add dword ptr [ecx + 10h], edx
        add dword ptr [eax + 14h], edx
        sub dword ptr [eax + 10h], edx
        sub dword ptr [ecx + 14h], edx
        ; Exact mapped bytes 75 06: jne 0x587ab838
        __asm _emit 0x75
        __asm _emit 0x06
        mov eax, dword ptr [ecx + 8]
        mov dword ptr [ecx + 10h], eax
        test edi, edi
        ; Exact mapped bytes 74 2E: je 0x587ab86a
        __asm _emit 0x74
        __asm _emit 0x2e
        mov eax, dword ptr [esi + 5ch]
        cmp edi, ebx
        cmova edi, ebx
        add eax, dword ptr [esi + 38h]
        push edi
        push eax
        mov eax, dword ptr [esi]
        push dword ptr [eax + 0ch]
        ; Exact mapped bytes E8 3D 10 0A 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x10
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        add esp, 0ch
        add dword ptr [eax + 0ch], edi
        mov eax, dword ptr [esi]
        sub dword ptr [eax + 10h], edi
        mov eax, dword ptr [esi]
        add dword ptr [eax + 14h], edi
        add dword ptr [esi + 5ch], edi
        sub ebx, edi
        test ebx, ebx
        ; Exact mapped bytes 74 1E: je 0x587ab88c
        __asm _emit 0x74
        __asm _emit 0x1e
        mov eax, dword ptr [esi]
        push ebx
        push dword ptr [eax + 0ch]
        push eax
        ; Exact mapped bytes E8 D6 24 00 00: call 0x587add50
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        add esp, 0ch
        add dword ptr [eax + 0ch], ebx
        mov eax, dword ptr [esi]
        sub dword ptr [eax + 10h], ebx
        mov eax, dword ptr [esi]
        add dword ptr [eax + 14h], ebx
        mov edx, dword ptr [esp + 2ch]
        test ebp, ebp
        ; Exact mapped bytes 0F 84 78 FE FF FF: je 0x587ab710
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x78
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi]
        mov ebx, dword ptr [esp + 20h]
        sub ebx, dword ptr [eax + 4]
        ; Exact mapped bytes 0F 84 A8 00 00 00: je 0x587ab94f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [esi + 2ch]
        cmp ebx, edi
        ; Exact mapped bytes 72 22: jb 0x587ab8d0
        __asm _emit 0x72
        __asm _emit 0x22
        mov dword ptr [esi + 16b0h], 2
        mov eax, dword ptr [eax]
        push edi
        sub eax, edi
        push eax
        push dword ptr [esi + 38h]
        ; Exact mapped bytes E8 CA 0F 0A 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x0f
        __asm _emit 0x0a
        __asm _emit 0x00
        mov edx, dword ptr [esi + 2ch]
        add esp, 0ch
        mov eax, edx
        ; Exact mapped bytes EB 73: jmp 0x587ab943
        __asm _emit 0xeb
        __asm _emit 0x73
        mov eax, dword ptr [esi + 3ch]
        mov edx, dword ptr [esi + 6ch]
        sub eax, edx
        cmp eax, ebx
        ; Exact mapped bytes 77 39: ja 0x587ab915
        __asm _emit 0x77
        __asm _emit 0x39
        mov ecx, dword ptr [esi + 38h]
        sub edx, edi
        push edx
        mov dword ptr [esi + 6ch], edx
        lea eax, [ecx + edi]
        push eax
        push ecx
        ; Exact mapped bytes E8 A1 0F 0A 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x0f
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [esi + 16b0h]
        add esp, 0ch
        cmp eax, 2
        ; Exact mapped bytes 73 07: jae 0x587ab904
        __asm _emit 0x73
        __asm _emit 0x07
        inc eax
        mov dword ptr [esi + 16b0h], eax
        mov edx, dword ptr [esi + 6ch]
        cmp dword ptr [esi + 16b4h], edx
        ; Exact mapped bytes 76 06: jbe 0x587ab915
        __asm _emit 0x76
        __asm _emit 0x06
        mov dword ptr [esi + 16b4h], edx
        mov eax, dword ptr [esi]
        push ebx
        mov eax, dword ptr [eax]
        sub eax, ebx
        push eax
        mov eax, dword ptr [esi + 38h]
        add eax, edx
        push eax
        ; Exact mapped bytes E8 68 0F 0A 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x0f
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 16b4h]
        add esp, 0ch
        mov eax, dword ptr [esi + 2ch]
        mov edx, dword ptr [esi + 6ch]
        sub eax, ecx
        add edx, ebx
        cmp ebx, eax
        cmova ebx, eax
        lea eax, [ecx + ebx]
        mov dword ptr [esi + 6ch], edx
        mov dword ptr [esi + 16b4h], eax
        mov dword ptr [esi + 5ch], edx
        mov edx, dword ptr [esi + 6ch]
        cmp dword ptr [esi + 16c4h], edx
        ; Exact mapped bytes 73 06: jae 0x587ab960
        __asm _emit 0x73
        __asm _emit 0x06
        mov dword ptr [esi + 16c4h], edx
        test ebp, ebp
        ; Exact mapped bytes 74 17: je 0x587ab97b
        __asm _emit 0x74
        __asm _emit 0x17
        pop edi
        mov dword ptr [esi + 16c0h], 8
        mov eax, 3
        pop esi
        pop ebp
        pop ebx
        add esp, 14h
        ret
        mov edi, dword ptr [esp + 2ch]
        test edi, edi
        ; Exact mapped bytes 74 1F: je 0x587ab9a2
        __asm _emit 0x74
        __asm _emit 0x1f
        cmp edi, 4
        ; Exact mapped bytes 74 1A: je 0x587ab9a2
        __asm _emit 0x74
        __asm _emit 0x1a
        mov eax, dword ptr [esi]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 75 12: jne 0x587ab9a2
        __asm _emit 0x75
        __asm _emit 0x12
        cmp edx, dword ptr [esi + 5ch]
        ; Exact mapped bytes 75 0D: jne 0x587ab9a2
        __asm _emit 0x75
        __asm _emit 0x0d
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 14h
        ret
        mov eax, dword ptr [esi]
        mov ebx, dword ptr [esi + 3ch]
        sub ebx, edx
        mov dword ptr [esp + 28h], ebx
        cmp dword ptr [eax + 4], ebx
        ; Exact mapped bytes 76 4E: jbe 0x587aba00
        __asm _emit 0x76
        __asm _emit 0x4e
        mov ecx, dword ptr [esi + 5ch]
        mov eax, dword ptr [esi + 2ch]
        cmp ecx, eax
        ; Exact mapped bytes 7C 44: jl 0x587aba00
        __asm _emit 0x7c
        __asm _emit 0x44
        sub ecx, eax
        sub edx, eax
        mov dword ptr [esi + 5ch], ecx
        mov ecx, dword ptr [esi + 38h]
        add eax, ecx
        push edx
        push eax
        push ecx
        mov dword ptr [esi + 6ch], edx
        ; Exact mapped bytes E8 BD 0E 0A 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x0e
        __asm _emit 0x0a
        __asm _emit 0x00
        mov eax, dword ptr [esi + 16b0h]
        add esp, 0ch
        cmp eax, 2
        ; Exact mapped bytes 73 07: jae 0x587ab9e8
        __asm _emit 0x73
        __asm _emit 0x07
        inc eax
        mov dword ptr [esi + 16b0h], eax
        add ebx, dword ptr [esi + 2ch]
        mov eax, dword ptr [esi + 6ch]
        mov dword ptr [esp + 28h], ebx
        cmp dword ptr [esi + 16b4h], eax
        ; Exact mapped bytes 76 06: jbe 0x587aba00
        __asm _emit 0x76
        __asm _emit 0x06
        mov dword ptr [esi + 16b4h], eax
        mov ecx, dword ptr [esi]
        mov ebx, dword ptr [ecx + 4]
        cmp dword ptr [esp + 28h], ebx
        cmovbe ebx, dword ptr [esp + 28h]
        test ebx, ebx
        ; Exact mapped bytes 74 2D: je 0x587aba3f
        __asm _emit 0x74
        __asm _emit 0x2d
        mov eax, dword ptr [esi + 6ch]
        add eax, dword ptr [esi + 38h]
        push ebx
        push eax
        push ecx
        ; Exact mapped bytes E8 30 23 00 00: call 0x587add50
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 16b4h]
        add esp, 0ch
        mov eax, dword ptr [esi + 2ch]
        add dword ptr [esi + 6ch], ebx
        sub eax, ecx
        cmp ebx, eax
        cmova ebx, eax
        lea eax, [ecx + ebx]
        mov dword ptr [esi + 16b4h], eax
        mov ecx, dword ptr [esi + 6ch]
        cmp dword ptr [esi + 16c4h], ecx
        ; Exact mapped bytes 73 06: jae 0x587aba50
        __asm _emit 0x73
        __asm _emit 0x06
        mov dword ptr [esi + 16c4h], ecx
        mov eax, dword ptr [esi + 16bch]
        mov edx, dword ptr [esi + 0ch]
        add eax, 2ah
        shr eax, 3
        sub edx, eax
        mov eax, 0ffffh
        cmp edx, eax
        cmova edx, eax
        mov eax, dword ptr [esi + 2ch]
        sub ecx, dword ptr [esi + 5ch]
        cmp edx, eax
        cmovbe eax, edx
        cmp ecx, eax
        ; Exact mapped bytes 73 1B: jae 0x587aba95
        __asm _emit 0x73
        __asm _emit 0x1b
        test ecx, ecx
        ; Exact mapped bytes 75 07: jne 0x587aba85
        __asm _emit 0x75
        __asm _emit 0x07
        cmp edi, 4
        ; Exact mapped bytes 75 5B: jne 0x587abade
        __asm _emit 0x75
        __asm _emit 0x5b
        ; Exact mapped bytes EB 04: jmp 0x587aba89
        __asm _emit 0xeb
        __asm _emit 0x04
        test edi, edi
        ; Exact mapped bytes 74 55: je 0x587abade
        __asm _emit 0x74
        __asm _emit 0x55
        mov eax, dword ptr [esi]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 75 4D: jne 0x587abade
        __asm _emit 0x75
        __asm _emit 0x4d
        cmp ecx, edx
        ; Exact mapped bytes 77 49: ja 0x587abade
        __asm _emit 0x77
        __asm _emit 0x49
        cmp ecx, edx
        mov ebx, ecx
        cmova ebx, edx
        cmp edi, 4
        ; Exact mapped bytes 75 11: jne 0x587abab2
        __asm _emit 0x75
        __asm _emit 0x11
        mov eax, dword ptr [esi]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 75 09: jne 0x587abab2
        __asm _emit 0x75
        __asm _emit 0x09
        cmp ebx, ecx
        ; Exact mapped bytes 75 05: jne 0x587abab2
        __asm _emit 0x75
        __asm _emit 0x05
        lea ebp, [edi - 3]
        ; Exact mapped bytes EB 02: jmp 0x587abab4
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esi + 38h]
        add eax, dword ptr [esi + 5ch]
        push ebp
        push ebx
        push eax
        push esi
        ; Exact mapped bytes E8 BD 4C 00 00: call 0x587b0780
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x4c
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [esi]
        add dword ptr [esi + 5ch], ebx
        ; Exact mapped bytes E8 73 20 00 00: call 0x587adb40
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        test ebp, ebp
        ; Exact mapped bytes 74 0A: je 0x587abade
        __asm _emit 0x74
        __asm _emit 0x0a
        mov dword ptr [esi + 16c0h], 8
        neg ebp
        pop edi
        sbb ebp, ebp
        and ebp, 2
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        add esp, 14h
        ret
    }
}
