// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58865EC0 .. +0xA1 bytes.
extern "C" __declspec(naked) void FUN_58865ec0_58865EC0() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push edi
        mov edi, dword ptr [ebp + 8]
        test edi, edi
        ; Exact mapped bytes 74 7C: je 0x58865f49
        __asm _emit 0x74
        __asm _emit 0x7c
        mov edx, dword ptr [ebp + 0ch]
        test edx, edx
        ; Exact mapped bytes 74 75: je 0x58865f49
        __asm _emit 0x74
        __asm _emit 0x75
        push esi
        mov esi, dword ptr [ebp + 10h]
        test esi, esi
        ; Exact mapped bytes 74 12: je 0x58865eee
        __asm _emit 0x74
        __asm _emit 0x12
        mov ecx, edi
        mov edi, edi
        ; Exact mapped bytes 66 83 39 00: cmp word ptr [ecx], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x39
        __asm _emit 0x00
        ; Exact mapped bytes 74 26: je 0x58865f0c
        __asm _emit 0x74
        __asm _emit 0x26
        add ecx, 2
        sub edx, 1
        ; Exact mapped bytes 75 F2: jne 0x58865ee0
        __asm _emit 0x75
        __asm _emit 0xf2
        xor eax, eax
        ; Exact mapped bytes 66 89 07: mov word ptr [edi], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x07
        ; Exact mapped bytes E8 77 C5 FF FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xc5
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [eax], 16h
        ; Exact mapped bytes E8 A8 B0 FE FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xb0
        __asm _emit 0xfe
        __asm _emit 0xff
        pop esi
        mov eax, 16h
        pop edi
        pop ebp
        ret
        sub esi, ecx
        mov edi, edi
        movzx eax, word ptr [esi + ecx]
        lea ecx, [ecx + 2]
        ; Exact mapped bytes 66 89 41 FE: mov word ptr [ecx - 2], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0xfe
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 23: je 0x58865f43
        __asm _emit 0x74
        __asm _emit 0x23
        sub edx, 1
        ; Exact mapped bytes 75 EB: jne 0x58865f10
        __asm _emit 0x75
        __asm _emit 0xeb
        xor eax, eax
        ; Exact mapped bytes 66 89 07: mov word ptr [edi], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x07
        ; Exact mapped bytes E8 40 C5 FF FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xc5
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [eax], 22h
        ; Exact mapped bytes E8 71 B0 FE FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xb0
        __asm _emit 0xfe
        __asm _emit 0xff
        pop esi
        mov eax, 22h
        pop edi
        pop ebp
        ret
        pop esi
        xor eax, eax
        pop edi
        pop ebp
        ret
        ; Exact mapped bytes E8 21 C5 FF FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xc5
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [eax], 16h
        ; Exact mapped bytes E8 52 B0 FE FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xb0
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, 16h
        pop edi
        pop ebp
        ret
    }
}
