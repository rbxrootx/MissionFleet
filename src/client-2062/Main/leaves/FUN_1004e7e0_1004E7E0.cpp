// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1004E7E0 .. +0x77 bytes.
extern "C" __declspec(naked) void FUN_1004e7e0_1004E7E0() {
    __asm {
        push -1
        push 1016ea88h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp + 4], esi
        mov dword ptr [esi], 10175b80h
        mov eax, dword ptr [esi + 1ach]
        mov dword ptr [esp + 10h], 0
        test eax, eax
        ; Exact mapped bytes 74 13: je 0x1004e828
        __asm _emit 0x74
        __asm _emit 0x13
        push eax
        ; Exact mapped bytes E8 69 DF 11 00: call 0x1016c784
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xdf
        __asm _emit 0x11
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esi + 1ach], 0
        mov ecx, dword ptr [esi + 1b0h]
        test ecx, ecx
        ; Exact mapped bytes 74 06: je 0x1004e838
        __asm _emit 0x74
        __asm _emit 0x06
        mov eax, dword ptr [ecx]
        push 1
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        mov ecx, esi
        mov dword ptr [esp + 10h], 0ffffffffh
        ; Exact mapped bytes E8 A9 8E 0B 00: call 0x101076f0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x8e
        __asm _emit 0x0b
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 8]
        pop esi
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ret
    }
}
