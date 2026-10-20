// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100E2320 .. +0x2E bytes.
extern "C" __declspec(naked) void FUN_100e2320_100E2320() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 60h]
        mov eax, dword ptr [eax + 6ch]
        test eax, eax
        ; Exact mapped bytes 74 10: je 0x100e233d
        __asm _emit 0x74
        __asm _emit 0x10
        mov ecx, dword ptr [esp + 8]
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x100e233d
        __asm _emit 0x74
        __asm _emit 0x08
        push ecx
        push eax
        ; Exact mapped bytes FF 15 B0 50 17 10: call dword ptr [0x101750b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov eax, dword ptr [esp + 0ch]
        mov ecx, dword ptr [esi + 64h]
        push eax
        ; Exact mapped bytes E8 D6 D3 01 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xd3
        __asm _emit 0x01
        __asm _emit 0x00
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
