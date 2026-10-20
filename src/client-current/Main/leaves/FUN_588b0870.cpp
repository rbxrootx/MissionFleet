// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588B0870 .. +0x54 bytes.
extern "C" __declspec(naked) void FUN_588b0870() {
    __asm {
        cmp dword ptr [esp + 4], 0
        push esi
        mov esi, ecx
        ; Exact mapped bytes 74 18: je 0x588b0892
        __asm _emit 0x74
        __asm _emit 0x18
        ; Exact mapped bytes 8B 0D 98 45 A2 58: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [ecx + 0db4h]
        lea eax, [esi + 0ach]
        push eax
        ; Exact mapped bytes E8 BE 33 FC FF: call 0x58873c50
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x33
        __asm _emit 0xfc
        __asm _emit 0xff
        ; Exact mapped bytes 8B 15 CC 48 A2 58: mov edx, dword ptr [0x58a248cc]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        cmp byte ptr [edx + 7ah], 1
        mov ecx, esi
        ; Exact mapped bytes 75 0B: jne 0x588b08ab
        __asm _emit 0x75
        __asm _emit 0x0b
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        push 1
        ; Exact mapped bytes E8 3E F3 FF FF: call 0x588afbf0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [esi + 0ach]
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 F0 E6 FF FF: call 0x588aefb0
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
