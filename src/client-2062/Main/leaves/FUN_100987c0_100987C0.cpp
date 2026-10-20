// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100987C0 .. +0x48 bytes.
extern "C" __declspec(naked) void FUN_100987c0_100987C0() {
    __asm {
        push esi
        mov esi, ecx
        push 32ah
        mov ecx, dword ptr [esi + 64h]
        ; Exact mapped bytes E8 80 65 06 00: call 0x100fed50
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x65
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [esi + 60h]
        mov dword ptr [eax + 50h], 1
        mov ecx, dword ptr [esi + 0d0h]
        xor eax, eax
        mov byte ptr [esi + 0d8h], 3
        mov dword ptr [esi + 0e0h], 0ffffffffh
        mov dword ptr [ecx + 50h], eax
        mov edx, dword ptr [esi + 0d4h]
        mov ecx, esi
        mov dword ptr [edx + 50h], eax
        ; Exact mapped bytes E8 0A 00 00 00: call 0x10098810
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop esi
        ret
    }
}
