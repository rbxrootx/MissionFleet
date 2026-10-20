// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100FB2E0 .. +0x22 bytes.
extern "C" __declspec(naked) void FUN_100fb2e0_100FB2E0() {
    __asm {
        mov ecx, dword ptr [ecx + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 16: je 0x100fb2fd
        __asm _emit 0x74
        __asm _emit 0x16
        mov eax, dword ptr [esp + 4]
        push eax
        ; Exact mapped bytes E8 AF 80 FF FF: call 0x100f33a0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x80
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100fb2fd
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, 1
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
