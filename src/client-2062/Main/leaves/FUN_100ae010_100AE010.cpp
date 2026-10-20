// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100AE010 .. +0xA2 bytes.
extern "C" __declspec(naked) void FUN_100ae010_100AE010() {
    __asm {
        mov edx, dword ptr [ecx + 88h]
        mov eax, dword ptr [ecx + 94h]
        cmp edx, eax
        ; Exact mapped bytes 75 2A: jne 0x100ae04a
        __asm _emit 0x75
        __asm _emit 0x2a
        mov edx, dword ptr [ecx + 1f0h]
        mov dword ptr [ecx + 88h], edx
        mov edx, 0fff0h
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [ecx + 1f0h]
        or byte ptr [eax + 24h], 0fh
        mov ecx, dword ptr [ecx + 27ch]
        ; Exact mapped bytes 66 21 51 24: and word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x51
        __asm _emit 0x24
        ret
        cmp edx, dword ptr [ecx + 1f0h]
        ; Exact mapped bytes 75 3C: jne 0x100ae08e
        __asm _emit 0x75
        __asm _emit 0x3c
        mov edx, dword ptr [ecx + 84h]
        test dword ptr [edx + 0e4h], 10000000h
        ; Exact mapped bytes 74 2A: je 0x100ae08e
        __asm _emit 0x74
        __asm _emit 0x2a
        mov edx, dword ptr [ecx + 27ch]
        mov dword ptr [ecx + 88h], edx
        mov edx, 0fff0h
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [ecx + 1f0h]
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov ecx, dword ptr [ecx + 27ch]
        or byte ptr [ecx + 24h], 0fh
        ret
        mov dword ptr [ecx + 88h], eax
        or byte ptr [eax + 24h], 0fh
        mov eax, dword ptr [ecx + 1f0h]
        mov edx, 0fff0h
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov ecx, dword ptr [ecx + 27ch]
        ; Exact mapped bytes 66 21 51 24: and word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x51
        __asm _emit 0x24
        ret
    }
}
