// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100BDB00 .. +0x7E bytes.
extern "C" __declspec(naked) void FUN_100bdb00_100BDB00() {
    __asm {
        ; Exact mapped bytes A1 10 57 1C 10: mov eax, dword ptr [0x101c5710]
        __asm _emit 0xa1
        __asm _emit 0x10
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push esi
        mov esi, ecx
        ; Exact mapped bytes 39 05 DC 56 1C 10: cmp dword ptr [0x101c56dc], eax
        __asm _emit 0x39
        __asm _emit 0x05
        __asm _emit 0xdc
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 75 54: jne 0x100bdb64
        __asm _emit 0x75
        __asm _emit 0x54
        test byte ptr [eax + 1b8h], 1
        ; Exact mapped bytes 74 31: je 0x100bdb4a
        __asm _emit 0x74
        __asm _emit 0x31
        mov eax, dword ptr [esi + 19ch]
        ; Exact mapped bytes 8B 0D F0 58 1C 10: mov ecx, dword ptr [0x101c58f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push edi
        push 0f4241h
        mov edi, dword ptr [eax + 88h]
        ; Exact mapped bytes E8 7A 45 F8 FF: call 0x100420b0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x45
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 44h]
        add ecx, edi
        push ecx
        mov ecx, dword ptr [esi + 16ch]
        ; Exact mapped bytes E8 D9 1B 04 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x1b
        __asm _emit 0x04
        __asm _emit 0x00
        pop edi
        pop esi
        ret
        mov edx, dword ptr [esi + 19ch]
        mov ecx, dword ptr [esi + 16ch]
        mov eax, dword ptr [edx + 88h]
        push eax
        ; Exact mapped bytes E8 BE 1B 04 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x1b
        __asm _emit 0x04
        __asm _emit 0x00
        pop esi
        ret
        mov ecx, dword ptr [esi + 19ch]
        mov edx, dword ptr [ecx + 88h]
        mov ecx, dword ptr [esi + 16ch]
        push edx
        ; Exact mapped bytes E8 A4 1B 04 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x1b
        __asm _emit 0x04
        __asm _emit 0x00
        pop esi
        ret
    }
}
