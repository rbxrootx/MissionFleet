// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100B3100 .. +0x27F bytes.
extern "C" __declspec(naked) void FUN_100b3100_100B3100() {
    __asm {
        push esi
        mov esi, ecx
        push edi
        test byte ptr [esi + 24h], 4
        ; Exact mapped bytes 0F 84 6E 02 00 00: je 0x100b337c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 8E CC 00 00 00: mov cx, word ptr [esi + 0xcc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 FF 86 CE 00 00 00: inc word ptr [esi + 0xce]
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0x86
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 86 CE 00 00 00: mov ax, word ptr [esi + 0xce]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, 1
        push ebx
        ; Exact mapped bytes 66 3B CF: cmp cx, di
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xcf
        push ebp
        ; Exact mapped bytes 0F 85 90 00 00 00: jne 0x100b31c3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3D 90 01: cmp ax, 0x190
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x90
        __asm _emit 0x01
        ; Exact mapped bytes 7D 7C: jge 0x100b31b5
        __asm _emit 0x7d
        __asm _emit 0x7c
        ; Exact mapped bytes 0F BF D0: movsx edx, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd0
        mov eax, 2aaaaaabh
        mov ecx, dword ptr [esi + 0b0h]
        imul edx
        sar edx, 2
        mov ecx, dword ptr [ecx + 28h]
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        and edx, 80000001h
        ; Exact mapped bytes 79 05: jns 0x100b3163
        __asm _emit 0x79
        __asm _emit 0x05
        dec edx
        or edx, 0fffffffeh
        inc edx
        ; Exact mapped bytes 75 28: jne 0x100b318d
        __asm _emit 0x75
        __asm _emit 0x28
        lea ebp, [ecx - 0ah]
        lea edi, [esi + 0ach]
        mov ebx, 2
        mov ecx, dword ptr [edi]
        push ebp
        ; Exact mapped bytes E8 A5 BF 04 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xbf
        __asm _emit 0x04
        __asm _emit 0x00
        add edi, 4
        dec ebx
        ; Exact mapped bytes 75 F2: jne 0x100b3173
        __asm _emit 0x75
        __asm _emit 0xf2
        ; Exact mapped bytes 66 FF 86 CE 00 00 00: inc word ptr [esi + 0xce]
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0x86
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 C9 01 00 00: jmp 0x100b3356
        __asm _emit 0xe9
        __asm _emit 0xc9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ebp, [ecx + 0ah]
        lea edi, [esi + 0ach]
        mov ebx, 2
        mov ecx, dword ptr [edi]
        push ebp
        ; Exact mapped bytes E8 7D BF 04 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xbf
        __asm _emit 0x04
        __asm _emit 0x00
        add edi, 4
        dec ebx
        ; Exact mapped bytes 75 F2: jne 0x100b319b
        __asm _emit 0x75
        __asm _emit 0xf2
        ; Exact mapped bytes 66 FF 86 CE 00 00 00: inc word ptr [esi + 0xce]
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0x86
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 A1 01 00 00: jmp 0x100b3356
        __asm _emit 0xe9
        __asm _emit 0xa1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, esi
        ; Exact mapped bytes E8 C2 01 00 00: call 0x100b3380
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 93 01 00 00: jmp 0x100b3356
        __asm _emit 0xe9
        __asm _emit 0x93
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F9 02: cmp cx, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x02
        ; Exact mapped bytes 0F 85 A0 00 00 00: jne 0x100b326d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3D C8 00: cmp ax, 0xc8
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0xc8
        __asm _emit 0x00
        ; Exact mapped bytes 0F 8D 88 00 00 00: jge 0x100b325f
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF D0: movsx edx, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd0
        mov eax, 2aaaaaabh
        mov ecx, dword ptr [esi + 0b8h]
        imul edx
        sar edx, 2
        mov ecx, dword ptr [ecx + 28h]
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        and edx, 80000001h
        ; Exact mapped bytes 79 05: jns 0x100b3201
        __asm _emit 0x79
        __asm _emit 0x05
        dec edx
        or edx, 0fffffffeh
        inc edx
        ; Exact mapped bytes 75 2E: jne 0x100b3231
        __asm _emit 0x75
        __asm _emit 0x2e
        lea ebx, [ecx - 0ah]
        lea edi, [esi + 6ch]
        mov ebp, 2
        mov ecx, dword ptr [edi + 48h]
        push ebx
        ; Exact mapped bytes E8 09 BF 04 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xbf
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [edi]
        push ebx
        ; Exact mapped bytes E8 01 BF 04 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xbf
        __asm _emit 0x04
        __asm _emit 0x00
        add edi, 4
        dec ebp
        ; Exact mapped bytes 75 E9: jne 0x100b320e
        __asm _emit 0x75
        __asm _emit 0xe9
        ; Exact mapped bytes 66 FF 86 CE 00 00 00: inc word ptr [esi + 0xce]
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0x86
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 25 01 00 00: jmp 0x100b3356
        __asm _emit 0xe9
        __asm _emit 0x25
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ebx, [ecx + 0ah]
        lea edi, [esi + 6ch]
        mov ebp, 2
        mov ecx, dword ptr [edi + 48h]
        push ebx
        ; Exact mapped bytes E8 DB BE 04 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xbe
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [edi]
        push ebx
        ; Exact mapped bytes E8 D3 BE 04 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xbe
        __asm _emit 0x04
        __asm _emit 0x00
        add edi, 4
        dec ebp
        ; Exact mapped bytes 75 E9: jne 0x100b323c
        __asm _emit 0x75
        __asm _emit 0xe9
        ; Exact mapped bytes 66 FF 86 CE 00 00 00: inc word ptr [esi + 0xce]
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0x86
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 F7 00 00 00: jmp 0x100b3356
        __asm _emit 0xe9
        __asm _emit 0xf7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 3
        mov ecx, esi
        ; Exact mapped bytes E8 18 01 00 00: call 0x100b3380
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 E9 00 00 00: jmp 0x100b3356
        __asm _emit 0xe9
        __asm _emit 0xe9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F9 03: cmp cx, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x03
        ; Exact mapped bytes 0F 85 DF 00 00 00: jne 0x100b3356
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xdf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 3D 90 01: cmp ax, 0x190
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x90
        __asm _emit 0x01
        ; Exact mapped bytes 0F 8D 88 00 00 00: jge 0x100b3309
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF D0: movsx edx, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd0
        mov eax, 2aaaaaabh
        mov ecx, dword ptr [esi + 0c0h]
        imul edx
        sar edx, 2
        mov ecx, dword ptr [ecx + 28h]
        mov eax, edx
        shr eax, 1fh
        add edx, eax
        and edx, 80000001h
        ; Exact mapped bytes 79 05: jns 0x100b32ab
        __asm _emit 0x79
        __asm _emit 0x05
        dec edx
        or edx, 0fffffffeh
        inc edx
        ; Exact mapped bytes 75 2E: jne 0x100b32db
        __asm _emit 0x75
        __asm _emit 0x2e
        lea ebx, [ecx - 0ah]
        lea edi, [esi + 84h]
        mov ebp, 2
        mov ecx, dword ptr [edi + 38h]
        push ebx
        ; Exact mapped bytes E8 5C BE 04 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xbe
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [edi]
        push ebx
        ; Exact mapped bytes E8 54 BE 04 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xbe
        __asm _emit 0x04
        __asm _emit 0x00
        add edi, 4
        dec ebp
        ; Exact mapped bytes 75 E9: jne 0x100b32bb
        __asm _emit 0x75
        __asm _emit 0xe9
        ; Exact mapped bytes 66 FF 86 CE 00 00 00: inc word ptr [esi + 0xce]
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0x86
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 7B: jmp 0x100b3356
        __asm _emit 0xeb
        __asm _emit 0x7b
        lea ebx, [ecx + 0ah]
        lea edi, [esi + 84h]
        mov ebp, 2
        mov ecx, dword ptr [edi + 38h]
        push ebx
        ; Exact mapped bytes E8 2E BE 04 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xbe
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [edi]
        push ebx
        ; Exact mapped bytes E8 26 BE 04 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xbe
        __asm _emit 0x04
        __asm _emit 0x00
        add edi, 4
        dec ebp
        ; Exact mapped bytes 75 E9: jne 0x100b32e9
        __asm _emit 0x75
        __asm _emit 0xe9
        ; Exact mapped bytes 66 FF 86 CE 00 00 00: inc word ptr [esi + 0xce]
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0x86
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 4D: jmp 0x100b3356
        __asm _emit 0xeb
        __asm _emit 0x4d
        push 0
        mov ecx, esi
        ; Exact mapped bytes E8 6E 00 00 00: call 0x100b3380
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [esi + 84h]
        push 0fffffeffh
        mov dword ptr [esi + 0c4h], eax
        mov eax, dword ptr [eax]
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 0c4h]
        mov eax, dword ptr [ecx + 4]
        ; Exact mapped bytes 66 09 78 24: or word ptr [eax + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x78
        __asm _emit 0x24
        mov edx, dword ptr [esi + 0c4h]
        mov ecx, dword ptr [edx]
        ; Exact mapped bytes E8 1D BE 04 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xbe
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0c4h]
        push 101h
        mov ecx, dword ptr [eax + 4]
        ; Exact mapped bytes E8 0A BE 04 00: call 0x100ff160
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xbe
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 3ch]
        pop ebp
        test ecx, ecx
        pop ebx
        ; Exact mapped bytes 74 1D: je 0x100b337c
        __asm _emit 0x74
        __asm _emit 0x1d
        mov edi, dword ptr [ecx + 38h]
        mov eax, dword ptr [esi + 3ch]
        cmp edi, eax
        ; Exact mapped bytes 74 0E: je 0x100b3377
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        test edi, edi
        mov ecx, edi
        ; Exact mapped bytes 75 EB: jne 0x100b335f
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
