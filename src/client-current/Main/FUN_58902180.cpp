// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 59 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58902180 .. +0x3B bytes.
extern "C" __declspec(naked) void FUN_58902180_segment_00() {
    __asm {
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B 74 24 08: mov esi, dword ptr [esp + 8]
        __asm _emit 0x8b
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 8B 7C 24 10: mov edi, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 3B F7: cmp esi, edi
        __asm _emit 0x3b
        __asm _emit 0xf7
        ; Exact mapped bytes 74 2A: je 0x589021b8
        __asm _emit 0x74
        __asm _emit 0x2a
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 33 DB: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xdb
        ; Exact mapped bytes 83 7E 18 10: cmp dword ptr [esi + 0x18], 0x10
        __asm _emit 0x83
        __asm _emit 0x7e
        __asm _emit 0x18
        __asm _emit 0x10
        ; Exact mapped bytes 72 0C: jb 0x589021a3
        __asm _emit 0x72
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 46 04: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x04
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 A2 AA 07 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xaa
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes C7 46 18 0F 00 00 00: mov dword ptr [esi + 0x18], 0xf
        __asm _emit 0xc7
        __asm _emit 0x46
        __asm _emit 0x18
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 5E 14: mov dword ptr [esi + 0x14], ebx
        __asm _emit 0x89
        __asm _emit 0x5e
        __asm _emit 0x14
        ; Exact mapped bytes 88 5E 04: mov byte ptr [esi + 4], bl
        __asm _emit 0x88
        __asm _emit 0x5e
        __asm _emit 0x04
        ; Exact mapped bytes 83 C6 1C: add esi, 0x1c
        __asm _emit 0x83
        __asm _emit 0xc6
        __asm _emit 0x1c
        ; Exact mapped bytes 3B F7: cmp esi, edi
        __asm _emit 0x3b
        __asm _emit 0xf7
        ; Exact mapped bytes 75 DA: jne 0x58902191
        __asm _emit 0x75
        __asm _emit 0xda
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
