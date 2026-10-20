// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883077F .. +0x23 bytes.
extern "C" __declspec(naked) void FUN_5883077f_5883077F() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push 20h
        ; Exact mapped bytes E8 7A 08 00 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        pop ecx
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x5883079e
        __asm _emit 0x74
        __asm _emit 0x0c
        push dword ptr [ebp + 8]
        mov ecx, eax
        ; Exact mapped bytes E8 2B FD FF FF: call 0x588304c7
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        leave
        ret
        xor eax, eax
        leave
        ret
    }
}
