// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586E2A70 .. +0x28 bytes.
extern "C" __declspec(naked) void FUN_586e2a70_586E2A70() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8ch]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 FF 86 0D 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x86
        __asm _emit 0x0d
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
