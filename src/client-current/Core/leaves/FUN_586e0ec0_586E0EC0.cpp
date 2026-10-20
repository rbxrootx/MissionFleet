// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586E0EC0 .. +0x25 bytes.
extern "C" __declspec(naked) void FUN_586e0ec0_586E0EC0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        push 18h
        mov ecx, dword ptr [ebp - 4]
        add ecx, 21ec4h
        push ecx
        ; Exact mapped bytes E8 A4 32 0D 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x32
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 0ch
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
