// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042D029 .. +0x2A bytes.
extern "C" __declspec(naked) void FUN_0042d029_0042D029() {
    __asm {
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr [esi + 4]
        test edi, edi
        ; Exact mapped bytes 74 16: je 0x42d04a
        __asm _emit 0x74
        __asm _emit 0x16
        push 0
        ; Exact mapped bytes E8 2A FF FF FF: call 0x42cf65
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0B: je 0x42d04a
        __asm _emit 0x74
        __asm _emit 0x0b
        push dword ptr [esi + 4]
        lea ecx, [eax + 4]
        ; Exact mapped bytes E8 D4 07 00 00: call 0x42d81e
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        and dword ptr [esi + 4], 0
        mov eax, edi
        pop edi
        pop esi
        ret
    }
}
