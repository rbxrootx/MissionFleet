// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040A9E0 .. +0x27 bytes.
extern "C" __declspec(naked) void FUN_0040a9e0_0040A9E0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 38h
        ; Exact mapped bytes E8 D7 FA FF FF: call 0x40a4d0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 DD DD 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xdd
        __asm _emit 0x09
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
