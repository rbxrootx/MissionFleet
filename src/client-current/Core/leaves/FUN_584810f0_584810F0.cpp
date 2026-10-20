// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584810F0 .. +0x23 bytes.
extern "C" __declspec(naked) void FUN_584810f0_584810F0() {
    __asm {
        push ebp
        mov ebp, esp
        push 0
        push 1000h
        mov ecx, 58962178h
        ; Exact mapped bytes E8 EC 3F 2B 00: call 0x587350f0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x3f
        __asm _emit 0x2b
        __asm _emit 0x00
        push 58892e90h
        ; Exact mapped bytes E8 DB 08 3B 00: call 0x588319e9
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x08
        __asm _emit 0x3b
        __asm _emit 0x00
        add esp, 4
        pop ebp
        ret
    }
}
