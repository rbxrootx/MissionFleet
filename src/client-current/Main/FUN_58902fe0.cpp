// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58902FE0 .. +0x5E bytes.
extern "C" __declspec(naked) void FUN_58902fe0() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B 6C 24 08: mov ebp, dword ptr [esp + 8]
        __asm _emit 0x8b
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x08
        ; Exact mapped bytes 85 ED: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xed
        ; Exact mapped bytes 74 51: je 0x5890303a
        __asm _emit 0x74
        __asm _emit 0x51
        ; Exact mapped bytes 66 8B 41 24: mov ax, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x24
        ; Exact mapped bytes A8 01: test al, 1
        __asm _emit 0xa8
        __asm _emit 0x01
        ; Exact mapped bytes 74 49: je 0x5890303a
        __asm _emit 0x74
        __asm _emit 0x49
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B 71 4C: mov esi, dword ptr [ecx + 0x4c]
        __asm _emit 0x8b
        __asm _emit 0x71
        __asm _emit 0x4c
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 74 40: je 0x58903039
        __asm _emit 0x74
        __asm _emit 0x40
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 8B 5C 24 14: mov ebx, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 8B 7C 24 1C: mov edi, dword ptr [esp + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 66 83 7E 26 00: cmp word ptr [esi + 0x26], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7e
        __asm _emit 0x26
        __asm _emit 0x00
        ; Exact mapped bytes 7D 1A: jge 0x58903024
        __asm _emit 0x7d
        __asm _emit 0x1a
        ; Exact mapped bytes 8B 16: mov edx, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x16
        ; Exact mapped bytes 8B 42 14: mov eax, dword ptr [edx + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x14
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 76 48: mov esi, dword ptr [esi + 0x48]
        __asm _emit 0x8b
        __asm _emit 0x76
        __asm _emit 0x48
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 75 E6: jne 0x58903003
        __asm _emit 0x75
        __asm _emit 0xe6
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 8B 16: mov edx, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x16
        ; Exact mapped bytes 8B 42 14: mov eax, dword ptr [edx + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x14
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes 8B 76 48: mov esi, dword ptr [esi + 0x48]
        __asm _emit 0x8b
        __asm _emit 0x76
        __asm _emit 0x48
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 75 ED: jne 0x58903024
        __asm _emit 0x75
        __asm _emit 0xed
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
