// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10023060 .. +0x22A bytes.
extern "C" __declspec(naked) void FUN_10023060_10023060() {
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
        ; Exact mapped bytes 0F 84 17 02 00 00: je 0x10023287
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x17
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 7ch]
        push ebx
        mov ebx, 40000000h
        cmp ecx, ebx
        ; Exact mapped bytes 75 03: jne 0x10023080
        __asm _emit 0x75
        __asm _emit 0x03
        inc dword ptr [esi + 50h]
        and eax, 1f00h
        ; Exact mapped bytes 66 3D 00 01: cmp ax, 0x100
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 74 17: je 0x100230a2
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact mapped bytes 66 3D 00 04: cmp ax, 0x400
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x04
        ; Exact mapped bytes 74 11: je 0x100230a2
        __asm _emit 0x74
        __asm _emit 0x11
        cmp dword ptr [esi + 60h], ebx
        ; Exact mapped bytes 74 0C: je 0x100230a2
        __asm _emit 0x74
        __asm _emit 0x0c
        cmp dword ptr [esi + 8ch], ebx
        ; Exact mapped bytes 0F 85 C0 01 00 00: jne 0x10023262
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4]
        mov edi, dword ptr [esi + 58h]
        cmp eax, edi
        ; Exact mapped bytes 75 0E: jne 0x100230ba
        __asm _emit 0x75
        __asm _emit 0x0e
        mov ecx, dword ptr [esi + 8]
        mov edx, dword ptr [esi + 5ch]
        cmp ecx, edx
        ; Exact mapped bytes 0F 84 C9 00 00 00: je 0x10023183
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 5ch]
        sub edi, eax
        mov eax, dword ptr [esi + 8]
        sub ecx, eax
        mov eax, dword ptr [esi + 64h]
        cmp eax, 2
        ; Exact mapped bytes 75 7A: jne 0x10023146
        __asm _emit 0x75
        __asm _emit 0x7a
        cmp edi, -8
        ; Exact mapped bytes 7E 2C: jle 0x100230fd
        __asm _emit 0x7e
        __asm _emit 0x2c
        cmp edi, 8
        ; Exact mapped bytes 7D 27: jge 0x100230fd
        __asm _emit 0x7d
        __asm _emit 0x27
        cmp edi, -4
        ; Exact mapped bytes 7E 19: jle 0x100230f4
        __asm _emit 0x7e
        __asm _emit 0x19
        cmp edi, 4
        ; Exact mapped bytes 7D 14: jge 0x100230f4
        __asm _emit 0x7d
        __asm _emit 0x14
        test edi, edi
        ; Exact mapped bytes 7D 05: jge 0x100230e9
        __asm _emit 0x7d
        __asm _emit 0x05
        or edi, 0ffffffffh
        ; Exact mapped bytes EB 21: jmp 0x1002310a
        __asm _emit 0xeb
        __asm _emit 0x21
        xor edx, edx
        test edi, edi
        setg dl
        mov edi, edx
        ; Exact mapped bytes EB 16: jmp 0x1002310a
        __asm _emit 0xeb
        __asm _emit 0x16
        mov eax, edi
        cdq
        sub eax, edx
        sar eax, 1
        ; Exact mapped bytes EB 0B: jmp 0x10023108
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov eax, edi
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        mov edi, eax
        cmp ecx, -8
        ; Exact mapped bytes 7E 2A: jle 0x10023139
        __asm _emit 0x7e
        __asm _emit 0x2a
        cmp ecx, 8
        ; Exact mapped bytes 7D 25: jge 0x10023139
        __asm _emit 0x7d
        __asm _emit 0x25
        cmp ecx, -4
        ; Exact mapped bytes 7E 17: jle 0x10023130
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp ecx, 4
        ; Exact mapped bytes 7D 12: jge 0x10023130
        __asm _emit 0x7d
        __asm _emit 0x12
        test ecx, ecx
        ; Exact mapped bytes 7D 05: jge 0x10023127
        __asm _emit 0x7d
        __asm _emit 0x05
        or ecx, 0ffffffffh
        ; Exact mapped bytes EB 4E: jmp 0x10023175
        __asm _emit 0xeb
        __asm _emit 0x4e
        xor eax, eax
        test ecx, ecx
        setg al
        ; Exact mapped bytes EB 43: jmp 0x10023173
        __asm _emit 0xeb
        __asm _emit 0x43
        mov eax, ecx
        cdq
        sub eax, edx
        sar eax, 1
        ; Exact mapped bytes EB 3A: jmp 0x10023173
        __asm _emit 0xeb
        __asm _emit 0x3a
        mov eax, ecx
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        ; Exact mapped bytes EB 2D: jmp 0x10023173
        __asm _emit 0xeb
        __asm _emit 0x2d
        cmp eax, 1
        ; Exact mapped bytes 75 2A: jne 0x10023175
        __asm _emit 0x75
        __asm _emit 0x2a
        mov eax, dword ptr [esi + 68h]
        test edi, edi
        ; Exact mapped bytes 7E 06: jle 0x10023158
        __asm _emit 0x7e
        __asm _emit 0x06
        cmp edi, eax
        ; Exact mapped bytes 7C 0A: jl 0x10023160
        __asm _emit 0x7c
        __asm _emit 0x0a
        ; Exact mapped bytes EB 06: jmp 0x1002315e
        __asm _emit 0xeb
        __asm _emit 0x06
        neg eax
        cmp edi, eax
        ; Exact mapped bytes 7F 02: jg 0x10023160
        __asm _emit 0x7f
        __asm _emit 0x02
        mov edi, eax
        mov eax, dword ptr [esi + 74h]
        test ecx, ecx
        ; Exact mapped bytes 7E 06: jle 0x1002316d
        __asm _emit 0x7e
        __asm _emit 0x06
        cmp ecx, eax
        ; Exact mapped bytes 7C 0A: jl 0x10023175
        __asm _emit 0x7c
        __asm _emit 0x0a
        ; Exact mapped bytes EB 06: jmp 0x10023173
        __asm _emit 0xeb
        __asm _emit 0x06
        neg eax
        cmp ecx, eax
        ; Exact mapped bytes 7F 02: jg 0x10023175
        __asm _emit 0x7f
        __asm _emit 0x02
        mov ecx, eax
        cmp dword ptr [esi + 60h], ebx
        ; Exact mapped bytes 75 09: jne 0x10023183
        __asm _emit 0x75
        __asm _emit 0x09
        push ecx
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 AD BC 0D 00: call 0x100fee30
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xbc
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 84h]
        mov eax, dword ptr [esi + 28h]
        cmp ecx, eax
        ; Exact mapped bytes 74 2D: je 0x100231bd
        __asm _emit 0x74
        __asm _emit 0x2d
        mov edx, dword ptr [esi + 88h]
        ; Exact mapped bytes 7E 10: jle 0x100231a8
        __asm _emit 0x7e
        __asm _emit 0x10
        mov edi, ecx
        sub edi, eax
        cmp edi, edx
        ; Exact mapped bytes 7F 03: jg 0x100231a3
        __asm _emit 0x7f
        __asm _emit 0x03
        push ecx
        ; Exact mapped bytes EB 13: jmp 0x100231b6
        __asm _emit 0xeb
        __asm _emit 0x13
        add edx, eax
        push edx
        ; Exact mapped bytes EB 0E: jmp 0x100231b6
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov edi, eax
        sub edi, ecx
        cmp edi, edx
        ; Exact mapped bytes 7F 03: jg 0x100231b3
        __asm _emit 0x7f
        __asm _emit 0x03
        push ecx
        ; Exact mapped bytes EB 03: jmp 0x100231b6
        __asm _emit 0xeb
        __asm _emit 0x03
        sub eax, edx
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 63 BF 0D 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xbf
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 80h]
        mov eax, dword ptr [esi + 2ch]
        cmp ecx, eax
        ; Exact mapped bytes 74 2C: je 0x100231f6
        __asm _emit 0x74
        __asm _emit 0x2c
        mov edx, dword ptr [esi + 88h]
        ; Exact mapped bytes 7E 0F: jle 0x100231e1
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov edi, ecx
        sub edi, eax
        cmp edi, edx
        ; Exact mapped bytes 7F 03: jg 0x100231dd
        __asm _emit 0x7f
        __asm _emit 0x03
        push ecx
        ; Exact mapped bytes EB 12: jmp 0x100231ef
        __asm _emit 0xeb
        __asm _emit 0x12
        add eax, edx
        ; Exact mapped bytes EB 0D: jmp 0x100231ee
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov edi, eax
        sub edi, ecx
        cmp edi, edx
        ; Exact mapped bytes 7F 03: jg 0x100231ec
        __asm _emit 0x7f
        __asm _emit 0x03
        push ecx
        ; Exact mapped bytes EB 03: jmp 0x100231ef
        __asm _emit 0xeb
        __asm _emit 0x03
        sub eax, edx
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 6A BF 0D 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xbf
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4]
        mov eax, dword ptr [esi + 58h]
        cmp ecx, eax
        ; Exact mapped bytes 75 62: jne 0x10023262
        __asm _emit 0x75
        __asm _emit 0x62
        mov edx, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 5ch]
        cmp edx, eax
        ; Exact mapped bytes 75 58: jne 0x10023262
        __asm _emit 0x75
        __asm _emit 0x58
        mov eax, dword ptr [esi + 84h]
        mov ecx, dword ptr [esi + 28h]
        cmp eax, ecx
        ; Exact mapped bytes 75 4B: jne 0x10023262
        __asm _emit 0x75
        __asm _emit 0x4b
        mov ecx, dword ptr [esi + 80h]
        mov eax, dword ptr [esi + 2ch]
        cmp ecx, eax
        ; Exact mapped bytes 75 3E: jne 0x10023262
        __asm _emit 0x75
        __asm _emit 0x3e
        cmp dword ptr [esi + 60h], ebx
        ; Exact mapped bytes 75 07: jne 0x10023230
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
        ; Exact mapped bytes 75 0C: jne 0x1002324f
        __asm _emit 0x75
        __asm _emit 0x0c
        and eax, 0e2ffh
        or eax, 202h
        ; Exact mapped bytes EB 0F: jmp 0x1002325e
        __asm _emit 0xeb
        __asm _emit 0x0f
        ; Exact mapped bytes 66 81 F9 00 04: cmp cx, 0x400
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x04
        ; Exact mapped bytes 75 0C: jne 0x10023262
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
        ; Exact mapped bytes 74 1D: je 0x10023287
        __asm _emit 0x74
        __asm _emit 0x1d
        mov edi, dword ptr [ecx + 38h]
        mov eax, dword ptr [esi + 3ch]
        cmp edi, eax
        ; Exact mapped bytes 74 0E: je 0x10023282
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        test edi, edi
        mov ecx, edi
        ; Exact mapped bytes 75 EB: jne 0x1002326a
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
