// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5879F480 .. +0x48 bytes.
extern "C" __declspec(naked) void FUN_5879f480_5879F480() {
    __asm {
        mov ecx, dword ptr [esp + 8]
        lea eax, [ecx - 1]
        cmp eax, 7
        ; Exact mapped bytes 77 3B: ja 0x5879f4c7
        __asm _emit 0x77
        __asm _emit 0x3b
        push edi
        mov edi, dword ptr [esp + 8]
        xor edx, edx
        shl ecx, 5
        add edi, -20h
        add edi, ecx
        ; Exact mapped bytes 74 29: je 0x5879f4c6
        __asm _emit 0x74
        __asm _emit 0x29
        mov eax, dword ptr [esp + 10h]
        test eax, eax
        ; Exact mapped bytes 74 1D: je 0x5879f4c2
        __asm _emit 0x74
        __asm _emit 0x1d
        cmp byte ptr [eax], dl
        ; Exact mapped bytes 74 19: je 0x5879f4c2
        __asm _emit 0x74
        __asm _emit 0x19
        push esi
        mov esi, edi
        sub esi, eax
        ; Exact mapped bytes 66 90: nop
        __asm _emit 0x66
        __asm _emit 0x90
        cmp edx, 1fh
        ; Exact mapped bytes 73 0C: jae 0x5879f4c1
        __asm _emit 0x73
        __asm _emit 0x0c
        mov cl, byte ptr [eax]
        inc edx
        mov byte ptr [esi + eax], cl
        inc eax
        cmp byte ptr [eax], 0
        ; Exact mapped bytes 75 EF: jne 0x5879f4b0
        __asm _emit 0x75
        __asm _emit 0xef
        pop esi
        mov byte ptr [edi + edx], 0
        pop edi
        ret
    }
}
