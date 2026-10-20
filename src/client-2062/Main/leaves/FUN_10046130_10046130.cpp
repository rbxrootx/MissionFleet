// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10046130 .. +0x326 bytes.
extern "C" __declspec(naked) void FUN_10046130_10046130() {
    __asm {
        sub esp, 1c8h
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        xor eax, eax
        xor ebx, ebx
        mov dword ptr [esp + 34h], edi
        ; Exact mapped bytes 66 8B 87 18 02 00 00: mov ax, word ptr [edi + 0x218]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x87
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esp + 1ch], ebx
        mov ecx, eax
        mov esi, eax
        shr ecx, 0bh
        and esi, 0fh
        and ecx, 3
        mov eax, esi
        mov dword ptr [esp + 20h], esi
        cdq
        lea ebp, [ecx + 1]
        xor ecx, ecx
        idiv ebp
        mov dword ptr [esp + 28h], ebp
        mov dword ptr [esp + 18h], ebx
        mov dword ptr [esp + 10h], eax
        mov eax, esi
        cdq
        idiv ebp
        cmp ebp, ebx
        mov dword ptr [esp + 2ch], edx
        ; Exact mapped bytes 0F 8E B5 00 00 00: jle 0x1004623c
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xb5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor esi, esi
        ; Exact mapped bytes 66 8B B7 1A 02 00 00: mov si, word ptr [edi + 0x21a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xb7
        __asm _emit 0x1a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, esi
        mov dword ptr [esp + 24h], esi
        shr edx, 5
        and edx, 1fh
        mov dword ptr [esp + 14h], edx
        ; Exact mapped bytes EB 04: jmp 0x100461a6
        __asm _emit 0xeb
        __asm _emit 0x04
        mov edx, dword ptr [esp + 14h]
        mov eax, dword ptr [esp + 10h]
        test ebx, ebx
        ; Exact mapped bytes 75 0C: jne 0x100461ba
        __asm _emit 0x75
        __asm _emit 0x0c
        mov edi, dword ptr [esp + 2ch]
        add edi, eax
        mov dword ptr [esp + 38h], edi
        ; Exact mapped bytes EB 04: jmp 0x100461be
        __asm _emit 0xeb
        __asm _emit 0x04
        mov dword ptr [esp + ebx*4 + 38h], eax
        mov edi, dword ptr [esp + ebx*4 + 38h]
        mov eax, edi
        imul eax, edx
        cdq
        sub eax, edx
        sar eax, 1
        neg eax
        test edi, edi
        ; Exact mapped bytes 7E 43: jle 0x10046215
        __asm _emit 0x7e
        __asm _emit 0x43
        and esi, 1fh
        lea edx, [ecx + ecx*2]
        add ecx, edi
        lea ebx, [esi + 21h]
        lea ebp, [esi + 54h]
        lea edx, [esp + edx*8 + 5ch]
        mov dword ptr [esp + 30h], ecx
        mov ecx, dword ptr [esp + 14h]
        mov dword ptr [edx - 4], eax
        mov dword ptr [edx], esi
        mov dword ptr [edx + 4], eax
        mov dword ptr [edx + 8], ebx
        mov dword ptr [edx + 0ch], eax
        mov dword ptr [edx + 10h], ebp
        add eax, ecx
        add edx, 18h
        dec edi
        ; Exact mapped bytes 75 E3: jne 0x100461e8
        __asm _emit 0x75
        __asm _emit 0xe3
        mov esi, dword ptr [esp + 24h]
        mov ebp, dword ptr [esp + 28h]
        mov ebx, dword ptr [esp + 18h]
        mov ecx, dword ptr [esp + 30h]
        mov edi, dword ptr [esp + 1ch]
        mov eax, esi
        shr eax, 0ah
        and eax, 0fh
        add edi, eax
        inc ebx
        cmp ebx, ebp
        mov dword ptr [esp + 1ch], edi
        mov dword ptr [esp + 18h], ebx
        ; Exact mapped bytes 0F 8C 6E FF FF FF: jl 0x100461a2
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x6e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, dword ptr [esp + 20h]
        mov edi, dword ptr [esp + 34h]
        test esi, esi
        mov dword ptr [esp + 18h], 0
        ; Exact mapped bytes 0F 8E FF 01 00 00: jle 0x1004644b
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xff
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [esp + 5ch]
        lea esi, [edi + 2f0h]
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes EB 04: jmp 0x10046260
        __asm _emit 0xeb
        __asm _emit 0x04
        mov eax, dword ptr [esp + 10h]
        mov edx, dword ptr [eax - 4]
        xor ecx, ecx
        mov dword ptr [esp + 1ch], edx
        mov edx, dword ptr [eax]
        mov dword ptr [esp + 14h], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [esp + 30h], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [esp + 20h], edx
        mov edx, dword ptr [eax + 0ch]
        mov eax, dword ptr [eax + 10h]
        mov dword ptr [esp + 24h], edx
        mov dword ptr [esp + 28h], eax
        mov dword ptr [esp + 2ch], 24h
        mov edi, dword ptr [ecx*4 + 101b09a0h]
        mov edx, dword ptr [esp + 1ch]
        imul edx, edi
        mov eax, 10624dd3h
        mov ebx, dword ptr [ecx*4 + 101ad160h]
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, 10624dd3h
        mov ebp, edx
        mov edx, dword ptr [esp + 14h]
        imul edx, ebx
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, 10624dd3h
        sub ebp, edx
        mov edx, dword ptr [esp + 1ch]
        imul edx, ebx
        imul edx
        mov dword ptr [esi - 4], ebp
        mov ebp, edx
        sar ebp, 6
        mov edx, ebp
        mov eax, 10624dd3h
        shr edx, 1fh
        add ebp, edx
        mov edx, dword ptr [esp + 14h]
        imul edx, edi
        imul edx
        sar edx, 6
        mov eax, edx
        add edx, ebp
        shr eax, 1fh
        add eax, edx
        cdq
        sub eax, edx
        mov edx, dword ptr [esp + 34h]
        sar eax, 1
        mov dl, byte ptr [edx + 21ch]
        and edx, 0fh
        add eax, edx
        mov edx, dword ptr [esp + 20h]
        imul edx, ebx
        mov dword ptr [esi], eax
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, 10624dd3h
        mov ebp, edx
        mov edx, dword ptr [esp + 30h]
        imul edx, edi
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, 10624dd3h
        sub edx, ebp
        mov dword ptr [esi + 4], edx
        mov edx, dword ptr [esp + 20h]
        imul edx, edi
        imul edx
        mov ebp, edx
        mov eax, 10624dd3h
        sar ebp, 6
        mov edx, ebp
        shr edx, 1fh
        add ebp, edx
        mov edx, dword ptr [esp + 30h]
        imul edx, ebx
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add edx, ebp
        add esi, 18h
        add eax, edx
        cdq
        sub eax, edx
        mov edx, dword ptr [esp + 28h]
        imul edx, ebx
        sar eax, 1
        mov dword ptr [esi - 10h], eax
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, 10624dd3h
        mov ebp, edx
        mov edx, dword ptr [esp + 24h]
        imul edx, edi
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, 10624dd3h
        sub edx, ebp
        mov dword ptr [esi - 0ch], edx
        mov edx, dword ptr [esp + 28h]
        imul edx, edi
        imul edx
        mov edi, edx
        mov eax, 10624dd3h
        sar edi, 6
        mov edx, edi
        shr edx, 1fh
        add edi, edx
        mov edx, dword ptr [esp + 24h]
        imul edx, ebx
        imul edx
        sar edx, 6
        mov eax, edx
        add edx, edi
        shr eax, 1fh
        add eax, edx
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [esi - 8], eax
        lea eax, [ecx + 64h]
        cdq
        mov ecx, 0e10h
        idiv ecx
        dec dword ptr [esp + 2ch]
        mov ecx, edx
        ; Exact mapped bytes 0F 85 71 FE FF FF: jne 0x10046293
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x71
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [esp + 34h]
        mov eax, dword ptr [esp + 18h]
        mov ebx, dword ptr [esp + 10h]
        inc eax
        mov cl, byte ptr [edx + 218h]
        add ebx, 18h
        and ecx, 0fh
        mov dword ptr [esp + 18h], eax
        cmp eax, ecx
        mov dword ptr [esp + 10h], ebx
        ; Exact mapped bytes 0F 8C 11 FE FF FF: jl 0x1004625c
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x11
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 1c8h
        ret
    }
}
