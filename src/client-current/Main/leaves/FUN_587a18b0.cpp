// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A18B0 .. +0x6A bytes.
extern "C" __declspec(naked) void FUN_587a18b0() {
    __asm {
        cmp dword ptr [esp + 8], 2
        push esi
        mov esi, ecx
        ; Exact mapped bytes 75 5A: jne 0x587a1914
        __asm _emit 0x75
        __asm _emit 0x5a
        mov eax, dword ptr [esp + 8]
        cmp eax, dword ptr [esi + 74h]
        ; Exact mapped bytes 75 29: jne 0x587a18ec
        __asm _emit 0x75
        __asm _emit 0x29
        cmp dword ptr [esi + 7ch], 0
        ; Exact mapped bytes 74 14: je 0x587a18dd
        __asm _emit 0x74
        __asm _emit 0x14
        mov edx, dword ptr [esi + 80h]
        mov ecx, dword ptr [esi + 7ch]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 18h]
        push edx
        push 0fh
        push esi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 8]
        mov ecx, esi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, dword ptr [esi + 78h]
        ; Exact mapped bytes 75 23: jne 0x587a1914
        __asm _emit 0x75
        __asm _emit 0x23
        cmp dword ptr [esi + 7ch], 0
        ; Exact mapped bytes 74 14: je 0x587a190b
        __asm _emit 0x74
        __asm _emit 0x14
        mov eax, dword ptr [esi + 80h]
        mov ecx, dword ptr [esi + 7ch]
        mov edx, dword ptr [ecx]
        mov edx, dword ptr [edx + 18h]
        push eax
        push 10h
        push esi
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 8]
        mov ecx, esi
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
