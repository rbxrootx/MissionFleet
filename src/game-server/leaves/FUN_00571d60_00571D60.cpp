// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00571D60 .. +0x22 bytes.
extern "C" __declspec(naked) void FUN_00571d60_00571D60() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 30bh
        push 5d0930h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 E6 93 F8 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x93
        __asm _emit 0xf8
        __asm _emit 0xff
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
