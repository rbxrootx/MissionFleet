// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883E190 .. +0x75 bytes.
extern "C" __declspec(naked) void FUN_5883e190() {
    __asm {
        cmp dword ptr [esp + 8], 2
        push esi
        mov esi, ecx
        ; Exact mapped bytes 75 65: jne 0x5883e1ff
        __asm _emit 0x75
        __asm _emit 0x65
        mov eax, dword ptr [esp + 8]
        cmp eax, dword ptr [esi + 68h]
        ; Exact mapped bytes 75 50: jne 0x5883e1f3
        __asm _emit 0x75
        __asm _emit 0x50
        cmp dword ptr [esi + 70h], 0
        ; Exact mapped bytes 74 29: je 0x5883e1d2
        __asm _emit 0x74
        __asm _emit 0x29
        mov edx, dword ptr [esi + 64h]
        mov edx, dword ptr [edx + 80h]
        mov ecx, dword ptr [esi + 70h]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 18h]
        push edx
        push 0f230h
        push ecx
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
        mov ecx, dword ptr [esi + 30h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 18h]
        push 0
        push 0f230h
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
        cmp eax, dword ptr [esi + 6ch]
        ; Exact mapped bytes 75 07: jne 0x5883e1ff
        __asm _emit 0x75
        __asm _emit 0x07
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
