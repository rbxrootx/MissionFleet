// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x101066C0 .. +0x5E bytes.
extern "C" __declspec(naked) void FUN_101066c0_101066C0() {
    __asm {
        push -1
        push 10174a98h
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
        mov dword ptr [esi], 101769b4h
        mov ecx, dword ptr [esi + 54h]
        mov dword ptr [esp + 10h], 0
        test ecx, ecx
        ; Exact mapped bytes 74 0D: je 0x101066ff
        __asm _emit 0x74
        __asm _emit 0x0d
        push esi
        ; Exact mapped bytes E8 F8 0A 00 00: call 0x101071f0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 54h], 0
        mov ecx, esi
        mov dword ptr [esp + 10h], 0ffffffffh
        ; Exact mapped bytes E8 82 84 FF FF: call 0x100feb90
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x84
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
