// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5850BA10 .. +0x26 bytes.
extern "C" __declspec(naked) void FUN_5850ba10_5850BA10() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10h]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 8]
        sub edx, 1
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 FF 3F FC FF: call 0x584cfa30
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x3f
        __asm _emit 0xfc
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
