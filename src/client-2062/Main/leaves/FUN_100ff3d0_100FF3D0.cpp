// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100FF3D0 .. +0xF5 bytes.
extern "C" __declspec(naked) void FUN_100ff3d0_100FF3D0() {
    __asm {
        push esi
        push edi
        mov edi, ecx
        test byte ptr [edi + 24h], 4
        ; Exact mapped bytes 0F 84 E4 00 00 00: je 0x100ff4c2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [edi + 60h]
        mov eax, dword ptr [edi + 64h]
        cmp edx, eax
        ; Exact mapped bytes 0F 84 B2 00 00 00: je 0x100ff49e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 59: jle 0x100ff447
        __asm _emit 0x7e
        __asm _emit 0x59
        mov ecx, edx
        sub ecx, eax
        cmp ecx, 1e240h
        ; Exact mapped bytes 7E 0C: jle 0x100ff406
        __asm _emit 0x7e
        __asm _emit 0x0c
        mov eax, 1e240h
        sub edx, eax
        ; Exact mapped bytes E9 8E 00 00 00: jmp 0x100ff494
        __asm _emit 0xe9
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ecx, 3039h
        ; Exact mapped bytes 7E 09: jle 0x100ff417
        __asm _emit 0x7e
        __asm _emit 0x09
        mov eax, 3039h
        sub edx, eax
        ; Exact mapped bytes EB 7D: jmp 0x100ff494
        __asm _emit 0xeb
        __asm _emit 0x7d
        cmp ecx, 4d2h
        ; Exact mapped bytes 7E 09: jle 0x100ff428
        __asm _emit 0x7e
        __asm _emit 0x09
        mov eax, 4d2h
        sub edx, eax
        ; Exact mapped bytes EB 6C: jmp 0x100ff494
        __asm _emit 0xeb
        __asm _emit 0x6c
        cmp ecx, 7bh
        ; Exact mapped bytes 7E 09: jle 0x100ff436
        __asm _emit 0x7e
        __asm _emit 0x09
        mov eax, 7bh
        sub edx, eax
        ; Exact mapped bytes EB 5E: jmp 0x100ff494
        __asm _emit 0xeb
        __asm _emit 0x5e
        xor eax, eax
        cmp ecx, 0ch
        setle al
        dec eax
        and eax, 0bh
        inc eax
        sub edx, eax
        ; Exact mapped bytes EB 4D: jmp 0x100ff494
        __asm _emit 0xeb
        __asm _emit 0x4d
        cmp edx, eax
        ; Exact mapped bytes 7D 4C: jge 0x100ff497
        __asm _emit 0x7d
        __asm _emit 0x4c
        sub eax, edx
        cmp eax, 1e240h
        ; Exact mapped bytes 7E 07: jle 0x100ff45b
        __asm _emit 0x7e
        __asm _emit 0x07
        mov eax, 1e240h
        ; Exact mapped bytes EB 37: jmp 0x100ff492
        __asm _emit 0xeb
        __asm _emit 0x37
        cmp eax, 3039h
        ; Exact mapped bytes 7E 07: jle 0x100ff469
        __asm _emit 0x7e
        __asm _emit 0x07
        mov eax, 3039h
        ; Exact mapped bytes EB 29: jmp 0x100ff492
        __asm _emit 0xeb
        __asm _emit 0x29
        cmp eax, 4d2h
        ; Exact mapped bytes 7E 07: jle 0x100ff477
        __asm _emit 0x7e
        __asm _emit 0x07
        mov eax, 4d2h
        ; Exact mapped bytes EB 1B: jmp 0x100ff492
        __asm _emit 0xeb
        __asm _emit 0x1b
        cmp eax, 7bh
        ; Exact mapped bytes 7E 07: jle 0x100ff483
        __asm _emit 0x7e
        __asm _emit 0x07
        mov eax, 7bh
        ; Exact mapped bytes EB 0F: jmp 0x100ff492
        __asm _emit 0xeb
        __asm _emit 0x0f
        xor ecx, ecx
        cmp eax, 0ch
        setle cl
        dec ecx
        and ecx, 0bh
        inc ecx
        mov eax, ecx
        add edx, eax
        mov dword ptr [edi + 60h], edx
        mov ecx, edi
        ; Exact mapped bytes E8 42 03 00 00: call 0x100ff7e0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 3ch]
        test ecx, ecx
        ; Exact mapped bytes 74 1D: je 0x100ff4c2
        __asm _emit 0x74
        __asm _emit 0x1d
        mov esi, dword ptr [ecx + 38h]
        mov eax, dword ptr [edi + 3ch]
        cmp esi, eax
        ; Exact mapped bytes 74 0E: je 0x100ff4bd
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        test esi, esi
        mov ecx, esi
        ; Exact mapped bytes 75 EB: jne 0x100ff4a5
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
