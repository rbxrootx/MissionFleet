// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004417E0 .. +0x2A bytes.
extern "C" __declspec(naked) void FUN_004417e0_004417E0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 B9 00 00 00: call 0x4418b0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 DC 6F 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x6f
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
