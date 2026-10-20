// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A6AA0 .. +0x25 bytes.
extern "C" __declspec(naked) void FUN_587a6aa0_587A6AA0() {
    __asm {
        mov eax, dword ptr [esp + 4]
        test eax, eax
        ; Exact mapped bytes 74 10: je 0x587a6ab8
        __asm _emit 0x74
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 290h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x587a6ab8
        __asm _emit 0x74
        __asm _emit 0x06
        mov dword ptr [esp + 4], eax
        ; Exact mapped bytes FF E1: jmp ecx
        __asm _emit 0xff
        __asm _emit 0xe1
        push dword ptr [esp + 8]
        ; Exact mapped bytes E8 4F 2B 0B 00: call 0x58859610
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x2b
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 4
        ret
    }
}
