// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00417BA9 .. +0x48 bytes.
extern "C" __declspec(naked) void FUN_00417ba9_00417BA9() {
    __asm {
        mov eax, 43ac46h
        ; Exact mapped bytes E8 55 7A 00 00: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x7a
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [ebp - 10h], esi
        mov dword ptr [esi], 43ead8h
        mov dword ptr [ebp - 4], 1
        ; Exact mapped bytes E8 6A B2 01 00: call 0x432e36
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xb2
        __asm _emit 0x01
        __asm _emit 0x00
        and byte ptr [ebp - 4], 0
        lea ecx, [esi + 20h]
        ; Exact mapped bytes E8 E0 5A 01 00: call 0x42d6b8
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x5a
        __asm _emit 0x01
        __asm _emit 0x00
        or dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [esi + 4]
        ; Exact mapped bytes E8 D4 5A 01 00: call 0x42d6b8
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x5a
        __asm _emit 0x01
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
