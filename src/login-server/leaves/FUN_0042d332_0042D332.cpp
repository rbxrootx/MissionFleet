// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042D332 .. +0x2A bytes.
extern "C" __declspec(naked) void FUN_0042d332_0042D332() {
    __asm {
        push esi
        mov esi, ecx
        push dword ptr [esi + 4]
        push 0
        ; Exact mapped bytes E8 82 FF FF FF: call 0x42d2c1
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esp + 8]
        mov dword ptr [eax + 8], ecx
        mov ecx, dword ptr [esi + 4]
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x42d352
        __asm _emit 0x74
        __asm _emit 0x05
        mov dword ptr [ecx + 4], eax
        ; Exact mapped bytes EB 03: jmp 0x42d355
        __asm _emit 0xeb
        __asm _emit 0x03
        mov dword ptr [esi + 8], eax
        mov dword ptr [esi + 4], eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
