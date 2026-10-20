// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58600B80 .. +0x2C bytes.
extern "C" __declspec(naked) void FUN_58600b80_58600B80() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8ach]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 CB 09 07 00: call 0x58671570
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x09
        __asm _emit 0x07
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
