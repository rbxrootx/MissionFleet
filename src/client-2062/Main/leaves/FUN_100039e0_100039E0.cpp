// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100039E0 .. +0x371 bytes.
extern "C" __declspec(naked) void FUN_100039e0_100039E0() {
    __asm {
        sub esp, 48h
        mov eax, dword ptr [esp + 54h]
        push ebx
        push ebp
        push esi
        lea edx, [eax + eax*2]
        xor ebx, ebx
        push edi
        mov dword ptr [esp + 3ch], ebx
        lea eax, [eax + edx*4]
        mov edi, 0c8h
        mov dword ptr [esp + 18h], 1
        mov ebp, dword ptr [ecx + eax*4 + 70h]
        lea esi, [ecx + eax*4]
        mov ecx, dword ptr [esp + 60h]
        mov eax, 51eb851fh
        mov dword ptr [esp + 20h], esi
        mov ecx, dword ptr [ecx*4 + 101ad160h]
        imul ecx, ebp
        imul ecx
        mov ecx, dword ptr [esp + 60h]
        sar edx, 5
        mov ecx, dword ptr [ecx*4 + 101b09a0h]
        mov eax, edx
        imul ecx, ebp
        shr eax, 1fh
        add edx, eax
        mov eax, 10624dd3h
        mov dword ptr [esp + 34h], edx
        imul ecx
        ; Exact mapped bytes 8B 0D A0 09 1B 10: mov ecx, dword ptr [0x101b09a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x09
        __asm _emit 0x1b
        __asm _emit 0x10
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, 51eb851fh
        imul ecx, edx
        imul ecx
        sar edx, 5
        mov ecx, edx
        mov eax, dword ptr [esi + 80h]
        shr ecx, 1fh
        add edx, ecx
        mov dword ptr [esp + 1ch], eax
        mov ecx, edx
        mov edx, dword ptr [esp + 34h]
        lea ebp, [edx + edx]
        mov eax, 51eb851fh
        mov esi, dword ptr [esp + 1ch]
        imul edi
        sar edx, 7
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, 51eb851fh
        imul edx, edi
        imul edx
        sar edx, 7
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, 2710h
        sub eax, esi
        imul edx, eax
        mov eax, 447a7a9h
        imul edx
        sar edx, 0dh
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        add esi, edx
        cmp esi, 2710h
        ; Exact mapped bytes 7E 05: jle 0x10003ad1
        __asm _emit 0x7e
        __asm _emit 0x05
        mov esi, 2710h
        mov edx, esi
        mov eax, 68db8badh
        imul edx, ecx
        imul edx
        ; Exact mapped bytes A1 F0 55 1C 10: mov eax, dword ptr [0x101c55f0]
        __asm _emit 0xa1
        __asm _emit 0xf0
        __asm _emit 0x55
        __asm _emit 0x1c
        __asm _emit 0x10
        sar edx, 0ch
        mov ecx, edx
        shr ecx, 1fh
        add edx, ecx
        add ebp, eax
        mov ecx, edx
        mov dword ptr [esp + 50h], ebp
        mov dword ptr [esp + 48h], ecx
        ; Exact mapped bytes 78 22: js 0x10003b1c
        __asm _emit 0x78
        __asm _emit 0x22
        lea edx, [esi - 1388h]
        mov eax, 68db8badh
        imul edx, ebp
        shl edx, 1
        imul edx
        sar edx, 0ch
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov ebp, edx
        mov dword ptr [esp + 50h], ebp
        cmp edi, 0fa0h
        ; Exact mapped bytes 7E 2E: jle 0x10003b52
        __asm _emit 0x7e
        __asm _emit 0x2e
        lea eax, [edi + ebp]
        cmp eax, 0fa0h
        ; Exact mapped bytes 7E 24: jle 0x10003b52
        __asm _emit 0x7e
        __asm _emit 0x24
        cmp ebp, 0fffff448h
        ; Exact mapped bytes 7F 0F: jg 0x10003b45
        __asm _emit 0x7f
        __asm _emit 0x0f
        mov edx, dword ptr [esp + 20h]
        ; Exact mapped bytes 66 83 7A 5C 02: cmp word ptr [edx + 0x5c], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7a
        __asm _emit 0x5c
        __asm _emit 0x02
        ; Exact mapped bytes 0F 84 AB 01 00 00: je 0x10003cf0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xab
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add ebx, ecx
        mov edi, eax
        mov dword ptr [esp + 3ch], ebx
        ; Exact mapped bytes E9 7B 01 00 00: jmp 0x10003ccd
        __asm _emit 0xe9
        __asm _emit 0x7b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea esi, [edi + ebp]
        test esi, esi
        mov dword ptr [esp + 28h], esi
        ; Exact mapped bytes 7D 2F: jge 0x10003b8c
        __asm _emit 0x7d
        __asm _emit 0x2f
        lea eax, [edi + edi*4]
        lea eax, [eax + eax*4]
        shl eax, 2
        cdq
        idiv ebp
        cdq
        xor eax, edx
        sub eax, edx
        imul eax, ecx
        mov ecx, eax
        mov eax, 51eb851fh
        imul ecx
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        add edx, ebx
        xor esi, esi
        mov ecx, edx
        ; Exact mapped bytes EB 43: jmp 0x10003bcf
        __asm _emit 0xeb
        __asm _emit 0x43
        cmp esi, 0fa0h
        ; Exact mapped bytes 7E 39: jle 0x10003bcd
        __asm _emit 0x7e
        __asm _emit 0x39
        mov eax, 0fa0h
        mov esi, 0fa0h
        sub eax, edi
        lea eax, [eax + eax*4]
        lea eax, [eax + eax*4]
        shl eax, 2
        cdq
        idiv ebp
        cdq
        xor eax, edx
        sub eax, edx
        imul eax, ecx
        mov ecx, eax
        mov eax, 51eb851fh
        imul ecx
        mov ecx, edx
        sar ecx, 5
        mov edx, ecx
        shr edx, 1fh
        add ecx, edx
        add ecx, ebx
        ; Exact mapped bytes EB 02: jmp 0x10003bcf
        __asm _emit 0xeb
        __asm _emit 0x02
        add ecx, ebx
        mov ebp, ecx
        mov eax, esi
        sub ebp, ebx
        ; Exact mapped bytes 8B 1D EC 55 1C 10: mov ebx, dword ptr [0x101c55ec]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0xec
        __asm _emit 0x55
        __asm _emit 0x1c
        __asm _emit 0x10
        sub eax, edi
        mov dword ptr [esp + 10h], ebp
        mov dword ptr [esp + 24h], eax
        lea eax, [ebx + ebx*2]
        lea eax, [ebx + eax*4]
        lea ebx, [ebx + ebx*4]
        lea edx, [eax + eax*8]
        mov eax, 51eb851fh
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, 51eb851fh
        mov dword ptr [esp + 60h], edx
        lea edx, [ebx + ebx*4]
        shl edx, 2
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, ebp
        mov ebx, edx
        cdq
        xor eax, edx
        mov dword ptr [esp + 64h], ebx
        sub eax, edx
        cdq
        idiv ebx
        mov ebx, dword ptr [esp + 60h]
        mov ebp, eax
        xor eax, eax
        cdq
        xor eax, edx
        sub eax, edx
        cdq
        idiv ebx
        cmp ebp, eax
        ; Exact mapped bytes 7E 0B: jle 0x10003c4c
        __asm _emit 0x7e
        __asm _emit 0x0b
        mov eax, dword ptr [esp + 10h]
        cdq
        idiv dword ptr [esp + 64h]
        ; Exact mapped bytes EB 05: jmp 0x10003c51
        __asm _emit 0xeb
        __asm _emit 0x05
        xor eax, eax
        cdq
        idiv ebx
        cdq
        xor eax, edx
        sub eax, edx
        cdq
        sub eax, edx
        mov ebp, eax
        xor eax, eax
        sar ebp, 1
        inc ebp
        cmp ebp, eax
        ; Exact mapped bytes 7E 4F: jle 0x10003cb3
        __asm _emit 0x7e
        __asm _emit 0x4f
        mov ebx, dword ptr [esp + 3ch]
        mov dword ptr [esp + 64h], eax
        mov dword ptr [esp + 60h], eax
        mov dword ptr [esp + 14h], ebp
        mov eax, dword ptr [esp + 60h]
        cdq
        idiv ebp
        mov ecx, eax
        mov eax, dword ptr [esp + 64h]
        cdq
        idiv ebp
        mov edx, dword ptr [esp + 10h]
        add ecx, ebx
        mov esi, eax
        mov eax, dword ptr [esp + 60h]
        add eax, edx
        mov edx, dword ptr [esp + 64h]
        mov dword ptr [esp + 60h], eax
        mov eax, dword ptr [esp + 24h]
        add edx, eax
        mov eax, dword ptr [esp + 14h]
        add esi, edi
        dec eax
        mov dword ptr [esp + 64h], edx
        mov dword ptr [esp + 14h], eax
        ; Exact mapped bytes 75 C3: jne 0x10003c74
        __asm _emit 0x75
        __asm _emit 0xc3
        ; Exact mapped bytes EB 04: jmp 0x10003cb7
        __asm _emit 0xeb
        __asm _emit 0x04
        mov ebx, dword ptr [esp + 3ch]
        test esi, esi
        ; Exact mapped bytes 7E 66: jle 0x10003d21
        __asm _emit 0x7e
        __asm _emit 0x66
        mov ecx, dword ptr [esp + 48h]
        mov edi, dword ptr [esp + 28h]
        mov ebp, dword ptr [esp + 50h]
        add ebx, ecx
        mov dword ptr [esp + 3ch], ebx
        mov eax, dword ptr [esp + 18h]
        mov edx, eax
        inc eax
        cmp edx, 3e8h
        mov dword ptr [esp + 18h], eax
        ; Exact mapped bytes 0F 8C 9A FD FF FF: jl 0x10003a7e
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x9a
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 48h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes A1 EC 55 1C 10: mov eax, dword ptr [0x101c55ec]
        __asm _emit 0xa1
        __asm _emit 0xec
        __asm _emit 0x55
        __asm _emit 0x1c
        __asm _emit 0x10
        pop edi
        lea eax, [eax + eax*4]
        lea edx, [eax + eax*4]
        mov eax, 51eb851fh
        shl edx, 2
        imul edx
        mov esi, edx
        sar esi, 5
        mov eax, esi
        shr eax, 1fh
        add esi, eax
        lea eax, [ecx + ebx]
        cdq
        idiv esi
        pop esi
        pop ebp
        pop ebx
        add esp, 48h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes A1 EC 55 1C 10: mov eax, dword ptr [0x101c55ec]
        __asm _emit 0xa1
        __asm _emit 0xec
        __asm _emit 0x55
        __asm _emit 0x1c
        __asm _emit 0x10
        pop edi
        lea eax, [eax + eax*4]
        lea edx, [eax + eax*4]
        mov eax, 51eb851fh
        shl edx, 2
        imul edx
        mov esi, edx
        mov eax, ecx
        sar esi, 5
        mov edx, esi
        shr edx, 1fh
        add esi, edx
        cdq
        idiv esi
        pop esi
        pop ebp
        pop ebx
        add esp, 48h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
