// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00472ED0 .. +0x5DC bytes.
extern "C" __declspec(naked) void FUN_00472ed0_00472ED0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 3ch
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 10h]
        mov dword ptr [ebp - 3ch], ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp + 0ch]
        sub eax, dword ptr [edx + 0ch]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        shr ecx, 0fh
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 4]
        imul edx, edx, 204h
        mov eax, dword ptr [ebp - 3ch]
        lea ecx, [eax + edx + 144h]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp + 0ch]
        sub edx, 4
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax]
        sub ecx, 1
        mov dword ptr [ebp - 30h], ecx
        mov edx, dword ptr [ebp - 30h]
        and edx, 1
        test edx, edx
        ; Exact mapped bytes 74 05: je 0x472f2d
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 7B 05 00 00: jmp 0x4734a8
        __asm _emit 0xe9
        __asm _emit 0x7b
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        add eax, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax - 4]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 14h]
        and edx, 1
        test edx, edx
        ; Exact mapped bytes 0F 85 22 01 00 00: jne 0x473077
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x22
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        sar eax, 4
        sub eax, 1
        mov dword ptr [ebp - 24h], eax
        cmp dword ptr [ebp - 24h], 3fh
        ; Exact mapped bytes 76 07: jbe 0x472f6e
        __asm _emit 0x76
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 3fh
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [ecx + 4]
        cmp eax, dword ptr [edx + 8]
        ; Exact mapped bytes 0F 85 D0 00 00 00: jne 0x473050
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 24h], 20h
        ; Exact mapped bytes 73 5F: jae 0x472fe5
        __asm _emit 0x73
        __asm _emit 0x5f
        mov edx, 80000000h
        mov ecx, dword ptr [ebp - 24h]
        shr edx, cl
        not edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 3ch]
        mov eax, dword ptr [ecx + eax*4 + 44h]
        and eax, edx
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 3ch]
        mov dword ptr [edx + ecx*4 + 44h], eax
        mov eax, dword ptr [ebp - 3ch]
        add eax, dword ptr [ebp - 24h]
        mov cl, byte ptr [eax + 4]
        sub cl, 1
        mov edx, dword ptr [ebp - 3ch]
        add edx, dword ptr [ebp - 24h]
        mov byte ptr [edx + 4], cl
        mov eax, dword ptr [ebp - 3ch]
        add eax, dword ptr [ebp - 24h]
        ; Exact mapped bytes 0F BE 48 04: movsx ecx, byte ptr [eax + 4]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x48
        __asm _emit 0x04
        test ecx, ecx
        ; Exact mapped bytes 75 18: jne 0x472fe3
        __asm _emit 0x75
        __asm _emit 0x18
        mov edx, 80000000h
        mov ecx, dword ptr [ebp - 24h]
        shr edx, cl
        not edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        and ecx, edx
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx], ecx
        ; Exact mapped bytes EB 6B: jmp 0x473050
        __asm _emit 0xeb
        __asm _emit 0x6b
        mov ecx, dword ptr [ebp - 24h]
        sub ecx, 20h
        mov eax, 80000000h
        shr eax, cl
        not eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 3ch]
        mov ecx, dword ptr [edx + ecx*4 + 0c4h]
        and ecx, eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 3ch]
        mov dword ptr [eax + edx*4 + 0c4h], ecx
        mov ecx, dword ptr [ebp - 3ch]
        add ecx, dword ptr [ebp - 24h]
        mov dl, byte ptr [ecx + 4]
        sub dl, 1
        mov eax, dword ptr [ebp - 3ch]
        add eax, dword ptr [ebp - 24h]
        mov byte ptr [eax + 4], dl
        mov ecx, dword ptr [ebp - 3ch]
        add ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes 0F BE 51 04: movsx edx, byte ptr [ecx + 4]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x51
        __asm _emit 0x04
        test edx, edx
        ; Exact mapped bytes 75 1D: jne 0x473050
        __asm _emit 0x75
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 24h]
        sub ecx, 20h
        mov eax, 80000000h
        shr eax, cl
        not eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 4]
        and edx, eax
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx + 8]
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [edx + 4], ecx
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [eax + 8], edx
        mov eax, dword ptr [ebp - 30h]
        add eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 30h], eax
        mov ecx, dword ptr [ebp - 30h]
        sar ecx, 4
        sub ecx, 1
        mov dword ptr [ebp - 28h], ecx
        cmp dword ptr [ebp - 28h], 3fh
        ; Exact mapped bytes 76 07: jbe 0x473090
        __asm _emit 0x76
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 3fh
        mov edx, dword ptr [ebp - 0ch]
        and edx, 1
        test edx, edx
        ; Exact mapped bytes 0F 85 56 01 00 00: jne 0x4731f4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x56
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        sub eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 0ch]
        sar ecx, 4
        sub ecx, 1
        mov dword ptr [ebp - 2ch], ecx
        cmp dword ptr [ebp - 2ch], 3fh
        ; Exact mapped bytes 76 07: jbe 0x4730c0
        __asm _emit 0x76
        __asm _emit 0x07
        mov dword ptr [ebp - 2ch], 3fh
        mov edx, dword ptr [ebp - 30h]
        add edx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 30h], edx
        mov eax, dword ptr [ebp - 30h]
        sar eax, 4
        sub eax, 1
        mov dword ptr [ebp - 28h], eax
        cmp dword ptr [ebp - 28h], 3fh
        ; Exact mapped bytes 76 07: jbe 0x4730e2
        __asm _emit 0x76
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 3fh
        mov ecx, dword ptr [ebp - 2ch]
        cmp ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes 0F 84 00 01 00 00: je 0x4731ee
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 34h]
        mov eax, dword ptr [ebp - 34h]
        mov ecx, dword ptr [edx + 4]
        cmp ecx, dword ptr [eax + 8]
        ; Exact mapped bytes 0F 85 D0 00 00 00: jne 0x4731d0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 2ch], 20h
        ; Exact mapped bytes 73 5F: jae 0x473165
        __asm _emit 0x73
        __asm _emit 0x5f
        mov edx, 80000000h
        mov ecx, dword ptr [ebp - 2ch]
        shr edx, cl
        not edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 3ch]
        mov eax, dword ptr [ecx + eax*4 + 44h]
        and eax, edx
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 3ch]
        mov dword ptr [edx + ecx*4 + 44h], eax
        mov eax, dword ptr [ebp - 3ch]
        add eax, dword ptr [ebp - 2ch]
        mov cl, byte ptr [eax + 4]
        sub cl, 1
        mov edx, dword ptr [ebp - 3ch]
        add edx, dword ptr [ebp - 2ch]
        mov byte ptr [edx + 4], cl
        mov eax, dword ptr [ebp - 3ch]
        add eax, dword ptr [ebp - 2ch]
        ; Exact mapped bytes 0F BE 48 04: movsx ecx, byte ptr [eax + 4]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x48
        __asm _emit 0x04
        test ecx, ecx
        ; Exact mapped bytes 75 18: jne 0x473163
        __asm _emit 0x75
        __asm _emit 0x18
        mov edx, 80000000h
        mov ecx, dword ptr [ebp - 2ch]
        shr edx, cl
        not edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        and ecx, edx
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx], ecx
        ; Exact mapped bytes EB 6B: jmp 0x4731d0
        __asm _emit 0xeb
        __asm _emit 0x6b
        mov ecx, dword ptr [ebp - 2ch]
        sub ecx, 20h
        mov eax, 80000000h
        shr eax, cl
        not eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 3ch]
        mov ecx, dword ptr [edx + ecx*4 + 0c4h]
        and ecx, eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 3ch]
        mov dword ptr [eax + edx*4 + 0c4h], ecx
        mov ecx, dword ptr [ebp - 3ch]
        add ecx, dword ptr [ebp - 2ch]
        mov dl, byte ptr [ecx + 4]
        sub dl, 1
        mov eax, dword ptr [ebp - 3ch]
        add eax, dword ptr [ebp - 2ch]
        mov byte ptr [eax + 4], dl
        mov ecx, dword ptr [ebp - 3ch]
        add ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes 0F BE 51 04: movsx edx, byte ptr [ecx + 4]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x51
        __asm _emit 0x04
        test edx, edx
        ; Exact mapped bytes 75 1D: jne 0x4731d0
        __asm _emit 0x75
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 2ch]
        sub ecx, 20h
        mov eax, 80000000h
        shr eax, cl
        not eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 4]
        and edx, eax
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [ebp - 34h]
        mov edx, dword ptr [ecx + 8]
        mov eax, dword ptr [ebp - 34h]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [edx + 4], ecx
        mov edx, dword ptr [ebp - 34h]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [ebp - 34h]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [eax + 8], edx
        mov eax, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        and ecx, 1
        test ecx, ecx
        ; Exact mapped bytes 75 0C: jne 0x47320a
        __asm _emit 0x75
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 2ch]
        cmp edx, dword ptr [ebp - 28h]
        ; Exact mapped bytes 0F 84 10 01 00 00: je 0x47331a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + eax*8]
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [eax + 4], edx
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [eax + 8], ecx
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [edx + 4], eax
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [ecx + 4]
        cmp eax, dword ptr [edx + 8]
        ; Exact mapped bytes 0F 85 C8 00 00 00: jne 0x47331a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 28h], 20h
        ; Exact mapped bytes 73 5B: jae 0x4732b3
        __asm _emit 0x73
        __asm _emit 0x5b
        mov ecx, dword ptr [ebp - 3ch]
        add ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes 0F BE 51 04: movsx edx, byte ptr [ecx + 4]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x51
        __asm _emit 0x04
        mov eax, dword ptr [ebp - 3ch]
        add eax, dword ptr [ebp - 28h]
        mov cl, byte ptr [eax + 4]
        add cl, 1
        mov eax, dword ptr [ebp - 3ch]
        add eax, dword ptr [ebp - 28h]
        mov byte ptr [eax + 4], cl
        test edx, edx
        ; Exact mapped bytes 75 16: jne 0x473291
        __asm _emit 0x75
        __asm _emit 0x16
        mov edx, 80000000h
        mov ecx, dword ptr [ebp - 28h]
        shr edx, cl
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        or ecx, edx
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx], ecx
        mov eax, 80000000h
        mov ecx, dword ptr [ebp - 28h]
        shr eax, cl
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 3ch]
        mov ecx, dword ptr [edx + ecx*4 + 44h]
        or ecx, eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 3ch]
        mov dword ptr [eax + edx*4 + 44h], ecx
        ; Exact mapped bytes EB 67: jmp 0x47331a
        __asm _emit 0xeb
        __asm _emit 0x67
        mov ecx, dword ptr [ebp - 3ch]
        add ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes 0F BE 51 04: movsx edx, byte ptr [ecx + 4]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x51
        __asm _emit 0x04
        mov eax, dword ptr [ebp - 3ch]
        add eax, dword ptr [ebp - 28h]
        mov cl, byte ptr [eax + 4]
        add cl, 1
        mov eax, dword ptr [ebp - 3ch]
        add eax, dword ptr [ebp - 28h]
        mov byte ptr [eax + 4], cl
        test edx, edx
        ; Exact mapped bytes 75 1B: jne 0x4732f1
        __asm _emit 0x75
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp - 28h]
        sub ecx, 20h
        mov edx, 80000000h
        shr edx, cl
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 4]
        or ecx, edx
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx + 4], ecx
        mov ecx, dword ptr [ebp - 28h]
        sub ecx, 20h
        mov eax, 80000000h
        shr eax, cl
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 3ch]
        mov ecx, dword ptr [edx + ecx*4 + 0c4h]
        or ecx, eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 3ch]
        mov dword ptr [eax + edx*4 + 0c4h], ecx
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ebp - 30h]
        mov dword ptr [ecx], edx
        mov eax, dword ptr [ebp - 1ch]
        add eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [ebp - 30h]
        mov dword ptr [eax - 4], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        sub eax, 1
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx], eax
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx], 0
        ; Exact mapped bytes 0F 85 61 01 00 00: jne 0x4734a8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x61
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 78 89 68 00 00: cmp dword ptr [0x688978], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x78
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 43 01 00 00: je 0x473497
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x43
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 6C 89 68 00: mov eax, dword ptr [0x68896c]
        __asm _emit 0xa1
        __asm _emit 0x6c
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        shl eax, 0fh
        ; Exact mapped bytes 8B 0D 78 89 68 00: mov ecx, dword ptr [0x688978]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ecx + 0ch]
        add edx, eax
        mov dword ptr [ebp - 18h], edx
        push 4000h
        push 8000h
        mov eax, dword ptr [ebp - 18h]
        push eax
        ; Exact mapped bytes FF 15 64 B8 68 00: call dword ptr [0x68b864]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, 80000000h
        ; Exact mapped bytes 8B 0D 6C 89 68 00: mov ecx, dword ptr [0x68896c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        shr edx, cl
        ; Exact mapped bytes A1 78 89 68 00: mov eax, dword ptr [0x688978]
        __asm _emit 0xa1
        __asm _emit 0x78
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 8]
        or ecx, edx
        ; Exact mapped bytes 8B 15 78 89 68 00: mov edx, dword ptr [0x688978]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [edx + 8], ecx
        ; Exact mapped bytes A1 78 89 68 00: mov eax, dword ptr [0x688978]
        __asm _emit 0xa1
        __asm _emit 0x78
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 10h]
        ; Exact mapped bytes 8B 15 6C 89 68 00: mov edx, dword ptr [0x68896c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x6c
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ecx + edx*4 + 0c4h], 0
        ; Exact mapped bytes A1 78 89 68 00: mov eax, dword ptr [0x688978]
        __asm _emit 0xa1
        __asm _emit 0x78
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 10h]
        mov dl, byte ptr [ecx + 43h]
        sub dl, 1
        ; Exact mapped bytes A1 78 89 68 00: mov eax, dword ptr [0x688978]
        __asm _emit 0xa1
        __asm _emit 0x78
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 10h]
        mov byte ptr [ecx + 43h], dl
        ; Exact mapped bytes 8B 15 78 89 68 00: mov edx, dword ptr [0x688978]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [edx + 10h]
        ; Exact mapped bytes 0F BE 48 43: movsx ecx, byte ptr [eax + 0x43]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x48
        __asm _emit 0x43
        test ecx, ecx
        ; Exact mapped bytes 75 14: jne 0x4733f5
        __asm _emit 0x75
        __asm _emit 0x14
        ; Exact mapped bytes 8B 15 78 89 68 00: mov edx, dword ptr [0x688978]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [edx + 4]
        and al, 0feh
        ; Exact mapped bytes 8B 0D 78 89 68 00: mov ecx, dword ptr [0x688978]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ecx + 4], eax
        ; Exact mapped bytes 8B 15 78 89 68 00: mov edx, dword ptr [0x688978]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        cmp dword ptr [edx + 8], -1
        ; Exact mapped bytes 0F 85 92 00 00 00: jne 0x473497
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 8000h
        push 0
        ; Exact mapped bytes A1 78 89 68 00: mov eax, dword ptr [0x688978]
        __asm _emit 0xa1
        __asm _emit 0x78
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 0ch]
        push ecx
        ; Exact mapped bytes FF 15 64 B8 68 00: call dword ptr [0x68b864]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 78 89 68 00: mov edx, dword ptr [0x688978]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [edx + 10h]
        push eax
        push 0
        ; Exact mapped bytes 8B 0D 88 89 68 00: mov ecx, dword ptr [0x688988]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes FF 15 68 B8 68 00: call dword ptr [0x68b868]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 7C 89 68 00: mov edx, dword ptr [0x68897c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        imul edx, edx, 14h
        ; Exact mapped bytes A1 80 89 68 00: mov eax, dword ptr [0x688980]
        __asm _emit 0xa1
        __asm _emit 0x80
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        add eax, edx
        ; Exact mapped bytes 8B 0D 78 89 68 00: mov ecx, dword ptr [0x688978]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        add ecx, 14h
        sub eax, ecx
        push eax
        ; Exact mapped bytes 8B 15 78 89 68 00: mov edx, dword ptr [0x688978]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        add edx, 14h
        push edx
        ; Exact mapped bytes A1 78 89 68 00: mov eax, dword ptr [0x688978]
        __asm _emit 0xa1
        __asm _emit 0x78
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 FB 27 FF FF: call 0x465c60
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x27
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        ; Exact mapped bytes 8B 0D 7C 89 68 00: mov ecx, dword ptr [0x68897c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        sub ecx, 1
        ; Exact mapped bytes 89 0D 7C 89 68 00: mov dword ptr [0x68897c], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x7c
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 3B 15 78 89 68 00: cmp edx, dword ptr [0x688978]
        __asm _emit 0x3b
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 76 09: jbe 0x47348b
        __asm _emit 0x76
        __asm _emit 0x09
        mov eax, dword ptr [ebp + 8]
        sub eax, 14h
        mov dword ptr [ebp + 8], eax
        ; Exact mapped bytes 8B 0D 80 89 68 00: mov ecx, dword ptr [0x688980]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 89 0D 70 89 68 00: mov dword ptr [0x688970], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x70
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 89 15 78 89 68 00: mov dword ptr [0x688978], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes A3 6C 89 68 00: mov dword ptr [0x68896c], eax
        __asm _emit 0xa3
        __asm _emit 0x6c
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
