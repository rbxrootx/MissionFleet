// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887B37F .. +0x2C bytes.
extern "C" __declspec(naked) void FUN_5887b37f_5887B37F() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 1D: je 0x5887b3a7
        __asm _emit 0x74
        __asm _emit 0x1d
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 1B FF FF FF: call 0x5887b2ad
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        test eax, eax
        ; Exact mapped bytes 78 10: js 0x5887b3a7
        __asm _emit 0x78
        __asm _emit 0x10
        cmp eax, 0e4h
        ; Exact mapped bytes 73 09: jae 0x5887b3a7
        __asm _emit 0x73
        __asm _emit 0x09
        mov eax, dword ptr [eax*8 + 588ce3b8h]
        pop ebp
        ret
        xor eax, eax
        pop ebp
        ret
    }
}
