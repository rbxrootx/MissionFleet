// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042CF2D .. +0x38 bytes.
extern "C" __declspec(naked) void FID_conflict___1CHotKeyCtrl__UAE_XZ_0042CF2D() {
    __asm {
        mov eax, 43aa28h
        ; Exact mapped bytes E8 D1 26 FF FF: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x26
        __asm _emit 0xff
        __asm _emit 0xff
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [ebp - 10h], esi
        mov dword ptr [esi], 43e3cch
        and dword ptr [ebp - 4], 0
        ; Exact mapped bytes E8 BB 2B 00 00: call 0x42fb08
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x2b
        __asm _emit 0x00
        __asm _emit 0x00
        or dword ptr [ebp - 4], 0ffffffffh
        mov ecx, esi
        ; Exact mapped bytes E8 F2 29 00 00: call 0x42f94a
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x29
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
