// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004B3CF0 .. +0x274 bytes.
extern "C" __declspec(naked) void FUN_004b3cf0_004B3CF0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push ebx
        push esi
        push edi
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 1E: jne 0x4b3d1d
        __asm _emit 0x75
        __asm _emit 0x1e
        push 58c274h
        push 0
        push 69h
        push 58c7d4h
        push 2
        ; Exact mapped bytes E8 1C CE FF FF: call 0x4b0b30
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xce
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x4b3d1d
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D6: jne 0x4b3cf9
        __asm _emit 0x75
        __asm _emit 0xd6
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 10h]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 0ch]
        and edx, 82h
        test edx, edx
        ; Exact mapped bytes 74 0D: je 0x4b3d4f
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 0ch]
        and ecx, 40h
        test ecx, ecx
        ; Exact mapped bytes 74 16: je 0x4b3d65
        __asm _emit 0x74
        __asm _emit 0x16
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0ch]
        or al, 20h
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 0ch], eax
        or eax, 0ffffffffh
        ; Exact mapped bytes E9 F8 01 00 00: jmp 0x4b3f5d
        __asm _emit 0xe9
        __asm _emit 0xf8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0ch]
        and eax, 1
        test eax, eax
        ; Exact mapped bytes 74 4A: je 0x4b3dbc
        __asm _emit 0x74
        __asm _emit 0x4a
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 4], 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0ch]
        and eax, 10h
        test eax, eax
        ; Exact mapped bytes 74 1C: je 0x4b3da5
        __asm _emit 0x74
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ecx], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 0ch]
        and edx, 0fffffffeh
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 0ch], edx
        ; Exact mapped bytes EB 17: jmp 0x4b3dbc
        __asm _emit 0xeb
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 0ch]
        or edx, 20h
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 0ch], edx
        or eax, 0ffffffffh
        ; Exact mapped bytes E9 A1 01 00 00: jmp 0x4b3f5d
        __asm _emit 0xe9
        __asm _emit 0xa1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 0ch]
        or edx, 2
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 0ch], edx
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 0ch]
        and edx, 0ffffffefh
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 0ch], edx
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 4], 0
        mov dword ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 0ch]
        and ecx, 10ch
        test ecx, ecx
        ; Exact mapped bytes 75 2E: jne 0x4b3e2f
        __asm _emit 0x75
        __asm _emit 0x2e
        cmp dword ptr [ebp - 8], 5d1b68h
        ; Exact mapped bytes 74 09: je 0x4b3e13
        __asm _emit 0x74
        __asm _emit 0x09
        cmp dword ptr [ebp - 8], 5d1b88h
        ; Exact mapped bytes 75 10: jne 0x4b3e23
        __asm _emit 0x75
        __asm _emit 0x10
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes E8 54 C1 00 00: call 0x4bff70
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 75 0C: jne 0x4b3e2f
        __asm _emit 0x75
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 74 C0 00 00: call 0x4bfea0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 0ch]
        and edx, 108h
        test edx, edx
        ; Exact mapped bytes 0F 84 D8 00 00 00: je 0x4b3f1b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [eax]
        sub edx, dword ptr [ecx + 8]
        test edx, edx
        ; Exact mapped bytes 7D 21: jge 0x4b3e73
        __asm _emit 0x7d
        __asm _emit 0x21
        push 58c794h
        push 0
        push 0a0h
        push 58c7d4h
        push 2
        ; Exact mapped bytes E8 C6 CC FF FF: call 0x4b0b30
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xcc
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x4b3e73
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 CA: jne 0x4b3e43
        __asm _emit 0x75
        __asm _emit 0xca
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ecx]
        sub eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 8]
        add edx, 1
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax], edx
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 18h]
        sub edx, 1
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 4], edx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 7E 1C: jle 0x4b3ec6
        __asm _emit 0x7e
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 D2 BC 00 00: call 0x4bfb90
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 48: jmp 0x4b3f0e
        __asm _emit 0xeb
        __asm _emit 0x48
        cmp dword ptr [ebp - 10h], -1
        ; Exact mapped bytes 74 1D: je 0x4b3ee9
        __asm _emit 0x74
        __asm _emit 0x1d
        mov edx, dword ptr [ebp - 10h]
        sar edx, 5
        mov eax, dword ptr [ebp - 10h]
        and eax, 1fh
        imul eax, eax, 24h
        mov ecx, dword ptr [edx*4 + 5df120h]
        add ecx, eax
        mov dword ptr [ebp - 14h], ecx
        ; Exact mapped bytes EB 07: jmp 0x4b3ef0
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 5d1dc8h
        mov edx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 0F BE 42 04: movsx eax, byte ptr [edx + 4]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x42
        __asm _emit 0x04
        and eax, 20h
        test eax, eax
        ; Exact mapped bytes 74 10: je 0x4b3f0e
        __asm _emit 0x74
        __asm _emit 0x10
        push 2
        push 0
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 35 BB 00 00: call 0x4bfa40
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xbb
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 8]
        mov cl, byte ptr [ebp + 8]
        mov byte ptr [eax], cl
        ; Exact mapped bytes EB 1E: jmp 0x4b3f39
        __asm _emit 0xeb
        __asm _emit 0x1e
        mov dword ptr [ebp - 4], 1
        mov edx, dword ptr [ebp - 4]
        push edx
        lea eax, [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 5D BC 00 00: call 0x4bfb90
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 0ch], eax
        mov edx, dword ptr [ebp - 0ch]
        cmp edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 74 14: je 0x4b3f55
        __asm _emit 0x74
        __asm _emit 0x14
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 0ch]
        or ecx, 20h
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 0ch], ecx
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 08: jmp 0x4b3f5d
        __asm _emit 0xeb
        __asm _emit 0x08
        mov eax, dword ptr [ebp + 8]
        and eax, 0ffh
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
