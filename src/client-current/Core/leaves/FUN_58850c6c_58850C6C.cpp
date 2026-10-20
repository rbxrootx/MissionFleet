// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58850C6C .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_58850c6c_58850C6C() {
    __asm {
        ; Exact mapped bytes E8 2F 7F 01 00: call 0x58868ba0
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x7f
        __asm _emit 0x01
        __asm _emit 0x00
        imul ecx, dword ptr [eax + 18h], 343fdh
        add ecx, 269ec3h
        mov dword ptr [eax + 18h], ecx
        shr ecx, 10h
        and ecx, 7fffh
        mov eax, ecx
        ret
    }
}
