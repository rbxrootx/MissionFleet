// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886C720 .. +0x9 bytes.
extern "C" __declspec(naked) void FUN_5886c720() {
    __asm {
        ; Exact mapped bytes 6A 08: push 8
        __asm _emit 0x6a
        __asm _emit 0x08
        ; Exact mapped bytes E8 3D 75 FF FF: call 0x58863c64
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x75
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
