// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100DA2F0 .. +0x14A bytes.
extern "C" __declspec(naked) void FUN_100da2f0_100DA2F0() {
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
        ; Exact mapped bytes 0F 84 37 01 00 00: je 0x100da437
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x37
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 1f00h
        ; Exact mapped bytes 66 3D 00 01: cmp ax, 0x100
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 74 0A: je 0x100da315
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes 66 3D 00 04: cmp ax, 0x400
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x04
        ; Exact mapped bytes 0F 85 FE 00 00 00: jne 0x100da413
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xfe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4]
        mov eax, dword ptr [esi + 50h]
        cmp ecx, eax
        ; Exact mapped bytes 75 0A: jne 0x100da329
        __asm _emit 0x75
        __asm _emit 0x0a
        mov edx, dword ptr [esi + 8]
        mov edi, dword ptr [esi + 54h]
        cmp edx, edi
        ; Exact mapped bytes 74 68: je 0x100da391
        __asm _emit 0x74
        __asm _emit 0x68
        mov edi, dword ptr [esi + 54h]
        mov edx, dword ptr [esi + 8]
        sub eax, ecx
        sub edi, edx
        cmp eax, -8
        ; Exact mapped bytes 7E 2A: jle 0x100da362
        __asm _emit 0x7e
        __asm _emit 0x2a
        cmp eax, 8
        ; Exact mapped bytes 7D 25: jge 0x100da362
        __asm _emit 0x7d
        __asm _emit 0x25
        cmp eax, -4
        ; Exact mapped bytes 7E 17: jle 0x100da359
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp eax, 4
        ; Exact mapped bytes 7D 12: jge 0x100da359
        __asm _emit 0x7d
        __asm _emit 0x12
        test eax, eax
        ; Exact mapped bytes 7D 05: jge 0x100da350
        __asm _emit 0x7d
        __asm _emit 0x05
        or ecx, 0ffffffffh
        ; Exact mapped bytes EB 1D: jmp 0x100da36d
        __asm _emit 0xeb
        __asm _emit 0x1d
        xor ecx, ecx
        test eax, eax
        setg cl
        ; Exact mapped bytes EB 14: jmp 0x100da36d
        __asm _emit 0xeb
        __asm _emit 0x14
        cdq
        sub eax, edx
        mov ecx, eax
        sar ecx, 1
        ; Exact mapped bytes EB 0B: jmp 0x100da36d
        __asm _emit 0xeb
        __asm _emit 0x0b
        cdq
        and edx, 3
        add eax, edx
        mov ecx, eax
        sar ecx, 2
        mov eax, edi
        cdq
        xor eax, edx
        sub eax, edx
        cmp eax, 40h
        ; Exact mapped bytes 7E 0F: jle 0x100da388
        __asm _emit 0x7e
        __asm _emit 0x0f
        xor eax, eax
        test edi, edi
        setge al
        dec eax
        and al, 80h
        add eax, 40h
        mov edi, eax
        push edi
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 9F 4A 02 00: call 0x100fee30
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x4a
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4]
        mov eax, dword ptr [esi + 50h]
        cmp ecx, eax
        ; Exact mapped bytes 75 78: jne 0x100da413
        __asm _emit 0x75
        __asm _emit 0x78
        mov edx, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 54h]
        cmp edx, eax
        ; Exact mapped bytes 75 6E: jne 0x100da413
        __asm _emit 0x75
        __asm _emit 0x6e
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
        ; Exact mapped bytes 75 48: jne 0x100da400
        __asm _emit 0x75
        __asm _emit 0x48
        and eax, 0e2ffh
        ; Exact mapped bytes 66 C7 86 9C 01 00 00 03 00: mov word ptr [esi + 0x19c], 3
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0x9c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        or eax, 202h
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes A1 D4 57 1C 10: mov eax, dword ptr [0x101c57d4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 170h], 30h
        ; Exact mapped bytes 7E 19: jle 0x100da3f6
        __asm _emit 0x7e
        __asm _emit 0x19
        mov eax, dword ptr [eax + 194h]
        test eax, eax
        ; Exact mapped bytes 74 0F: je 0x100da3f6
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [eax + 0c0h]
        push 0
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes EB 1D: jmp 0x100da413
        __asm _emit 0xeb
        __asm _emit 0x1d
        xor ecx, ecx
        push ecx
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes EB 13: jmp 0x100da413
        __asm _emit 0xeb
        __asm _emit 0x13
        ; Exact mapped bytes 66 81 F9 00 04: cmp cx, 0x400
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x04
        ; Exact mapped bytes 75 0C: jne 0x100da413
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
        test ecx, ecx
        ; Exact mapped bytes 74 1D: je 0x100da437
        __asm _emit 0x74
        __asm _emit 0x1d
        mov edi, dword ptr [ecx + 38h]
        mov eax, dword ptr [esi + 3ch]
        cmp edi, eax
        ; Exact mapped bytes 74 0E: je 0x100da432
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        test edi, edi
        mov ecx, edi
        ; Exact mapped bytes 75 EB: jne 0x100da41a
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
