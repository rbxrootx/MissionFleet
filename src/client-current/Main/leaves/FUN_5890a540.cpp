// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5890A540 .. +0x64 bytes.
extern "C" __declspec(naked) void FUN_5890a540() {
    __asm {
        sub esp, 8
        push esi
        push edi
        mov esi, ecx
        xor edi, edi
        cmp dword ptr [esi + 20h], edi
        ; Exact mapped bytes 74 2E: je 0x5890a57c
        __asm _emit 0x74
        __asm _emit 0x2e
        mov eax, dword ptr [esi + 24h]
        mov dword ptr [esi + 10h], edi
        mov dword ptr [esp + 8], edi
        mov dword ptr [esp + 0ch], edi
        cmp eax, edi
        ; Exact mapped bytes 74 11: je 0x5890a571
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, dword ptr [eax]
        push edi
        lea edx, [esp + 0ch]
        push edx
        push 1
        push edx
        push eax
        mov eax, dword ptr [ecx + 38h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov eax, dword ptr [esi + 20h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 24h]
        push eax
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [esi + 18h]
        cmp eax, edi
        ; Exact mapped bytes 74 16: je 0x5890a599
        __asm _emit 0x74
        __asm _emit 0x16
        push -1
        push eax
        ; Exact mapped bytes FF 15 28 C1 98 58: call dword ptr [0x5898c128]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        mov eax, dword ptr [esi + 18h]
        push eax
        ; Exact mapped bytes FF 15 84 C1 98 58: call dword ptr [0x5898c184]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        mov dword ptr [esi + 18h], edi
        pop edi
        mov eax, 1
        pop esi
        add esp, 8
        ret
    }
}
