// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1002FE00 .. +0x1AE bytes.
extern "C" __declspec(naked) void FUN_1002fe00_1002FE00() {
    __asm {
        sub esp, 14h
        push ebx
        push ebp
        push esi
        mov ebx, dword ptr [esp + 24h]
        push edi
        mov edi, ecx
        mov dword ptr [esp + 14h], 0
        mov eax, dword ptr [edi + 0ach]
        mov ebp, dword ptr [edi + 1b8h]
        cdq
        idiv ebx
        mov edx, dword ptr [edi + 1bch]
        mov esi, eax
        mov eax, dword ptr [edi + 1b0h]
        shl eax, 2
        mov dword ptr [esp + 1ch], esi
        mov ecx, dword ptr [eax + 101ad160h]
        add edx, ecx
        mov dword ptr [edi + 1bch], edx
        mov edx, dword ptr [eax + 101b09a0h]
        mov eax, dword ptr [esp + 2ch]
        add ebp, edx
        test eax, eax
        mov dword ptr [edi + 1b8h], ebp
        ; Exact mapped bytes 75 27: jne 0x1002fe84
        __asm _emit 0x75
        __asm _emit 0x27
        mov eax, dword ptr [edi + 0a8h]
        mov ecx, dword ptr [edi + 6ch]
        add ecx, eax
        mov eax, 51eb851fh
        imul ecx
        sar edx, 5
        mov dword ptr [edi + 6ch], ecx
        mov ecx, edx
        shr ecx, 1fh
        add edx, ecx
        mov dword ptr [edi + 2c0h], edx
        ; Exact mapped bytes EB 06: jmp 0x1002fe8a
        __asm _emit 0xeb
        __asm _emit 0x06
        add dword ptr [edi + 2c0h], eax
        test ebx, ebx
        ; Exact mapped bytes 0F 8E 12 01 00 00: jle 0x1002ffa4
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x12
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [edi + 0b0h]
        mov ecx, 7d0h
        mov dword ptr [esp + 2ch], edx
        lea edx, [edi + 1c4h]
        xor eax, eax
        mov dword ptr [esp + 28h], ecx
        mov dword ptr [esp + 10h], edx
        mov dword ptr [esp + 18h], ebx
        lea ebp, [eax + esi]
        cmp eax, ebp
        mov dword ptr [esp + 20h], ebp
        ; Exact mapped bytes 0F 8D A3 00 00 00: jge 0x1002ff67
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [esp + 10h]
        mov ebx, dword ptr [esp + 2ch]
        sub ebp, eax
        mov eax, dword ptr [esp + 14h]
        add eax, ebp
        mov dword ptr [esp + 14h], eax
        mov eax, dword ptr [edi + 1bch]
        cdq
        idiv ecx
        mov edx, dword ptr [edi + 2c0h]
        sub eax, edx
        mov edx, dword ptr [esi]
        add eax, edx
        push eax
        mov eax, dword ptr [edi + 1b8h]
        cdq
        idiv ecx
        mov ecx, dword ptr [esi - 4]
        add eax, ecx
        mov ecx, dword ptr [ebx]
        push eax
        ; Exact mapped bytes E8 CC ED 0C 00: call 0x100fecd0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xed
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [ebx]
        mov eax, dword ptr [eax + 4]
        cmp eax, 44ch
        ; Exact mapped bytes 7E 0A: jle 0x1002ff1a
        __asm _emit 0x7e
        __asm _emit 0x0a
        mov eax, dword ptr [esi - 4]
        add eax, 0fffffa24h
        ; Exact mapped bytes EB 0F: jmp 0x1002ff29
        __asm _emit 0xeb
        __asm _emit 0x0f
        cmp eax, 0fffffed4h
        ; Exact mapped bytes 7D 0B: jge 0x1002ff2c
        __asm _emit 0x7d
        __asm _emit 0x0b
        mov eax, dword ptr [esi - 4]
        add eax, 5dch
        mov dword ptr [esi - 4], eax
        mov ecx, dword ptr [ebx]
        cmp dword ptr [ecx + 8], 320h
        ; Exact mapped bytes 7E 06: jle 0x1002ff3d
        __asm _emit 0x7e
        __asm _emit 0x06
        add dword ptr [esi], 0fffffc18h
        mov edx, dword ptr [ebx]
        cmp dword ptr [edx + 8], 0ffffff38h
        ; Exact mapped bytes 7D 06: jge 0x1002ff4e
        __asm _emit 0x7d
        __asm _emit 0x06
        add dword ptr [esi], 3e8h
        mov ecx, dword ptr [esp + 28h]
        add ebx, 4
        add esi, 8
        dec ebp
        ; Exact mapped bytes 0F 85 79 FF FF FF: jne 0x1002fed8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x79
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, dword ptr [esp + 1ch]
        mov ebp, dword ptr [esp + 20h]
        mov ebx, dword ptr [esp + 10h]
        mov eax, ebp
        mov ebp, dword ptr [esp + 2ch]
        lea edx, [esi*4]
        add ebp, edx
        lea edx, [esi*8]
        add ebx, edx
        mov edx, dword ptr [esp + 18h]
        add ecx, 7d0h
        dec edx
        mov dword ptr [esp + 28h], ecx
        mov dword ptr [esp + 2ch], ebp
        mov dword ptr [esp + 10h], ebx
        mov dword ptr [esp + 18h], edx
        ; Exact mapped bytes 0F 85 11 FF FF FF: jne 0x1002feb5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x11
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 14h
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
