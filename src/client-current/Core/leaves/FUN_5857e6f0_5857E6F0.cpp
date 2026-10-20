// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5857E6F0 .. +0x28 bytes.
extern "C" __declspec(naked) void FUN_5857e6f0_5857E6F0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 0
        push 0
        push 0
        movzx eax, word ptr [ebp + 8]
        push eax
        push 0
        push 80011106h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7F E2 2A 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xe2
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
