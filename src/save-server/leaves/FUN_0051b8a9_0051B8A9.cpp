// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051B8A9 .. +0x69 bytes.
extern "C" __declspec(naked) void FUN_0051b8a9_0051B8A9() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        mov dword ptr [ebp - 2ch], ecx
        push 20h
        mov eax, dword ptr [ebp + 8]
        push eax
        lea ecx, [ebp - 20h]
        push ecx
        ; Exact mapped bytes E8 3F 9A F4 FF: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x9a
        __asm _emit 0xf4
        __asm _emit 0xff
        add esp, 0ch
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 15: je 0x51b8df
        __asm _emit 0x74
        __asm _emit 0x15
        cmp dword ptr [ebp - 10h], -1
        ; Exact mapped bytes 74 0F: je 0x51b8df
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 10h], ecx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 15: je 0x51b8fa
        __asm _emit 0x74
        __asm _emit 0x15
        cmp dword ptr [ebp - 8], -1
        ; Exact mapped bytes 74 0F: je 0x51b8fa
        __asm _emit 0x74
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 28h], edx
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 8], ecx
        lea edx, [ebp - 20h]
        push edx
        mov eax, dword ptr [ebp - 2ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes FF 92 C8 00 00 00: call dword ptr [edx + 0xc8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
