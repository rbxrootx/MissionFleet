// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58507980 .. +0x22 bytes.
extern "C" __declspec(naked) void FUN_58507980_58507980() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 8
        ; Exact mapped bytes E8 7E F5 FF FF: call 0x58506f10
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        add ecx, 8
        ; Exact mapped bytes E8 B3 F4 FF FF: call 0x58506e50
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
