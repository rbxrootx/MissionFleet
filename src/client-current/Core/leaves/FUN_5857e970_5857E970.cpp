// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5857E970 .. +0x23 bytes.
extern "C" __declspec(naked) void FUN_5857e970_5857E970() {
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
        push 8001c004h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 02 E0 2A 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xe0
        __asm _emit 0x2a
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
