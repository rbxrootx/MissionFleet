// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5884F320 .. +0x59 bytes.
extern "C" __declspec(naked) void FUN_5884f320() {
    __asm {
        mov eax, ecx
        cmp byte ptr [eax + 60h], 0
        ; Exact mapped bytes 74 50: je 0x5884f378
        __asm _emit 0x74
        __asm _emit 0x50
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        mov edx, 1f00h
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        mov edx, 500h
        ; Exact mapped bytes 66 3B CA: cmp cx, dx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xca
        ; Exact mapped bytes 75 3A: jne 0x5884f378
        __asm _emit 0x75
        __asm _emit 0x3a
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        mov edx, 0e1ffh
        ; Exact mapped bytes 66 23 CA: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xca
        mov edx, 100h
        ; Exact mapped bytes 66 0B CA: or cx, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xca
        ; Exact mapped bytes 66 89 48 24: mov word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 48 24 07: or word ptr [eax + 0x24], 7
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x07
        ; Exact mapped bytes 8B 0D 84 45 A2 58: mov ecx, dword ptr [0x58a24584]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        test ecx, ecx
        ; Exact mapped bytes 74 13: je 0x5884f378
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ecx + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 0C: je 0x5884f378
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 0
        push 64h
        push eax
        mov eax, dword ptr [edx + 18h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ret
    }
}
