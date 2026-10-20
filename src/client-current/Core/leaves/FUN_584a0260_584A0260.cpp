// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A0260 .. +0x2C bytes.
extern "C" __declspec(naked) void FUN_584a0260_584A0260() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 0a8h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0a8h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 CB 33 0C 00: call 0x58563650
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x33
        __asm _emit 0x0c
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
