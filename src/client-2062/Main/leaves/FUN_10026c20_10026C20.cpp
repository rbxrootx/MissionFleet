// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10026C20 .. +0x98 bytes.
extern "C" __declspec(naked) void FUN_10026c20_10026C20() {
    __asm {
        push ebx
        mov eax, ecx
        push esi
        mov esi, dword ptr [esp + 0ch]
        push edi
        lea edi, [eax + 50h]
        mov ecx, 0dfh
        lea edx, [eax + 64h]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov edi, 0aah
        mov esi, 0ffffff84h
        ; Exact mapped bytes 66 31 78 58: xor word ptr [eax + 0x58], di
        __asm _emit 0x66
        __asm _emit 0x31
        __asm _emit 0x78
        __asm _emit 0x58
        ; Exact mapped bytes 66 31 78 5A: xor word ptr [eax + 0x5a], di
        __asm _emit 0x66
        __asm _emit 0x31
        __asm _emit 0x78
        __asm _emit 0x5a
        ; Exact mapped bytes 66 31 78 5C: xor word ptr [eax + 0x5c], di
        __asm _emit 0x66
        __asm _emit 0x31
        __asm _emit 0x78
        __asm _emit 0x5c
        lea ecx, [eax + 7ch]
        sub esi, eax
        ; Exact mapped bytes 66 31 3A: xor word ptr [edx], di
        __asm _emit 0x66
        __asm _emit 0x31
        __asm _emit 0x3a
        mov bl, byte ptr [ecx]
        xor bl, 0aah
        add edx, 2
        mov byte ptr [ecx], bl
        inc ecx
        lea ebx, [esi + ecx]
        cmp ebx, 0ch
        ; Exact mapped bytes 7C EA: jl 0x10026c51
        __asm _emit 0x7c
        __asm _emit 0xea
        mov ecx, dword ptr [eax + 60h]
        mov esi, dword ptr [eax + 0a8h]
        mov edx, dword ptr [eax + 0ach]
        ; Exact mapped bytes 66 31 B8 A0 00 00 00: xor word ptr [eax + 0xa0], di
        __asm _emit 0x66
        __asm _emit 0x31
        __asm _emit 0xb8
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, 0aa0h
        mov dword ptr [eax + 60h], ecx
        mov ecx, 0aaaaaaaah
        xor esi, ecx
        xor edx, ecx
        mov ecx, eax
        mov dword ptr [eax + 0a8h], esi
        mov dword ptr [eax + 0ach], edx
        ; Exact mapped bytes E8 1E 00 00 00: call 0x10026cc0
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes A1 F0 56 1C 10: mov eax, dword ptr [0x101c56f0]
        __asm _emit 0xa1
        __asm _emit 0xf0
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 0d48h]
        ; Exact mapped bytes E8 2E A2 08 00: call 0x100b0ee0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xa2
        __asm _emit 0x08
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
