// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041DD37 .. +0x62 bytes.
extern "C" __declspec(naked) void __AfxRemoveDefaultButton__YGXPAVCWnd__0_Z_0041DD37() {
    __asm {
        push esi
        mov esi, dword ptr [esp + 0ch]
        test esi, esi
        push edi
        ; Exact mapped bytes 74 1E: je 0x41dd5f
        __asm _emit 0x74
        __asm _emit 0x1e
        push -14h
        push dword ptr [esi + 1ch]
        ; Exact mapped bytes FF 15 14 C5 43 00: call dword ptr [0x43c514]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        test eax, 10000h
        ; Exact mapped bytes 75 0C: jne 0x41dd5f
        __asm _emit 0x75
        __asm _emit 0x0c
        push esi
        push dword ptr [esp + 10h]
        ; Exact mapped bytes E8 D1 FB FF FF: call 0x41d92e
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 0D: jmp 0x41dd6c
        __asm _emit 0xeb
        __asm _emit 0x0d
        push 3
        push 0
        push dword ptr [esp + 14h]
        ; Exact mapped bytes E8 1B FC FF FF: call 0x41d987
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, eax
        test edi, edi
        ; Exact mapped bytes 74 22: je 0x41dd94
        __asm _emit 0x74
        __asm _emit 0x22
        mov esi, edi
        push 0
        push esi
        ; Exact mapped bytes E8 4D FF FF FF: call 0x41dcc9
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        pop ecx
        push 0
        push esi
        push dword ptr [esp + 14h]
        ; Exact mapped bytes E8 FD FB FF FF: call 0x41d987
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, eax
        test esi, esi
        ; Exact mapped bytes 74 04: je 0x41dd94
        __asm _emit 0x74
        __asm _emit 0x04
        cmp esi, edi
        ; Exact mapped bytes 75 E0: jne 0x41dd74
        __asm _emit 0x75
        __asm _emit 0xe0
        pop edi
        pop esi
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
