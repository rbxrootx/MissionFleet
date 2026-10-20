// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004011C5 .. +0x23 bytes.
extern "C" __declspec(naked) void FUN_004011c5_004011C5() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1E 01 00 00: call 0x4012f2
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 0C 00 00 00: call 0x4011e8
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 8C 01 00 00: call 0x401370
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
