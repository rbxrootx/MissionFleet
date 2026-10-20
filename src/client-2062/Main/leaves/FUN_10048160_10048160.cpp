// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10048160 .. +0x157 bytes.
extern "C" __declspec(naked) void FUN_10048160_10048160() {
    __asm {
        push esi
        mov esi, ecx
        push edi
        mov ecx, dword ptr [esi + 4]
        mov eax, dword ptr [esi + 50h]
        cmp ecx, eax
        ; Exact mapped bytes 75 0E: jne 0x1004817c
        __asm _emit 0x75
        __asm _emit 0x0e
        mov edx, dword ptr [esi + 8]
        mov edi, dword ptr [esi + 54h]
        cmp edx, edi
        ; Exact mapped bytes 0F 84 89 00 00 00: je 0x10048205
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
        ; Exact mapped bytes 7E 2C: jle 0x100481b7
        __asm _emit 0x7e
        __asm _emit 0x2c
        cmp eax, 8
        ; Exact mapped bytes 7D 27: jge 0x100481b7
        __asm _emit 0x7d
        __asm _emit 0x27
        cmp eax, -4
        ; Exact mapped bytes 7E 19: jle 0x100481ae
        __asm _emit 0x7e
        __asm _emit 0x19
        cmp eax, 4
        ; Exact mapped bytes 7D 14: jge 0x100481ae
        __asm _emit 0x7d
        __asm _emit 0x14
        test eax, eax
        ; Exact mapped bytes 7D 05: jge 0x100481a3
        __asm _emit 0x7d
        __asm _emit 0x05
        or edi, 0ffffffffh
        ; Exact mapped bytes EB 1F: jmp 0x100481c2
        __asm _emit 0xeb
        __asm _emit 0x1f
        xor edx, edx
        test eax, eax
        setg dl
        mov edi, edx
        ; Exact mapped bytes EB 14: jmp 0x100481c2
        __asm _emit 0xeb
        __asm _emit 0x14
        cdq
        sub eax, edx
        mov edi, eax
        sar edi, 1
        ; Exact mapped bytes EB 0B: jmp 0x100481c2
        __asm _emit 0xeb
        __asm _emit 0x0b
        cdq
        and edx, 3
        add eax, edx
        mov edi, eax
        sar edi, 2
        cmp ecx, -8
        ; Exact mapped bytes 7E 2A: jle 0x100481f1
        __asm _emit 0x7e
        __asm _emit 0x2a
        cmp ecx, 8
        ; Exact mapped bytes 7D 25: jge 0x100481f1
        __asm _emit 0x7d
        __asm _emit 0x25
        cmp ecx, -4
        ; Exact mapped bytes 7E 17: jle 0x100481e8
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp ecx, 4
        ; Exact mapped bytes 7D 12: jge 0x100481e8
        __asm _emit 0x7d
        __asm _emit 0x12
        test ecx, ecx
        ; Exact mapped bytes 7D 05: jge 0x100481df
        __asm _emit 0x7d
        __asm _emit 0x05
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 1D: jmp 0x100481fc
        __asm _emit 0xeb
        __asm _emit 0x1d
        xor eax, eax
        test ecx, ecx
        setg al
        ; Exact mapped bytes EB 14: jmp 0x100481fc
        __asm _emit 0xeb
        __asm _emit 0x14
        mov eax, ecx
        cdq
        sub eax, edx
        sar eax, 1
        ; Exact mapped bytes EB 0B: jmp 0x100481fc
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
        ; Exact mapped bytes E8 2B 6C 0B 00: call 0x100fee30
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x6c
        __asm _emit 0x0b
        __asm _emit 0x00
        mov eax, dword ptr [esi + 5ch]
        mov ecx, dword ptr [esi + 2ch]
        cmp eax, ecx
        ; Exact mapped bytes 74 2A: je 0x10048239
        __asm _emit 0x74
        __asm _emit 0x2a
        ; Exact mapped bytes 7E 11: jle 0x10048222
        __asm _emit 0x7e
        __asm _emit 0x11
        mov edx, eax
        sub edx, ecx
        cmp edx, 20h
        ; Exact mapped bytes 7F 03: jg 0x1004821d
        __asm _emit 0x7f
        __asm _emit 0x03
        push eax
        ; Exact mapped bytes EB 15: jmp 0x10048232
        __asm _emit 0xeb
        __asm _emit 0x15
        add ecx, 20h
        ; Exact mapped bytes EB 0F: jmp 0x10048231
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, ecx
        sub edx, eax
        cmp edx, 20h
        ; Exact mapped bytes 7F 03: jg 0x1004822e
        __asm _emit 0x7f
        __asm _emit 0x03
        push eax
        ; Exact mapped bytes EB 04: jmp 0x10048232
        __asm _emit 0xeb
        __asm _emit 0x04
        add ecx, -20h
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 27 6F 0B 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x6f
        __asm _emit 0x0b
        __asm _emit 0x00
        mov eax, dword ptr [esi + 58h]
        mov ecx, dword ptr [esi + 28h]
        cmp eax, ecx
        ; Exact mapped bytes 74 2A: je 0x1004826d
        __asm _emit 0x74
        __asm _emit 0x2a
        ; Exact mapped bytes 7E 11: jle 0x10048256
        __asm _emit 0x7e
        __asm _emit 0x11
        mov edx, eax
        sub edx, ecx
        cmp edx, 20h
        ; Exact mapped bytes 7F 03: jg 0x10048251
        __asm _emit 0x7f
        __asm _emit 0x03
        push eax
        ; Exact mapped bytes EB 15: jmp 0x10048266
        __asm _emit 0xeb
        __asm _emit 0x15
        add ecx, 20h
        ; Exact mapped bytes EB 0F: jmp 0x10048265
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, ecx
        sub edx, eax
        cmp edx, 20h
        ; Exact mapped bytes 7F 03: jg 0x10048262
        __asm _emit 0x7f
        __asm _emit 0x03
        push eax
        ; Exact mapped bytes EB 04: jmp 0x10048266
        __asm _emit 0xeb
        __asm _emit 0x04
        add ecx, -20h
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 B3 6E 0B 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x6e
        __asm _emit 0x0b
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [esi + 50h]
        cmp eax, ecx
        ; Exact mapped bytes 75 3D: jne 0x100482b4
        __asm _emit 0x75
        __asm _emit 0x3d
        mov ecx, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 54h]
        cmp ecx, eax
        ; Exact mapped bytes 75 33: jne 0x100482b4
        __asm _emit 0x75
        __asm _emit 0x33
        mov edx, dword ptr [esi + 58h]
        mov eax, dword ptr [esi + 28h]
        cmp edx, eax
        ; Exact mapped bytes 75 29: jne 0x100482b4
        __asm _emit 0x75
        __asm _emit 0x29
        mov eax, dword ptr [esi + 5ch]
        mov ecx, dword ptr [esi + 2ch]
        cmp eax, ecx
        ; Exact mapped bytes 75 1F: jne 0x100482b4
        __asm _emit 0x75
        __asm _emit 0x1f
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes 66 25 00 1F: and ax, 0x1f00
        __asm _emit 0x66
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x1f
        ; Exact mapped bytes 66 3D 00 01: cmp ax, 0x100
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 75 07: jne 0x100482aa
        __asm _emit 0x75
        __asm _emit 0x07
        mov byte ptr [esi + 60h], 2
        pop edi
        pop esi
        ret
        ; Exact mapped bytes 66 3D 00 04: cmp ax, 0x400
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x04
        ; Exact mapped bytes 75 04: jne 0x100482b4
        __asm _emit 0x75
        __asm _emit 0x04
        mov byte ptr [esi + 60h], 0
        pop edi
        pop esi
        ret
    }
}
