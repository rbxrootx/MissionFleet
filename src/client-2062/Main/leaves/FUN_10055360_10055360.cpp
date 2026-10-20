// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10055360 .. +0x154 bytes.
extern "C" __declspec(naked) void FUN_10055360_10055360() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 178h]
        test eax, eax
        ; Exact mapped bytes 0F 85 41 01 00 00: jne 0x100554b2
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x41
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 180h]
        push edi
        cmp edx, 40000000h
        ; Exact mapped bytes 75 62: jne 0x100553e2
        __asm _emit 0x75
        __asm _emit 0x62
        mov eax, dword ptr [esi + 74h]
        mov edx, dword ptr [esi + 70h]
        add edx, eax
        mov eax, 51eb851fh
        mov ecx, edx
        mov dword ptr [esi + 70h], edx
        imul ecx
        sar edx, 5
        mov ecx, edx
        mov eax, 320h
        shr ecx, 1fh
        add edx, ecx
        mov ecx, esi
        sub eax, edx
        xor edx, edx
        test eax, eax
        setle dl
        dec edx
        and edx, eax
        mov edi, edx
        push edi
        ; Exact mapped bytes E8 07 9A 0A 00: call 0x100fedc0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x9a
        __asm _emit 0x0a
        __asm _emit 0x00
        test edi, edi
        ; Exact mapped bytes 75 06: jne 0x100553c3
        __asm _emit 0x75
        __asm _emit 0x06
        mov dword ptr [esi + 180h], edi
        cmp dword ptr [esi + 8], 1f4h
        ; Exact mapped bytes 0F 8D BA 00 00 00: jge 0x1005548a
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D EC 56 1C 10: mov ecx, dword ptr [0x101c56ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 1
        ; Exact mapped bytes E8 D3 AB FD FF: call 0x1002ffb0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xab
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes E9 A8 00 00 00: jmp 0x1005548a
        __asm _emit 0xe9
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 54h]
        cmp ecx, eax
        ; Exact mapped bytes 0F 84 9A 00 00 00: je 0x1005548a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test edx, edx
        ; Exact mapped bytes 0F 85 92 00 00 00: jne 0x1005548a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, ecx
        cmp eax, -8
        ; Exact mapped bytes 7E 2C: jle 0x1005542b
        __asm _emit 0x7e
        __asm _emit 0x2c
        cmp eax, 8
        ; Exact mapped bytes 7D 27: jge 0x1005542b
        __asm _emit 0x7d
        __asm _emit 0x27
        cmp eax, -4
        ; Exact mapped bytes 7E 19: jle 0x10055422
        __asm _emit 0x7e
        __asm _emit 0x19
        cmp eax, 4
        ; Exact mapped bytes 7D 14: jge 0x10055422
        __asm _emit 0x7d
        __asm _emit 0x14
        test eax, eax
        ; Exact mapped bytes 7D 05: jge 0x10055417
        __asm _emit 0x7d
        __asm _emit 0x05
        or edi, 0ffffffffh
        ; Exact mapped bytes EB 1F: jmp 0x10055436
        __asm _emit 0xeb
        __asm _emit 0x1f
        xor ecx, ecx
        test eax, eax
        setg cl
        mov edi, ecx
        ; Exact mapped bytes EB 14: jmp 0x10055436
        __asm _emit 0xeb
        __asm _emit 0x14
        cdq
        sub eax, edx
        mov edi, eax
        sar edi, 1
        ; Exact mapped bytes EB 0B: jmp 0x10055436
        __asm _emit 0xeb
        __asm _emit 0x0b
        cdq
        and edx, 3
        add eax, edx
        mov edi, eax
        sar edi, 2
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 82 9A 0A 00: call 0x100feec0
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x9a
        __asm _emit 0x0a
        __asm _emit 0x00
        cmp dword ptr [esi + 8], 258h
        ; Exact mapped bytes 7D 0D: jge 0x10055454
        __asm _emit 0x7d
        __asm _emit 0x0d
        ; Exact mapped bytes 8B 0D EC 56 1C 10: mov ecx, dword ptr [0x101c56ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0ah
        ; Exact mapped bytes E8 5C AB FD FF: call 0x1002ffb0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xab
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes A1 EC 56 1C 10: mov eax, dword ptr [0x101c56ec]
        __asm _emit 0xa1
        __asm _emit 0xec
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov edx, edi
        neg edx
        mov dword ptr [eax + 0a0h], edx
        mov eax, dword ptr [esi + 10ch]
        xor ecx, ecx
        test eax, eax
        ; Exact mapped bytes 7E 1B: jle 0x1005548a
        __asm _emit 0x7e
        __asm _emit 0x1b
        lea eax, [esi + 90h]
        mov edx, dword ptr [eax]
        add eax, 8
        add edx, edi
        inc ecx
        mov dword ptr [eax - 8], edx
        mov edx, dword ptr [esi + 10ch]
        cmp ecx, edx
        ; Exact mapped bytes 7C EB: jl 0x10055475
        __asm _emit 0x7c
        __asm _emit 0xeb
        mov eax, dword ptr [esi + 8]
        pop edi
        test eax, eax
        ; Exact mapped bytes 75 20: jne 0x100554b2
        __asm _emit 0x75
        __asm _emit 0x20
        mov ecx, esi
        ; Exact mapped bytes E8 57 03 00 00: call 0x100557f0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        or byte ptr [esi + 24h], 2
        mov dword ptr [esi + 178h], 40000000h
        ; Exact mapped bytes 8B 0D EC 56 1C 10: mov ecx, dword ptr [0x101c56ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 4E AB FD FF: call 0x10030000
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xab
        __asm _emit 0xfd
        __asm _emit 0xff
        pop esi
        ret
    }
}
