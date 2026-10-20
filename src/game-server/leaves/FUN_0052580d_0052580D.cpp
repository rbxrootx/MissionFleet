// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052580D .. +0x26 bytes.
extern "C" __declspec(naked) void FUN_0052580d_0052580D() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 0
        push 0
        push 400h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 28 97 FC FF: call 0x4eef4d
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x97
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 45 C0 FC FF: call 0x4f1872
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xc0
        __asm _emit 0xfc
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
