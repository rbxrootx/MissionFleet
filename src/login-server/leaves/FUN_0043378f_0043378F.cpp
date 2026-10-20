// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0043378F .. +0xA0 bytes.
extern "C" __declspec(naked) void FUN_0043378f_0043378F() {
    __asm {
        mov eax, 43b29ch
        ; Exact mapped bytes E8 6F BE FE FF: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xbe
        __asm _emit 0xfe
        __asm _emit 0xff
        push ecx
        mov eax, dword ptr [ebp + 10h]
        push esi
        push edi
        mov esi, ecx
        test eax, eax
        mov edi, 0f1a0h
        ; Exact mapped bytes 74 07: je 0x4337b1
        __asm _emit 0x74
        __asm _emit 0x07
        mov ecx, dword ptr [esi + 8]
        add ecx, edi
        mov dword ptr [eax], ecx
        ; Exact mapped bytes A1 0C 9B 44 00: mov eax, dword ptr [0x449b0c]
        __asm _emit 0xa1
        __asm _emit 0x0c
        __asm _emit 0x9b
        __asm _emit 0x44
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        and dword ptr [ebp - 4], 0
        lea eax, [esi + 10h]
        push eax
        lea ecx, [ebp + 10h]
        ; Exact mapped bytes E8 57 A1 FF FF: call 0x42d920
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xa1
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 10h]
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [eax - 8], 0
        ; Exact mapped bytes 75 0D: jne 0x4337e3
        __asm _emit 0x75
        __asm _emit 0x0d
        push 0f006h
        lea ecx, [ebp + 10h]
        ; Exact mapped bytes E8 9A ED FF FF: call 0x43257d
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 8]
        push dword ptr [ebp + 10h]
        add eax, edi
        push eax
        lea eax, [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 AD 1F 00 00: call 0x4357a2
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp - 10h]
        push dword ptr [ebp + 8]
        ; Exact mapped bytes FF 15 28 C2 43 00: call dword ptr [0x43c228]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        and byte ptr [ebp - 4], 0
        lea ecx, [ebp + 10h]
        ; Exact mapped bytes E8 9B A3 FF FF: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xa3
        __asm _emit 0xff
        __asm _emit 0xff
        or dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 8F A3 FF FF: call 0x42dbab
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xa3
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        push 1
        pop eax
        pop edi
        pop esi
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        leave
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
