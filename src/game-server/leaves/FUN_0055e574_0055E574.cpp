// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055E574 .. +0x63 bytes.
extern "C" __declspec(naked) void FUN_0055e574_0055E574() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 116h
        push 5cff18h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 D2 CB F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xcb
        __asm _emit 0xf9
        __asm _emit 0xff
        push 117h
        push 5cff18h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 24h]
        push edx
        ; Exact mapped bytes E8 BC CB F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xcb
        __asm _emit 0xf9
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 20h], 0
        ; Exact mapped bytes 74 0E: je 0x55e5bb
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 24h]
        mov eax, dword ptr [edx + 5ch]
        cmp eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 74 04: je 0x55e5bf
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 14: jmp 0x55e5d3
        __asm _emit 0xeb
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 24h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 24h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 92 B8 00 00 00: call dword ptr [edx + 0xb8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
