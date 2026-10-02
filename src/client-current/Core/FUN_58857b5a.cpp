// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58857B5A .. +0x16 bytes.
extern "C" __declspec(naked) void FUN_58857b5a() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push 0
        push 0
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 04 FE FF FF: call 0x5885796f
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        pop ebp
        ret
    }
}
