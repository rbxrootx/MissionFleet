// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58902E10 .. +0x47 bytes.
extern "C" __declspec(naked) void FUN_58902e10() {
    __asm {
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 8B 5C 24 08: mov ebx, dword ptr [esp + 8]
        __asm _emit 0x8b
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B 6C 24 10: mov ebp, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 8B F9: mov edi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf9
        ; Exact mapped bytes 8B 77 3C: mov esi, dword ptr [edi + 0x3c]
        __asm _emit 0x8b
        __asm _emit 0x77
        __asm _emit 0x3c
        ; Exact mapped bytes 01 5F 04: add dword ptr [edi + 4], ebx
        __asm _emit 0x01
        __asm _emit 0x5f
        __asm _emit 0x04
        ; Exact mapped bytes 01 6F 08: add dword ptr [edi + 8], ebp
        __asm _emit 0x01
        __asm _emit 0x6f
        __asm _emit 0x08
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 74 28: je 0x58902e53
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes EB 03: jmp 0x58902e30
        __asm _emit 0xeb
        __asm _emit 0x03
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes B9 00 20 00 00: mov ecx, 0x2000
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 85 C1: test cx, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc1
        ; Exact mapped bytes 74 09: je 0x58902e47
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 C9 FF FF FF: call 0x58902e10
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 76 38: mov esi, dword ptr [esi + 0x38]
        __asm _emit 0x8b
        __asm _emit 0x76
        __asm _emit 0x38
        ; Exact mapped bytes 3B 77 3C: cmp esi, dword ptr [edi + 0x3c]
        __asm _emit 0x3b
        __asm _emit 0x77
        __asm _emit 0x3c
        ; Exact mapped bytes 74 04: je 0x58902e53
        __asm _emit 0x74
        __asm _emit 0x04
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 75 DD: jne 0x58902e30
        __asm _emit 0x75
        __asm _emit 0xdd
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
    }
}
