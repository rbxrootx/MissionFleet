// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886F9CB .. +0xB bytes.
extern "C" __declspec(naked) void FUN_5886f9cb() {
    __asm {
        ; Exact mapped bytes E8 5F F9 FF FF: call 0x5886f32f
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 95 C0: setne al
        __asm _emit 0x0f
        __asm _emit 0x95
        __asm _emit 0xc0
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
