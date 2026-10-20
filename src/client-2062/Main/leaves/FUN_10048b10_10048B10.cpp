// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10048B10 .. +0x4F bytes.
extern "C" __declspec(naked) void FUN_10048b10_10048B10() {
    __asm {
        push -1
        push 1016e948h
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
        mov dword ptr [esi], 10175b30h
        mov dword ptr [esp + 10h], 0
        ; Exact mapped bytes E8 30 3A 12 00: call 0x1016c570
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x3a
        __asm _emit 0x12
        __asm _emit 0x00
        mov ecx, esi
        mov dword ptr [esp + 10h], 0ffffffffh
        ; Exact mapped bytes E8 21 3A 12 00: call 0x1016c570
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x3a
        __asm _emit 0x12
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
