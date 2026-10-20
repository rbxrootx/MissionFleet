// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1002A0B0 .. +0x5E bytes.
extern "C" __declspec(naked) void FUN_1002a0b0_1002A0B0() {
    __asm {
        push -1
        push 1016db48h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 4], esi
        mov dword ptr [esi], 101756d4h
        mov ecx, dword ptr [esi + 70h]
        mov dword ptr [esp + 10h], 0
        test ecx, ecx
        ; Exact mapped bytes 74 0D: je 0x1002a0ef
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 70h], 0
        mov ecx, esi
        mov dword ptr [esp + 10h], 0ffffffffh
        ; Exact mapped bytes E8 A2 47 0D 00: call 0x100fe8a0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x47
        __asm _emit 0x0d
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 8]
        pop esi
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ret
    }
}
