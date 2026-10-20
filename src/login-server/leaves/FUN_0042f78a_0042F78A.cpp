// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042F78A .. +0x4C bytes.
extern "C" __declspec(naked) void FUN_0042f78a_0042F78A() {
    __asm {
        push esi
        push edi
        push 435d3bh
        mov ecx, 44dcc0h
        ; Exact mapped bytes E8 18 76 00 00: call 0x436db3
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x76
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, eax
        mov edi, dword ptr [esp + 0ch]
        cmp dword ptr [esi + 14h], edi
        ; Exact mapped bytes 74 2B: je 0x42f7d1
        __asm _emit 0x74
        __asm _emit 0x2b
        cmp dword ptr [esi + 2ch], 0
        ; Exact mapped bytes 75 22: jne 0x42f7ce
        __asm _emit 0x75
        __asm _emit 0x22
        ; Exact mapped bytes FF 15 E4 C1 43 00: call dword ptr [0x43c1e4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        push eax
        push 0
        push 42f594h
        push 5
        ; Exact mapped bytes FF 15 54 C4 43 00: call dword ptr [0x43c454]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0xc4
        __asm _emit 0x43
        __asm _emit 0x00
        test eax, eax
        mov dword ptr [esi + 2ch], eax
        ; Exact mapped bytes 75 05: jne 0x42f7ce
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 53 D5 FF FF: call 0x42cd21
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xd5
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 14h], edi
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
