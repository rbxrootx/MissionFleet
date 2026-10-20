// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585035A0 .. +0xA bytes.
extern "C" __declspec(naked) void FUN_585035a0() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes B8 FF FF FF 07: mov eax, 0x7ffffff
        __asm _emit 0xb8
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x07
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
