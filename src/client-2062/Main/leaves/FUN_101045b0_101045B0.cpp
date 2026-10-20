// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x101045B0 .. +0x6F bytes.
extern "C" __declspec(naked) void FUN_101045b0_101045B0() {
    __asm {
        mov eax, dword ptr [ecx + 84h]
        push esi
        test eax, eax
        ; Exact mapped bytes 75 10: jne 0x101045cb
        __asm _emit 0x75
        __asm _emit 0x10
        mov eax, dword ptr [ecx + 78h]
        mov edx, dword ptr [ecx]
        mov dword ptr [ecx + 84h], eax
        ; Exact mapped bytes FF 52 3C: call dword ptr [edx + 0x3c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x3c
        pop esi
        ret
        mov esi, dword ptr [eax + 14h]
        test esi, esi
        ; Exact mapped bytes 74 4B: je 0x1010461d
        __asm _emit 0x74
        __asm _emit 0x4b
        push ebx
        push edi
        mov edi, dword ptr [ecx + 80h]
        xor edx, edx
        mov eax, edi
        mov dword ptr [ecx + 84h], esi
        test eax, eax
        ; Exact mapped bytes 74 10: je 0x101045f8
        __asm _emit 0x74
        __asm _emit 0x10
        cmp eax, esi
        ; Exact mapped bytes 74 0C: je 0x101045f8
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ebx, dword ptr [ecx + 5ch]
        mov eax, dword ptr [eax + 14h]
        add edx, ebx
        test eax, eax
        ; Exact mapped bytes 75 F0: jne 0x101045e8
        __asm _emit 0x75
        __asm _emit 0xf0
        test edi, edi
        ; Exact mapped bytes 74 1A: je 0x10104616
        __asm _emit 0x74
        __asm _emit 0x1a
        mov eax, dword ptr [ecx + 20h]
        mov esi, dword ptr [ecx + 5ch]
        mov ebx, dword ptr [ecx + 18h]
        sub eax, esi
        sub eax, ebx
        cmp edx, eax
        ; Exact mapped bytes 7E 09: jle 0x10104616
        __asm _emit 0x7e
        __asm _emit 0x09
        mov edx, dword ptr [edi + 14h]
        mov dword ptr [ecx + 80h], edx
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 3C: call dword ptr [eax + 0x3c]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x3c
        pop edi
        pop ebx
        pop esi
        ret
    }
}
