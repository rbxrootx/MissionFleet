// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58797BF0 .. +0x2C bytes.
extern "C" __declspec(naked) void FUN_58797bf0_58797BF0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 588b6c88h
        mov ecx, dword ptr [ebp - 4]
        add ecx, 8
        ; Exact mapped bytes E8 E5 04 00 00: call 0x587980f0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        add ecx, 8
        ; Exact mapped bytes E8 B9 FF FF FF: call 0x58797bd0
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
