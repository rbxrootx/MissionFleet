// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00571077 .. +0x22 bytes.
extern "C" __declspec(naked) void FUN_00571077_00571077() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 198h
        push 5d0930h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 CF A0 F8 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xa0
        __asm _emit 0xf8
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
