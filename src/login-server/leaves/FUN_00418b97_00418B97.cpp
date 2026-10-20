// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00418B97 .. +0x107 bytes.
extern "C" __declspec(naked) void FUN_00418b97_00418B97() {
    __asm {
        mov eax, 43ad68h
        ; Exact mapped bytes E8 67 6A 00 00: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x6a
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr [ebp - 10h], esi
        ; Exact mapped bytes E8 7D 8D 01 00: call 0x43192c
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x8d
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        or dword ptr [esi + 28h], 0ffffffffh
        xor edi, edi
        lea ecx, [esi + 58h]
        mov dword ptr [ebp - 4], edi
        mov dword ptr [esi + 1ch], eax
        mov dword ptr [esi + 24h], edi
        mov dword ptr [esi + 4ch], edi
        mov dword ptr [esi + 50h], edi
        mov dword ptr [esi + 54h], edi
        ; Exact mapped bytes E8 BD FF 01 00: call 0x438b8f
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xff
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [esi + 60h], edi
        mov dword ptr [esi + 64h], edi
        mov dword ptr [esi + 70h], edi
        mov dword ptr [esi + 84h], edi
        mov dword ptr [esi + 88h], edi
        mov dword ptr [esi + 8ch], edi
        mov dword ptr [esi + 90h], edi
        mov dword ptr [esi + 94h], edi
        mov dword ptr [esi + 98h], edi
        ; Exact mapped bytes A1 0C 9B 44 00: mov eax, dword ptr [0x449b0c]
        __asm _emit 0xa1
        __asm _emit 0x0c
        __asm _emit 0x9b
        __asm _emit 0x44
        __asm _emit 0x00
        mov dword ptr [esi + 9ch], eax
        mov dword ptr [esi + 0a0h], edi
        mov dword ptr [esi + 0a4h], edi
        mov dword ptr [esi + 0b8h], 43ef50h
        mov dword ptr [esi + 0bch], 43ef10h
        mov dword ptr [esi + 0c0h], 43eee4h
        mov dword ptr [esi + 0c4h], 43eec4h
        mov dword ptr [esi + 0c8h], 43eeach
        mov dword ptr [esi + 0cch], 43ee8ch
        mov dword ptr [esi + 0d0h], 43ee78h
        lea ebx, [esi + 0a8h]
        push 10h
        mov dword ptr [esi + 0d4h], 43ee4ch
        push edi
        mov dword ptr [esi + 0d8h], 43ee30h
        push ebx
        mov dword ptr [esi], 43ed6ch
        ; Exact mapped bytes E8 5B 5E 00 00: call 0x41eae0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        add esp, 0ch
        ; Exact mapped bytes 66 89 3B: mov word ptr [ebx], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x3b
        mov eax, esi
        pop edi
        pop esi
        pop ebx
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
