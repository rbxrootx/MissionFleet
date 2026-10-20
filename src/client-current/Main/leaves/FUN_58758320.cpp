// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58758320 .. +0x3B bytes.
extern "C" __declspec(naked) void FUN_58758320() {
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 2d4h], 0
        mov dword ptr [esi], 5898d774h
        ; Exact mapped bytes 74 16: je 0x58758348
        __asm _emit 0x74
        __asm _emit 0x16
        mov ecx, dword ptr [esi + 8]
        test ecx, ecx
        ; Exact mapped bytes 74 0F: je 0x58758348
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 8], 0
        test byte ptr [esp + 8], 1
        ; Exact mapped bytes 74 09: je 0x58758358
        __asm _emit 0x74
        __asm _emit 0x09
        push esi
        ; Exact mapped bytes E8 ED 48 22 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x48
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 4
        mov eax, esi
        pop esi
    }
}
