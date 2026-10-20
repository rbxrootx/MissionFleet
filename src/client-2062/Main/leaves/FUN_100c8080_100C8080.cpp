// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100C8080 .. +0xD2 bytes.
extern "C" __declspec(naked) void FUN_100c8080_100C8080() {
    __asm {
        sub esp, 240h
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov ecx, dword ptr [esi + 7ch]
        ; Exact mapped bytes E8 7C C6 03 00: call 0x10104710
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xc6
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 80h]
        ; Exact mapped bytes E8 71 C6 03 00: call 0x10104710
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xc6
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 84h]
        ; Exact mapped bytes E8 66 C6 03 00: call 0x10104710
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xc6
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 88h]
        ; Exact mapped bytes E8 5B C6 03 00: call 0x10104710
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xc6
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 8ch]
        ; Exact mapped bytes E8 50 C6 03 00: call 0x10104710
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xc6
        __asm _emit 0x03
        __asm _emit 0x00
        mov ebp, dword ptr [esp + 254h]
        lea eax, [esp + 150h]
        push ebp
        push 101ac1f8h
        push eax
        ; Exact mapped bytes FF 15 88 51 17 10: call dword ptr [0x10175188]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        add esp, 0ch
        lea ecx, [esp + 10h]
        lea edx, [esp + 150h]
        push ecx
        push edx
        ; Exact mapped bytes FF 15 E0 50 17 10: call dword ptr [0x101750e0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        mov edi, eax
        cmp edi, -1
        ; Exact mapped bytes 74 46: je 0x100c813e
        __asm _emit 0x74
        __asm _emit 0x46
        test byte ptr [esp + 10h], 10h
        ; Exact mapped bytes 75 0D: jne 0x100c810c
        __asm _emit 0x75
        __asm _emit 0x0d
        lea eax, [esp + 3ch]
        mov ecx, esi
        push eax
        push ebp
        ; Exact mapped bytes E8 54 00 00 00: call 0x100c8160
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 1D DC 50 17 10: mov ebx, dword ptr [0x101750dc]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0xdc
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        lea ecx, [esp + 10h]
        push ecx
        push edi
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        test eax, eax
        ; Exact mapped bytes 74 20: je 0x100c813e
        __asm _emit 0x74
        __asm _emit 0x20
        test byte ptr [esp + 10h], 10h
        ; Exact mapped bytes 75 0D: jne 0x100c8132
        __asm _emit 0x75
        __asm _emit 0x0d
        lea edx, [esp + 3ch]
        mov ecx, esi
        push edx
        push ebp
        ; Exact mapped bytes E8 2E 00 00 00: call 0x100c8160
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [esp + 10h]
        push eax
        push edi
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x100c811e
        __asm _emit 0x75
        __asm _emit 0xe0
        push edi
        ; Exact mapped bytes FF 15 D4 50 17 10: call dword ptr [0x101750d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 240h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
