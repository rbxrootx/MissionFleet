// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00579A27 .. +0x22 bytes.
extern "C" __declspec(naked) void FUN_00579a27_00579A27() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 198h
        push 67d108h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 1F 08 F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x08
        __asm _emit 0xf6
        __asm _emit 0xff
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
