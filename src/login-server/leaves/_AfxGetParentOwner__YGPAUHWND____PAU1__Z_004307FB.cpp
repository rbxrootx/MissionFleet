// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004307FB .. +0x45 bytes.
extern "C" __declspec(naked) void _AfxGetParentOwner__YGPAUHWND____PAU1__Z_004307FB() {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        push esi
        ; Exact mapped bytes E8 F9 EA FF FF: call 0x42f2ff
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 10: je 0x43081a
        __asm _emit 0x74
        __asm _emit 0x10
        mov ecx, eax
        ; Exact mapped bytes E8 F9 62 FE FF: call 0x416b0a
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x62
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 27: je 0x43083c
        __asm _emit 0x74
        __asm _emit 0x27
        mov eax, dword ptr [eax + 1ch]
        ; Exact mapped bytes EB 22: jmp 0x43083c
        __asm _emit 0xeb
        __asm _emit 0x22
        push -10h
        push esi
        ; Exact mapped bytes FF 15 14 C5 43 00: call dword ptr [0x43c514]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        test eax, 40000000h
        ; Exact mapped bytes 74 09: je 0x430833
        __asm _emit 0x74
        __asm _emit 0x09
        push esi
        ; Exact mapped bytes FF 15 08 C5 43 00: call dword ptr [0x43c508]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x08
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes EB 09: jmp 0x43083c
        __asm _emit 0xeb
        __asm _emit 0x09
        push 4
        push esi
        ; Exact mapped bytes FF 15 78 C4 43 00: call dword ptr [0x43c478]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
