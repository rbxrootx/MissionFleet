// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58600BB0 .. +0x40 bytes.
extern "C" __declspec(naked) void FUN_58600bb0_58600BB0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 1c8h
        push 0
        mov eax, dword ptr [ebp - 4]
        add eax, 6e4h
        push eax
        ; Exact mapped bytes E8 44 C2 24 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xc2
        __asm _emit 0x24
        __asm _emit 0x00
        add esp, 0ch
        push 1c8h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        add edx, 6e4h
        push edx
        ; Exact mapped bytes E8 A9 BC 24 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xbc
        __asm _emit 0x24
        __asm _emit 0x00
        add esp, 0ch
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
