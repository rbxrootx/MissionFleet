// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004119E3 .. +0x3F bytes.
extern "C" __declspec(naked) void FUN_004119e3_004119E3() {
    __asm {
        mov eax, 43a3dbh
        ; Exact mapped bytes E8 1B DC 00 00: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [ebp - 10h], esi
        mov dword ptr [esi], 43d580h
        lea ecx, [esi + 10h]
        mov dword ptr [ebp - 4], 1
        ; Exact mapped bytes E8 A2 C1 01 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xc1
        __asm _emit 0x01
        __asm _emit 0x00
        and byte ptr [ebp - 4], 0
        lea ecx, [esi + 0ch]
        ; Exact mapped bytes E8 96 C1 01 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xc1
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
