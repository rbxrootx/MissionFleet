// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5879F2E0 .. +0x25 bytes.
extern "C" __declspec(naked) void FUN_5879f2e0_5879F2E0() {
    __asm {
        mov eax, dword ptr [esp + 4]
        test eax, eax
        ; Exact mapped bytes 74 18: je 0x5879f300
        __asm _emit 0x74
        __asm _emit 0x18
        mov ecx, dword ptr [eax + 40h]
        test ecx, ecx
        ; Exact mapped bytes 74 11: je 0x5879f300
        __asm _emit 0x74
        __asm _emit 0x11
        mov eax, dword ptr [eax + 44h]
        test eax, eax
        ; Exact mapped bytes 74 0A: je 0x5879f300
        __asm _emit 0x74
        __asm _emit 0x0a
        push dword ptr [esp + 8]
        push eax
        ; Exact mapped bytes FF D1: call ecx
        __asm _emit 0xff
        __asm _emit 0xd1
        add esp, 8
        ; Exact mapped bytes E9 0B 34 0C 00: jmp 0x58862710
        __asm _emit 0xe9
        __asm _emit 0x0b
        __asm _emit 0x34
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
