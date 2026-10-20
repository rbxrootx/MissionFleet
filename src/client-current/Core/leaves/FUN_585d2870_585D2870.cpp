// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585D2870 .. +0x2A bytes.
extern "C" __declspec(naked) void FUN_585d2870_585D2870() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 34ch
        ; Exact mapped bytes E8 2B 28 ED FF: call 0x584a50b0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x28
        __asm _emit 0xed
        __asm _emit 0xff
        shl eax, 1
        imul eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        sub eax, dword ptr [ecx + 6220h]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
