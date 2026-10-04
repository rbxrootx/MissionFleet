// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587B70A0 .. +0x88 bytes.
// Source symbol alias: FUN_587b70a0.
extern "C" __declspec(naked) void FUN_587b70a0() {
    __asm {
        // 0x587B70A0: cmp dword ptr [0x589c8edc], 0
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0xDC
        __asm _emit 0x8E
        __asm _emit 0x9C
        __asm _emit 0x58
        __asm _emit 0x00
        // 0x587B70A7: push edi
        __asm _emit 0x57
        // 0x587B70A8: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x587B70AA: je 0x587b711f
        __asm _emit 0x74
        __asm _emit 0x73
        // 0x587B70AC: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587B70B1: mov ecx, dword ptr [eax + 0x10524]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x24
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587B70B7: push ebx
        __asm _emit 0x53
        // 0x587B70B8: mov ebx, dword ptr [0x58a24580]
        __asm _emit 0x8B
        __asm _emit 0x1D
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587B70BE: mov eax, dword ptr [ebx + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x1C
        // 0x587B70C1: sub eax, dword ptr [ebx + 0x14]
        __asm _emit 0x2B
        __asm _emit 0x43
        __asm _emit 0x14
        // 0x587B70C4: push ebp
        __asm _emit 0x55
        // 0x587B70C5: mov ebp, dword ptr [ecx + 0x114]
        __asm _emit 0x8B
        __asm _emit 0xA9
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B70CB: sar eax, 1
        __asm _emit 0xD1
        __asm _emit 0xF8
        // 0x587B70CD: imul eax, eax, 0x3e8
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B70D3: cdq
        __asm _emit 0x99
        // 0x587B70D4: idiv ebp
        __asm _emit 0xF7
        __asm _emit 0xFD
        // 0x587B70D6: push esi
        __asm _emit 0x56
        // 0x587B70D7: mov esi, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x77
        __asm _emit 0x04
        // 0x587B70DA: sub esi, eax
        __asm _emit 0x2B
        __asm _emit 0xF0
        // 0x587B70DC: mov eax, dword ptr [ebx + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x20
        // 0x587B70DF: sub eax, dword ptr [ebx + 0x18]
        __asm _emit 0x2B
        __asm _emit 0x43
        __asm _emit 0x18
        // 0x587B70E2: sub esi, dword ptr [ecx + 0x50]
        __asm _emit 0x2B
        __asm _emit 0x71
        __asm _emit 0x50
        // 0x587B70E5: sar eax, 1
        __asm _emit 0xD1
        __asm _emit 0xF8
        // 0x587B70E7: imul eax, eax, 0x3e8
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B70ED: cdq
        __asm _emit 0x99
        // 0x587B70EE: idiv ebp
        __asm _emit 0xF7
        __asm _emit 0xFD
        // 0x587B70F0: sub eax, dword ptr [edi + 8]
        __asm _emit 0x2B
        __asm _emit 0x47
        __asm _emit 0x08
        // 0x587B70F3: add eax, dword ptr [ecx + 0x54]
        __asm _emit 0x03
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x587B70F6: mov ecx, dword ptr [edi + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x58
        // 0x587B70F9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587B70FB: je 0x587b7113
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x587B70FD: mov edx, dword ptr [edi + 0x5c]
        __asm _emit 0x8B
        __asm _emit 0x57
        __asm _emit 0x5C
        // 0x587B7100: cmp edx, -1
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0xFF
        // 0x587B7103: jne 0x587b710b
        __asm _emit 0x75
        __asm _emit 0x06
        // 0x587B7105: mov edx, dword ptr [0x58a248f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587B710B: push edx
        __asm _emit 0x52
        // 0x587B710C: push eax
        __asm _emit 0x50
        // 0x587B710D: push esi
        __asm _emit 0x56
        // 0x587B710E: call 0x587b7400
        __asm _emit 0xE8
        __asm _emit 0xED
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B7113: pop esi
        __asm _emit 0x5E
        // 0x587B7114: pop ebp
        __asm _emit 0x5D
        // 0x587B7115: pop ebx
        __asm _emit 0x5B
        // 0x587B7116: mov dword ptr [edi + 0x2c], 0x101
        __asm _emit 0xC7
        __asm _emit 0x47
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B711D: pop edi
        __asm _emit 0x5F
        // 0x587B711E: ret
        __asm _emit 0xC3
        // 0x587B711F: mov dword ptr [edi + 0x2c], 0x101
        __asm _emit 0xC7
        __asm _emit 0x47
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B7126: pop edi
        __asm _emit 0x5F
        // 0x587B7127: ret
        __asm _emit 0xC3
    }
}
