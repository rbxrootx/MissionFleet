// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588ACD30 .. +0x51 bytes.
extern "C" __declspec(naked) void FUN_588acd30() {
    __asm {
        ; Exact mapped bytes A1 98 45 A2 58: mov eax, dword ptr [0x58a24598]
        __asm _emit 0xa1
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push esi
        mov esi, ecx
        mov ecx, dword ptr [eax + 0d78h]
        mov edx, dword ptr [ecx + 0cc0h]
        mov ecx, dword ptr [esi + 64h]
        mov eax, 0cccccccdh
        mul dword ptr [edx + 60h]
        shr edx, 3
        mov eax, 0cccccccdh
        mul edx
        shr edx, 2
        push edx
        ; Exact mapped bytes E8 FE A5 05 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xa5
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 4E 24 05: or word ptr [esi + 0x24], 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4e
        __asm _emit 0x24
        __asm _emit 0x05
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        mov ecx, 0e1ffh
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        mov edx, 100h
        ; Exact mapped bytes 66 0B C2: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc2
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        pop esi
        ret
    }
}
