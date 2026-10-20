// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5884CF80 .. +0x75 bytes.
extern "C" __declspec(naked) void FUN_5884cf80() {
    __asm {
        cmp dword ptr [esp + 8], 2
        push esi
        mov esi, ecx
        ; Exact mapped bytes 75 65: jne 0x5884cfef
        __asm _emit 0x75
        __asm _emit 0x65
        mov eax, dword ptr [esp + 8]
        cmp eax, dword ptr [esi + 5ch]
        ; Exact mapped bytes 75 0B: jne 0x5884cf9e
        __asm _emit 0x75
        __asm _emit 0x0b
        ; Exact mapped bytes E8 48 F9 FF FF: call 0x5884c8e0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, dword ptr [esi + 60h]
        ; Exact mapped bytes 74 45: je 0x5884cfe8
        __asm _emit 0x74
        __asm _emit 0x45
        cmp eax, dword ptr [esi + 64h]
        ; Exact mapped bytes 75 24: jne 0x5884cfcc
        __asm _emit 0x75
        __asm _emit 0x24
        mov eax, dword ptr [esi + 6ch]
        mov ecx, dword ptr [eax + 80h]
        push ecx
        ; Exact mapped bytes 8B 0D B4 45 A2 58: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 73 0A FD FF: call 0x5881da30
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x0a
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 8]
        mov ecx, esi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, dword ptr [esi + 68h]
        ; Exact mapped bytes 75 1E: jne 0x5884cfef
        __asm _emit 0x75
        __asm _emit 0x1e
        mov ecx, dword ptr [esi + 6ch]
        mov edx, dword ptr [ecx + 80h]
        ; Exact mapped bytes 8B 0D B4 45 A2 58: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes E8 5A 0B FD FF: call 0x5881db40
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x0b
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, esi
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
