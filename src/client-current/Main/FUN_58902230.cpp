// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 42 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58902230 .. +0x2A bytes.
extern "C" __declspec(naked) void FUN_58902230_segment_00() {
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
        ; Exact mapped bytes 74 19: je 0x58902257
        __asm _emit 0x74
        __asm _emit 0x19
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 8B 5C 24 18: mov ebx, dword ptr [esp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 6A FF: push -1
        __asm _emit 0x6a
        __asm _emit 0xff
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 D1 2C E3 FF: call 0x58734f20
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x2c
        __asm _emit 0xe3
        __asm _emit 0xff
        ; Exact mapped bytes 83 C6 1C: add esi, 0x1c
        __asm _emit 0x83
        __asm _emit 0xc6
        __asm _emit 0x1c
        ; Exact mapped bytes 3B F7: cmp esi, edi
        __asm _emit 0x3b
        __asm _emit 0xf7
        ; Exact mapped bytes 75 ED: jne 0x58902243
        __asm _emit 0x75
        __asm _emit 0xed
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
