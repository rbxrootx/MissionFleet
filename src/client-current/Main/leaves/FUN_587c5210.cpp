// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C5210 .. +0x45 bytes.
extern "C" __declspec(naked) void FUN_587c5210() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 20h]
        mov ecx, dword ptr [eax]
        test ecx, ecx
        ; Exact mapped bytes 74 14: je 0x587c5230
        __asm _emit 0x74
        __asm _emit 0x14
        mov edx, eax
        mov eax, dword ptr [edx]
        mov edx, dword ptr [esi + 30h]
        mov edx, dword ptr [edx]
        add edx, eax
        cmp eax, edx
        ; Exact mapped bytes 73 05: jae 0x587c5230
        __asm _emit 0x73
        __asm _emit 0x05
        movzx eax, byte ptr [ecx]
        pop esi
        ret
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 14h]
        push edi
        mov ecx, esi
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov edi, eax
        cmp edi, -1
        ; Exact mapped bytes 75 05: jne 0x587c5246
        __asm _emit 0x75
        __asm _emit 0x05
        pop edi
        or eax, eax
        pop esi
        ret
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 8]
        push edi
        mov ecx, esi
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, edi
        pop edi
        pop esi
        ret
    }
}
