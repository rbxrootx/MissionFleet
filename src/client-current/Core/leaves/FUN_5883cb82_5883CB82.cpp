// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883CB82 .. +0x25 bytes.
extern "C" __declspec(naked) void FUN_5883cb82_5883CB82() {
    __asm {
        push ebp
        mov ebp, esp
        push dword ptr [ebp + 14h]
        push dword ptr [ebp + 10h]
        push dword ptr [ebp + 0ch]
        push -1
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 38 32 D4 FF: call 0x5857fdd0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x32
        __asm _emit 0xd4
        __asm _emit 0xff
        push dword ptr [eax + 4]
        push dword ptr [eax]
        ; Exact mapped bytes E8 1A 4B 02 00: call 0x588616bc
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x4b
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 1ch
        pop ebp
        ret
    }
}
