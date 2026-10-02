// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5882E770 .. +0x1C bytes.
extern "C" __declspec(naked) void FUN_5882e770() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 E8 FE FF FF: call 0x5882e666
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 588ec484h
        lea eax, [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 59 EC 01 00: call 0x5884d3e5
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xec
        __asm _emit 0x01
        __asm _emit 0x00
    }
}
