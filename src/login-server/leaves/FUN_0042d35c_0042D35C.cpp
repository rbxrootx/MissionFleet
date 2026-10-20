// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042D35C .. +0x29 bytes.
extern "C" __declspec(naked) void FUN_0042d35c_0042D35C() {
    __asm {
        push esi
        mov esi, ecx
        push 0
        push dword ptr [esi + 8]
        ; Exact mapped bytes E8 58 FF FF FF: call 0x42d2c1
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 8]
        mov dword ptr [eax + 8], ecx
        mov ecx, dword ptr [esi + 8]
        test ecx, ecx
        ; Exact mapped bytes 74 04: je 0x42d37b
        __asm _emit 0x74
        __asm _emit 0x04
        mov dword ptr [ecx], eax
        ; Exact mapped bytes EB 03: jmp 0x42d37e
        __asm _emit 0xeb
        __asm _emit 0x03
        mov dword ptr [esi + 4], eax
        mov dword ptr [esi + 8], eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
