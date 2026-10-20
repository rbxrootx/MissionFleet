// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5874E220 .. +0x6C bytes.
extern "C" __declspec(naked) void FUN_5874e220() {
    __asm {
        push esi
        push 2
        push 3
        push 7
        mov esi, ecx
        ; Exact mapped bytes E8 E2 D4 FF FF: call 0x5874b710
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xd4
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 48: je 0x5874e27a
        __asm _emit 0x74
        __asm _emit 0x48
        ; Exact mapped bytes A1 F4 47 A2 58: mov eax, dword ptr [0x58a247f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [eax + 30h]
        test eax, eax
        ; Exact mapped bytes 74 40: je 0x5874e27e
        __asm _emit 0x74
        __asm _emit 0x40
        ; Exact mapped bytes 66 83 BE 6A 01 00 00 0A: cmp word ptr [esi + 0x16a], 0xa
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xbe
        __asm _emit 0x6a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x0a
        ; Exact mapped bytes 75 36: jne 0x5874e27e
        __asm _emit 0x75
        __asm _emit 0x36
        mov ecx, dword ptr [eax + 0cc0h]
        mov dl, byte ptr [ecx + 4]
        and dl, 1fh
        cmp dl, 9
        ; Exact mapped bytes 75 25: jne 0x5874e27e
        __asm _emit 0x75
        __asm _emit 0x25
        push 0
        push 0
        push 5898d3ach
        ; Exact mapped bytes FF 15 30 C0 98 58: call dword ptr [0x5898c030]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc0
        __asm _emit 0x98
        __asm _emit 0x58
        add esp, 4
        push eax
        push 28h
        ; Exact mapped bytes E8 7D D8 01 00: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xd8
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 B6 6A 01 00: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x6a
        __asm _emit 0x01
        __asm _emit 0x00
        xor al, al
        pop esi
        ret
        mov ecx, esi
        ; Exact mapped bytes E8 8B D5 FF FF: call 0x5874b810
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xd5
        __asm _emit 0xff
        __asm _emit 0xff
        test al, al
        setne al
        pop esi
        ret
    }
}
