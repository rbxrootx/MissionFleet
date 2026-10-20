// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5857D7F0 .. +0x23 bytes.
extern "C" __declspec(naked) void FUN_5857d7f0_5857D7F0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 0
        push 0
        push 0
        push 0
        push 1
        push 8001b009h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 82 F1 2A 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xf1
        __asm _emit 0x2a
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
