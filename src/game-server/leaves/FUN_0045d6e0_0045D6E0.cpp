// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045D6E0 .. +0x26 bytes.
extern "C" __declspec(naked) void FUN_0045d6e0_0045D6E0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 08 03 00 00: call 0x45da00
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 DE B0 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xb0
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
