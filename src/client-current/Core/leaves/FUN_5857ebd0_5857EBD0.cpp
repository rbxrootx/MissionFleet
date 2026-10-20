// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5857EBD0 .. +0x28 bytes.
extern "C" __declspec(naked) void FUN_5857ebd0_5857EBD0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 0
        push 0
        push 0
        push 0
        movzx eax, word ptr [ebp + 8]
        push eax
        push 80010028h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 9F DD 2A 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xdd
        __asm _emit 0x2a
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
