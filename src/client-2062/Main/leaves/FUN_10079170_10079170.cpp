// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10079170 .. +0x40 bytes.
extern "C" __declspec(naked) void FUN_10079170_10079170() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 58h]
        and eax, 0e2ffh
        or eax, 203h
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes E8 33 2C FA FF: call 0x1001bdc0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x2c
        __asm _emit 0xfa
        __asm _emit 0xff
        mov eax, dword ptr [esi + 58h]
        push 0
        push 64h
        push esi
        or byte ptr [eax + 24h], 1
        mov eax, dword ptr [esi + 58h]
        or byte ptr [eax + 24h], 2
        ; Exact mapped bytes 8B 0D E4 56 1C 10: mov ecx, dword ptr [0x101c56e4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [ecx + 30h]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 18: call dword ptr [edx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x18
        pop esi
        ret
    }
}
