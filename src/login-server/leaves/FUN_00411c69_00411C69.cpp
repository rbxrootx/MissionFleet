// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00411C69 .. +0x61 bytes.
extern "C" __declspec(naked) void FUN_00411c69_00411C69() {
    __asm {
        mov eax, 43a437h
        ; Exact mapped bytes E8 95 D9 00 00: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xd9
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [ebp - 10h], esi
        ; Exact mapped bytes A1 0C 9B 44 00: mov eax, dword ptr [0x449b0c]
        __asm _emit 0xa1
        __asm _emit 0x0c
        __asm _emit 0x9b
        __asm _emit 0x44
        __asm _emit 0x00
        xor edi, edi
        mov dword ptr [ebp - 4], edi
        mov dword ptr [esi + 18h], eax
        push 0ah
        lea ecx, [esi + 1ch]
        mov byte ptr [ebp - 4], 1
        ; Exact mapped bytes E8 A3 B5 01 00: call 0x42d239
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xb5
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        push 0fh
        pop eax
        mov dword ptr [esi + 4], edi
        mov dword ptr [esi + 58h], edi
        mov dword ptr [esi + 3ch], edi
        mov dword ptr [esi + 40h], edi
        mov dword ptr [esi + 54h], eax
        mov dword ptr [esi + 5ch], eax
        mov dword ptr [esi + 8], edi
        mov dword ptr [esi + 0ch], edi
        mov dword ptr [esi + 10h], edi
        mov dword ptr [esi], 43d5c4h
        mov eax, esi
        pop edi
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
