// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10021D30 .. +0x93 bytes.
extern "C" __declspec(naked) void FUN_10021d30_10021D30() {
    __asm {
        mov ecx, dword ptr [esp + 4]
        xor eax, eax
        test cl, cl
        ; Exact mapped bytes 74 6B: je 0x10021da5
        __asm _emit 0x74
        __asm _emit 0x6b
        and ecx, 0ffh
        cmp ecx, 4
        ; Exact mapped bytes 77 3F: ja 0x10021d84
        __asm _emit 0x77
        __asm _emit 0x3f
        ; Exact mapped bytes FF 24 8D C4 1D 02 10: jmp dword ptr [ecx*4 + 0x10021dc4]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0xc4
        __asm _emit 0x1d
        __asm _emit 0x02
        __asm _emit 0x10
        mov eax, dword ptr [esp + 8]
        and eax, 0ffh
        sub eax, 0ah
        ; Exact mapped bytes EB 2A: jmp 0x10021d84
        __asm _emit 0xeb
        __asm _emit 0x2a
        mov eax, dword ptr [esp + 8]
        and eax, 0ffh
        sub eax, 32h
        ; Exact mapped bytes EB 1C: jmp 0x10021d84
        __asm _emit 0xeb
        __asm _emit 0x1c
        mov eax, dword ptr [esp + 8]
        and eax, 0ffh
        sub eax, 64h
        ; Exact mapped bytes EB 0E: jmp 0x10021d84
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov eax, dword ptr [esp + 8]
        and eax, 0ffh
        sub eax, 96h
        lea ecx, [ecx + ecx*4]
        lea ecx, [ecx + ecx*4]
        lea eax, [eax + ecx*2]
        cmp byte ptr [eax + 1019af0eh], 1
        ; Exact mapped bytes 75 27: jne 0x10021dbd
        __asm _emit 0x75
        __asm _emit 0x27
        lea edx, [eax + eax*2 - 96h]
        lea eax, [edx*8 + 10199c80h]
        ret
        mov eax, dword ptr [esp + 8]
        cmp al, 0ah
        ; Exact mapped bytes 73 10: jae 0x10021dbd
        __asm _emit 0x73
        __asm _emit 0x10
        and eax, 0ffh
        lea eax, [eax + eax*2]
        lea eax, [eax*8 + 10199480h]
        ret
        mov eax, 1017f514h
        ret
    }
}
