// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0047D010 .. +0x2A bytes.
extern "C" __declspec(naked) void FUN_0047d010_0047D010() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes E8 A7 06 00 00: call 0x47d6d0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 AA B7 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xb7
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
