// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585347D0 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_585347d0_585347D0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        imul eax, dword ptr [ebp + 0ch], 11ch
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 C8 26 F5 FF: call 0x58486eb0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x26
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 8
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
