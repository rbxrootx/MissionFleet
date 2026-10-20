// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10104EA0 .. +0xA7 bytes.
extern "C" __declspec(naked) void FUN_10104ea0_10104EA0() {
    __asm {
        sub esp, 204h
        push esi
        mov esi, ecx
        push edi
        mov eax, dword ptr [esi + 1ch]
        test eax, eax
        ; Exact mapped bytes 74 6F: je 0x10104f20
        __asm _emit 0x74
        __asm _emit 0x6f
        mov ecx, dword ptr [esp + 210h]
        lea eax, [esp + 0ch]
        push 100h
        push eax
        push -1
        push ecx
        push 0
        push 0
        ; Exact mapped bytes FF 15 CC 50 17 10: call dword ptr [0x101750cc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov eax, dword ptr [esi + 1ch]
        lea edi, [esi + 2ch]
        lea ecx, [esp + 0ch]
        push edi
        mov edx, dword ptr [eax]
        push ecx
        lea ecx, [esp + 14h]
        push ecx
        push eax
        ; Exact mapped bytes FF 52 38: call dword ptr [edx + 0x38]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x38
        test eax, eax
        ; Exact mapped bytes 75 36: jne 0x10104f20
        __asm _emit 0x75
        __asm _emit 0x36
        mov edi, dword ptr [edi]
        lea eax, [esp + 8]
        push eax
        push 101acdcch
        mov edx, dword ptr [edi]
        push edi
        ; Exact mapped bytes FF 52 2C: call dword ptr [edx + 0x2c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x2c
        test eax, eax
        ; Exact mapped bytes 75 20: jne 0x10104f20
        __asm _emit 0x75
        __asm _emit 0x20
        mov esi, dword ptr [esi + 1ch]
        mov edx, dword ptr [esp + 8]
        push edx
        push esi
        mov ecx, dword ptr [esi]
        ; Exact mapped bytes FF 51 30: call dword ptr [ecx + 0x30]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x30
        test eax, eax
        mov eax, dword ptr [esp + 8]
        ; Exact mapped bytes 74 17: je 0x10104f2d
        __asm _emit 0x74
        __asm _emit 0x17
        test eax, eax
        ; Exact mapped bytes 74 06: je 0x10104f20
        __asm _emit 0x74
        __asm _emit 0x06
        mov ecx, dword ptr [eax]
        push eax
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        pop edi
        xor eax, eax
        pop esi
        add esp, 204h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 06: je 0x10104f37
        __asm _emit 0x74
        __asm _emit 0x06
        mov edx, dword ptr [eax]
        push eax
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        pop edi
        mov eax, 1
        pop esi
        add esp, 204h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
