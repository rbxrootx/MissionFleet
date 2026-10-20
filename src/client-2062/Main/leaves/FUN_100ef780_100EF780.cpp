// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100EF780 .. +0x40 bytes.
extern "C" __declspec(naked) void FUN_100ef780_100EF780() {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov dword ptr [ecx + 5c58h], eax
        test eax, eax
        mov eax, dword ptr [ecx + 0efch]
        ; Exact mapped bytes 74 16: je 0x100ef7aa
        __asm _emit 0x74
        __asm _emit 0x16
        mov edx, 1
        ; Exact mapped bytes 66 09 50 24: or word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x50
        __asm _emit 0x24
        mov ecx, dword ptr [ecx + 0f00h]
        ; Exact mapped bytes 66 09 51 24: or word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, 0fffeh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov ecx, dword ptr [ecx + 0f00h]
        ; Exact mapped bytes 66 21 51 24: and word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
