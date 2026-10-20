// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10053C20 .. +0x62 bytes.
extern "C" __declspec(naked) void FUN_10053c20_10053C20() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes 89 35 DC 56 1C 10: mov dword ptr [0x101c56dc], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0xdc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 1
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        mov dword ptr [esi + 0a64h], 0
        and eax, 0edfch
        push 66h
        or eax, 0d04h
        push esi
        ; Exact mapped bytes 66 89 46 24: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
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
        lea eax, [esi + 0a60h]
        push eax
        push 0
        push esi
        push 10053be0h
        push 0
        push 0
        ; Exact mapped bytes FF 15 E8 50 17 10: call dword ptr [0x101750e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        push -1
        push eax
        mov dword ptr [esi + 0a5ch], eax
        ; Exact mapped bytes FF 15 E4 50 17 10: call dword ptr [0x101750e4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        pop esi
        ret
    }
}
