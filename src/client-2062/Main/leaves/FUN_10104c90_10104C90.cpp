// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10104C90 .. +0x62 bytes.
extern "C" __declspec(naked) void FUN_10104c90_10104C90() {
    __asm {
        sub esp, 8
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 20h]
        test eax, eax
        ; Exact mapped bytes 74 3B: je 0x10104cd8
        __asm _emit 0x74
        __asm _emit 0x3b
        mov eax, dword ptr [esi + 24h]
        mov dword ptr [esi + 10h], 0
        test eax, eax
        mov dword ptr [esp + 4], 0
        mov dword ptr [esp + 8], 0
        ; Exact mapped bytes 74 14: je 0x10104ccf
        __asm _emit 0x74
        __asm _emit 0x14
        mov ecx, dword ptr [eax]
        lea edx, [esp + 4]
        push 0
        push edx
        lea edx, [esp + 0ch]
        push 1
        push edx
        push eax
        ; Exact mapped bytes FF 51 38: call dword ptr [ecx + 0x38]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x38
        mov eax, dword ptr [esi + 20h]
        push eax
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes FF 51 24: call dword ptr [ecx + 0x24]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x24
        mov esi, dword ptr [esi + 18h]
        test esi, esi
        ; Exact mapped bytes 74 09: je 0x10104ce8
        __asm _emit 0x74
        __asm _emit 0x09
        push -1
        push esi
        ; Exact mapped bytes FF 15 EC 50 17 10: call dword ptr [0x101750ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov eax, 1
        pop esi
        add esp, 8
        ret
    }
}
