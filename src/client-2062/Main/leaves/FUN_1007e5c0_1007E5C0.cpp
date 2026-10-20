// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1007E5C0 .. +0x2F2 bytes.
extern "C" __declspec(naked) void FUN_1007e5c0_1007E5C0() {
    __asm {
        push esi
        mov esi, ecx
        push edi
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        test al, 4
        ; Exact mapped bytes 0F 84 DF 02 00 00: je 0x1007e8af
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdf
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 1f00h
        ; Exact mapped bytes 66 3D 00 02: cmp ax, 0x200
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x02
        ; Exact mapped bytes 0F 84 AC 02 00 00: je 0x1007e88b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xac
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3D 00 01: cmp ax, 0x100
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 0F 85 BD 01 00 00: jne 0x1007e7a6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbd
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4]
        mov eax, dword ptr [esi + 50h]
        cmp ecx, eax
        ; Exact mapped bytes 75 0E: jne 0x1007e601
        __asm _emit 0x75
        __asm _emit 0x0e
        mov edx, dword ptr [esi + 8]
        mov edi, dword ptr [esi + 54h]
        cmp edx, edi
        ; Exact mapped bytes 0F 84 89 00 00 00: je 0x1007e68a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [esi + 8]
        sub eax, ecx
        mov ecx, dword ptr [esi + 54h]
        sub ecx, edi
        cmp eax, -8
        ; Exact mapped bytes 7E 2C: jle 0x1007e63c
        __asm _emit 0x7e
        __asm _emit 0x2c
        cmp eax, 8
        ; Exact mapped bytes 7D 27: jge 0x1007e63c
        __asm _emit 0x7d
        __asm _emit 0x27
        cmp eax, -4
        ; Exact mapped bytes 7E 19: jle 0x1007e633
        __asm _emit 0x7e
        __asm _emit 0x19
        cmp eax, 4
        ; Exact mapped bytes 7D 14: jge 0x1007e633
        __asm _emit 0x7d
        __asm _emit 0x14
        test eax, eax
        ; Exact mapped bytes 7D 05: jge 0x1007e628
        __asm _emit 0x7d
        __asm _emit 0x05
        or edi, 0ffffffffh
        ; Exact mapped bytes EB 1F: jmp 0x1007e647
        __asm _emit 0xeb
        __asm _emit 0x1f
        xor edx, edx
        test eax, eax
        setg dl
        mov edi, edx
        ; Exact mapped bytes EB 14: jmp 0x1007e647
        __asm _emit 0xeb
        __asm _emit 0x14
        cdq
        sub eax, edx
        mov edi, eax
        sar edi, 1
        ; Exact mapped bytes EB 0B: jmp 0x1007e647
        __asm _emit 0xeb
        __asm _emit 0x0b
        cdq
        and edx, 3
        add eax, edx
        mov edi, eax
        sar edi, 2
        cmp ecx, -8
        ; Exact mapped bytes 7E 2A: jle 0x1007e676
        __asm _emit 0x7e
        __asm _emit 0x2a
        cmp ecx, 8
        ; Exact mapped bytes 7D 25: jge 0x1007e676
        __asm _emit 0x7d
        __asm _emit 0x25
        cmp ecx, -4
        ; Exact mapped bytes 7E 17: jle 0x1007e66d
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp ecx, 4
        ; Exact mapped bytes 7D 12: jge 0x1007e66d
        __asm _emit 0x7d
        __asm _emit 0x12
        test ecx, ecx
        ; Exact mapped bytes 7D 05: jge 0x1007e664
        __asm _emit 0x7d
        __asm _emit 0x05
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 1D: jmp 0x1007e681
        __asm _emit 0xeb
        __asm _emit 0x1d
        xor eax, eax
        test ecx, ecx
        setg al
        ; Exact mapped bytes EB 14: jmp 0x1007e681
        __asm _emit 0xeb
        __asm _emit 0x14
        mov eax, ecx
        cdq
        sub eax, edx
        sar eax, 1
        ; Exact mapped bytes EB 0B: jmp 0x1007e681
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov eax, ecx
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        push eax
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 A6 07 08 00: call 0x100fee30
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x07
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [esi + 68h]
        test eax, eax
        mov eax, dword ptr [esi + 60h]
        ; Exact mapped bytes 0F 84 B1 00 00 00: je 0x1007e749
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 54h]
        test ecx, ecx
        ; Exact mapped bytes 74 19: je 0x1007e6b8
        __asm _emit 0x74
        __asm _emit 0x19
        xor edx, edx
        mov edi, dword ptr [eax + 50h]
        ; Exact mapped bytes 66 8B 51 0C: mov dx, word ptr [ecx + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x0c
        imul edx, dword ptr [ecx + 8]
        dec edx
        xor ecx, ecx
        cmp edi, edx
        setge cl
        test ecx, ecx
        ; Exact mapped bytes 75 12: jne 0x1007e6ca
        __asm _emit 0x75
        __asm _emit 0x12
        mov edx, dword ptr [eax + 50h]
        inc edx
        mov dword ptr [eax + 50h], edx
        mov eax, dword ptr [esi + 64h]
        inc dword ptr [eax + 50h]
        ; Exact mapped bytes E9 C1 01 00 00: jmp 0x1007e88b
        __asm _emit 0xe9
        __asm _emit 0xc1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [esi + 50h]
        cmp eax, ecx
        ; Exact mapped bytes 0F 85 B3 01 00 00: jne 0x1007e88b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 54h]
        cmp ecx, eax
        ; Exact mapped bytes 0F 85 A5 01 00 00: jne 0x1007e88b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 D4 57 1C 10: mov eax, dword ptr [0x101c57d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 170h], 0fh
        ; Exact mapped bytes 7E 0F: jle 0x1007e703
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [eax + 194h]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x1007e703
        __asm _emit 0x74
        __asm _emit 0x05
        mov ecx, dword ptr [eax + 3ch]
        ; Exact mapped bytes EB 02: jmp 0x1007e705
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        ; Exact mapped bytes A1 D4 57 1C 10: mov eax, dword ptr [0x101c57d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 170h], 30h
        ; Exact mapped bytes 7E 12: jle 0x1007e72a
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 194h]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x1007e72a
        __asm _emit 0x74
        __asm _emit 0x08
        mov ecx, dword ptr [eax + 0c0h]
        ; Exact mapped bytes EB 02: jmp 0x1007e72c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        mov eax, dword ptr [ecx]
        push 0
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        and ecx, 0e2ffh
        or ch, 2
        ; Exact mapped bytes 66 89 4E 24: mov word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4e
        __asm _emit 0x24
        ; Exact mapped bytes E9 42 01 00 00: jmp 0x1007e88b
        __asm _emit 0xe9
        __asm _emit 0x42
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 50h]
        test ecx, ecx
        ; Exact mapped bytes 74 12: je 0x1007e762
        __asm _emit 0x74
        __asm _emit 0x12
        mov edx, dword ptr [eax + 50h]
        dec edx
        mov dword ptr [eax + 50h], edx
        mov eax, dword ptr [esi + 64h]
        dec dword ptr [eax + 50h]
        ; Exact mapped bytes E9 29 01 00 00: jmp 0x1007e88b
        __asm _emit 0xe9
        __asm _emit 0x29
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 4]
        mov eax, dword ptr [esi + 50h]
        cmp edx, eax
        ; Exact mapped bytes 0F 85 1B 01 00 00: jne 0x1007e88b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x1b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 54h]
        cmp eax, ecx
        ; Exact mapped bytes 0F 85 0D 01 00 00: jne 0x1007e88b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 D4 57 1C 10: mov eax, dword ptr [0x101c57d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 170h], 0fh
        ; Exact mapped bytes 0F 8E 73 FF FF FF: jle 0x1007e703
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x73
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [eax + 194h]
        test eax, eax
        ; Exact mapped bytes 0F 84 65 FF FF FF: je 0x1007e703
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x65
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 3ch]
        ; Exact mapped bytes E9 5F FF FF FF: jmp 0x1007e705
        __asm _emit 0xe9
        __asm _emit 0x5f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 3D 00 04: cmp ax, 0x400
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x04
        ; Exact mapped bytes 0F 85 DB 00 00 00: jne 0x1007e88b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xdb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4]
        mov eax, dword ptr [esi + 50h]
        cmp ecx, eax
        ; Exact mapped bytes 75 0E: jne 0x1007e7c8
        __asm _emit 0x75
        __asm _emit 0x0e
        mov edx, dword ptr [esi + 8]
        mov edi, dword ptr [esi + 54h]
        cmp edx, edi
        ; Exact mapped bytes 0F 84 89 00 00 00: je 0x1007e851
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [esi + 8]
        sub eax, ecx
        mov ecx, dword ptr [esi + 54h]
        sub ecx, edi
        cmp eax, -8
        ; Exact mapped bytes 7E 2C: jle 0x1007e803
        __asm _emit 0x7e
        __asm _emit 0x2c
        cmp eax, 8
        ; Exact mapped bytes 7D 27: jge 0x1007e803
        __asm _emit 0x7d
        __asm _emit 0x27
        cmp eax, -4
        ; Exact mapped bytes 7E 19: jle 0x1007e7fa
        __asm _emit 0x7e
        __asm _emit 0x19
        cmp eax, 4
        ; Exact mapped bytes 7D 14: jge 0x1007e7fa
        __asm _emit 0x7d
        __asm _emit 0x14
        test eax, eax
        ; Exact mapped bytes 7D 05: jge 0x1007e7ef
        __asm _emit 0x7d
        __asm _emit 0x05
        or edi, 0ffffffffh
        ; Exact mapped bytes EB 1F: jmp 0x1007e80e
        __asm _emit 0xeb
        __asm _emit 0x1f
        xor edx, edx
        test eax, eax
        setg dl
        mov edi, edx
        ; Exact mapped bytes EB 14: jmp 0x1007e80e
        __asm _emit 0xeb
        __asm _emit 0x14
        cdq
        sub eax, edx
        mov edi, eax
        sar edi, 1
        ; Exact mapped bytes EB 0B: jmp 0x1007e80e
        __asm _emit 0xeb
        __asm _emit 0x0b
        cdq
        and edx, 3
        add eax, edx
        mov edi, eax
        sar edi, 2
        cmp ecx, -8
        ; Exact mapped bytes 7E 2A: jle 0x1007e83d
        __asm _emit 0x7e
        __asm _emit 0x2a
        cmp ecx, 8
        ; Exact mapped bytes 7D 25: jge 0x1007e83d
        __asm _emit 0x7d
        __asm _emit 0x25
        cmp ecx, -4
        ; Exact mapped bytes 7E 17: jle 0x1007e834
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp ecx, 4
        ; Exact mapped bytes 7D 12: jge 0x1007e834
        __asm _emit 0x7d
        __asm _emit 0x12
        test ecx, ecx
        ; Exact mapped bytes 7D 05: jge 0x1007e82b
        __asm _emit 0x7d
        __asm _emit 0x05
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 1D: jmp 0x1007e848
        __asm _emit 0xeb
        __asm _emit 0x1d
        xor eax, eax
        test ecx, ecx
        setg al
        ; Exact mapped bytes EB 14: jmp 0x1007e848
        __asm _emit 0xeb
        __asm _emit 0x14
        mov eax, ecx
        cdq
        sub eax, edx
        sar eax, 1
        ; Exact mapped bytes EB 0B: jmp 0x1007e848
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov eax, ecx
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        push eax
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 DF 05 08 00: call 0x100fee30
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x05
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [esi + 68h]
        test eax, eax
        ; Exact mapped bytes 74 0E: je 0x1007e866
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [esi + 60h]
        mov ecx, dword ptr [eax + 50h]
        test ecx, ecx
        ; Exact mapped bytes 0F 85 EA FE FF FF: jne 0x1007e750
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xea
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [esi + 50h]
        cmp eax, ecx
        ; Exact mapped bytes 75 1B: jne 0x1007e88b
        __asm _emit 0x75
        __asm _emit 0x1b
        mov ecx, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 54h]
        cmp ecx, eax
        ; Exact mapped bytes 75 11: jne 0x1007e88b
        __asm _emit 0x75
        __asm _emit 0x11
        ; Exact mapped bytes 66 8B 56 24: mov dx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x24
        and edx, 0e5f0h
        or dh, 5
        ; Exact mapped bytes 66 89 56 24: mov word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 3ch]
        test ecx, ecx
        ; Exact mapped bytes 74 1D: je 0x1007e8af
        __asm _emit 0x74
        __asm _emit 0x1d
        mov edi, dword ptr [ecx + 38h]
        mov eax, dword ptr [esi + 3ch]
        cmp edi, eax
        ; Exact mapped bytes 74 0E: je 0x1007e8aa
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        test edi, edi
        mov ecx, edi
        ; Exact mapped bytes 75 EB: jne 0x1007e892
        __asm _emit 0x75
        __asm _emit 0xeb
        pop edi
        pop esi
        ret
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        pop edi
        pop esi
        ret
    }
}
