// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004CDCF2 .. +0x40 bytes.
extern "C" __declspec(naked) void FUN_004cdcf2_004CDCF2() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 AF 31 06 00: call 0x530eb9
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x31
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [eax + 4]
        sub eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 11 00 00 00: call 0x4cdd32
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        or al, 1
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
