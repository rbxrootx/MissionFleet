// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00431FCB .. +0x15 bytes.
extern "C" __declspec(naked) void _AfxGetThread__YGPAVCWinThread__XZ_00431FCB() {
    __asm {
        ; Exact mapped bytes E8 09 3D 00 00: call 0x435cd9
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 40 04: mov eax, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x04
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 08: jne 0x431fdf
        __asm _emit 0x75
        __asm _emit 0x08
        ; Exact mapped bytes E8 D7 3C 00 00: call 0x435cb3
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x3c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 40 04: mov eax, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x04
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
