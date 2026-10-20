// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10044790 .. +0x2A2 bytes.
extern "C" __declspec(naked) void FUN_10044790_10044790() {
    __asm {
        mov eax, 1044h
        ; Exact mapped bytes E8 26 80 12 00: call 0x1016c7c0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x80
        __asm _emit 0x12
        __asm _emit 0x00
        push ebx
        push ebp
        push esi
        xor esi, esi
        ; Exact mapped bytes 66 8B B1 14 02 00 00: mov si, word ptr [ecx + 0x214]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xb1
        __asm _emit 0x14
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        mov eax, esi
        mov ebx, esi
        shr eax, 3
        and eax, 3fh
        mov dword ptr [esp + 28h], ecx
        shr ebx, 1
        lea eax, [eax + eax*4]
        and ebx, 3
        lea ebp, [eax + eax*4]
        mov eax, esi
        shr eax, 9
        and eax, 1fh
        and esi, 7
        mov edx, esi
        lea eax, [eax + eax*4]
        shl ebp, 2
        lea eax, [eax + eax*4]
        shl eax, 2
        imul ebx, eax
        neg ebx
        and edx, 80000001h
        mov dword ptr [esp + 24h], eax
        ; Exact mapped bytes 79 05: jns 0x100447ef
        __asm _emit 0x79
        __asm _emit 0x05
        dec edx
        or edx, 0fffffffeh
        inc edx
        ; Exact mapped bytes 75 07: jne 0x100447f8
        __asm _emit 0x75
        __asm _emit 0x07
        cdq
        sub eax, edx
        sar eax, 1
        add ebx, eax
        mov eax, dword ptr [ecx + 0b8h]
        mov ecx, 80h
        cdq
        and edx, 7
        lea edi, [esp + 54h]
        add eax, edx
        mov dword ptr [esp + 18h], 0
        sar eax, 3
        mov dword ptr [esp + 20h], eax
        xor eax, eax
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        lea eax, [esp + 58h]
        lea ecx, [esp + 34h]
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 10h], ecx
        mov dword ptr [esp + 1ch], 8
        mov edi, dword ptr [esp + 18h]
        mov eax, 10624dd3h
        mov ecx, dword ptr [edi*4 + 101ad160h]
        imul ecx, ebp
        imul ecx
        mov ecx, dword ptr [esp + 10h]
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, dword ptr [edi*4 + 101b09a0h]
        mov dword ptr [ecx], edx
        mov ecx, ebx
        test esi, esi
        ; Exact mapped bytes 76 2D: jbe 0x10044897
        __asm _emit 0x76
        __asm _emit 0x2d
        imul eax, ebp
        mov edx, eax
        mov eax, 10624dd3h
        imul edx
        sar edx, 6
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, dword ptr [esp + 14h]
        mov edi, edx
        mov edx, esi
        mov dword ptr [eax - 4], ecx
        add ecx, dword ptr [esp + 24h]
        mov dword ptr [eax], edi
        add eax, 40h
        dec edx
        ; Exact mapped bytes 75 F1: jne 0x10044888
        __asm _emit 0x75
        __asm _emit 0xf1
        mov eax, dword ptr [esp + 20h]
        mov edi, dword ptr [esp + 18h]
        add edi, eax
        mov ecx, 0e10h
        cdq
        idiv ecx
        mov ecx, dword ptr [esp + 14h]
        mov eax, dword ptr [esp + 1ch]
        add ecx, 8
        mov dword ptr [esp + 18h], edi
        mov dword ptr [esp + 14h], ecx
        mov dword ptr [esp + 20h], edx
        mov edx, dword ptr [esp + 10h]
        add edx, 4
        dec eax
        mov dword ptr [esp + 10h], edx
        mov dword ptr [esp + 1ch], eax
        ; Exact mapped bytes 0F 85 62 FF FF FF: jne 0x10044838
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x62
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [esp + 28h]
        xor eax, eax
        mov dword ptr [esp + 10h], eax
        mov dword ptr [esp + 24h], 24h
        lea edi, [edx + 3d4h]
        mov dword ptr [esp + 2ch], edi
        ; Exact mapped bytes EB 04: jmp 0x100448f8
        __asm _emit 0xeb
        __asm _emit 0x04
        mov eax, dword ptr [esp + 10h]
        mov ecx, dword ptr [eax*4 + 101b09a0h]
        mov ebp, dword ptr [eax*4 + 101ad160h]
        test esi, esi
        mov dword ptr [esp + 20h], ecx
        mov dword ptr [esp + 1ch], ebp
        mov dword ptr [esp + 30h], 0
        ; Exact mapped bytes 0F 86 E0 00 00 00: jbe 0x100449fe
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0xe0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ebx, [esp + 58h]
        ; Exact mapped bytes EB 04: jmp 0x10044928
        __asm _emit 0xeb
        __asm _emit 0x04
        mov ebp, dword ptr [esp + 1ch]
        lea edx, [esp + 34h]
        mov dword ptr [esp + 18h], 8
        mov dword ptr [esp + 14h], edx
        ; Exact mapped bytes EB 04: jmp 0x1004493e
        __asm _emit 0xeb
        __asm _emit 0x04
        mov ebp, dword ptr [esp + 1ch]
        mov esi, dword ptr [ebx]
        mov ecx, dword ptr [ebx - 4]
        mov edx, ecx
        mov eax, esi
        imul edx, dword ptr [esp + 20h]
        imul eax, ebp
        sub edx, eax
        mov eax, 14f8b589h
        imul esi, dword ptr [esp + 20h]
        imul edx
        imul ecx, ebp
        sar edx, 0dh
        mov eax, edx
        add ecx, esi
        shr eax, 1fh
        add edx, eax
        mov eax, 14f8b589h
        mov dword ptr [edi - 4], edx
        imul ecx
        sar edx, 0eh
        mov ecx, edx
        mov eax, 51eb851fh
        shr ecx, 1fh
        add edx, ecx
        add ebx, 8
        mov esi, edx
        mov edx, dword ptr [esp + 28h]
        mov dword ptr [edi], esi
        add edi, 120h
        mov cl, byte ptr [edx + 216h]
        mov edx, dword ptr [esp + 14h]
        shr ecx, 1
        mov ebp, dword ptr [edx]
        and ecx, 7
        add ebp, 32h
        add esi, ecx
        imul ebp
        sar edx, 6
        mov ecx, dword ptr [esp + 14h]
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        mov eax, dword ptr [esp + 18h]
        add edx, esi
        add ecx, 4
        mov dword ptr [edi - 120h], edx
        dec eax
        mov dword ptr [esp + 14h], ecx
        mov dword ptr [esp + 18h], eax
        ; Exact mapped bytes 0F 85 60 FF FF FF: jne 0x1004493a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x60
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 28h]
        mov eax, dword ptr [esp + 30h]
        inc eax
        mov dl, byte ptr [ecx + 214h]
        mov dword ptr [esp + 30h], eax
        mov esi, edx
        and esi, 7
        cmp eax, esi
        ; Exact mapped bytes 0F 82 2A FF FF FF: jb 0x10044924
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x2a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esp + 10h]
        add eax, 64h
        mov ecx, 0e10h
        cdq
        idiv ecx
        mov edi, dword ptr [esp + 2ch]
        mov eax, dword ptr [esp + 24h]
        add edi, 8
        dec eax
        mov dword ptr [esp + 2ch], edi
        mov dword ptr [esp + 24h], eax
        mov dword ptr [esp + 10h], edx
        ; Exact mapped bytes 0F 85 CD FE FF FF: jne 0x100448f4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xcd
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 1044h
        ret
    }
}
