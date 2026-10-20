// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58ECF36C .. +0xB bytes.
extern "C" __declspec(naked) void FUN_58ecf36c() {
    __asm {
        ; Exact mapped bytes 8B E5: mov esp, ebp
        __asm _emit 0x8b
        __asm _emit 0xe5
        ; Exact mapped bytes 66 87 ED: xchg bp, bp
        __asm _emit 0x66
        __asm _emit 0x87
        __asm _emit 0xed
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes E9 B8 F2 E1 FF: jmp 0x58cee62f
        __asm _emit 0xe9
        __asm _emit 0xb8
        __asm _emit 0xf2
        __asm _emit 0xe1
        __asm _emit 0xff
    }
}
