// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58898DB0 .. +0x1E0 bytes.
extern "C" __declspec(naked) void FUN_58898db0() {
    __asm {
        cmp dword ptr [esp + 8], 2
        push esi
        push edi
        mov esi, ecx
        ; Exact mapped bytes 0F 85 CA 01 00 00: jne 0x58898f89
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xca
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 0ch]
        lea edx, [esi + 98h]
        xor edi, edi
        mov eax, edx
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        cmp ecx, dword ptr [eax]
        ; Exact mapped bytes 74 1F: je 0x58898df3
        __asm _emit 0x74
        __asm _emit 0x1f
        inc edi
        add eax, 4
        cmp edi, 3
        ; Exact mapped bytes 72 F3: jb 0x58898dd0
        __asm _emit 0x72
        __asm _emit 0xf3
        cmp ecx, dword ptr [esi + 0e0h]
        ; Exact mapped bytes 75 61: jne 0x58898e46
        __asm _emit 0x75
        __asm _emit 0x61
        mov ecx, esi
        ; Exact mapped bytes E8 94 FE FF FF: call 0x58898c80
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp dword ptr [esi + edi*4 + 12ch], 0
        ; Exact mapped bytes 74 3C: je 0x58898e39
        __asm _emit 0x74
        __asm _emit 0x3c
        mov ecx, dword ptr [esi + 0e8h]
        push 0feh
        mov dword ptr [esi + 118h], 0
        ; Exact mapped bytes E8 49 A5 06 00: call 0x58903360
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xa5
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes D9 05 30 01 9A 58: fld dword ptr [0x589a0130]
        __asm _emit 0xd9
        __asm _emit 0x05
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x9a
        __asm _emit 0x58
        push edi
        ; Exact mapped bytes D9 9E EC 00 00 00: fstp dword ptr [esi + 0xec]
        __asm _emit 0xd9
        __asm _emit 0x9e
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 45 F8 FF FF: call 0x58898670
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + edi*4 + 98h]
        mov dword ptr [eax + 50h], 1
        mov dword ptr [esi + 128h], edi
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp ecx, dword ptr [esi + 0e4h]
        ; Exact mapped bytes 75 0E: jne 0x58898e5c
        __asm _emit 0x75
        __asm _emit 0x0e
        mov ecx, esi
        ; Exact mapped bytes E8 BB FE FF FF: call 0x58898d10
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp ecx, dword ptr [esi + 114h]
        ; Exact mapped bytes 0F 85 21 01 00 00: jne 0x58898f89
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 150h], 0
        ; Exact mapped bytes 75 10: jne 0x58898e81
        __asm _emit 0x75
        __asm _emit 0x10
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 8]
        mov ecx, esi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp dword ptr [esi + 154h], 0
        ; Exact mapped bytes 0F 85 F3 00 00 00: jne 0x58898f81
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edx]
        mov ecx, 0fff0h
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 9ch]
        mov edx, ecx
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0a0h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        lea eax, [esi + 0a8h]
        mov edx, 3
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax - 4]
        mov edi, 0fff0h
        ; Exact mapped bytes 66 21 79 24: and word ptr [ecx + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x79
        __asm _emit 0x24
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes 66 21 79 24: and word ptr [ecx + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x79
        __asm _emit 0x24
        mov ecx, dword ptr [eax + 4]
        ; Exact mapped bytes 66 21 79 24: and word ptr [ecx + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x79
        __asm _emit 0x24
        mov ecx, dword ptr [eax + 8]
        ; Exact mapped bytes 66 21 79 24: and word ptr [ecx + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x79
        __asm _emit 0x24
        mov ecx, dword ptr [eax + 0ch]
        ; Exact mapped bytes 66 21 79 24: and word ptr [ecx + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x79
        __asm _emit 0x24
        add eax, 14h
        sub edx, 1
        ; Exact mapped bytes 75 D1: jne 0x58898ec0
        __asm _emit 0x75
        __asm _emit 0xd1
        mov eax, dword ptr [esi + 0e0h]
        mov edx, edi
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0e4h]
        mov ecx, edx
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0e8h]
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 90h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 84h]
        cmp dword ptr [eax + 164h], 0ch
        ; Exact mapped bytes 7E 0F: jle 0x58898f39
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x58898f39
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [eax + 30h]
        ; Exact mapped bytes EB 02: jmp 0x58898f3b
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 94h]
        mov dword ptr [ecx + 50h], eax
        test eax, eax
        ; Exact mapped bytes 74 28: je 0x58898f70
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 14h]
        add eax, 18h
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        pop edi
        mov dword ptr [esi + 154h], 1
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        push -1
        ; Exact mapped bytes FF 15 C8 C3 98 58: call dword ptr [0x5898c3c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0xc3
        __asm _emit 0x98
        __asm _emit 0x58
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
