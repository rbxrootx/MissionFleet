// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10042680 .. +0xD9 bytes.
extern "C" __declspec(naked) void FUN_10042680_10042680() {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 8]
        xor eax, eax
        mov dword ptr [esi], 10175920h
        mov dword ptr [esi + 60h], ecx
        mov dword ptr [esi + 20h], eax
        mov dword ptr [esi + 38h], 64h
        mov dword ptr [esi + 3ch], 1
        mov dword ptr [esi + 40h], eax
        mov dword ptr [esi + 24h], eax
        mov dword ptr [esi + 4ch], eax
        mov dword ptr [esi + 50h], 0aaaaaaaah
        mov dword ptr [esi + 54h], eax
        mov dword ptr [esi + 0ch], eax
        mov dword ptr [esi + 10h], eax
        mov dword ptr [esi + 30h], eax
        mov edx, dword ptr [ecx + 0e74h]
        push edi
        xor edi, edi
        ; Exact mapped bytes 66 8B 7A 6A: mov di, word ptr [edx + 0x6a]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x7a
        __asm _emit 0x6a
        xor edx, edx
        mov dword ptr [esi + 4], edi
        mov edi, dword ptr [ecx + 0c58h]
        cmp edi, eax
        mov dword ptr [esi + 48h], edi
        setl dl
        dec edx
        mov dword ptr [esi + 28h], eax
        and edx, edi
        mov dword ptr [esi + 48h], edx
        mov edx, dword ptr [ecx + 0c54h]
        mov dword ptr [esi + 2ch], edx
        mov edi, dword ptr [ecx + 0c60h]
        mov edx, 64h
        mov dword ptr [esi + 34h], eax
        sub edx, edi
        mov dword ptr [esi + 14h], eax
        mov dword ptr [esi + 1ch], edx
        mov dword ptr [esi + 5ch], 19h
        mov dword ptr [esi + 58h], 1
        mov dword ptr [esi + 8], 4
        mov eax, dword ptr [ecx + 0c4ch]
        xor eax, 0aaaaaaaah
        lea eax, [eax + eax*4]
        lea eax, [eax + eax*4]
        shl eax, 2
        xor eax, 0aaaaaaaah
        mov dword ptr [esi + 44h], eax
        mov edx, dword ptr [ecx + 374h]
        xor edx, 0aaaaaaaah
        push edx
        ; Exact mapped bytes E8 36 AA 0A 00: call 0x100ed180
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xaa
        __asm _emit 0x0a
        __asm _emit 0x00
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 0E 02 00 00: call 0x10042960
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, esi
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
