// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00430510 .. +0x31 bytes.
extern "C" __declspec(naked) void FUN_00430510_00430510() {
    __asm {
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr [esp + 0ch]
        mov eax, dword ptr [esi + 4]
        sub eax, edi
        sar eax, 1
        ; Exact mapped bytes 74 10: je 0x430531
        __asm _emit 0x74
        __asm _emit 0x10
        add eax, eax
        lea ecx, [edi + 2]
        push eax
        push ecx
        push edi
        ; Exact mapped bytes E8 32 57 03 00: call 0x465c60
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x57
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [esi + 4]
        add eax, -2
        mov dword ptr [esi + 4], eax
        mov eax, edi
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
