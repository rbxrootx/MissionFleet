// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00418DE6 .. +0xA8 bytes.
extern "C" __declspec(naked) void FUN_00418de6_00418DE6() {
    __asm {
        mov eax, 43ada8h
        ; Exact mapped bytes E8 18 68 00 00: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 1ch
        push esi
        mov esi, ecx
        push edi
        push 0
        mov ecx, dword ptr [esi + 34h]
        mov eax, dword ptr [esi + 38h]
        sub ecx, dword ptr [esi + 2ch]
        sub eax, dword ptr [esi + 30h]
        mov dword ptr [ebp - 14h], ecx
        lea ecx, [ebp - 28h]
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes E8 40 B3 01 00: call 0x434153
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xb3
        __asm _emit 0x01
        __asm _emit 0x00
        and dword ptr [ebp - 4], 0
        lea eax, [ebp - 14h]
        push eax
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 D0 C9 01 00: call 0x4357f3
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xc9
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4ch]
        lea edx, [ebp - 14h]
        push edx
        push 1
        mov ecx, dword ptr [eax]
        push eax
        ; Exact mapped bytes FF 51 44: call dword ptr [ecx + 0x44]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x44
        mov edi, eax
        test edi, edi
        ; Exact mapped bytes 7C 31: jl 0x418e69
        __asm _emit 0x7c
        __asm _emit 0x31
        mov eax, dword ptr [esi + 4ch]
        lea edx, [ebp - 14h]
        push edx
        push 1
        mov ecx, dword ptr [eax]
        push eax
        ; Exact mapped bytes FF 51 48: call dword ptr [ecx + 0x48]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x48
        test eax, eax
        ; Exact mapped bytes 7C 1E: jl 0x418e69
        __asm _emit 0x7c
        __asm _emit 0x1e
        lea eax, [ebp - 14h]
        lea ecx, [ebp - 28h]
        push eax
        ; Exact mapped bytes E8 2A CA 01 00: call 0x435881
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xca
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        add eax, dword ptr [esi + 2ch]
        mov dword ptr [esi + 34h], eax
        mov eax, dword ptr [esi + 30h]
        add eax, dword ptr [ebp - 10h]
        mov dword ptr [esi + 38h], eax
        xor eax, eax
        lea ecx, [ebp - 28h]
        test edi, edi
        setge al
        or dword ptr [ebp - 4], 0ffffffffh
        mov esi, eax
        ; Exact mapped bytes E8 47 B3 01 00: call 0x4341c5
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xb3
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
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
