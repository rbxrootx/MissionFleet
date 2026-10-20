// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58896230 .. +0x6C bytes.
extern "C" __declspec(naked) void FUN_58896230() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        mov ecx, 1f00h
        ; Exact mapped bytes 66 23 C1: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc1
        mov edx, 500h
        ; Exact mapped bytes 66 3B C2: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc2
        ; Exact mapped bytes 75 51: jne 0x5889629a
        __asm _emit 0x75
        __asm _emit 0x51
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
        mov ecx, dword ptr [esi + 588h]
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
        ; Exact mapped bytes E8 BF 8B EC FF: call 0x5875ee30
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x8b
        __asm _emit 0xec
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 588h]
        push 1
        ; Exact mapped bytes E8 D2 8B EC FF: call 0x5875ee50
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x8b
        __asm _emit 0xec
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 58ch]
        ; Exact mapped bytes E8 A7 8B EC FF: call 0x5875ee30
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x8b
        __asm _emit 0xec
        __asm _emit 0xff
        ; Exact mapped bytes A1 64 90 9C 58: mov eax, dword ptr [0x589c9064]
        __asm _emit 0xa1
        __asm _emit 0x64
        __asm _emit 0x90
        __asm _emit 0x9c
        __asm _emit 0x58
        mov ecx, dword ptr [esi + 58ch]
        push eax
        ; Exact mapped bytes E8 B6 8B EC FF: call 0x5875ee50
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x8b
        __asm _emit 0xec
        __asm _emit 0xff
        pop esi
        ret
    }
}
