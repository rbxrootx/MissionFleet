// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10032AC0 .. +0x21A bytes.
extern "C" __declspec(naked) void FUN_10032ac0_10032AC0() {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        push edi
        test byte ptr [esi + 24h], 4
        ; Exact mapped bytes 0F 84 07 02 00 00: je 0x10032cd6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x07
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 98h], 40000000h
        ; Exact mapped bytes 0F 85 23 01 00 00: jne 0x10032c02
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x23
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4]
        mov ebx, dword ptr [esi + 0ach]
        cmp eax, ebx
        ; Exact mapped bytes 75 11: jne 0x10032afd
        __asm _emit 0x75
        __asm _emit 0x11
        mov ecx, dword ptr [esi + 8]
        mov edx, dword ptr [esi + 0b0h]
        cmp ecx, edx
        ; Exact mapped bytes 0F 84 D5 00 00 00: je 0x10032bd2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [esi + 0b0h]
        mov edx, dword ptr [esi + 8]
        sub ebx, eax
        mov eax, dword ptr [esi + 78h]
        sub edi, edx
        cmp eax, 2
        ; Exact mapped bytes 75 7A: jne 0x10032b8c
        __asm _emit 0x75
        __asm _emit 0x7a
        cmp ebx, -8
        ; Exact mapped bytes 7E 2C: jle 0x10032b43
        __asm _emit 0x7e
        __asm _emit 0x2c
        cmp ebx, 8
        ; Exact mapped bytes 7D 27: jge 0x10032b43
        __asm _emit 0x7d
        __asm _emit 0x27
        cmp ebx, -4
        ; Exact mapped bytes 7E 19: jle 0x10032b3a
        __asm _emit 0x7e
        __asm _emit 0x19
        cmp ebx, 4
        ; Exact mapped bytes 7D 14: jge 0x10032b3a
        __asm _emit 0x7d
        __asm _emit 0x14
        test ebx, ebx
        ; Exact mapped bytes 7D 05: jge 0x10032b2f
        __asm _emit 0x7d
        __asm _emit 0x05
        or ebx, 0ffffffffh
        ; Exact mapped bytes EB 21: jmp 0x10032b50
        __asm _emit 0xeb
        __asm _emit 0x21
        xor edx, edx
        test ebx, ebx
        setg dl
        mov ebx, edx
        ; Exact mapped bytes EB 16: jmp 0x10032b50
        __asm _emit 0xeb
        __asm _emit 0x16
        mov eax, ebx
        cdq
        sub eax, edx
        sar eax, 1
        ; Exact mapped bytes EB 0B: jmp 0x10032b4e
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov eax, ebx
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        mov ebx, eax
        cmp edi, -8
        ; Exact mapped bytes 7E 2A: jle 0x10032b7f
        __asm _emit 0x7e
        __asm _emit 0x2a
        cmp edi, 8
        ; Exact mapped bytes 7D 25: jge 0x10032b7f
        __asm _emit 0x7d
        __asm _emit 0x25
        cmp edi, -4
        ; Exact mapped bytes 7E 17: jle 0x10032b76
        __asm _emit 0x7e
        __asm _emit 0x17
        cmp edi, 4
        ; Exact mapped bytes 7D 12: jge 0x10032b76
        __asm _emit 0x7d
        __asm _emit 0x12
        test edi, edi
        ; Exact mapped bytes 7D 05: jge 0x10032b6d
        __asm _emit 0x7d
        __asm _emit 0x05
        or edi, 0ffffffffh
        ; Exact mapped bytes EB 4F: jmp 0x10032bbc
        __asm _emit 0xeb
        __asm _emit 0x4f
        xor eax, eax
        test edi, edi
        setg al
        ; Exact mapped bytes EB 44: jmp 0x10032bba
        __asm _emit 0xeb
        __asm _emit 0x44
        mov eax, edi
        cdq
        sub eax, edx
        sar eax, 1
        ; Exact mapped bytes EB 3B: jmp 0x10032bba
        __asm _emit 0xeb
        __asm _emit 0x3b
        mov eax, edi
        cdq
        and edx, 3
        add eax, edx
        sar eax, 2
        ; Exact mapped bytes EB 2E: jmp 0x10032bba
        __asm _emit 0xeb
        __asm _emit 0x2e
        cmp eax, 1
        ; Exact mapped bytes 75 2B: jne 0x10032bbc
        __asm _emit 0x75
        __asm _emit 0x2b
        mov eax, dword ptr [esi + 74h]
        test ebx, ebx
        ; Exact mapped bytes 7E 08: jle 0x10032ba0
        __asm _emit 0x7e
        __asm _emit 0x08
        cmp ebx, eax
        ; Exact mapped bytes 7C 0E: jl 0x10032baa
        __asm _emit 0x7c
        __asm _emit 0x0e
        mov ebx, eax
        ; Exact mapped bytes EB 0A: jmp 0x10032baa
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov ecx, eax
        neg ecx
        cmp ebx, ecx
        ; Exact mapped bytes 7F 02: jg 0x10032baa
        __asm _emit 0x7f
        __asm _emit 0x02
        mov ebx, ecx
        test edi, edi
        ; Exact mapped bytes 7E 06: jle 0x10032bb4
        __asm _emit 0x7e
        __asm _emit 0x06
        cmp edi, eax
        ; Exact mapped bytes 7C 0A: jl 0x10032bbc
        __asm _emit 0x7c
        __asm _emit 0x0a
        ; Exact mapped bytes EB 06: jmp 0x10032bba
        __asm _emit 0xeb
        __asm _emit 0x06
        neg eax
        cmp edi, eax
        ; Exact mapped bytes 7F 02: jg 0x10032bbc
        __asm _emit 0x7f
        __asm _emit 0x02
        mov edi, eax
        push edi
        push ebx
        mov ecx, esi
        ; Exact mapped bytes E8 6B C2 0C 00: call 0x100fee30
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0b4h]
        push edi
        push ebx
        ; Exact mapped bytes E8 5E C2 0C 00: call 0x100fee30
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4]
        mov eax, dword ptr [esi + 0ach]
        cmp ecx, eax
        ; Exact mapped bytes 75 23: jne 0x10032c02
        __asm _emit 0x75
        __asm _emit 0x23
        mov edx, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 0b0h]
        cmp edx, eax
        ; Exact mapped bytes 75 16: jne 0x10032c02
        __asm _emit 0x75
        __asm _emit 0x16
        cmp dword ptr [esi + 98h], 40000000h
        ; Exact mapped bytes 75 0A: jne 0x10032c02
        __asm _emit 0x75
        __asm _emit 0x0a
        xor ebx, ebx
        mov dword ptr [esi + 98h], ebx
        ; Exact mapped bytes EB 02: jmp 0x10032c04
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ebx, ebx
        cmp dword ptr [esi + 98h], ebx
        ; Exact mapped bytes 0F 85 A1 00 00 00: jne 0x10032cb1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 7ch]
        mov ecx, esi
        push eax
        ; Exact mapped bytes E8 C5 00 00 00: call 0x10032ce0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 94h], ebx
        ; Exact mapped bytes 0F 85 8A 00 00 00: jne 0x10032cb1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 D4 92 1C 10: mov edx, dword ptr [0x101c92d4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [esi + 4]
        mov edi, dword ptr [esi + 14h]
        mov ecx, dword ptr [edx + 4]
        add edi, eax
        cmp ecx, edi
        ; Exact mapped bytes 7C 2A: jl 0x10032c66
        __asm _emit 0x7c
        __asm _emit 0x2a
        mov edi, dword ptr [esi + 1ch]
        add edi, eax
        cmp ecx, edi
        ; Exact mapped bytes 7D 21: jge 0x10032c66
        __asm _emit 0x7d
        __asm _emit 0x21
        mov ecx, dword ptr [edx + 8]
        mov eax, dword ptr [esi + 8]
        mov edx, dword ptr [esi + 18h]
        add edx, eax
        cmp ecx, edx
        ; Exact mapped bytes 7C 12: jl 0x10032c66
        __asm _emit 0x7c
        __asm _emit 0x12
        mov edx, dword ptr [esi + 20h]
        add edx, eax
        cmp ecx, edx
        ; Exact mapped bytes 7D 09: jge 0x10032c66
        __asm _emit 0x7d
        __asm _emit 0x09
        mov ecx, esi
        ; Exact mapped bytes E8 1C 04 00 00: call 0x10033080
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 4B: jmp 0x10032cb1
        __asm _emit 0xeb
        __asm _emit 0x4b
        mov eax, dword ptr [esi + 80h]
        mov edi, 1
        cmp eax, edi
        ; Exact mapped bytes 75 16: jne 0x10032c8b
        __asm _emit 0x75
        __asm _emit 0x16
        mov ecx, dword ptr [esi + 30h]
        mov dword ptr [esi + 80h], ebx
        cmp ecx, ebx
        ; Exact mapped bytes 74 09: je 0x10032c8b
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ecx]
        push ebx
        push 4
        push esi
        ; Exact mapped bytes FF 50 18: call dword ptr [eax + 0x18]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x18
        cmp dword ptr [esi + 7ch], edi
        ; Exact mapped bytes 75 21: jne 0x10032cb1
        __asm _emit 0x75
        __asm _emit 0x21
        mov eax, dword ptr [esi + 0c4h]
        mov dword ptr [esi + 7ch], ebx
        cmp eax, ebx
        ; Exact mapped bytes 74 14: je 0x10032cb1
        __asm _emit 0x74
        __asm _emit 0x14
        cmp dword ptr [esi + 60h], ebx
        ; Exact mapped bytes 75 0F: jne 0x10032cb1
        __asm _emit 0x75
        __asm _emit 0x0f
        mov ecx, dword ptr [esi + 0b4h]
        mov dword ptr [esi + 54h], eax
        mov dword ptr [esi + 50h], ebx
        mov dword ptr [ecx + 50h], ebx
        mov ecx, dword ptr [esi + 3ch]
        cmp ecx, ebx
        ; Exact mapped bytes 74 1E: je 0x10032cd6
        __asm _emit 0x74
        __asm _emit 0x1e
        mov edi, dword ptr [ecx + 38h]
        mov eax, dword ptr [esi + 3ch]
        cmp edi, eax
        ; Exact mapped bytes 74 0F: je 0x10032cd1
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        cmp edi, ebx
        mov ecx, edi
        ; Exact mapped bytes 75 EB: jne 0x10032cb8
        __asm _emit 0x75
        __asm _emit 0xeb
        pop edi
        pop esi
        pop ebx
        ret
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        pop edi
        pop esi
        pop ebx
        ret
    }
}
