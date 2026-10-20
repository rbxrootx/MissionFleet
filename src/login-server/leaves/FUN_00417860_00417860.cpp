// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00417860 .. +0x33 bytes.
extern "C" __declspec(naked) void FUN_00417860_00417860() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 24h]
        mov ecx, dword ptr [esi + 28h]
        lea edx, [eax + 2]
        cmp edx, ecx
        ; Exact mapped bytes 76 0C: jbe 0x41787c
        __asm _emit 0x76
        __asm _emit 0x0c
        sub eax, ecx
        mov ecx, esi
        inc eax
        inc eax
        push eax
        ; Exact mapped bytes E8 7E CF 01 00: call 0x4347fa
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xcf
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [esi + 24h]
        mov ecx, dword ptr [esp + 8]
        ; Exact mapped bytes 66 8B 00: mov ax, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 01: mov word ptr [ecx], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x01
        add dword ptr [esi + 24h], 2
        mov eax, esi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
