// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58903290 .. +0x4D bytes.
extern "C" __declspec(naked) void FUN_58903290() {
    __asm {
        ; Exact mapped bytes 8B 44 24 04: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes 8B 4C 24 10: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 8B 56 3C: mov edx, dword ptr [esi + 0x3c]
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x3c
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 8B F8: mov edi, eax
        __asm _emit 0x8b
        __asm _emit 0xf8
        ; Exact mapped bytes 2B 7E 04: sub edi, dword ptr [esi + 4]
        __asm _emit 0x2b
        __asm _emit 0x7e
        __asm _emit 0x04
        ; Exact mapped bytes 8B D9: mov ebx, ecx
        __asm _emit 0x8b
        __asm _emit 0xd9
        ; Exact mapped bytes 2B 5E 08: sub ebx, dword ptr [esi + 8]
        __asm _emit 0x2b
        __asm _emit 0x5e
        __asm _emit 0x08
        ; Exact mapped bytes 89 46 04: mov dword ptr [esi + 4], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x04
        ; Exact mapped bytes 89 4E 08: mov dword ptr [esi + 8], ecx
        __asm _emit 0x89
        __asm _emit 0x4e
        __asm _emit 0x08
        ; Exact mapped bytes 85 D2: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 74 23: je 0x589032d7
        __asm _emit 0x74
        __asm _emit 0x23
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
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
        ; Exact mapped bytes 74 09: je 0x589032cb
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 8B CA: mov ecx, edx
        __asm _emit 0x8b
        __asm _emit 0xca
        ; Exact mapped bytes E8 45 FB FF FF: call 0x58902e10
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 52 38: mov edx, dword ptr [edx + 0x38]
        __asm _emit 0x8b
        __asm _emit 0x52
        __asm _emit 0x38
        ; Exact mapped bytes 3B 56 3C: cmp edx, dword ptr [esi + 0x3c]
        __asm _emit 0x3b
        __asm _emit 0x56
        __asm _emit 0x3c
        ; Exact mapped bytes 74 04: je 0x589032d7
        __asm _emit 0x74
        __asm _emit 0x04
        ; Exact mapped bytes 85 D2: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 75 DD: jne 0x589032b4
        __asm _emit 0x75
        __asm _emit 0xdd
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
