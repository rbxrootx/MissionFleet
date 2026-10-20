// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100B7CB0 .. +0x2F bytes.
extern "C" __declspec(naked) void FUN_100b7cb0_100B7CB0() {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov edx, 2
        cmp eax, 40000000h
        mov eax, dword ptr [ecx + 84h]
        ; Exact mapped bytes 66 09 50 24: or word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [ecx + 80h]
        ; Exact mapped bytes 66 09 50 24: or word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x50
        __asm _emit 0x24
        mov ecx, dword ptr [ecx + 88h]
        ; Exact mapped bytes 66 09 51 24: or word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
