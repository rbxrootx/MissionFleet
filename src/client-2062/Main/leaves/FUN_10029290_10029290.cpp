// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10029290 .. +0x4A bytes.
extern "C" __declspec(naked) void FUN_10029290_10029290() {
    __asm {
        mov eax, dword ptr [esp + 4]
        test eax, eax
        ; Exact mapped bytes 74 30: je 0x100292c8
        __asm _emit 0x74
        __asm _emit 0x30
        mov eax, dword ptr [ecx + 408h]
        mov edx, 0fff0h
        mov dword ptr [ecx + 448h], 1
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [ecx + 40ch]
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov ecx, dword ptr [ecx + 410h]
        ; Exact mapped bytes 66 21 51 24: and word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ecx + 448h], 0
        ; Exact mapped bytes E8 E9 D9 FF FF: call 0x10026cc0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xd9
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
