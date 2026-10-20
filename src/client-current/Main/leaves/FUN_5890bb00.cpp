// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5890BB00 .. +0x140 bytes.
extern "C" __declspec(naked) void FUN_5890bb00() {
    __asm {
        push ecx
        push edi
        mov edi, ecx
        ; Exact mapped bytes 66 8B 47 24: mov ax, word ptr [edi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x24
        test al, 4
        ; Exact mapped bytes 0F 84 26 01 00 00: je 0x5890bc36
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x26
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [edi + 7ch]
        mov eax, dword ptr [edi + 80h]
        cmp edx, eax
        ; Exact mapped bytes 0F 84 F5 00 00 00: je 0x5890bc16
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 7E 59: jle 0x5890bb7c
        __asm _emit 0x7e
        __asm _emit 0x59
        mov ecx, edx
        sub ecx, eax
        cmp ecx, 1e240h
        ; Exact mapped bytes 7E 0C: jle 0x5890bb3b
        __asm _emit 0x7e
        __asm _emit 0x0c
        mov eax, 1e240h
        sub edx, eax
        ; Exact mapped bytes E9 8E 00 00 00: jmp 0x5890bbc9
        __asm _emit 0xe9
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ecx, 3039h
        ; Exact mapped bytes 7E 09: jle 0x5890bb4c
        __asm _emit 0x7e
        __asm _emit 0x09
        mov eax, 3039h
        sub edx, eax
        ; Exact mapped bytes EB 7D: jmp 0x5890bbc9
        __asm _emit 0xeb
        __asm _emit 0x7d
        cmp ecx, 4d2h
        ; Exact mapped bytes 7E 09: jle 0x5890bb5d
        __asm _emit 0x7e
        __asm _emit 0x09
        mov eax, 4d2h
        sub edx, eax
        ; Exact mapped bytes EB 6C: jmp 0x5890bbc9
        __asm _emit 0xeb
        __asm _emit 0x6c
        cmp ecx, 7bh
        ; Exact mapped bytes 7E 09: jle 0x5890bb6b
        __asm _emit 0x7e
        __asm _emit 0x09
        mov eax, 7bh
        sub edx, eax
        ; Exact mapped bytes EB 5E: jmp 0x5890bbc9
        __asm _emit 0xeb
        __asm _emit 0x5e
        xor eax, eax
        cmp ecx, 0ch
        setle al
        dec eax
        and eax, 0bh
        inc eax
        sub edx, eax
        ; Exact mapped bytes EB 4D: jmp 0x5890bbc9
        __asm _emit 0xeb
        __asm _emit 0x4d
        cmp edx, eax
        ; Exact mapped bytes 7D 4C: jge 0x5890bbcc
        __asm _emit 0x7d
        __asm _emit 0x4c
        sub eax, edx
        cmp eax, 1e240h
        ; Exact mapped bytes 7E 07: jle 0x5890bb90
        __asm _emit 0x7e
        __asm _emit 0x07
        mov eax, 1e240h
        ; Exact mapped bytes EB 37: jmp 0x5890bbc7
        __asm _emit 0xeb
        __asm _emit 0x37
        cmp eax, 3039h
        ; Exact mapped bytes 7E 07: jle 0x5890bb9e
        __asm _emit 0x7e
        __asm _emit 0x07
        mov eax, 3039h
        ; Exact mapped bytes EB 29: jmp 0x5890bbc7
        __asm _emit 0xeb
        __asm _emit 0x29
        cmp eax, 4d2h
        ; Exact mapped bytes 7E 07: jle 0x5890bbac
        __asm _emit 0x7e
        __asm _emit 0x07
        mov eax, 4d2h
        ; Exact mapped bytes EB 1B: jmp 0x5890bbc7
        __asm _emit 0xeb
        __asm _emit 0x1b
        cmp eax, 7bh
        ; Exact mapped bytes 7E 07: jle 0x5890bbb8
        __asm _emit 0x7e
        __asm _emit 0x07
        mov eax, 7bh
        ; Exact mapped bytes EB 0F: jmp 0x5890bbc7
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
        mov dword ptr [edi + 7ch], edx
        mov eax, dword ptr [edi + 78h]
        mov dword ptr [esp + 4], eax
        test eax, eax
        ; Exact mapped bytes 74 25: je 0x5890bbfc
        __asm _emit 0x74
        __asm _emit 0x25
        ; Exact mapped bytes DB 47 7C: fild dword ptr [edi + 0x7c]
        __asm _emit 0xdb
        __asm _emit 0x47
        __asm _emit 0x7c
        mov edx, dword ptr [edi + 6ch]
        sub esp, 8
        ; Exact mapped bytes DA 74 24 0C: fidiv dword ptr [esp + 0xc]
        __asm _emit 0xda
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x0c
        ; Exact mapped bytes DD 1C 24: fstp qword ptr [esp]
        __asm _emit 0xdd
        __asm _emit 0x1c
        __asm _emit 0x24
        push 589a2b64h
        push 80h
        push edx
        ; Exact mapped bytes E8 69 FE E3 FF: call 0x5874ba60
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xfe
        __asm _emit 0xe3
        __asm _emit 0xff
        add esp, 14h
        ; Exact mapped bytes EB 1A: jmp 0x5890bc16
        __asm _emit 0xeb
        __asm _emit 0x1a
        mov eax, dword ptr [edi + 7ch]
        mov ecx, dword ptr [edi + 6ch]
        push eax
        push 589a2b5ch
        push 80h
        push ecx
        ; Exact mapped bytes E8 4D FE E3 FF: call 0x5874ba60
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xfe
        __asm _emit 0xe3
        __asm _emit 0xff
        add esp, 10h
        mov ecx, dword ptr [edi + 3ch]
        test ecx, ecx
        ; Exact mapped bytes 74 19: je 0x5890bc36
        __asm _emit 0x74
        __asm _emit 0x19
        push esi
        mov edi, edi
        mov esi, dword ptr [ecx + 38h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0ch]
        cmp esi, dword ptr [edi + 3ch]
        ; Exact mapped bytes 74 0C: je 0x5890bc39
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, esi
        test esi, esi
        ; Exact mapped bytes 75 EB: jne 0x5890bc20
        __asm _emit 0x75
        __asm _emit 0xeb
        pop esi
        pop edi
        pop ecx
        ret
        pop esi
        pop edi
        add esp, 4
        ; Exact mapped bytes FF E0: jmp eax
        __asm _emit 0xff
        __asm _emit 0xe0
    }
}
