// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10047A90 .. +0x199 bytes.
extern "C" __declspec(naked) void FUN_10047a90_10047A90() {
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
        ; Exact mapped bytes 0F 84 86 01 00 00: je 0x10047c26
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x86
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 7ch]
        push ebx
        mov ebx, 40000000h
        cmp ecx, ebx
        ; Exact mapped bytes 75 03: jne 0x10047ab0
        __asm _emit 0x75
        __asm _emit 0x03
        inc dword ptr [esi + 50h]
        and eax, 1f00h
        ; Exact mapped bytes 66 3D 00 01: cmp ax, 0x100
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 74 0F: je 0x10047aca
        __asm _emit 0x74
        __asm _emit 0x0f
        ; Exact mapped bytes 66 3D 00 04: cmp ax, 0x400
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x04
        ; Exact mapped bytes 74 09: je 0x10047aca
        __asm _emit 0x74
        __asm _emit 0x09
        cmp dword ptr [esi + 60h], ebx
        ; Exact mapped bytes 0F 85 37 01 00 00: jne 0x10047c01
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x37
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 70h], ebx
        ; Exact mapped bytes 0F 85 DC 00 00 00: jne 0x10047baf
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4]
        mov edi, dword ptr [esi + 58h]
        cmp eax, edi
        ; Exact mapped bytes 75 0E: jne 0x10047aeb
        __asm _emit 0x75
        __asm _emit 0x0e
        mov ecx, dword ptr [esi + 8]
        mov edx, dword ptr [esi + 5ch]
        cmp ecx, edx
        ; Exact mapped bytes 0F 84 C4 00 00 00: je 0x10047baf
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 5ch]
        sub edi, eax
        mov eax, dword ptr [esi + 8]
        sub ecx, eax
        mov eax, dword ptr [esi + 64h]
        cmp eax, 2
        ; Exact mapped bytes 75 7A: jne 0x10047b77
        __asm _emit 0x75
        __asm _emit 0x7a
        cmp edi, -8
        ; Exact mapped bytes 7E 2C: jle 0x10047b2e
        __asm _emit 0x7e
        __asm _emit 0x2c
        cmp edi, 8
        ; Exact mapped bytes 7D 27: jge 0x10047b2e
        __asm _emit 0x7d
        __asm _emit 0x27
        cmp edi, -4
        ; Exact mapped bytes 7E 19: jle 0x10047b25
        __asm _emit 0x7e
        __asm _emit 0x19
        cmp edi, 4
        ; Exact mapped bytes 7D 14: jge 0x10047b25
        __asm _emit 0x7d
        __asm _emit 0x14
        test edi, edi
        ; Exact mapped bytes 7D 05: jge 0x10047b1a
        __asm _emit 0x7d
        __asm _emit 0x05
        or edi, 0ffffffffh
        ; Exact mapped bytes EB 21: jmp 0x10047b3b
        __asm _emit 0xeb
        __asm _emit 0x21
        xor edx, edx
        test edi, edi
        setg dl
        mov edi, edx
        ; Exact mapped bytes EB 16: jmp 0x10047b3b
        __asm _emit 0xeb
        __asm _emit 0x16
        mov eax, edi
        cdq
        sub eax, edx
        sar eax, 1
        ; Exact mapped bytes EB 0B: jmp 0x10047b39
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov eax, edi
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        mov edi, eax
        cmp ecx, -8
        ; Exact mapped bytes 7E 2A: jle 0x10047b6a
        __asm _emit 0x7e
        __asm _emit 0x2a
        cmp ecx, 8
        ; Exact mapped bytes 7D 25: jge 0x10047b6a
        __asm _emit 0x7d
        __asm _emit 0x25
        cmp ecx, -4
        ; Exact mapped bytes 7E 17: jle 0x10047b61
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp ecx, 4
        ; Exact mapped bytes 7D 12: jge 0x10047b61
        __asm _emit 0x7d
        __asm _emit 0x12
        test ecx, ecx
        ; Exact mapped bytes 7D 05: jge 0x10047b58
        __asm _emit 0x7d
        __asm _emit 0x05
        or ecx, 0ffffffffh
        ; Exact mapped bytes EB 4E: jmp 0x10047ba6
        __asm _emit 0xeb
        __asm _emit 0x4e
        xor eax, eax
        test ecx, ecx
        setg al
        ; Exact mapped bytes EB 43: jmp 0x10047ba4
        __asm _emit 0xeb
        __asm _emit 0x43
        mov eax, ecx
        cdq
        sub eax, edx
        sar eax, 1
        ; Exact mapped bytes EB 3A: jmp 0x10047ba4
        __asm _emit 0xeb
        __asm _emit 0x3a
        mov eax, ecx
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        ; Exact mapped bytes EB 2D: jmp 0x10047ba4
        __asm _emit 0xeb
        __asm _emit 0x2d
        cmp eax, 1
        ; Exact mapped bytes 75 2A: jne 0x10047ba6
        __asm _emit 0x75
        __asm _emit 0x2a
        mov eax, dword ptr [esi + 68h]
        test edi, edi
        ; Exact mapped bytes 7E 06: jle 0x10047b89
        __asm _emit 0x7e
        __asm _emit 0x06
        cmp edi, eax
        ; Exact mapped bytes 7C 0A: jl 0x10047b91
        __asm _emit 0x7c
        __asm _emit 0x0a
        ; Exact mapped bytes EB 06: jmp 0x10047b8f
        __asm _emit 0xeb
        __asm _emit 0x06
        neg eax
        cmp edi, eax
        ; Exact mapped bytes 7F 02: jg 0x10047b91
        __asm _emit 0x7f
        __asm _emit 0x02
        mov edi, eax
        mov eax, dword ptr [esi + 74h]
        test ecx, ecx
        ; Exact mapped bytes 7E 06: jle 0x10047b9e
        __asm _emit 0x7e
        __asm _emit 0x06
        cmp ecx, eax
        ; Exact mapped bytes 7C 0A: jl 0x10047ba6
        __asm _emit 0x7c
        __asm _emit 0x0a
        ; Exact mapped bytes EB 06: jmp 0x10047ba4
        __asm _emit 0xeb
        __asm _emit 0x06
        neg eax
        cmp ecx, eax
        ; Exact mapped bytes 7F 02: jg 0x10047ba6
        __asm _emit 0x7f
        __asm _emit 0x02
        mov ecx, eax
        push ecx
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 81 72 0B 00: call 0x100fee30
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x72
        __asm _emit 0x0b
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4]
        mov eax, dword ptr [esi + 58h]
        cmp ecx, eax
        ; Exact mapped bytes 75 48: jne 0x10047c01
        __asm _emit 0x75
        __asm _emit 0x48
        mov edx, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 5ch]
        cmp edx, eax
        ; Exact mapped bytes 75 3E: jne 0x10047c01
        __asm _emit 0x75
        __asm _emit 0x3e
        cmp dword ptr [esi + 60h], ebx
        ; Exact mapped bytes 75 07: jne 0x10047bcf
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [esi + 60h], 0
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
        ; Exact mapped bytes 75 0C: jne 0x10047bee
        __asm _emit 0x75
        __asm _emit 0x0c
        and eax, 0e2ffh
        or eax, 202h
        ; Exact mapped bytes EB 0F: jmp 0x10047bfd
        __asm _emit 0xeb
        __asm _emit 0x0f
        ; Exact mapped bytes 66 81 F9 00 04: cmp cx, 0x400
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x04
        ; Exact mapped bytes 75 0C: jne 0x10047c01
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
        ; Exact mapped bytes 74 1D: je 0x10047c26
        __asm _emit 0x74
        __asm _emit 0x1d
        mov edi, dword ptr [ecx + 38h]
        mov eax, dword ptr [esi + 3ch]
        cmp edi, eax
        ; Exact mapped bytes 74 0E: je 0x10047c21
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        test edi, edi
        mov ecx, edi
        ; Exact mapped bytes 75 EB: jne 0x10047c09
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
