// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887D0C0 .. +0x1F bytes.
extern "C" __declspec(naked) void FUN_5887d0c0() {
    __asm {
        cmp cl, 40h
        ; Exact mapped bytes 73 15: jae 0x5887d0da
        __asm _emit 0x73
        __asm _emit 0x15
        cmp cl, 20h
        ; Exact mapped bytes 73 06: jae 0x5887d0d0
        __asm _emit 0x73
        __asm _emit 0x06
        shld edx, eax, cl
        shl eax, cl
        ret
        mov edx, eax
        xor eax, eax
        and cl, 1fh
        shl edx, cl
        ret
        xor eax, eax
        xor edx, edx
        ret
    }
}
