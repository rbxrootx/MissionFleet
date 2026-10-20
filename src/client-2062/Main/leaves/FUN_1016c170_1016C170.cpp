// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1016C170 .. +0x47 bytes.
extern "C" __declspec(naked) void FUN_1016c170_1016C170() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 30h]
        test eax, eax
        ; Exact mapped bytes 74 3B: je 0x1016c1b5
        __asm _emit 0x74
        __asm _emit 0x3b
        cmp dword ptr [esi + 4], -1
        ; Exact mapped bytes 74 35: je 0x1016c1b5
        __asm _emit 0x74
        __asm _emit 0x35
        mov eax, dword ptr [esi]
        ; Exact mapped bytes FF 50 10: call dword ptr [eax + 0x10]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x10
        mov ecx, dword ptr [esi + 4]
        push 1
        push ecx
        ; Exact mapped bytes FF 15 AC 51 17 10: call dword ptr [0x101751ac]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xac
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        mov edx, dword ptr [esi + 4]
        push edx
        ; Exact mapped bytes FF 15 A4 51 17 10: call dword ptr [0x101751a4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [esi + 2ch]
        push eax
        ; Exact mapped bytes E8 39 05 00 00: call 0x1016c6e0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 4], 0ffffffffh
        mov dword ptr [esi + 30h], 0
        pop esi
        ret
    }
}
