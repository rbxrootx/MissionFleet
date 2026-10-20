// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004391B0 .. +0x38 bytes.
extern "C" __declspec(naked) void FUN_004391b0_004391B0() {
    __asm {
        mov eax, 43b2d8h
        ; Exact mapped bytes E8 4E 64 FE FF: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x64
        __asm _emit 0xfe
        __asm _emit 0xff
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [ebp - 10h], esi
        mov dword ptr [esi], 43f460h
        and dword ptr [ebp - 4], 0
        ; Exact mapped bytes E8 18 00 00 00: call 0x4391e8
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        or dword ptr [ebp - 4], 0ffffffffh
        mov ecx, esi
        ; Exact mapped bytes E8 6B 87 FF FF: call 0x431946
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x87
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        pop esi
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        leave
        ret
    }
}
