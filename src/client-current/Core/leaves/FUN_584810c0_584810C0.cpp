// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584810C0 .. +0x23 bytes.
extern "C" __declspec(naked) void FUN_584810c0_584810C0() {
    __asm {
        push ebp
        mov ebp, esp
        push 0
        push 1000h
        mov ecx, 589620d8h
        ; Exact mapped bytes E8 1C 40 2B 00: call 0x587350f0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x40
        __asm _emit 0x2b
        __asm _emit 0x00
        push 58892e80h
        ; Exact mapped bytes E8 0B 09 3B 00: call 0x588319e9
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x09
        __asm _emit 0x3b
        __asm _emit 0x00
        add esp, 4
        pop ebp
        ret
    }
}
