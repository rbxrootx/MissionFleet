// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10017440 .. +0x64 bytes.
extern "C" __declspec(naked) void FUN_10017440_10017440() {
    __asm {
        push -1
        push 1016d4e8h
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
        mov dword ptr [esi], 101754a0h
        mov ecx, dword ptr [esi + 94h]
        mov dword ptr [esp + 10h], 0
        test ecx, ecx
        ; Exact mapped bytes 74 10: je 0x10017485
        __asm _emit 0x74
        __asm _emit 0x10
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 94h], 0
        mov ecx, esi
        mov dword ptr [esp + 10h], 0ffffffffh
        ; Exact mapped bytes E8 8C BC 0E 00: call 0x10103120
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xbc
        __asm _emit 0x0e
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
