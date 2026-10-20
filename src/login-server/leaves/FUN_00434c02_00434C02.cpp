// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00434C02 .. +0x2E bytes.
extern "C" __declspec(naked) void FUN_00434c02_00434C02() {
    __asm {
        push esi
        ; Exact mapped bytes E8 53 08 FE FF: call 0x41545b
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x08
        __asm _emit 0xfe
        __asm _emit 0xff
        mov esi, eax
        test esi, esi
        ; Exact mapped bytes 74 1E: je 0x434c2c
        __asm _emit 0x74
        __asm _emit 0x1e
        mov eax, dword ptr [esi]
        mov ecx, esi
        ; Exact mapped bytes FF 90 B0 00 00 00: call dword ptr [eax + 0xb0]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 10: je 0x434c2c
        __asm _emit 0x74
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 68h]
        test ecx, ecx
        ; Exact mapped bytes 74 09: je 0x434c2c
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ecx]
        push dword ptr [esp + 8]
        ; Exact mapped bytes FF 50 64: call dword ptr [eax + 0x64]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x64
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
