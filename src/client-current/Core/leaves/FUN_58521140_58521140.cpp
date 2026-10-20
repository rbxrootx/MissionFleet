// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58521140 .. +0x101 bytes.
extern "C" __declspec(naked) void FUN_58521140_58521140() {
    __asm {
        push ebx
        mov ebx, esp
        sub esp, 8
        and esp, 0fffffff8h
        add esp, 4
        push ebp
        mov ebp, dword ptr [ebx + 4]
        mov dword ptr [esp + 4], ebp
        mov ebp, esp
        push -1
        push 588817f0h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push ebx
        sub esp, 0f8h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], 0
        push 1
        push 40h
        push 1
        mov ecx, dword ptr [ebx + 0ch]
        ; Exact mapped bytes E8 AF 4B FA FF: call 0x584c5d40
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x4b
        __asm _emit 0xfa
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 108h]
        ; Exact mapped bytes E8 B3 E3 FF FF: call 0x5851f550
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xe3
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp - 11h]
        ; Exact mapped bytes E8 14 63 F6 FF: call 0x584874c0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x63
        __asm _emit 0xf6
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        lea ecx, [ebp - 48h]
        ; Exact mapped bytes E8 69 E7 FF FF: call 0x5851f920
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xe7
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 28h], ecx
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 38h], eax
        mov dword ptr [ebp - 34h], ecx
        lea edx, [ebp - 108h]
        push edx
        lea ecx, [ebp - 50h]
        ; Exact mapped bytes E8 E3 E6 FF FF: call 0x5851f8c0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 30h], ecx
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 40h], eax
        mov dword ptr [ebp - 3ch], ecx
        mov edx, dword ptr [ebp - 1ch]
        push edx
        mov eax, dword ptr [ebp - 34h]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        push ecx
        mov edx, dword ptr [ebp - 3ch]
        push edx
        mov eax, dword ptr [ebp - 40h]
        push eax
        mov ecx, dword ptr [ebx + 8]
        ; Exact mapped bytes E8 C0 D9 FF FF: call 0x5851ebd0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xd9
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 18h]
        or ecx, 1
        mov dword ptr [ebp - 18h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 108h]
        ; Exact mapped bytes E8 B5 E9 FF FF: call 0x5851fbe0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebx + 8]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov esp, ebp
        pop ebp
        mov esp, ebx
        pop ebx
        ret
    }
}
