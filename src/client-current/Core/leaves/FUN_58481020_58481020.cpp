// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58481020 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_58481020_58481020() {
    __asm {
        push ebp
        mov ebp, esp
        push 58898860h
        mov ecx, 5890bf68h
        ; Exact mapped bytes E8 9E 8A 02 00: call 0x584a9ad0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x8a
        __asm _emit 0x02
        __asm _emit 0x00
        push 58892e40h
        ; Exact mapped bytes E8 AD 09 3B 00: call 0x588319e9
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x09
        __asm _emit 0x3b
        __asm _emit 0x00
        add esp, 4
        pop ebp
        ret
    }
}
