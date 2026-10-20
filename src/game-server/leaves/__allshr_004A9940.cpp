// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A9940 .. +0x21 bytes.
extern "C" __declspec(naked) void __allshr_004A9940() {
    __asm {
        cmp cl, 40h
        ; Exact mapped bytes 73 16: jae 0x4a995b
        __asm _emit 0x73
        __asm _emit 0x16
        cmp cl, 20h
        ; Exact mapped bytes 73 06: jae 0x4a9950
        __asm _emit 0x73
        __asm _emit 0x06
        shrd eax, edx, cl
        sar edx, cl
        ret
        mov eax, edx
        sar edx, 1fh
        and cl, 1fh
        sar eax, cl
        ret
        sar edx, 1fh
        mov eax, edx
        ret
    }
}
