// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00571E54 .. +0x22 bytes.
extern "C" __declspec(naked) void FUN_00571e54_00571E54() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 32ch
        push 5d0930h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 F2 92 F8 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x92
        __asm _emit 0xf8
        __asm _emit 0xff
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
