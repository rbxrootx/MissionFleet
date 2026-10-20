// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5850AD80 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_5850ad80_5850AD80() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        add eax, 8
        push eax
        movzx ecx, byte ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 08 5B 32 00: call 0x588308a0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x5b
        __asm _emit 0x32
        __asm _emit 0x00
        add esp, 8
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
