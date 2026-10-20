// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00436E23 .. +0x31 bytes.
extern "C" __declspec(naked) void FUN_00436e23_00436E23() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        push 1
        push 478h
        mov ecx, dword ptr [ebp - 4]
        add ecx, 0b0h
        ; Exact mapped bytes E8 CA CA FC FF: call 0x403910
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xca
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 90 19 07 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x19
        __asm _emit 0x07
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
