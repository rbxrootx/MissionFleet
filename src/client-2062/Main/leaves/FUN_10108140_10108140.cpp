// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10108140 .. +0x67 bytes.
extern "C" __declspec(naked) void FUN_10108140_10108140() {
    __asm {
        push -1
        push 10174b68h
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
        mov dword ptr [esi], 10176a34h
        mov eax, dword ptr [esi + 0f0h]
        mov dword ptr [esp + 10h], 0
        test eax, eax
        ; Exact mapped bytes 74 13: je 0x10108188
        __asm _emit 0x74
        __asm _emit 0x13
        push eax
        ; Exact mapped bytes E8 09 46 06 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x46
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esi + 0f0h], 0
        mov ecx, esi
        mov dword ptr [esp + 10h], 0ffffffffh
        ; Exact mapped bytes E8 F9 69 FF FF: call 0x100feb90
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x69
        __asm _emit 0xff
        __asm _emit 0xff
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
