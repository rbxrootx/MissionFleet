// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051808D .. +0x26 bytes.
extern "C" __declspec(naked) void FUN_0051808d_0051808D() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 0
        push 0
        push 400h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 38 E3 FB FF: call 0x4d63dd
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xe3
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F5 76 FB FF: call 0x4cf7a2
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x76
        __asm _emit 0xfb
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
