// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043797E .. +0x60 bytes.
extern "C" __declspec(naked) void FUN_0043797e_0043797E() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ecx
        mov eax, dword ptr [ecx]
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes FF 50 38: call dword ptr [eax + 0x38]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x38
        mov edi, eax
        mov eax, dword ptr [edi + 4]
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 74 05: je 0x43799c
        __asm _emit 0x74
        __asm _emit 0x05
        add eax, 8
        ; Exact mapped bytes EB F6: jmp 0x437992
        __asm _emit 0xeb
        __asm _emit 0xf6
        lea esi, [eax + 4]
        cmp dword ptr [esi], -1
        ; Exact mapped bytes 74 2C: je 0x4379d0
        __asm _emit 0x74
        __asm _emit 0x2c
        mov eax, dword ptr [esi]
        mov ecx, dword ptr [ebp - 8]
        mov eax, dword ptr [eax + ecx]
        test eax, eax
        ; Exact mapped bytes 74 1B: je 0x4379cb
        __asm _emit 0x74
        __asm _emit 0x1b
        mov ecx, dword ptr [eax]
        and dword ptr [ebp - 4], 0
        lea edx, [ebp - 4]
        push edx
        push dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 11: call dword ptr [ecx]
        __asm _emit 0xff
        __asm _emit 0x11
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x4379cb
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, dword ptr [ebp - 4]
        test eax, eax
        ; Exact mapped bytes 75 0D: jne 0x4379d8
        __asm _emit 0x75
        __asm _emit 0x0d
        add esi, 8
        ; Exact mapped bytes EB CF: jmp 0x43799f
        __asm _emit 0xeb
        __asm _emit 0xcf
        mov edi, dword ptr [edi]
        test edi, edi
        ; Exact mapped bytes 75 B9: jne 0x43798f
        __asm _emit 0x75
        __asm _emit 0xb9
        xor eax, eax
        pop edi
        pop esi
        leave
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
