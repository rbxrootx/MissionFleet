// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00427962 .. +0x2E bytes.
extern "C" __declspec(naked) void FUN_00427962_00427962() {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        push esi
        ; Exact mapped bytes E8 23 00 00 00: call 0x427990
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        pop ecx
        ; Exact mapped bytes 74 05: je 0x427977
        __asm _emit 0x74
        __asm _emit 0x05
        or eax, 0ffffffffh
        pop esi
        ret
        test byte ptr [esi + 0dh], 40h
        ; Exact mapped bytes 74 0F: je 0x42798c
        __asm _emit 0x74
        __asm _emit 0x0f
        push dword ptr [esi + 10h]
        ; Exact mapped bytes E8 43 0B 00 00: call 0x4284c8
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x0b
        __asm _emit 0x00
        __asm _emit 0x00
        neg eax
        pop ecx
        pop esi
        sbb eax, eax
        ret
        xor eax, eax
        pop esi
        ret
    }
}
