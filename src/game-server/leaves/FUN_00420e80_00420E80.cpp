// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00420E80 .. +0x2A bytes.
extern "C" __declspec(naked) void FUN_00420e80_00420E80() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 B9 03 00 00: call 0x421250
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 3C 79 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x79
        __asm _emit 0x08
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
