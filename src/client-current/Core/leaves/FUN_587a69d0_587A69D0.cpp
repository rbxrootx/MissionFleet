// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A69D0 .. +0x2C bytes.
extern "C" __declspec(naked) void FUN_587a69d0_587A69D0() {
    __asm {
        mov eax, dword ptr [esp + 4]
        test eax, eax
        ; Exact mapped bytes 74 23: je 0x587a69fb
        __asm _emit 0x74
        __asm _emit 0x23
        mov ecx, dword ptr [esp + 8]
        test ecx, ecx
        ; Exact mapped bytes 74 1B: je 0x587a69fb
        __asm _emit 0x74
        __asm _emit 0x1b
        mov edx, dword ptr [eax + 294h]
        test edx, edx
        ; Exact mapped bytes 74 0A: je 0x587a69f4
        __asm _emit 0x74
        __asm _emit 0x0a
        mov dword ptr [esp + 8], ecx
        mov dword ptr [esp + 4], eax
        ; Exact mapped bytes FF E2: jmp edx
        __asm _emit 0xff
        __asm _emit 0xe2
        push ecx
        ; Exact mapped bytes E8 06 2C 0B 00: call 0x58859600
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x2c
        __asm _emit 0x0b
        __asm _emit 0x00
        pop ecx
        ret
    }
}
