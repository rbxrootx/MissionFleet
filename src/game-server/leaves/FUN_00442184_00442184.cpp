// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00442184 .. +0x2A bytes.
extern "C" __declspec(naked) void FUN_00442184_00442184() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 0A BD 0F 00: call 0x53dea8
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xbd
        __asm _emit 0x0f
        __asm _emit 0x00
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 38 66 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x66
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
