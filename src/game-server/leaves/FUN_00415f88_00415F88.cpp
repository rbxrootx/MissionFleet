// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00415F88 .. +0x31 bytes.
extern "C" __declspec(naked) void FUN_00415f88_00415F88() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        push 1
        push 48ch
        mov ecx, dword ptr [ebp - 4]
        add ecx, 0b0h
        ; Exact mapped bytes E8 65 D9 FE FF: call 0x403910
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xd9
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 2B 28 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x28
        __asm _emit 0x09
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
