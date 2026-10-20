// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042CD83 .. +0x38 bytes.
extern "C" __declspec(naked) void FID_conflict___1CHotKeyCtrl__UAE_XZ_0042CD83() {
    __asm {
        mov eax, 43aa14h
        ; Exact mapped bytes E8 7B 28 FF FF: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x28
        __asm _emit 0xff
        __asm _emit 0xff
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [ebp - 10h], esi
        mov dword ptr [esi], 43e30ch
        and dword ptr [ebp - 4], 0
        ; Exact mapped bytes E8 65 2D 00 00: call 0x42fb08
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x2d
        __asm _emit 0x00
        __asm _emit 0x00
        or dword ptr [ebp - 4], 0ffffffffh
        mov ecx, esi
        ; Exact mapped bytes E8 9C 2B 00 00: call 0x42f94a
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x2b
        __asm _emit 0x00
        __asm _emit 0x00
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
