// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F24C0 .. +0x2C bytes.
extern "C" __declspec(naked) void FUN_004f24c0_004F24C0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 89 2F 03 00: call 0x525458
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x2f
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 4
        ; Exact mapped bytes E8 7E 2F 03 00: call 0x525458
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x2f
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 8
        ; Exact mapped bytes E8 73 2F 03 00: call 0x525458
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x2f
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
