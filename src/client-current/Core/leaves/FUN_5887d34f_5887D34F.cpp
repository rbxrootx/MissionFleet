// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887D34F .. +0x9A bytes.
extern "C" __declspec(naked) void FUN_5887d34f_5887D34F() {
    __asm {
        push ebp
        mov ebp, esp
        ; Exact mapped bytes 83 3D 1C 67 96 58 01: cmp dword ptr [0x5896671c], 1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x1c
        __asm _emit 0x67
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x01
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 55 0C: mov dx, word ptr [ebp + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x0c
        ; Exact mapped bytes 7D 28: jge 0x5887d38a
        __asm _emit 0x7d
        __asm _emit 0x28
        movzx eax, word ptr [ecx]
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 16: je 0x5887d380
        __asm _emit 0x74
        __asm _emit 0x16
        push esi
        mov esi, eax
        ; Exact mapped bytes 66 3B F2: cmp si, dx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xf2
        ; Exact mapped bytes 74 0D: je 0x5887d37f
        __asm _emit 0x74
        __asm _emit 0x0d
        add ecx, 2
        movzx eax, word ptr [ecx]
        mov esi, eax
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 EE: jne 0x5887d36d
        __asm _emit 0x75
        __asm _emit 0xee
        pop esi
        xor eax, eax
        ; Exact mapped bytes 66 39 11: cmp word ptr [ecx], dx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x11
        cmove eax, ecx
        pop ebp
        ret
        movzx eax, dx
        ; Exact mapped bytes 66 0F 6E C0: movd xmm0, eax
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x6e
        __asm _emit 0xc0
        ; Exact mapped bytes F2 0F 70 C0 00: pshuflw xmm0, xmm0, 0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x70
        __asm _emit 0xc0
        __asm _emit 0x00
        ; Exact mapped bytes 66 0F 70 D0 00: pshufd xmm2, xmm0, 0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x70
        __asm _emit 0xd0
        __asm _emit 0x00
        mov eax, ecx
        and eax, 0fffh
        cmp eax, 0ff0h
        ; Exact mapped bytes 77 1D: ja 0x5887d3c6
        __asm _emit 0x77
        __asm _emit 0x1d
        ; Exact mapped bytes 0F 10 09: movups xmm1, xmmword ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x09
        ; Exact mapped bytes 0F 57 C0: xorps xmm0, xmm0
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        ; Exact mapped bytes 66 0F 75 C1: pcmpeqw xmm0, xmm1
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x75
        __asm _emit 0xc1
        ; Exact mapped bytes 66 0F 75 CA: pcmpeqw xmm1, xmm2
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x75
        __asm _emit 0xca
        ; Exact mapped bytes 0F 56 C1: orps xmm0, xmm1
        __asm _emit 0x0f
        __asm _emit 0x56
        __asm _emit 0xc1
        ; Exact mapped bytes 66 0F D7 C0: pmovmskb eax, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xd7
        __asm _emit 0xc0
        test eax, eax
        ; Exact mapped bytes 75 18: jne 0x5887d3da
        __asm _emit 0x75
        __asm _emit 0x18
        push 10h
        ; Exact mapped bytes EB 0F: jmp 0x5887d3d5
        __asm _emit 0xeb
        __asm _emit 0x0f
        movzx eax, word ptr [ecx]
        ; Exact mapped bytes 66 3B C2: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc2
        ; Exact mapped bytes 74 17: je 0x5887d3e5
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 0E: je 0x5887d3e1
        __asm _emit 0x74
        __asm _emit 0x0e
        push 2
        pop eax
        add ecx, eax
        ; Exact mapped bytes EB C1: jmp 0x5887d39b
        __asm _emit 0xeb
        __asm _emit 0xc1
        bsf eax, eax
        add ecx, eax
        ; Exact mapped bytes EB 9F: jmp 0x5887d380
        __asm _emit 0xeb
        __asm _emit 0x9f
        xor eax, eax
        pop ebp
        ret
        mov eax, ecx
        pop ebp
        ret
    }
}
