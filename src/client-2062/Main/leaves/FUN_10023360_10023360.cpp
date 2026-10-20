// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10023360 .. +0x219 bytes.
extern "C" __declspec(naked) void FUN_10023360_10023360() {
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
        ; Exact mapped bytes 0F 84 06 02 00 00: je 0x10023576
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x06
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 1f00h
        push ebx
        ; Exact mapped bytes 66 3D 00 01: cmp ax, 0x100
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x01
        mov ebx, 40000000h
        ; Exact mapped bytes 74 14: je 0x10023395
        __asm _emit 0x74
        __asm _emit 0x14
        ; Exact mapped bytes 66 3D 00 04: cmp ax, 0x400
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x04
        ; Exact mapped bytes 74 0E: je 0x10023395
        __asm _emit 0x74
        __asm _emit 0x0e
        cmp dword ptr [esi + 70h], ebx
        ; Exact mapped bytes 74 09: je 0x10023395
        __asm _emit 0x74
        __asm _emit 0x09
        cmp dword ptr [esi + 74h], ebx
        ; Exact mapped bytes 0F 85 BC 01 00 00: jne 0x10023551
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4]
        mov edi, dword ptr [esi + 68h]
        cmp eax, edi
        ; Exact mapped bytes 75 0E: jne 0x100233ad
        __asm _emit 0x75
        __asm _emit 0x0e
        mov ecx, dword ptr [esi + 8]
        mov edx, dword ptr [esi + 6ch]
        cmp ecx, edx
        ; Exact mapped bytes 0F 84 C5 00 00 00: je 0x10023472
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 6ch]
        sub edi, eax
        mov eax, dword ptr [esi + 8]
        sub ecx, eax
        mov eax, dword ptr [esi + 64h]
        cmp eax, 2
        ; Exact mapped bytes 75 7A: jne 0x10023439
        __asm _emit 0x75
        __asm _emit 0x7a
        cmp edi, -8
        ; Exact mapped bytes 7E 2C: jle 0x100233f0
        __asm _emit 0x7e
        __asm _emit 0x2c
        cmp edi, 8
        ; Exact mapped bytes 7D 27: jge 0x100233f0
        __asm _emit 0x7d
        __asm _emit 0x27
        cmp edi, -4
        ; Exact mapped bytes 7E 19: jle 0x100233e7
        __asm _emit 0x7e
        __asm _emit 0x19
        cmp edi, 4
        ; Exact mapped bytes 7D 14: jge 0x100233e7
        __asm _emit 0x7d
        __asm _emit 0x14
        test edi, edi
        ; Exact mapped bytes 7D 05: jge 0x100233dc
        __asm _emit 0x7d
        __asm _emit 0x05
        or edi, 0ffffffffh
        ; Exact mapped bytes EB 21: jmp 0x100233fd
        __asm _emit 0xeb
        __asm _emit 0x21
        xor edx, edx
        test edi, edi
        setg dl
        mov edi, edx
        ; Exact mapped bytes EB 16: jmp 0x100233fd
        __asm _emit 0xeb
        __asm _emit 0x16
        mov eax, edi
        cdq
        sub eax, edx
        sar eax, 1
        ; Exact mapped bytes EB 0B: jmp 0x100233fb
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov eax, edi
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        mov edi, eax
        cmp ecx, -8
        ; Exact mapped bytes 7E 2A: jle 0x1002342c
        __asm _emit 0x7e
        __asm _emit 0x2a
        cmp ecx, 8
        ; Exact mapped bytes 7D 25: jge 0x1002342c
        __asm _emit 0x7d
        __asm _emit 0x25
        cmp ecx, -4
        ; Exact mapped bytes 7E 17: jle 0x10023423
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp ecx, 4
        ; Exact mapped bytes 7D 12: jge 0x10023423
        __asm _emit 0x7d
        __asm _emit 0x12
        test ecx, ecx
        ; Exact mapped bytes 7D 05: jge 0x1002341a
        __asm _emit 0x7d
        __asm _emit 0x05
        or ecx, 0ffffffffh
        ; Exact mapped bytes EB 4F: jmp 0x10023469
        __asm _emit 0xeb
        __asm _emit 0x4f
        xor eax, eax
        test ecx, ecx
        setg al
        ; Exact mapped bytes EB 44: jmp 0x10023467
        __asm _emit 0xeb
        __asm _emit 0x44
        mov eax, ecx
        cdq
        sub eax, edx
        sar eax, 1
        ; Exact mapped bytes EB 3B: jmp 0x10023467
        __asm _emit 0xeb
        __asm _emit 0x3b
        mov eax, ecx
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        ; Exact mapped bytes EB 2E: jmp 0x10023467
        __asm _emit 0xeb
        __asm _emit 0x2e
        cmp eax, 1
        ; Exact mapped bytes 75 2B: jne 0x10023469
        __asm _emit 0x75
        __asm _emit 0x2b
        mov eax, dword ptr [esi + 60h]
        test edi, edi
        ; Exact mapped bytes 7E 08: jle 0x1002344d
        __asm _emit 0x7e
        __asm _emit 0x08
        cmp edi, eax
        ; Exact mapped bytes 7C 0E: jl 0x10023457
        __asm _emit 0x7c
        __asm _emit 0x0e
        mov edi, eax
        ; Exact mapped bytes EB 0A: jmp 0x10023457
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov edx, eax
        neg edx
        cmp edi, edx
        ; Exact mapped bytes 7F 02: jg 0x10023457
        __asm _emit 0x7f
        __asm _emit 0x02
        mov edi, edx
        test ecx, ecx
        ; Exact mapped bytes 7E 06: jle 0x10023461
        __asm _emit 0x7e
        __asm _emit 0x06
        cmp ecx, eax
        ; Exact mapped bytes 7C 0A: jl 0x10023469
        __asm _emit 0x7c
        __asm _emit 0x0a
        ; Exact mapped bytes EB 06: jmp 0x10023467
        __asm _emit 0xeb
        __asm _emit 0x06
        neg eax
        cmp ecx, eax
        ; Exact mapped bytes 7F 02: jg 0x10023469
        __asm _emit 0x7f
        __asm _emit 0x02
        mov ecx, eax
        push ecx
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 BE B9 0D 00: call 0x100fee30
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xb9
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 7ch]
        mov eax, dword ptr [esi + 28h]
        cmp ecx, eax
        ; Exact mapped bytes 74 2D: je 0x100234a9
        __asm _emit 0x74
        __asm _emit 0x2d
        mov edx, dword ptr [esi + 80h]
        ; Exact mapped bytes 7E 10: jle 0x10023494
        __asm _emit 0x7e
        __asm _emit 0x10
        mov edi, ecx
        sub edi, eax
        cmp edi, edx
        ; Exact mapped bytes 7F 03: jg 0x1002348f
        __asm _emit 0x7f
        __asm _emit 0x03
        push ecx
        ; Exact mapped bytes EB 13: jmp 0x100234a2
        __asm _emit 0xeb
        __asm _emit 0x13
        add edx, eax
        push edx
        ; Exact mapped bytes EB 0E: jmp 0x100234a2
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov edi, eax
        sub edi, ecx
        cmp edi, edx
        ; Exact mapped bytes 7F 03: jg 0x1002349f
        __asm _emit 0x7f
        __asm _emit 0x03
        push ecx
        ; Exact mapped bytes EB 03: jmp 0x100234a2
        __asm _emit 0xeb
        __asm _emit 0x03
        sub eax, edx
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 77 BC 0D 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xbc
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 78h]
        mov eax, dword ptr [esi + 2ch]
        cmp ecx, eax
        ; Exact mapped bytes 74 2C: je 0x100234df
        __asm _emit 0x74
        __asm _emit 0x2c
        mov edx, dword ptr [esi + 80h]
        ; Exact mapped bytes 7E 0F: jle 0x100234ca
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov edi, ecx
        sub edi, eax
        cmp edi, edx
        ; Exact mapped bytes 7F 03: jg 0x100234c6
        __asm _emit 0x7f
        __asm _emit 0x03
        push ecx
        ; Exact mapped bytes EB 12: jmp 0x100234d8
        __asm _emit 0xeb
        __asm _emit 0x12
        add eax, edx
        ; Exact mapped bytes EB 0D: jmp 0x100234d7
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov edi, eax
        sub edi, ecx
        cmp edi, edx
        ; Exact mapped bytes 7F 03: jg 0x100234d5
        __asm _emit 0x7f
        __asm _emit 0x03
        push ecx
        ; Exact mapped bytes EB 03: jmp 0x100234d8
        __asm _emit 0xeb
        __asm _emit 0x03
        sub eax, edx
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 81 BC 0D 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xbc
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4]
        mov eax, dword ptr [esi + 68h]
        cmp ecx, eax
        ; Exact mapped bytes 75 68: jne 0x10023551
        __asm _emit 0x75
        __asm _emit 0x68
        mov edx, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 6ch]
        cmp edx, eax
        ; Exact mapped bytes 75 5E: jne 0x10023551
        __asm _emit 0x75
        __asm _emit 0x5e
        mov eax, dword ptr [esi + 7ch]
        mov ecx, dword ptr [esi + 28h]
        cmp eax, ecx
        ; Exact mapped bytes 75 54: jne 0x10023551
        __asm _emit 0x75
        __asm _emit 0x54
        mov ecx, dword ptr [esi + 78h]
        mov eax, dword ptr [esi + 2ch]
        cmp ecx, eax
        ; Exact mapped bytes 75 4A: jne 0x10023551
        __asm _emit 0x75
        __asm _emit 0x4a
        cmp dword ptr [esi + 74h], ebx
        ; Exact mapped bytes 75 07: jne 0x10023513
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [esi + 74h], 0
        cmp dword ptr [esi + 70h], ebx
        ; Exact mapped bytes 75 07: jne 0x1002351f
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [esi + 70h], 0
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        mov ecx, eax
        and ecx, 1f00h
        ; Exact mapped bytes 66 81 F9 00 01: cmp cx, 0x100
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 75 0C: jne 0x1002353e
        __asm _emit 0x75
        __asm _emit 0x0c
        and eax, 0e2ffh
        or eax, 202h
        ; Exact mapped bytes EB 0F: jmp 0x1002354d
        __asm _emit 0xeb
        __asm _emit 0x0f
        ; Exact mapped bytes 66 81 F9 00 04: cmp cx, 0x400
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x04
        ; Exact mapped bytes 75 0C: jne 0x10023551
        __asm _emit 0x75
        __asm _emit 0x0c
        and eax, 0e5f8h
        or ah, 5
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 3ch]
        pop ebx
        test ecx, ecx
        ; Exact mapped bytes 74 1D: je 0x10023576
        __asm _emit 0x74
        __asm _emit 0x1d
        mov edi, dword ptr [ecx + 38h]
        mov eax, dword ptr [esi + 3ch]
        cmp edi, eax
        ; Exact mapped bytes 74 0E: je 0x10023571
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        test edi, edi
        mov ecx, edi
        ; Exact mapped bytes 75 EB: jne 0x10023559
        __asm _emit 0x75
        __asm _emit 0xeb
        pop edi
        pop esi
        ret
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        pop edi
        pop esi
        ret
    }
}
