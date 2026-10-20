// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00427ABA .. +0x5E bytes.
extern "C" __declspec(naked) void ___add_12_00427ABA() {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        push edi
        mov edi, dword ptr [esp + 10h]
        push esi
        push dword ptr [edi]
        push dword ptr [esi]
        ; Exact mapped bytes E8 CB FF FF FF: call 0x427a99
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 17: je 0x427aec
        __asm _emit 0x74
        __asm _emit 0x17
        lea eax, [esi + 4]
        push eax
        push 1
        push dword ptr [eax]
        ; Exact mapped bytes E8 B7 FF FF FF: call 0x427a99
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 03: je 0x427aec
        __asm _emit 0x74
        __asm _emit 0x03
        inc dword ptr [esi + 8]
        lea eax, [esi + 4]
        push eax
        push dword ptr [edi + 4]
        push dword ptr [eax]
        ; Exact mapped bytes E8 9F FF FF FF: call 0x427a99
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 03: je 0x427b04
        __asm _emit 0x74
        __asm _emit 0x03
        inc dword ptr [esi + 8]
        lea eax, [esi + 8]
        push eax
        push dword ptr [edi + 8]
        push dword ptr [eax]
        ; Exact mapped bytes E8 87 FF FF FF: call 0x427a99
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        pop edi
        pop esi
        ret
    }
}
