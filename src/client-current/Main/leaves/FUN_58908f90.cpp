// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58908F90 .. +0x71 bytes.
extern "C" __declspec(naked) void FUN_58908f90() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        test al, 4
        ; Exact mapped bytes 74 60: je 0x58908ffb
        __asm _emit 0x74
        __asm _emit 0x60
        mov eax, dword ptr [esi + 50h]
        cmp eax, 4
        ; Exact mapped bytes 74 05: je 0x58908fa8
        __asm _emit 0x74
        __asm _emit 0x05
        cmp eax, 6
        ; Exact mapped bytes 75 35: jne 0x58908fdd
        __asm _emit 0x75
        __asm _emit 0x35
        mov eax, dword ptr [esi + 58h]
        test eax, eax
        ; Exact mapped bytes 75 2A: jne 0x58908fd9
        __asm _emit 0x75
        __asm _emit 0x2a
        mov eax, dword ptr [esi + 30h]
        test eax, eax
        ; Exact mapped bytes 74 1B: je 0x58908fd1
        __asm _emit 0x74
        __asm _emit 0x1b
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        shr cl, 5
        test cl, 1
        ; Exact mapped bytes 74 0F: je 0x58908fd1
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, dword ptr [esi + 30h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 18h]
        push 0
        push 2
        push esi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 60h]
        mov dword ptr [esi + 58h], ecx
        ; Exact mapped bytes EB 04: jmp 0x58908fdd
        __asm _emit 0xeb
        __asm _emit 0x04
        dec eax
        mov dword ptr [esi + 58h], eax
        mov ecx, dword ptr [esi + 3ch]
        test ecx, ecx
        ; Exact mapped bytes 74 17: je 0x58908ffb
        __asm _emit 0x74
        __asm _emit 0x17
        push edi
        mov edi, dword ptr [ecx + 38h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0ch]
        cmp edi, dword ptr [esi + 3ch]
        ; Exact mapped bytes 74 0B: je 0x58908ffd
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, edi
        test edi, edi
        ; Exact mapped bytes 75 EB: jne 0x58908fe5
        __asm _emit 0x75
        __asm _emit 0xeb
        pop edi
        pop esi
        ret
        pop edi
        pop esi
        ; Exact mapped bytes FF E0: jmp eax
        __asm _emit 0xff
        __asm _emit 0xe0
    }
}
