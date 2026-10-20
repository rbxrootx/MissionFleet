// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100529D0 .. +0xB2 bytes.
extern "C" __declspec(naked) void FUN_100529d0_100529D0() {
    __asm {
        mov edx, ecx
        or eax, 0ffffffffh
        mov ecx, 0fffffffeh
        push edi
        mov dword ptr [edx + 90h], ecx
        mov dword ptr [edx + 94h], ecx
        mov ecx, dword ptr [edx + 0bch]
        mov dword ptr [edx + 88h], eax
        imul ecx, dword ptr [edx + 0b8h]
        mov dword ptr [edx + 8ch], eax
        mov dword ptr [edx + 98h], eax
        mov dword ptr [edx + 9ch], eax
        xor eax, eax
        mov dword ptr [edx + 9a0h], eax
        mov dword ptr [edx + 0f0h], eax
        mov dword ptr [edx + 0f8h], eax
        mov dword ptr [edx + 104h], eax
        mov dword ptr [edx + 100h], eax
        mov dword ptr [edx + 0e4h], ecx
        ; Exact mapped bytes 8B 0D 14 D1 1A 10: mov ecx, dword ptr [0x101ad114]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0xd1
        __asm _emit 0x1a
        __asm _emit 0x10
        lea edi, [edx + 9b6h]
        mov dword ptr [edx + 0dch], ecx
        ; Exact mapped bytes 8B 0D 18 D1 1A 10: mov ecx, dword ptr [0x101ad118]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0xd1
        __asm _emit 0x1a
        __asm _emit 0x10
        mov dword ptr [edx + 0e0h], ecx
        lea ecx, [edx + 9b0h]
        mov dword ptr [edx + 0fch], 0c8h
        mov dword ptr [edx + 0ech], eax
        mov dword ptr [edx + 9ach], eax
        ; Exact mapped bytes 66 89 82 D8 00 00 00: mov word ptr [edx + 0xd8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x82
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ecx], eax
        ; Exact mapped bytes 66 89 41 04: mov word ptr [ecx + 4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x04
        mov ecx, 19h
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop edi
        ret
    }
}
