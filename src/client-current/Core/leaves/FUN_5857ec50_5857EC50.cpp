// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5857EC50 .. +0x23 bytes.
extern "C" __declspec(naked) void FUN_5857ec50_5857EC50() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80011103h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 22 DD 2A 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0xdd
        __asm _emit 0x2a
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
