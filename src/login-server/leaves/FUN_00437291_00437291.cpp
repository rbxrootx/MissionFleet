// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00437291 .. +0x63 bytes.
extern "C" __declspec(naked) void FUN_00437291_00437291() {
    __asm {
        push esi
        ; Exact mapped bytes 8B 35 FC C0 43 00: mov esi, dword ptr [0x43c0fc]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xfc
        __asm _emit 0xc0
        __asm _emit 0x43
        __asm _emit 0x00
        push 0
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes 66 0D 01 80: or ax, 0x8001
        __asm _emit 0x66
        __asm _emit 0x0d
        __asm _emit 0x01
        __asm _emit 0x80
        push eax
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        ; Exact mapped bytes E8 0B EA FF FF: call 0x435cb3
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, dword ptr [esp + 8]
        mov dword ptr [eax + 8], esi
        mov dword ptr [eax + 0ch], esi
        ; Exact mapped bytes E8 FC E9 FF FF: call 0x435cb3
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [eax + 4]
        test eax, eax
        ; Exact mapped bytes 74 1F: je 0x4372dd
        __asm _emit 0x74
        __asm _emit 0x1f
        mov ecx, dword ptr [esp + 0ch]
        mov dword ptr [eax + 68h], esi
        mov dword ptr [eax + 6ch], ecx
        mov ecx, dword ptr [esp + 10h]
        mov dword ptr [eax + 70h], ecx
        mov ecx, dword ptr [esp + 14h]
        mov dword ptr [eax + 74h], ecx
        mov ecx, eax
        ; Exact mapped bytes E8 17 00 00 00: call 0x4372f4
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 D1 E9 FF FF: call 0x435cb3
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        cmp byte ptr [eax + 14h], 0
        pop esi
        ; Exact mapped bytes 75 05: jne 0x4372ee
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 F2 AC FF FF: call 0x431fe0
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xac
        __asm _emit 0xff
        __asm _emit 0xff
        push 1
        pop eax
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
