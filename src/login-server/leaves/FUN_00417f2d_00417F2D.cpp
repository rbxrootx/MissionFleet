// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00417F2D .. +0x5F bytes.
extern "C" __declspec(naked) void FUN_00417f2d_00417F2D() {
    __asm {
        mov eax, 43ac98h
        ; Exact mapped bytes E8 D1 76 00 00: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x76
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [ebp - 10h], esi
        ; Exact mapped bytes E8 E9 99 01 00: call 0x43192c
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x99
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        and dword ptr [ebp - 4], 0
        push 0ah
        lea ecx, [esi + 20h]
        mov dword ptr [esi + 1ch], eax
        ; Exact mapped bytes E8 AE 56 01 00: call 0x42d605
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x56
        __asm _emit 0x01
        __asm _emit 0x00
        or dword ptr [esi + 3ch], 0ffffffffh
        or dword ptr [esi + 40h], 0ffffffffh
        and dword ptr [esi + 44h], 0
        and dword ptr [esi + 48h], 0
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [esi + 4ch], 43ebfch
        mov dword ptr [esi + 50h], 43ebe0h
        mov dword ptr [esi], 43eb4ch
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
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
