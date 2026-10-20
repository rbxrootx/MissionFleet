// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5857E030 .. +0x27 bytes.
extern "C" __declspec(naked) void FUN_5857e030_5857E030() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 0
        push 0
        push 0
        push 0
        ; Exact mapped bytes A1 30 05 96 58: mov eax, dword ptr [0x58960530]
        __asm _emit 0xa1
        __asm _emit 0x30
        __asm _emit 0x05
        __asm _emit 0x96
        __asm _emit 0x58
        push eax
        push 80013105h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 3E E9 2A 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xe9
        __asm _emit 0x2a
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
