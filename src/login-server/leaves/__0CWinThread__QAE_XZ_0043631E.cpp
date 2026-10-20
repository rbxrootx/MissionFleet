// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043631E .. +0x3D bytes.
extern "C" __declspec(naked) void __0CWinThread__QAE_XZ_0043631E() {
    __asm {
        mov eax, 43a99ch
        ; Exact mapped bytes E8 E0 92 FE FF: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x92
        __asm _emit 0xfe
        __asm _emit 0xff
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [ebp - 10h], esi
        ; Exact mapped bytes E8 F8 B5 FF FF: call 0x43192c
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xb5
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        mov ecx, esi
        mov dword ptr [ebp - 4], eax
        mov dword ptr [esi], 43e170h
        mov dword ptr [esi + 4ch], eax
        mov dword ptr [esi + 50h], eax
        ; Exact mapped bytes E8 0F 00 00 00: call 0x43635b
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov eax, esi
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
