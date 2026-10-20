// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58874BB0 .. +0x83 bytes.
extern "C" __declspec(naked) void FUN_58874bb0_58874BB0() {
    __asm {
        mov edi, edi
        push esi
        mov esi, ecx
        mov ecx, 101h
        push ecx
        mov eax, dword ptr [esi]
        mov eax, dword ptr [eax]
        mov eax, dword ptr [eax + 48h]
        add eax, 18h
        push eax
        push ecx
        ; Exact mapped bytes FF 35 44 9C 96 58: push dword ptr [0x58969c44]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0x44
        __asm _emit 0x9c
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 69 1E FE FF: call 0x58856a3b
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x1e
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [esi]
        mov ecx, 100h
        push ecx
        mov eax, dword ptr [eax]
        mov eax, dword ptr [eax + 48h]
        add eax, 119h
        push eax
        push ecx
        ; Exact mapped bytes FF 35 48 9C 96 58: push dword ptr [0x58969c48]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0x48
        __asm _emit 0x9c
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 4A 1E FE FF: call 0x58856a3b
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x1e
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [esi + 4]
        add esp, 20h
        or ecx, 0ffffffffh
        mov eax, dword ptr [eax]
        mov eax, dword ptr [eax]
        ; Exact mapped bytes F0 0F C1 08: lock xadd dword ptr [eax], ecx
        __asm _emit 0xf0
        __asm _emit 0x0f
        __asm _emit 0xc1
        __asm _emit 0x08
        ; Exact mapped bytes 75 15: jne 0x58874c19
        __asm _emit 0x75
        __asm _emit 0x15
        mov eax, dword ptr [esi + 4]
        mov eax, dword ptr [eax]
        cmp dword ptr [eax], 58907808h
        ; Exact mapped bytes 74 08: je 0x58874c19
        __asm _emit 0x74
        __asm _emit 0x08
        push dword ptr [eax]
        ; Exact mapped bytes E8 F8 7F FF FF: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x7f
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax]
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [eax]
        mov eax, dword ptr [edx + 48h]
        mov dword ptr [ecx], eax
        mov eax, dword ptr [esi]
        mov eax, dword ptr [eax]
        mov eax, dword ptr [eax + 48h]
        ; Exact mapped bytes F0 FF 00: lock inc dword ptr [eax]
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0x00
        pop esi
        ret
    }
}
