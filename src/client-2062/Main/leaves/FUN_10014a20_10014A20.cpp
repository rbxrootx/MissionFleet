// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10014A20 .. +0x51 bytes.
extern "C" __declspec(naked) void FUN_10014a20_10014A20() {
    __asm {
        mov eax, dword ptr [esp + 4]
        test eax, eax
        ; Exact mapped bytes 74 26: je 0x10014a4e
        __asm _emit 0x74
        __asm _emit 0x26
        mov eax, dword ptr [ecx + 3b4h]
        mov edx, 1
        ; Exact mapped bytes 66 09 51 24: or word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x51
        __asm _emit 0x24
        push 100h
        ; Exact mapped bytes 66 09 50 24: or word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x50
        __asm _emit 0x24
        mov ecx, dword ptr [ecx + 3b4h]
        ; Exact mapped bytes E8 D5 A6 0E 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xa6
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ecx + 3b4h]
        mov edx, 0fffeh
        ; Exact mapped bytes 66 21 51 24: and word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x51
        __asm _emit 0x24
        push 0
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov ecx, dword ptr [ecx + 3b4h]
        ; Exact mapped bytes E8 B2 A6 0E 00: call 0x100ff120
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xa6
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
