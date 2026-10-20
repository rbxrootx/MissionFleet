// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5879EE30 .. +0x4A bytes.
extern "C" __declspec(naked) void FUN_5879ee30_5879EE30() {
    __asm {
        mov eax, dword ptr [esp + 8]
        mov ecx, 588b7714h
        test eax, eax
        cmovne ecx, eax
        push ecx
        push 588b7720h
        push 2
        ; Exact mapped bytes E8 15 AE 0B 00: call 0x58859c60
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xae
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        push eax
        ; Exact mapped bytes E8 5C 27 D1 FF: call 0x584b15b0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x27
        __asm _emit 0xd1
        __asm _emit 0xff
        add esp, 0ch
        push 588b70a8h
        push 2
        ; Exact mapped bytes E8 FD AD 0B 00: call 0x58859c60
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xad
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        push eax
        ; Exact mapped bytes E8 44 27 D1 FF: call 0x584b15b0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x27
        __asm _emit 0xd1
        __asm _emit 0xff
        add esp, 8
        push 1
        push dword ptr [esp + 8]
        ; Exact mapped bytes E8 66 04 00 00: call 0x5879f2e0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
    }
}
