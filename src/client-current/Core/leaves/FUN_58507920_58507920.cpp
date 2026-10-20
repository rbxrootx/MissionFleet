// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58507920 .. +0x22 bytes.
extern "C" __declspec(naked) void FUN_58507920_58507920() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 20h
        ; Exact mapped bytes E8 3E F5 FF FF: call 0x58506e70
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        add ecx, 20h
        ; Exact mapped bytes E8 13 F5 FF FF: call 0x58506e50
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
