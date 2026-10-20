// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883C331 .. +0x22 bytes.
extern "C" __declspec(naked) void FUN_5883c331_5883C331() {
    __asm {
        push ebp
        mov ebp, esp
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 44 4E 01 00: call 0x58851180
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x4e
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 48 A8 02 00: call 0x58866b90
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xa8
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 10h
        neg eax
        sbb al, al
        inc al
        pop ebp
        ret
    }
}
