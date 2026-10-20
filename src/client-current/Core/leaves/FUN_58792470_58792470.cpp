// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58792470 .. +0x29 bytes.
extern "C" __declspec(naked) void FUN_58792470_58792470() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes E8 72 4D D4 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x4d
        __asm _emit 0xd4
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        push 0
        push 0
        push 0
        push 1773h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 DC 68 D4 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x68
        __asm _emit 0xd4
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
