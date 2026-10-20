// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10023880 .. +0x5B bytes.
extern "C" __declspec(naked) void FUN_10023880_10023880() {
    __asm {
        push ecx
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr [esi + 5ch]
        mov eax, dword ptr [esi + 60h]
        cmp edi, eax
        ; Exact mapped bytes 74 16: je 0x100238a5
        __asm _emit 0x74
        __asm _emit 0x16
        mov ecx, dword ptr [edi]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x1002389b
        __asm _emit 0x74
        __asm _emit 0x06
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov eax, dword ptr [esi + 60h]
        add edi, 4
        cmp edi, eax
        ; Exact mapped bytes 75 EA: jne 0x1002388f
        __asm _emit 0x75
        __asm _emit 0xea
        mov edx, dword ptr [esi + 60h]
        mov ecx, dword ptr [esi + 5ch]
        mov eax, edx
        cmp eax, edx
        ; Exact mapped bytes 74 1C: je 0x100238cd
        __asm _emit 0x74
        __asm _emit 0x1c
        mov edi, dword ptr [eax]
        add eax, 4
        mov dword ptr [ecx], edi
        add ecx, 4
        cmp eax, edx
        ; Exact mapped bytes 75 F2: jne 0x100238b1
        __asm _emit 0x75
        __asm _emit 0xf2
        mov edx, dword ptr [esi + 60h]
        mov dword ptr [esi + 60h], ecx
        pop edi
        mov dword ptr [esp + 4], edx
        pop esi
        pop ecx
        ret
        mov eax, dword ptr [esi + 60h]
        mov dword ptr [esi + 60h], ecx
        pop edi
        mov dword ptr [esp + 4], eax
        pop esi
        pop ecx
        ret
    }
}
