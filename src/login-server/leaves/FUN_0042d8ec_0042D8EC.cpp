// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042D8EC .. +0x29 bytes.
extern "C" __declspec(naked) void FUN_0042d8ec_0042D8EC() {
    __asm {
        push esi
        push edi
        mov edi, dword ptr [esp + 0ch]
        push edi
        ; Exact mapped bytes E8 EC 1A FF FF: call 0x41f3e4
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x1a
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, eax
        pop ecx
        test esi, esi
        ; Exact mapped bytes 75 11: jne 0x42d910
        __asm _emit 0x75
        __asm _emit 0x11
        ; Exact mapped bytes A1 F4 99 44 00: mov eax, dword ptr [0x4499f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x99
        __asm _emit 0x44
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x42d910
        __asm _emit 0x74
        __asm _emit 0x08
        push edi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        test eax, eax
        pop ecx
        ; Exact mapped bytes 75 E2: jne 0x42d8f2
        __asm _emit 0x75
        __asm _emit 0xe2
        mov eax, esi
        pop edi
        pop esi
        ret
    }
}
