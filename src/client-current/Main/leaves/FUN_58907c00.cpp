// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58907C00 .. +0x71 bytes.
extern "C" __declspec(naked) void FUN_58907c00() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        test al, 4
        ; Exact mapped bytes 74 60: je 0x58907c6b
        __asm _emit 0x74
        __asm _emit 0x60
        mov eax, dword ptr [esi + 54h]
        test eax, eax
        ; Exact mapped bytes 74 38: je 0x58907c4a
        __asm _emit 0x74
        __asm _emit 0x38
        movzx ecx, word ptr [eax + 0ch]
        imul ecx, dword ptr [eax + 8]
        dec ecx
        xor eax, eax
        cmp dword ptr [esi + 50h], ecx
        setge al
        test eax, eax
        ; Exact mapped bytes 74 23: je 0x58907c4a
        __asm _emit 0x74
        __asm _emit 0x23
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 18h]
        mov ecx, esi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, esi
        ; Exact mapped bytes E8 E9 AF FF FF: call 0x58902c20
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xaf
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, esi
        ; Exact mapped bytes E8 32 B0 FF FF: call 0x58902c70
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xb0
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx]
        push 1
        mov ecx, esi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        pop esi
        ret
        mov ecx, dword ptr [esi + 3ch]
        inc dword ptr [esi + 50h]
        test ecx, ecx
        ; Exact mapped bytes 74 17: je 0x58907c6b
        __asm _emit 0x74
        __asm _emit 0x17
        push edi
        mov edi, dword ptr [ecx + 38h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0ch]
        cmp edi, dword ptr [esi + 3ch]
        ; Exact mapped bytes 74 0B: je 0x58907c6d
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, edi
        test edi, edi
        ; Exact mapped bytes 75 EB: jne 0x58907c55
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
