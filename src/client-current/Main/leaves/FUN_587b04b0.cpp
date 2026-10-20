// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B04B0 .. +0xDE bytes.
extern "C" __declspec(naked) void FUN_587b04b0() {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 8]
        mov dword ptr [esi], 58999e44h
        mov dword ptr [esi + 6ch], ecx
        mov dword ptr [esi + 38h], 64h
        mov dword ptr [esi + 3ch], 1
        mov dword ptr [esi + 50h], 0aaaaaaaah
        push edi
        xor edi, edi
        mov dword ptr [esi + 20h], edi
        mov dword ptr [esi + 40h], edi
        mov dword ptr [esi + 24h], edi
        mov dword ptr [esi + 4ch], edi
        mov dword ptr [esi + 54h], edi
        mov dword ptr [esi + 0ch], edi
        mov dword ptr [esi + 10h], edi
        mov dword ptr [esi + 30h], edi
        mov eax, dword ptr [ecx + 100ch]
        movzx edx, word ptr [eax + 7eh]
        mov dword ptr [esi + 4], edx
        mov eax, dword ptr [ecx + 0df0h]
        xor edx, edx
        cmp eax, edi
        setl dl
        mov dword ptr [esi + 28h], edi
        dec edx
        and eax, edx
        mov dword ptr [esi + 48h], eax
        mov eax, dword ptr [ecx + 0dech]
        mov dword ptr [esi + 2ch], eax
        mov edx, 64h
        sub edx, dword ptr [ecx + 0df8h]
        mov dword ptr [esi + 34h], edi
        mov dword ptr [esi + 1ch], edx
        mov dword ptr [esi + 14h], edi
        mov dword ptr [esi + 68h], 19h
        mov dword ptr [esi + 58h], 1
        mov dword ptr [esi + 5ch], 1
        mov dword ptr [esi + 60h], edi
        mov dword ptr [esi + 64h], edi
        mov dword ptr [esi + 18h], edi
        mov dword ptr [esi + 8], 4
        mov eax, dword ptr [ecx + 0de4h]
        xor eax, 0aaaaaaaah
        imul eax, eax, 64h
        xor eax, 0aaaaaaaah
        mov dword ptr [esi + 44h], eax
        mov eax, dword ptr [ecx + 398h]
        xor eax, 0aaaaaaaah
        push eax
        ; Exact mapped bytes E8 A4 97 12 00: call 0x588d9d20
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x97
        __asm _emit 0x12
        __asm _emit 0x00
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 1C FE FF FF: call 0x587b03a0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 70h], edi
        pop edi
        mov eax, esi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
