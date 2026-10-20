// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004217FB .. +0x3D bytes.
extern "C" __declspec(naked) void FUN_004217fb_004217FB() {
    __asm {
        mov ecx, dword ptr [esp + 0ch]
        push esi
        push edi
        mov edi, dword ptr [esp + 0ch]
        test ecx, ecx
        mov esi, edi
        ; Exact mapped bytes 74 28: je 0x421833
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [esp + 10h]
        ; Exact mapped bytes 66 8B 02: mov ax, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x02
        ; Exact mapped bytes 66 89 07: mov word ptr [edi], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x07
        inc edi
        inc edi
        inc edx
        inc edx
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 03: je 0x421821
        __asm _emit 0x74
        __asm _emit 0x03
        dec ecx
        ; Exact mapped bytes 75 EE: jne 0x42180f
        __asm _emit 0x75
        __asm _emit 0xee
        test ecx, ecx
        ; Exact mapped bytes 74 0E: je 0x421833
        __asm _emit 0x74
        __asm _emit 0x0e
        dec ecx
        ; Exact mapped bytes 74 0B: je 0x421833
        __asm _emit 0x74
        __asm _emit 0x0b
        xor eax, eax
        shr ecx, 1
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        adc ecx, ecx
        ; Exact mapped bytes 66 F3 AB: rep stosw word ptr es:[edi], ax
        __asm _emit 0x66
        __asm _emit 0xf3
        __asm _emit 0xab
        mov eax, esi
        pop edi
        pop esi
        ret
    }
}
