// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00411CE6 .. +0x48 bytes.
extern "C" __declspec(naked) void FUN_00411ce6_00411CE6() {
    __asm {
        mov eax, 43a462h
        ; Exact mapped bytes E8 18 D9 00 00: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xd9
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [ebp - 10h], esi
        mov dword ptr [esi], 43d5c4h
        mov dword ptr [ebp - 4], 2
        ; Exact mapped bytes E8 4A 03 00 00: call 0x412053
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [esi + 1ch]
        mov byte ptr [ebp - 4], 1
        ; Exact mapped bytes E8 83 B5 01 00: call 0x42d298
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xb5
        __asm _emit 0x01
        __asm _emit 0x00
        and byte ptr [ebp - 4], 0
        lea ecx, [esi + 18h]
        ; Exact mapped bytes E8 8A BE 01 00: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xbe
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
