// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C7C60 .. +0x3C6 bytes.
extern "C" __declspec(naked) void FUN_587c7c60_587C7C60() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 74h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 28h], ecx
        mov eax, dword ptr [ebp - 28h]
        cmp dword ptr [eax + 114h], 3e8h
        ; Exact mapped bytes 75 05: jne 0x587c7c87
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 8F 03 00 00: jmp 0x587c8016
        __asm _emit 0xe9
        __asm _emit 0x8f
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 D1 6C E2 FF: call 0x585ee960
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x6c
        __asm _emit 0xe2
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 1A: jne 0x587c7cad
        __asm _emit 0x75
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 B9 F2 FF FF: call 0x587c6f60
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 69 03 00 00: jmp 0x587c8016
        __asm _emit 0xe9
        __asm _emit 0x69
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 28h]
        mov ecx, dword ptr [ecx + 110h]
        ; Exact mapped bytes E8 05 CD CB FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xcd
        __asm _emit 0xcb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 EE 43 CC FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x43
        __asm _emit 0xcc
        __asm _emit 0xff
        mov dword ptr [ebp - 5ch], eax
        mov edx, dword ptr [ebp - 28h]
        mov ecx, dword ptr [edx + 110h]
        ; Exact mapped bytes E8 ED CC CB FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xcc
        __asm _emit 0xcb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 06 42 CC FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x42
        __asm _emit 0xcc
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 DB CC CB FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xcc
        __asm _emit 0xcb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 C4 43 CC FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0xcc
        __asm _emit 0xff
        mov dword ptr [ebp - 64h], eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C9 CC CB FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xcc
        __asm _emit 0xcb
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 E2 41 CC FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x41
        __asm _emit 0xcc
        __asm _emit 0xff
        mov dword ptr [ebp - 60h], eax
        xor eax, eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        xor ecx, ecx
        mov dword ptr [ebp - 14h], ecx
        mov dword ptr [ebp - 10h], ecx
        xor edx, edx
        mov dword ptr [ebp - 1ch], edx
        mov dword ptr [ebp - 18h], edx
        xor eax, eax
        mov dword ptr [ebp - 24h], eax
        mov dword ptr [ebp - 20h], eax
        mov ecx, 0f800f800h
        mov dword ptr [ebp - 6ch], 0f800f800h
        mov dword ptr [ebp - 68h], ecx
        mov edx, 7e007e0h
        mov dword ptr [ebp - 50h], 7e007e0h
        mov dword ptr [ebp - 4ch], edx
        mov eax, 1f001fh
        mov dword ptr [ebp - 58h], 1f001fh
        mov dword ptr [ebp - 54h], eax
        mov dword ptr [ebp - 44h], 0
        ; Exact mapped bytes EB 09: jmp 0x587c7d60
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 44h]
        add ecx, 1
        mov dword ptr [ebp - 44h], ecx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 48 DB CC FF: call 0x584958b0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xdb
        __asm _emit 0xcc
        __asm _emit 0xff
        sub eax, 1
        cmp dword ptr [ebp - 44h], eax
        ; Exact mapped bytes 0F 8D A2 02 00 00: jge 0x587c8016
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xa2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes EB 09: jmp 0x587c7d86
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 2ch]
        add edx, 4
        mov dword ptr [ebp - 2ch], edx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 42 DB CC FF: call 0x584958d0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xdb
        __asm _emit 0xcc
        __asm _emit 0xff
        cmp dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes 0F 8D 7A 02 00 00: jge 0x587c8011
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x7a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ebp - 40h]
        imul edx, dword ptr [ecx + eax*4 + 1130h]
        add edx, dword ptr [ebp - 5ch]
        mov dword ptr [ebp - 48h], edx
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ebp - 48h]
        add edx, dword ptr [ecx + eax*4 + 130h]
        mov dword ptr [ebp - 30h], edx
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ebp - 48h]
        add edx, dword ptr [ecx + eax*4 + 134h]
        mov dword ptr [ebp - 34h], edx
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ebp - 48h]
        add edx, dword ptr [ecx + eax*4 + 138h]
        mov dword ptr [ebp - 38h], edx
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ebp - 48h]
        add edx, dword ptr [ecx + eax*4 + 13ch]
        mov dword ptr [ebp - 3ch], edx
        mov eax, 2
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 30h]
        ; Exact mapped bytes 66 8B 02: mov ax, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 66 89 44 0D F4: mov word ptr [ebp + ecx - 0xc], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x0d
        __asm _emit 0xf4
        mov ecx, 2
        shl ecx, 0
        mov edx, dword ptr [ebp - 34h]
        ; Exact mapped bytes 66 8B 02: mov ax, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 66 89 44 0D F4: mov word ptr [ebp + ecx - 0xc], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x0d
        __asm _emit 0xf4
        mov ecx, 2
        shl ecx, 1
        mov edx, dword ptr [ebp - 38h]
        ; Exact mapped bytes 66 8B 02: mov ax, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 66 89 44 0D F4: mov word ptr [ebp + ecx - 0xc], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x0d
        __asm _emit 0xf4
        mov ecx, 2
        imul edx, ecx, 3
        mov eax, dword ptr [ebp - 3ch]
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes 66 89 4C 15 F4: mov word ptr [ebp + edx - 0xc], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x15
        __asm _emit 0xf4
        mov edx, 2
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes 66 8B 51 02: mov dx, word ptr [ecx + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x02
        ; Exact mapped bytes 66 89 54 05 EC: mov word ptr [ebp + eax - 0x14], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x05
        __asm _emit 0xec
        mov eax, 2
        shl eax, 0
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes 66 8B 51 02: mov dx, word ptr [ecx + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x02
        ; Exact mapped bytes 66 89 54 05 EC: mov word ptr [ebp + eax - 0x14], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x05
        __asm _emit 0xec
        mov eax, 2
        shl eax, 1
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes 66 8B 51 02: mov dx, word ptr [ecx + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x02
        ; Exact mapped bytes 66 89 54 05 EC: mov word ptr [ebp + eax - 0x14], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x05
        __asm _emit 0xec
        mov eax, 2
        imul ecx, eax, 3
        mov edx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes 66 8B 42 02: mov ax, word ptr [edx + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x02
        ; Exact mapped bytes 66 89 44 0D EC: mov word ptr [ebp + ecx - 0x14], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x0d
        __asm _emit 0xec
        mov ecx, dword ptr [ebp - 30h]
        add ecx, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 30h], ecx
        mov edx, dword ptr [ebp - 34h]
        add edx, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 34h], edx
        mov eax, dword ptr [ebp - 38h]
        add eax, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp - 3ch]
        add ecx, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 3ch], ecx
        mov edx, 2
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes 66 8B 11: mov dx, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 66 89 54 05 E4: mov word ptr [ebp + eax - 0x1c], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x05
        __asm _emit 0xe4
        mov eax, 2
        shl eax, 0
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes 66 8B 11: mov dx, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 66 89 54 05 E4: mov word ptr [ebp + eax - 0x1c], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x05
        __asm _emit 0xe4
        mov eax, 2
        shl eax, 1
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes 66 8B 11: mov dx, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 66 89 54 05 E4: mov word ptr [ebp + eax - 0x1c], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x05
        __asm _emit 0xe4
        mov eax, 2
        imul ecx, eax, 3
        mov edx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes 66 8B 02: mov ax, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 66 89 44 0D E4: mov word ptr [ebp + ecx - 0x1c], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x0d
        __asm _emit 0xe4
        mov ecx, 2
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 30h]
        ; Exact mapped bytes 66 8B 48 02: mov cx, word ptr [eax + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x02
        ; Exact mapped bytes 66 89 4C 15 DC: mov word ptr [ebp + edx - 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x15
        __asm _emit 0xdc
        mov edx, 2
        shl edx, 0
        mov eax, dword ptr [ebp - 34h]
        ; Exact mapped bytes 66 8B 48 02: mov cx, word ptr [eax + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x02
        ; Exact mapped bytes 66 89 4C 15 DC: mov word ptr [ebp + edx - 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x15
        __asm _emit 0xdc
        mov edx, 2
        shl edx, 1
        mov eax, dword ptr [ebp - 38h]
        ; Exact mapped bytes 66 8B 48 02: mov cx, word ptr [eax + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x02
        ; Exact mapped bytes 66 89 4C 15 DC: mov word ptr [ebp + edx - 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x15
        __asm _emit 0xdc
        mov edx, 2
        imul eax, edx, 3
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes 66 8B 51 02: mov dx, word ptr [ecx + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x02
        ; Exact mapped bytes 66 89 54 05 DC: mov word ptr [ebp + eax - 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x05
        __asm _emit 0xdc
        ; Exact mapped bytes 0F 6F 45 F4: movq mm0, qword ptr [ebp - 0xc]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x45
        __asm _emit 0xf4
        ; Exact mapped bytes 0F 6F 4D EC: movq mm1, qword ptr [ebp - 0x14]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x4d
        __asm _emit 0xec
        ; Exact mapped bytes 0F 6F 55 E4: movq mm2, qword ptr [ebp - 0x1c]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x55
        __asm _emit 0xe4
        ; Exact mapped bytes 0F 6F 5D DC: movq mm3, qword ptr [ebp - 0x24]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x5d
        __asm _emit 0xdc
        ; Exact mapped bytes 0F 6F E0: movq mm4, mm0
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xe0
        ; Exact mapped bytes 0F 6F E9: movq mm5, mm1
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xe9
        ; Exact mapped bytes 0F 6F F2: movq mm6, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xf2
        ; Exact mapped bytes 0F 6F FB: movq mm7, mm3
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xfb
        ; Exact mapped bytes 0F 71 D4 0B: psrlw mm4, 0xb
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd4
        __asm _emit 0x0b
        ; Exact mapped bytes 0F 71 D5 0B: psrlw mm5, 0xb
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd5
        __asm _emit 0x0b
        ; Exact mapped bytes 0F 71 D6 0B: psrlw mm6, 0xb
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd6
        __asm _emit 0x0b
        ; Exact mapped bytes 0F 71 D7 0B: psrlw mm7, 0xb
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd7
        __asm _emit 0x0b
        ; Exact mapped bytes 0F FD E5: paddw mm4, mm5
        __asm _emit 0x0f
        __asm _emit 0xfd
        __asm _emit 0xe5
        ; Exact mapped bytes 0F FD E6: paddw mm4, mm6
        __asm _emit 0x0f
        __asm _emit 0xfd
        __asm _emit 0xe6
        ; Exact mapped bytes 0F FD E7: paddw mm4, mm7
        __asm _emit 0x0f
        __asm _emit 0xfd
        __asm _emit 0xe7
        ; Exact mapped bytes 0F 71 F4 09: psllw mm4, 9
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xf4
        __asm _emit 0x09
        ; Exact mapped bytes 0F DB 65 94: pand mm4, qword ptr [ebp - 0x6c]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x65
        __asm _emit 0x94
        ; Exact mapped bytes 0F 7F 65 8C: movq qword ptr [ebp - 0x74], mm4
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x65
        __asm _emit 0x8c
        ; Exact mapped bytes 0F 6F E0: movq mm4, mm0
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xe0
        ; Exact mapped bytes 0F 6F E9: movq mm5, mm1
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xe9
        ; Exact mapped bytes 0F 6F F2: movq mm6, mm2
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xf2
        ; Exact mapped bytes 0F 6F FB: movq mm7, mm3
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0xfb
        ; Exact mapped bytes 0F DB 65 B0: pand mm4, qword ptr [ebp - 0x50]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x65
        __asm _emit 0xb0
        ; Exact mapped bytes 0F DB 6D B0: pand mm5, qword ptr [ebp - 0x50]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x6d
        __asm _emit 0xb0
        ; Exact mapped bytes 0F DB 75 B0: pand mm6, qword ptr [ebp - 0x50]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x75
        __asm _emit 0xb0
        ; Exact mapped bytes 0F DB 7D B0: pand mm7, qword ptr [ebp - 0x50]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x7d
        __asm _emit 0xb0
        ; Exact mapped bytes 0F 71 D4 05: psrlw mm4, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd4
        __asm _emit 0x05
        ; Exact mapped bytes 0F 71 D5 05: psrlw mm5, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd5
        __asm _emit 0x05
        ; Exact mapped bytes 0F 71 D6 05: psrlw mm6, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd6
        __asm _emit 0x05
        ; Exact mapped bytes 0F 71 D7 05: psrlw mm7, 5
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd7
        __asm _emit 0x05
        ; Exact mapped bytes 0F FD E5: paddw mm4, mm5
        __asm _emit 0x0f
        __asm _emit 0xfd
        __asm _emit 0xe5
        ; Exact mapped bytes 0F FD E6: paddw mm4, mm6
        __asm _emit 0x0f
        __asm _emit 0xfd
        __asm _emit 0xe6
        ; Exact mapped bytes 0F FD E7: paddw mm4, mm7
        __asm _emit 0x0f
        __asm _emit 0xfd
        __asm _emit 0xe7
        ; Exact mapped bytes 0F 71 F4 03: psllw mm4, 3
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xf4
        __asm _emit 0x03
        ; Exact mapped bytes 0F DB 65 B0: pand mm4, qword ptr [ebp - 0x50]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x65
        __asm _emit 0xb0
        ; Exact mapped bytes 0F DB 45 A8: pand mm0, qword ptr [ebp - 0x58]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x45
        __asm _emit 0xa8
        ; Exact mapped bytes 0F DB 4D A8: pand mm1, qword ptr [ebp - 0x58]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x4d
        __asm _emit 0xa8
        ; Exact mapped bytes 0F DB 55 A8: pand mm2, qword ptr [ebp - 0x58]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x55
        __asm _emit 0xa8
        ; Exact mapped bytes 0F DB 5D A8: pand mm3, qword ptr [ebp - 0x58]
        __asm _emit 0x0f
        __asm _emit 0xdb
        __asm _emit 0x5d
        __asm _emit 0xa8
        ; Exact mapped bytes 0F FD C1: paddw mm0, mm1
        __asm _emit 0x0f
        __asm _emit 0xfd
        __asm _emit 0xc1
        ; Exact mapped bytes 0F FD C2: paddw mm0, mm2
        __asm _emit 0x0f
        __asm _emit 0xfd
        __asm _emit 0xc2
        ; Exact mapped bytes 0F FD C3: paddw mm0, mm3
        __asm _emit 0x0f
        __asm _emit 0xfd
        __asm _emit 0xc3
        ; Exact mapped bytes 0F 71 D0 02: psrlw mm0, 2
        __asm _emit 0x0f
        __asm _emit 0x71
        __asm _emit 0xd0
        __asm _emit 0x02
        ; Exact mapped bytes 0F EB C4: por mm0, mm4
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc4
        ; Exact mapped bytes 0F 6F 65 8C: movq mm4, qword ptr [ebp - 0x74]
        __asm _emit 0x0f
        __asm _emit 0x6f
        __asm _emit 0x65
        __asm _emit 0x8c
        ; Exact mapped bytes 0F EB C4: por mm0, mm4
        __asm _emit 0x0f
        __asm _emit 0xeb
        __asm _emit 0xc4
        mov ecx, dword ptr [ebp - 60h]
        imul ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ebp - 64h]
        add edx, ecx
        mov eax, dword ptr [ebp - 2ch]
        ; Exact mapped bytes 0F 7F 04 42: movq qword ptr [edx + eax*2], mm0
        __asm _emit 0x0f
        __asm _emit 0x7f
        __asm _emit 0x04
        __asm _emit 0x42
        ; Exact mapped bytes 0F 77: emms
        __asm _emit 0x0f
        __asm _emit 0x77
        ; Exact mapped bytes E9 6C FD FF FF: jmp 0x587c7d7d
        __asm _emit 0xe9
        __asm _emit 0x6c
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 41 FD FF FF: jmp 0x587c7d57
        __asm _emit 0xe9
        __asm _emit 0x41
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 30 90 06 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x90
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
