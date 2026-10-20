// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588F3F70 .. +0x22 bytes.
extern "C" __declspec(naked) void FUN_588f3f70() {
    __asm {
        mov ecx, dword ptr [ecx + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 16: je 0x588f3f8d
        __asm _emit 0x74
        __asm _emit 0x16
        mov eax, dword ptr [esp + 4]
        push eax
        ; Exact mapped bytes E8 1F 34 FF FF: call 0x588e73a0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x34
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x588f3f8d
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
