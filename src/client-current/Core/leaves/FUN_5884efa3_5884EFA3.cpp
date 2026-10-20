// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5884EFA3 .. +0x57 bytes.
extern "C" __declspec(naked) void FUN_5884efa3_5884EFA3() {
    __asm {
        push ebp
        mov ebp, esp
        cmp byte ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 32: je 0x5884efde
        __asm _emit 0x74
        __asm _emit 0x32
        push esi
        push edi
        mov edi, dword ptr [ebp + 8]
        mov esi, dword ptr [edi]
        cmp dword ptr [esi], 0e06d7363h
        ; Exact mapped bytes 75 21: jne 0x5884efdc
        __asm _emit 0x75
        __asm _emit 0x21
        cmp dword ptr [esi + 10h], 3
        ; Exact mapped bytes 75 1B: jne 0x5884efdc
        __asm _emit 0x75
        __asm _emit 0x1b
        cmp dword ptr [esi + 14h], 19930520h
        ; Exact mapped bytes 74 18: je 0x5884efe2
        __asm _emit 0x74
        __asm _emit 0x18
        cmp dword ptr [esi + 14h], 19930521h
        ; Exact mapped bytes 74 0F: je 0x5884efe2
        __asm _emit 0x74
        __asm _emit 0x0f
        cmp dword ptr [esi + 14h], 19930522h
        ; Exact mapped bytes 74 06: je 0x5884efe2
        __asm _emit 0x74
        __asm _emit 0x06
        pop edi
        pop esi
        xor eax, eax
        pop ebp
        ret
        ; Exact mapped bytes E8 3F 06 00 00: call 0x5884f626
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [eax + 10h], esi
        mov esi, dword ptr [edi + 4]
        ; Exact mapped bytes E8 34 06 00 00: call 0x5884f626
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [eax + 14h], esi
        ; Exact mapped bytes E8 2D 6E 01 00: call 0x58865e27
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x6e
        __asm _emit 0x01
        __asm _emit 0x00
    }
}
