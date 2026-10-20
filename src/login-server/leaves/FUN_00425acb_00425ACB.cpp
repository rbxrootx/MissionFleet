// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00425ACB .. +0x25 bytes.
extern "C" __declspec(naked) void FUN_00425acb_00425ACB() {
    __asm {
        push edi
        mov edi, dword ptr [esp + 0ch]
        test edi, edi
        ; Exact mapped bytes 74 1A: je 0x425aee
        __asm _emit 0x74
        __asm _emit 0x1a
        push esi
        mov esi, dword ptr [esp + 0ch]
        push esi
        ; Exact mapped bytes E8 61 90 FF FF: call 0x41eb40
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x90
        __asm _emit 0xff
        __asm _emit 0xff
        inc eax
        push eax
        push esi
        add esi, edi
        push esi
        ; Exact mapped bytes E8 96 95 FF FF: call 0x41f080
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x95
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        pop esi
        pop edi
        ret
    }
}
