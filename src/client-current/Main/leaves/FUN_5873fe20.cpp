// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5873FE20 .. +0x5B bytes.
extern "C" __declspec(naked) void FUN_5873fe20() {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esp + 10h]
        mov edx, dword ptr [esi + 10h]
        lea eax, [ecx + 8]
        push edi
        cmp eax, edx
        ; Exact mapped bytes 74 18: je 0x5873fe4a
        __asm _emit 0x74
        __asm _emit 0x18
        mov edi, dword ptr [eax]
        mov dword ptr [ecx], edi
        mov edi, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edi
        add eax, 8
        add ecx, 8
        cmp eax, edx
        ; Exact mapped bytes 75 EC: jne 0x5873fe32
        __asm _emit 0x75
        __asm _emit 0xec
        mov ecx, dword ptr [esp + 14h]
        add dword ptr [esi + 10h], -8
        mov edi, dword ptr [esp + 0ch]
        mov eax, dword ptr [esi + 10h]
        mov dword ptr [edi], 0
        cmp dword ptr [esi + 0ch], ecx
        ; Exact mapped bytes 77 04: ja 0x5873fe64
        __asm _emit 0x77
        __asm _emit 0x04
        cmp ecx, eax
        ; Exact mapped bytes 76 09: jbe 0x5873fe6d
        __asm _emit 0x76
        __asm _emit 0x09
        ; Exact mapped bytes E8 09 CE 23 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xce
        __asm _emit 0x23
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 14h]
        mov eax, dword ptr [esi]
        mov dword ptr [edi], eax
        mov dword ptr [edi + 4], ecx
        mov eax, edi
        pop edi
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
