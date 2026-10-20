// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004CD294 .. +0x23 bytes.
extern "C" __declspec(naked) void FUN_004cd294_004CD294() {
    __asm {
        push ebp
        mov ebp, esp
        push 600h
        push 0
        ; Exact mapped bytes E8 79 FF FF FF: call 0x4cd21c
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 4cd272h
        ; Exact mapped bytes E8 33 B6 FD FF: call 0x4a88e0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xb6
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 4
        ; Exact mapped bytes A2 08 F1 5D 00: mov byte ptr [0x5df108], al
        __asm _emit 0xa2
        __asm _emit 0x08
        __asm _emit 0xf1
        __asm _emit 0x5d
        __asm _emit 0x00
        pop ebp
        ret
    }
}
