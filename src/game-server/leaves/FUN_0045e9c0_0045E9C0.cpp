// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045E9C0 .. +0x28 bytes.
extern "C" __declspec(naked) void FUN_0045e9c0_0045E9C0() {
    __asm {
        push ebp
        mov ebp, esp
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7D 07: jge 0x45e9d0
        __asm _emit 0x7d
        __asm _emit 0x07
        mov dword ptr [ebp + 8], 0
        mov eax, dword ptr [ebp + 8]
        shl eax, 2
        push eax
        ; Exact mapped bytes E8 E4 E9 08 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xe9
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 FA 9D 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x9d
        __asm _emit 0x04
        __asm _emit 0x00
        pop ebp
        ret
    }
}
