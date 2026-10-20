// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040D310 .. +0x24 bytes.
extern "C" __declspec(naked) void FUN_0040d310_0040D310() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 50h
        ; Exact mapped bytes E8 2E 02 00 00: call 0x40d550
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 68h
        ; Exact mapped bytes E8 23 02 00 00: call 0x40d550
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
