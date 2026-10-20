// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883215E .. +0x23 bytes.
extern "C" __declspec(naked) void FUN_5883215e_5883215E() {
    __asm {
        push ebp
        mov ebp, esp
        cmp dword ptr [ebp + 0ch], 1
        ; Exact mapped bytes 75 05: jne 0x5883216c
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 A5 06 00 00: call 0x58832811
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [ebp + 10h]
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 AB FE FF FF: call 0x58832025
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
