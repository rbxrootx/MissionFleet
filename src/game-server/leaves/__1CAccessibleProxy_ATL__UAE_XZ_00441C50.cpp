// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00441C50 .. +0x27 bytes.
extern "C" __declspec(naked) void __1CAccessibleProxy_ATL__UAE_XZ_00441C50() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 8
        ; Exact mapped bytes E8 17 00 00 00: call 0x441c80
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 6D 6B 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x6b
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
