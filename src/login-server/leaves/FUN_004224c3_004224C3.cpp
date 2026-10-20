// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004224C3 .. +0x67 bytes.
extern "C" __declspec(naked) void FUN_004224c3_004224C3() {
    __asm {
        push esi
        push edi
        ; Exact mapped bytes FF 15 C0 C1 43 00: call dword ptr [0x43c1c0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes FF 35 F0 AB 44 00: push dword ptr [0x44abf0]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0xf0
        __asm _emit 0xab
        __asm _emit 0x44
        __asm _emit 0x00
        mov edi, eax
        ; Exact mapped bytes FF 15 D8 C0 43 00: call dword ptr [0x43c0d8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd8
        __asm _emit 0xc0
        __asm _emit 0x43
        __asm _emit 0x00
        mov esi, eax
        test esi, esi
        ; Exact mapped bytes 75 3F: jne 0x42251e
        __asm _emit 0x75
        __asm _emit 0x3f
        push 74h
        push 1
        ; Exact mapped bytes E8 58 3E 00 00: call 0x426340
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x3e
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, eax
        pop ecx
        test esi, esi
        pop ecx
        ; Exact mapped bytes 74 26: je 0x422516
        __asm _emit 0x74
        __asm _emit 0x26
        push esi
        ; Exact mapped bytes FF 35 F0 AB 44 00: push dword ptr [0x44abf0]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0xf0
        __asm _emit 0xab
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 E0 C0 43 00: call dword ptr [0x43c0e0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0xc0
        __asm _emit 0x43
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 15: je 0x422516
        __asm _emit 0x74
        __asm _emit 0x15
        push esi
        ; Exact mapped bytes E8 A9 FF FF FF: call 0x4224b0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        ; Exact mapped bytes FF 15 E4 C1 43 00: call dword ptr [0x43c1e4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        or dword ptr [esi + 4], 0ffffffffh
        mov dword ptr [esi], eax
        ; Exact mapped bytes EB 08: jmp 0x42251e
        __asm _emit 0xeb
        __asm _emit 0x08
        push 10h
        ; Exact mapped bytes E8 1A CB FF FF: call 0x41f037
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xcb
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        push edi
        ; Exact mapped bytes FF 15 D4 C1 43 00: call dword ptr [0x43c1d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        mov eax, esi
        pop edi
        pop esi
        ret
    }
}
