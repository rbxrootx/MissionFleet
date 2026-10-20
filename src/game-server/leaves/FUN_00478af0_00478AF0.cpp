// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00478AF0 .. +0x2A bytes.
extern "C" __declspec(naked) void FUN_00478af0_00478AF0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 B9 03 00 00: call 0x478ec0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 CC FC 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xfc
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
