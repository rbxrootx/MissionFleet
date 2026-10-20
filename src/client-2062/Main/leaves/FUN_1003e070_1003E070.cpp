// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1003E070 .. +0x17E bytes.
extern "C" __declspec(naked) void FUN_1003e070_1003E070() {
    __asm {
        mov edx, dword ptr [esp + 0ch]
        mov eax, dword ptr [esp + 4]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 18h]
        push edx
        mov dword ptr [esi + 84h], ecx
        mov ecx, dword ptr [esi + 70h]
        mov dword ptr [esi + 80h], eax
        ; Exact mapped bytes E8 AC A7 FD FF: call 0x10018840
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xa7
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [esp + 14h]
        mov ecx, dword ptr [esi + 74h]
        push eax
        ; Exact mapped bytes E8 9F A7 FD FF: call 0x10018840
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xa7
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [esp + 0ch]
        test eax, eax
        ; Exact mapped bytes 0F 85 C4 00 00 00: jne 0x1003e171
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 44 57 1C 10: mov eax, dword ptr [0x101c5744]
        __asm _emit 0xa1
        __asm _emit 0x44
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 9
        ; Exact mapped bytes 7E 11: jle 0x1003e0cc
        __asm _emit 0x7e
        __asm _emit 0x11
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x1003e0cc
        __asm _emit 0x74
        __asm _emit 0x07
        add eax, 240h
        ; Exact mapped bytes EB 02: jmp 0x1003e0ce
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 78h]
        test eax, eax
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x1003e100
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
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
        ; Exact mapped bytes A1 44 57 1C 10: mov eax, dword ptr [0x101c5744]
        __asm _emit 0xa1
        __asm _emit 0x44
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 0bh
        ; Exact mapped bytes 7E 11: jle 0x1003e11f
        __asm _emit 0x7e
        __asm _emit 0x11
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x1003e11f
        __asm _emit 0x74
        __asm _emit 0x07
        add eax, 2c0h
        ; Exact mapped bytes EB 02: jmp 0x1003e121
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 7ch]
        test eax, eax
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x1003e153
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
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
        mov eax, dword ptr [esi + 78h]
        mov ecx, 0fh
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 7ch]
        ; Exact mapped bytes 66 09 48 24: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        mov edx, dword ptr [esi]
        mov ecx, esi
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        pop esi
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 75 6D: jne 0x1003e1e3
        __asm _emit 0x75
        __asm _emit 0x6d
        ; Exact mapped bytes A1 44 57 1C 10: mov eax, dword ptr [0x101c5744]
        __asm _emit 0xa1
        __asm _emit 0x44
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 160h], 7
        ; Exact mapped bytes 7E 11: jle 0x1003e195
        __asm _emit 0x7e
        __asm _emit 0x11
        mov eax, dword ptr [eax + 190h]
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x1003e195
        __asm _emit 0x74
        __asm _emit 0x07
        add eax, 1c0h
        ; Exact mapped bytes EB 02: jmp 0x1003e197
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 78h]
        test eax, eax
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 28: je 0x1003e1c9
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 18h]
        add eax, 20h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
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
        mov eax, dword ptr [esi + 7ch]
        mov dword ptr [eax + 54h], 0
        mov eax, dword ptr [esi + 78h]
        or byte ptr [eax + 24h], 0fh
        mov eax, dword ptr [esi + 7ch]
        ; Exact mapped bytes 66 81 60 24 F0 FF: and word ptr [eax + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        mov edx, dword ptr [esi]
        mov ecx, esi
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        pop esi
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
