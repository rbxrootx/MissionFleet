// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004260C8 .. +0x2A bytes.
extern "C" __declspec(naked) void FUN_004260c8_004260C8() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C6 7D 11 00: call 0x53dea8
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x7d
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 F4 26 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x26
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
