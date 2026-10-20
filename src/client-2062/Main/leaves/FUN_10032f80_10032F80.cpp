// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10032F80 .. +0x4B bytes.
extern "C" __declspec(naked) void FUN_10032f80_10032F80() {
    __asm {
        mov eax, dword ptr [esp + 4]
        test eax, eax
        ; Exact mapped bytes 74 36: je 0x10032fbe
        __asm _emit 0x74
        __asm _emit 0x36
        mov dl, byte ptr [esp + 0ch]
        mov dword ptr [ecx + 0b8h], eax
        mov eax, dword ptr [esp + 8]
        and edx, 1
        mov dword ptr [ecx + 90h], eax
        ; Exact mapped bytes 66 8B 41 70: mov ax, word ptr [ecx + 0x70]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x70
        shl edx, 4
        and eax, 0ffefh
        mov dword ptr [ecx + 0a8h], 40000000h
        or edx, eax
        ; Exact mapped bytes 66 89 51 70: mov word ptr [ecx + 0x70], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x70
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [ecx + 0a8h], 0
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
