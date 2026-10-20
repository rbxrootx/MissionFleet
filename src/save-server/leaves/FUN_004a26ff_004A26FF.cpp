// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A26FF .. +0x76 bytes.
extern "C" __declspec(naked) void FUN_004a26ff_004A26FF() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        lea eax, [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 94 89 FC FF: call 0x46b0a0
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x89
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 06: je 0x4a271e
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 26: jne 0x4a2744
        __asm _emit 0x75
        __asm _emit 0x26
        push 6739e0h
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        push 6739d0h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 17 61 08 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x61
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 F4 62 08 00: call 0x528a2f
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x62
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 09 61 08 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x61
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes EB 2B: jmp 0x4a276f
        __asm _emit 0xeb
        __asm _emit 0x2b
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [edx + 18h], 0
        push 6739ech
        mov eax, dword ptr [ebp - 4]
        push eax
        push 6739e4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 EA 60 08 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x60
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 E3 60 08 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x60
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 DC 60 08 00: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x60
        __asm _emit 0x08
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
