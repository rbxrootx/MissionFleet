// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100557F0 .. +0x7A bytes.
extern "C" __declspec(naked) void FUN_100557f0_100557F0() {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, 0fff0h
        push edi
        mov eax, dword ptr [esi + 394h]
        xor edi, edi
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 398h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 394h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x10055825
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 394h], edi
        mov ecx, dword ptr [esi + 398h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x1005583b
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 398h], edi
        mov ecx, dword ptr [esi + 3f0h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x10055851
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov dword ptr [esi + 3f0h], edi
        mov ecx, dword ptr [esi + 3f4h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0C: je 0x10055867
        __asm _emit 0x74
        __asm _emit 0x0c
        mov edx, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        mov dword ptr [esi + 3f4h], edi
        pop edi
        pop esi
        ret
    }
}
