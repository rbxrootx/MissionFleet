// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58F5FEEF .. +0xA bytes.
extern "C" __declspec(naked) void FUN_58f5feef() {
    __asm {
        ; Exact mapped bytes 8B E5: mov esp, ebp
        __asm _emit 0x8b
        __asm _emit 0xe5
        ; Exact mapped bytes 0F BF E9: movsx ebp, cx
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xe9
        ; Exact mapped bytes E9 E5 08 BE FF: jmp 0x58b407de
        __asm _emit 0xe9
        __asm _emit 0xe5
        __asm _emit 0x08
        __asm _emit 0xbe
        __asm _emit 0xff
    }
}
