// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58786FB0 .. +0x29 bytes.
extern "C" __declspec(naked) void FUN_58786fb0_58786FB0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes E8 32 02 D5 FF: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x02
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        push 0
        push 0
        push 0
        push 1772h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 9C 1D D5 FF: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x1d
        __asm _emit 0xd5
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
