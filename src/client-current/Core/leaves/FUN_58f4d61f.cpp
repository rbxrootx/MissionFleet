// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58F4D61F .. +0xB bytes.
extern "C" __declspec(naked) void FUN_58f4d61f() {
    __asm {
        ; Exact mapped bytes 8B E5: mov esp, ebp
        __asm _emit 0x8b
        __asm _emit 0xe5
        ; Exact mapped bytes 0F BF ED: movsx ebp, bp
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xed
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes E9 A5 34 DA FF: jmp 0x58cf0acf
        __asm _emit 0xe9
        __asm _emit 0xa5
        __asm _emit 0x34
        __asm _emit 0xda
        __asm _emit 0xff
    }
}
