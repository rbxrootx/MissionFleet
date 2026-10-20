// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5875F1E0 .. +0x123 bytes.
extern "C" __declspec(naked) void FUN_5875f1e0() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        test al, 4
        ; Exact mapped bytes 0F 84 0E 01 00 00: je 0x5875f2fd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 4E 24: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x24
        mov edx, 1f00h
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        mov eax, 100h
        ; Exact mapped bytes 66 3B C8: cmp cx, ax
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc8
        ; Exact mapped bytes 0F 85 88 00 00 00: jne 0x5875f291
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 7ch]
        cmp eax, dword ptr [esi + 78h]
        ; Exact mapped bytes 7D 48: jge 0x5875f259
        __asm _emit 0x7d
        __asm _emit 0x48
        mov dl, byte ptr [eax + esi + 80h]
        mov ecx, dword ptr [esi + 6ch]
        mov byte ptr [eax + ecx], dl
        inc dword ptr [esi + 7ch]
        mov ecx, dword ptr [esi + 6ch]
        mov eax, dword ptr [esi + 7ch]
        mov byte ptr [eax + ecx], 0
        mov ecx, dword ptr [esi + 180h]
        test ecx, ecx
        ; Exact mapped bytes 0F 84 A6 00 00 00: je 0x5875f2df
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 F8 48 A2 58: mov edx, dword ptr [0x58a248f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes E8 4B 87 1A 00: call 0x58907990
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x87
        __asm _emit 0x1a
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 180h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 4]
        push 0
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        ; Exact mapped bytes E9 86 00 00 00: jmp 0x5875f2df
        __asm _emit 0xe9
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 74h], 0
        ; Exact mapped bytes 74 18: je 0x5875f277
        __asm _emit 0x74
        __asm _emit 0x18
        mov eax, dword ptr [esi + 70h]
        test eax, eax
        ; Exact mapped bytes 74 06: je 0x5875f26c
        __asm _emit 0x74
        __asm _emit 0x06
        dec eax
        mov dword ptr [esi + 70h], eax
        ; Exact mapped bytes EB 73: jmp 0x5875f2df
        __asm _emit 0xeb
        __asm _emit 0x73
        push 4
        mov ecx, esi
        ; Exact mapped bytes E8 DB 23 FD FF: call 0x58731650
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x23
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes EB 68: jmp 0x5875f2df
        __asm _emit 0xeb
        __asm _emit 0x68
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        mov ecx, 0e2ffh
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        mov edx, 200h
        ; Exact mapped bytes 66 0B C2: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc2
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes EB 4E: jmp 0x5875f2df
        __asm _emit 0xeb
        __asm _emit 0x4e
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        mov ecx, edx
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        mov edx, 400h
        ; Exact mapped bytes 66 3B C2: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc2
        ; Exact mapped bytes 75 3B: jne 0x5875f2df
        __asm _emit 0x75
        __asm _emit 0x3b
        mov eax, dword ptr [esi + 7ch]
        test eax, eax
        ; Exact mapped bytes 7E 0D: jle 0x5875f2b8
        __asm _emit 0x7e
        __asm _emit 0x0d
        mov ecx, dword ptr [esi + 6ch]
        dec eax
        mov dword ptr [esi + 7ch], eax
        mov byte ptr [eax + ecx], 0
        ; Exact mapped bytes EB 27: jmp 0x5875f2df
        __asm _emit 0xeb
        __asm _emit 0x27
        mov edx, dword ptr [esi + 6ch]
        mov byte ptr [edx], 0
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        mov ecx, 0e5ffh
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        mov edx, 500h
        ; Exact mapped bytes 66 0B C2: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc2
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        mov eax, 0fffbh
        ; Exact mapped bytes 66 21 46 24: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 3ch]
        test ecx, ecx
        ; Exact mapped bytes 74 17: je 0x5875f2fd
        __asm _emit 0x74
        __asm _emit 0x17
        push edi
        mov edi, dword ptr [ecx + 38h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0ch]
        cmp edi, dword ptr [esi + 3ch]
        ; Exact mapped bytes 74 0B: je 0x5875f2ff
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, edi
        test edi, edi
        ; Exact mapped bytes 75 EB: jne 0x5875f2e7
        __asm _emit 0x75
        __asm _emit 0xeb
        pop edi
        pop esi
        ret
        pop edi
        pop esi
        ; Exact mapped bytes FF E0: jmp eax
        __asm _emit 0xff
        __asm _emit 0xe0
    }
}
