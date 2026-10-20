// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5879AD90 .. +0x5 bytes.
extern "C" __declspec(naked) void FUN_5879ad90() {
    __asm {
        ; Exact mapped bytes 0F B6 41 08: movzx eax, byte ptr [ecx + 8]
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x41
        __asm _emit 0x08
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
