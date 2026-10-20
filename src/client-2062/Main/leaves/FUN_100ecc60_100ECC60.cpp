// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100ECC60 .. +0x499 bytes.
extern "C" __declspec(naked) void FUN_100ecc60_100ECC60() {
    __asm {
        sub esp, 20h
        push ebx
        push ebp
        push esi
        push edi
        mov dword ptr [esp + 20h], ecx
        mov ebx, 0a8ch
        lea ebp, [ecx + 14c4h]
        mov dword ptr [esp + 18h], 78h
        mov edi, dword ptr [ebx*4 + 101b09a0h]
        mov edx, dword ptr [ecx + 1278h]
        imul edx, edi
        mov eax, 10624dd3h
        mov esi, dword ptr [ebx*4 + 101ad160h]
        imul edx
        sar edx, 6
        mov eax, edx
        mov dword ptr [esp + 28h], esi
        shr eax, 1fh
        add edx, eax
        add ebp, 8
        mov eax, edx
        mov edx, esi
        imul edx, dword ptr [ecx + 127ch]
        mov dword ptr [esp + 2ch], eax
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, dword ptr [esp + 2ch]
        sub eax, edx
        mov dword ptr [ebp - 0ch], eax
        mov edx, dword ptr [ecx + 1278h]
        imul edx, esi
        imul edi, dword ptr [ecx + 127ch]
        mov eax, 10624dd3h
        imul edx
        mov esi, edx
        mov eax, 10624dd3h
        sar esi, 6
        mov edx, esi
        shr edx, 1fh
        add esi, edx
        imul edi
        sar edx, 6
        mov eax, edx
        add edx, esi
        shr eax, 1fh
        add eax, edx
        mov esi, 0e10h
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [ebp - 8], eax
        lea eax, [ebx + 1eh]
        cdq
        idiv esi
        dec dword ptr [esp + 18h]
        mov ebx, edx
        ; Exact mapped bytes 0F 85 53 FF FF FF: jne 0x100ecc7e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x53
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        lea ebx, [ecx + 4588h]
        mov dword ptr [esp + 10h], eax
        mov dword ptr [esp + 1ch], 78h
        ; Exact mapped bytes EB 04: jmp 0x100ecd45
        __asm _emit 0xeb
        __asm _emit 0x04
        mov eax, dword ptr [esp + 10h]
        mov ebp, dword ptr [eax*4 + 101b09a0h]
        mov eax, dword ptr [eax*4 + 101ad160h]
        mov dword ptr [esp + 18h], eax
        lea edi, [ecx + 3e94h]
        mov dword ptr [esp + 14h], 6
        mov edx, dword ptr [edi + 4]
        mov eax, 10624dd3h
        imul edx, dword ptr [esp + 18h]
        imul edx
        sar edx, 6
        mov eax, edx
        add edi, 8
        shr eax, 1fh
        add edx, eax
        mov eax, 10624dd3h
        mov esi, edx
        mov edx, ebp
        imul edx, dword ptr [edi - 8]
        imul edx
        sar edx, 6
        mov eax, edx
        add ebx, 8
        shr eax, 1fh
        add edx, eax
        mov eax, 10624dd3h
        sub edx, esi
        mov dword ptr [ebx - 0ch], edx
        mov edx, dword ptr [edi - 4]
        imul edx, ebp
        imul edx
        mov esi, edx
        mov eax, 10624dd3h
        sar esi, 6
        mov edx, esi
        shr edx, 1fh
        add esi, edx
        mov edx, dword ptr [esp + 18h]
        imul edx, dword ptr [edi - 8]
        imul edx
        sar edx, 6
        mov eax, edx
        add edx, esi
        shr eax, 1fh
        add eax, edx
        cdq
        sub eax, edx
        sar eax, 1
        mov dword ptr [ebx - 8], eax
        mov eax, dword ptr [esp + 14h]
        dec eax
        mov dword ptr [esp + 14h], eax
        ; Exact mapped bytes 0F 85 78 FF FF FF: jne 0x100ecd65
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x78
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esp + 10h]
        mov esi, 0e10h
        add eax, 1eh
        cdq
        idiv esi
        dec dword ptr [esp + 1ch]
        mov dword ptr [esp + 10h], edx
        ; Exact mapped bytes 0F 85 37 FF FF FF: jne 0x100ecd41
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x37
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, dword ptr [esp + 34h]
        xor esi, esi
        test edi, edi
        mov dword ptr [esp + 10h], esi
        ; Exact mapped bytes 74 0E: je 0x100ece26
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, 0e10h
        cdq
        idiv edi
        mov dword ptr [esp + 28h], eax
        ; Exact mapped bytes EB 08: jmp 0x100ece2e
        __asm _emit 0xeb
        __asm _emit 0x08
        mov dword ptr [esp + 28h], 1eh
        test edi, edi
        ; Exact mapped bytes 0F 8E B9 02 00 00: jle 0x100ed0ef
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xb9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ecx + 1904h]
        lea eax, [ecx + 3ec8h]
        mov dword ptr [esp + 14h], edx
        mov dword ptr [esp + 24h], eax
        mov dword ptr [esp + 2ch], edi
        ; Exact mapped bytes EB 04: jmp 0x100ece54
        __asm _emit 0xeb
        __asm _emit 0x04
        mov ecx, dword ptr [esp + 20h]
        mov edx, dword ptr [esp + 14h]
        mov edi, dword ptr [esi*4 + 101b09a0h]
        mov ebx, dword ptr [esi*4 + 101ad160h]
        add edx, 0fffff980h
        lea ebp, [ecx + 1274h]
        mov dword ptr [esp + 34h], edx
        mov dword ptr [esp + 1ch], 2
        mov edx, dword ptr [ebp - 4]
        mov eax, 10624dd3h
        imul edx, edi
        imul edx
        sar edx, 6
        mov eax, edx
        add ebp, 8
        shr eax, 1fh
        add edx, eax
        mov eax, 10624dd3h
        mov esi, edx
        mov edx, dword ptr [ebp - 8]
        imul edx, ebx
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, 10624dd3h
        sub esi, edx
        mov edx, dword ptr [esp + 34h]
        mov dword ptr [edx - 4], esi
        mov edx, dword ptr [ebp - 0ch]
        imul edx, ebx
        imul edx
        mov esi, edx
        mov edx, dword ptr [ebp - 8]
        imul edx, edi
        sar esi, 6
        mov eax, esi
        shr eax, 1fh
        add esi, eax
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov eax, edx
        add edx, esi
        shr eax, 1fh
        add eax, edx
        cdq
        sub eax, edx
        mov edx, eax
        mov eax, dword ptr [esp + 34h]
        sar edx, 1
        mov dword ptr [eax], edx
        add eax, 120h
        mov dword ptr [esp + 34h], eax
        mov eax, dword ptr [esp + 1ch]
        dec eax
        mov dword ptr [esp + 1ch], eax
        ; Exact mapped bytes 0F 85 6D FF FF FF: jne 0x100ece7e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esp + 24h]
        lea ebp, [ecx + 3e94h]
        mov dword ptr [esp + 34h], eax
        mov dword ptr [esp + 1ch], 6
        mov edx, dword ptr [ebp + 4]
        mov eax, 10624dd3h
        imul edx, ebx
        imul edx
        sar edx, 6
        mov eax, edx
        add ebp, 8
        shr eax, 1fh
        add edx, eax
        mov eax, 10624dd3h
        mov esi, edx
        mov edx, edi
        imul edx, dword ptr [ebp - 8]
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, dword ptr [esp + 34h]
        sub edx, esi
        mov dword ptr [eax - 4], edx
        mov edx, dword ptr [ebp - 4]
        imul edx, edi
        mov eax, 10624dd3h
        imul edx
        mov esi, edx
        mov eax, 10624dd3h
        sar esi, 6
        mov edx, esi
        shr edx, 1fh
        add esi, edx
        mov edx, ebx
        imul edx, dword ptr [ebp - 8]
        imul edx
        sar edx, 6
        mov eax, edx
        add edx, esi
        shr eax, 1fh
        add eax, edx
        cdq
        sub eax, edx
        mov edx, eax
        mov eax, dword ptr [esp + 34h]
        sar edx, 1
        mov dword ptr [eax], edx
        add eax, 8
        mov dword ptr [esp + 34h], eax
        mov eax, dword ptr [esp + 1ch]
        dec eax
        mov dword ptr [esp + 1ch], eax
        ; Exact mapped bytes 0F 85 6F FF FF FF: jne 0x100ecf27
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, dword ptr [esp + 38h]
        mov ebp, dword ptr [esp + 14h]
        lea eax, [ecx + 1880h]
        mov dword ptr [esp + 24h], 20h
        lea edx, [esi + 100h]
        mov dword ptr [esp + 1ch], eax
        mov dword ptr [esp + 18h], edx
        ; Exact mapped bytes EB 04: jmp 0x100ecfe2
        __asm _emit 0xeb
        __asm _emit 0x04
        mov ecx, dword ptr [esp + 20h]
        mov eax, dword ptr [esi + 4]
        mov edx, dword ptr [esi]
        imul eax, ebx
        imul edx, edi
        sub edx, eax
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov eax, edx
        add esi, 8
        shr eax, 1fh
        add edx, eax
        mov eax, 51eb851fh
        imul edx
        sar edx, 5
        mov eax, edx
        add ebp, 120h
        shr eax, 1fh
        add edx, eax
        mov dword ptr [ebp - 124h], edx
        mov edx, dword ptr [esi - 8]
        mov eax, dword ptr [esi - 4]
        imul edx, ebx
        imul eax, edi
        add edx, eax
        mov eax, 10624dd3h
        imul edx
        sar edx, 7
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, 51eb851fh
        imul edx
        sar edx, 5
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov dword ptr [ebp - 120h], edx
        mov edx, dword ptr [esp + 18h]
        mov ecx, dword ptr [ecx + 0e74h]
        mov eax, dword ptr [edx]
        xor edx, edx
        mov dl, byte ptr [eax + ecx + 268h]
        lea eax, [edx*8]
        sub eax, edx
        lea eax, [eax + eax*2]
        lea edx, [edx + eax*2]
        mov eax, 51eb851fh
        shl edx, 1
        imul edx
        mov eax, dword ptr [esp + 1ch]
        sar edx, 5
        mov ecx, edx
        add eax, 4
        shr ecx, 1fh
        add edx, ecx
        mov dword ptr [esp + 1ch], eax
        mov dword ptr [eax - 4], edx
        mov edx, dword ptr [esp + 18h]
        mov eax, dword ptr [esp + 24h]
        add edx, 4
        dec eax
        mov dword ptr [esp + 18h], edx
        mov dword ptr [esp + 24h], eax
        ; Exact mapped bytes 0F 85 29 FF FF FF: jne 0x100ecfde
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x29
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [esp + 28h]
        mov eax, dword ptr [esp + 10h]
        add eax, edx
        mov ecx, 0e10h
        cdq
        idiv ecx
        mov ecx, dword ptr [esp + 14h]
        mov eax, dword ptr [esp + 2ch]
        add ecx, 8
        dec eax
        mov dword ptr [esp + 14h], ecx
        mov dword ptr [esp + 2ch], eax
        mov esi, edx
        mov edx, dword ptr [esp + 34h]
        mov dword ptr [esp + 10h], esi
        mov dword ptr [esp + 24h], edx
        ; Exact mapped bytes 0F 85 61 FD FF FF: jne 0x100ece50
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x61
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 20h
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
