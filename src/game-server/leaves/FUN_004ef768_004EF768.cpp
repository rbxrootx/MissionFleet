// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004EF768 .. +0x5E bytes.
extern "C" __declspec(naked) void FUN_004ef768_004EF768() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 49: je 0x4ef7c0
        __asm _emit 0x74
        __asm _emit 0x49
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 38h], 0
        ; Exact mapped bytes 75 40: jne 0x4ef7c0
        __asm _emit 0x75
        __asm _emit 0x40
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes FF 15 D4 26 5E 00: call dword ptr [0x5e26d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 4A DA F9 FF: call 0x48d1e0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xda
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 21: je 0x4ef7c0
        __asm _emit 0x74
        __asm _emit 0x21
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 34h], 0
        ; Exact mapped bytes 74 18: je 0x4ef7c0
        __asm _emit 0x74
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 34h]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 34h]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 90 94 00 00 00: call dword ptr [eax + 0x94]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0x94
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
