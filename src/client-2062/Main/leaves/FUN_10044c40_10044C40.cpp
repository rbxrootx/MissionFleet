// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10044C40 .. +0xA6 bytes.
extern "C" __declspec(naked) void FUN_10044c40_10044C40() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 88h]
        test eax, eax
        ; Exact mapped bytes 74 16: je 0x10044c63
        __asm _emit 0x74
        __asm _emit 0x16
        mov eax, dword ptr [esi + 138h]
        ; Exact mapped bytes 8B 0D 1C 57 1C 10: mov ecx, dword ptr [0x101c571c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push eax
        ; Exact mapped bytes E8 71 9C 05 00: call 0x1009e8d0
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x9c
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 21: jne 0x10044c84
        __asm _emit 0x75
        __asm _emit 0x21
        mov ecx, dword ptr [esi + 30ch]
        xor ecx, 0aaaaaaaah
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 D9 E6 FF FF: call 0x10043350
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, 0aaaaaaaah
        mov dword ptr [esi + 30ch], eax
        ; Exact mapped bytes EB 24: jmp 0x10044ca8
        __asm _emit 0xeb
        __asm _emit 0x24
        cmp eax, 1
        ; Exact mapped bytes 75 1F: jne 0x10044ca8
        __asm _emit 0x75
        __asm _emit 0x1f
        mov edx, dword ptr [esi + 3c0h]
        mov ecx, esi
        xor edx, 0aaaaaaaah
        push edx
        ; Exact mapped bytes E8 B3 E6 FF FF: call 0x10043350
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, 0aaaaaaaah
        mov dword ptr [esi + 3c0h], eax
        ; Exact mapped bytes 8B 0D C4 58 1C 10: mov ecx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [esi + 88h]
        cmp eax, dword ptr [ecx + 4]
        ; Exact mapped bytes 75 2B: jne 0x10044ce4
        __asm _emit 0x75
        __asm _emit 0x2b
        mov edx, dword ptr [esi + 3c0h]
        mov eax, dword ptr [esi + 30ch]
        mov ecx, dword ptr [esi + 138h]
        xor edx, 0aaaaaaaah
        xor eax, 0aaaaaaaah
        push edx
        push eax
        push ecx
        ; Exact mapped bytes 8B 0D 1C 57 1C 10: mov ecx, dword ptr [0x101c571c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 DC 99 05 00: call 0x1009e6c0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x99
        __asm _emit 0x05
        __asm _emit 0x00
        pop esi
        ret
    }
}
