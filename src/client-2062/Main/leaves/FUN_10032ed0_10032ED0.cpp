// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10032ED0 .. +0x63 bytes.
extern "C" __declspec(naked) void FUN_10032ed0_10032ED0() {
    __asm {
        mov eax, dword ptr [esp + 4]
        test eax, eax
        ; Exact mapped bytes 74 58: je 0x10032f30
        __asm _emit 0x74
        __asm _emit 0x58
        mov edx, dword ptr [esp + 8]
        push esi
        ; Exact mapped bytes 66 8B 71 70: mov si, word ptr [ecx + 0x70]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x71
        __asm _emit 0x70
        mov dword ptr [ecx + 88h], edx
        mov dl, byte ptr [esp + 10h]
        and esi, 0fffdh
        and edx, 1
        push edi
        shl edx, 1
        or edx, esi
        mov dword ptr [ecx + 0c4h], eax
        ; Exact mapped bytes 66 89 51 70: mov word ptr [ecx + 0x70], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x70
        lea edx, [eax + 20h]
        mov dword ptr [ecx + 54h], eax
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
        mov edx, dword ptr [eax + 18h]
        mov dword ptr [ecx + 0ch], edx
        mov eax, dword ptr [eax + 1ch]
        mov dword ptr [ecx + 10h], eax
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
