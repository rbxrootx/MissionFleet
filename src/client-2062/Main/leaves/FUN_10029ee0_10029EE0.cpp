// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10029EE0 .. +0x80 bytes.
extern "C" __declspec(naked) void FUN_10029ee0_10029EE0() {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        xor edx, edx
        mov esi, 1
        cmp eax, edx
        mov dword ptr [ecx + 50h], edx
        mov dword ptr [ecx + 60h], edx
        mov dword ptr [ecx + 58h], edx
        mov dword ptr [ecx + 5ch], edx
        mov dword ptr [ecx + 64h], 0ffffffffh
        mov dword ptr [ecx + 68h], esi
        mov dword ptr [ecx + 6ch], esi
        mov dword ptr [ecx + 70h], edx
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes 74 48: je 0x10029f57
        __asm _emit 0x74
        __asm _emit 0x48
        mov edx, dword ptr [eax + 18h]
        push edi
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax + 1ch]
        mov dword ptr [ecx + 10h], edx
        lea edx, [eax + 20h]
        lea esi, [ecx + 14h]
        mov edi, dword ptr [edx]
        mov dword ptr [esi], edi
        mov edi, dword ptr [edx + 4]
        mov dword ptr [esi + 4], edi
        mov edi, dword ptr [edx + 8]
        mov dword ptr [esi + 8], edi
        pop edi
        mov edx, dword ptr [edx + 0ch]
        mov dword ptr [esi + 0ch], edx
        xor edx, edx
        ; Exact mapped bytes 66 8B 50 0C: mov dx, word ptr [eax + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x0c
        mov eax, 38e38e39h
        imul edx
        sar edx, 3
        mov eax, edx
        pop esi
        shr eax, 1fh
        add edx, eax
        mov dword ptr [ecx + 74h], edx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, esi
        pop esi
        mov dword ptr [ecx + 74h], eax
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
