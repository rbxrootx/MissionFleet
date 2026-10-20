// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585048CF .. +0x4A bytes.
extern "C" __declspec(naked) void FUN_585048cf_585048CF() {
    __asm {
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp + 8]
        add edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 48h], edx
        push 0
        mov eax, dword ptr [ebp - 18h]
        push eax
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 45 7A 00 00: call 0x5850c330
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x7a
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4ch], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 84h]
        ; Exact mapped bytes E8 8C 2A 00 00: call 0x58507390
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x2a
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4ch]
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
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
