// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100A2DA0 .. +0x91 bytes.
extern "C" __declspec(naked) void FUN_100a2da0_100A2DA0() {
    __asm {
        mov edx, dword ptr [ecx + 0f8h]
        mov eax, dword ptr [esp + 4]
        push ebx
        push esi
        mov dword ptr [edx + 50h], eax
        mov edx, dword ptr [ecx + 0fch]
        mov dword ptr [edx + 50h], eax
        mov edx, dword ptr [ecx + 100h]
        mov dword ptr [edx + 50h], eax
        mov edx, dword ptr [ecx + 104h]
        mov dword ptr [edx + 50h], eax
        mov edx, dword ptr [ecx + 108h]
        mov dword ptr [edx + 50h], eax
        mov edx, dword ptr [ecx + 10ch]
        mov dword ptr [edx + 50h], eax
        mov edx, dword ptr [ecx + 110h]
        mov dword ptr [edx + 50h], eax
        mov edx, dword ptr [ecx + 114h]
        mov dword ptr [edx + 50h], eax
        mov edx, dword ptr [ecx + 118h]
        mov dword ptr [edx + 50h], eax
        mov edx, dword ptr [ecx + 11ch]
        mov dword ptr [edx + 50h], eax
        ; Exact mapped bytes 66 8B 71 24: mov si, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x71
        __asm _emit 0x24
        mov dl, al
        and esi, 0fffdh
        and edx, 1
        mov dword ptr [ecx + 120h], eax
        shl edx, 1
        or edx, esi
        pop esi
        mov bl, dl
        and edx, 0fffbh
        and ebx, 2
        shl ebx, 1
        or ebx, edx
        ; Exact mapped bytes 66 89 59 24: mov word ptr [ecx + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x24
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
