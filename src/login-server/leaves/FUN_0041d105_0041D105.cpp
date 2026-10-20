// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041D105 .. +0x98 bytes.
extern "C" __declspec(naked) void FUN_0041d105_0041D105() {
    __asm {
        mov eax, 43b054h
        ; Exact mapped bytes E8 F9 24 00 00: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        and dword ptr [ebp - 10h], 0
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr [ebp + 8]
        and dword ptr [ebp - 4], 0
        lea edx, [ebp - 10h]
        mov ecx, dword ptr [eax]
        push edx
        push 44a5d0h
        push eax
        ; Exact mapped bytes FF 11: call dword ptr [ecx]
        __asm _emit 0xff
        __asm _emit 0x11
        mov ebx, eax
        test ebx, ebx
        ; Exact mapped bytes 7C 14: jl 0x41d147
        __asm _emit 0x7c
        __asm _emit 0x14
        cmp dword ptr [esi], 0
        ; Exact mapped bytes 75 2A: jne 0x41d162
        __asm _emit 0x75
        __asm _emit 0x2a
        push 1
        mov ecx, esi
        ; Exact mapped bytes E8 6D E6 FF FF: call 0x41b7ae
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebx, eax
        test ebx, ebx
        ; Exact mapped bytes 7D 15: jge 0x41d15c
        __asm _emit 0x7d
        __asm _emit 0x15
        mov eax, dword ptr [ebp - 10h]
        or dword ptr [ebp - 4], 0ffffffffh
        test eax, eax
        ; Exact mapped bytes 74 06: je 0x41d158
        __asm _emit 0x74
        __asm _emit 0x06
        mov ecx, dword ptr [eax]
        push eax
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        mov eax, ebx
        ; Exact mapped bytes EB 31: jmp 0x41d18d
        __asm _emit 0xeb
        __asm _emit 0x31
        mov eax, dword ptr [esi]
        mov byte ptr [eax + 4], 1
        push dword ptr [ebp - 10h]
        push dword ptr [esi + 18h]
        push dword ptr [esi]
        push dword ptr [esi + 10h]
        push dword ptr [esi + 0ch]
        ; Exact mapped bytes E8 95 E6 FF FF: call 0x41b80a
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        or dword ptr [ebp - 4], 0ffffffffh
        mov esi, eax
        mov eax, dword ptr [ebp - 10h]
        add esp, 14h
        test eax, eax
        ; Exact mapped bytes 74 06: je 0x41d18b
        __asm _emit 0x74
        __asm _emit 0x06
        mov ecx, dword ptr [eax]
        push eax
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        mov eax, esi
        mov ecx, dword ptr [ebp - 0ch]
        pop esi
        pop ebx
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        leave
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
