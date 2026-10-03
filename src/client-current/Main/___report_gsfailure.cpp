// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5897D5E2 .. +0x106 bytes.
extern "C" __declspec(naked) void ___report_gsfailure() {
    __asm {
        // 0x5897D5E2: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x5897D5E4: push ebp
        __asm _emit 0x55
        // 0x5897D5E5: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x5897D5E7: sub esp, 0x328
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x28
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897D5ED: mov dword ptr [0x58a28770], eax
        __asm _emit 0xA3
        __asm _emit 0x70
        __asm _emit 0x87
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5897D5F2: mov dword ptr [0x58a2876c], ecx
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x6C
        __asm _emit 0x87
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5897D5F8: mov dword ptr [0x58a28768], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x87
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5897D5FE: mov dword ptr [0x58a28764], ebx
        __asm _emit 0x89
        __asm _emit 0x1D
        __asm _emit 0x64
        __asm _emit 0x87
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5897D604: mov dword ptr [0x58a28760], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x60
        __asm _emit 0x87
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5897D60A: mov dword ptr [0x58a2875c], edi
        __asm _emit 0x89
        __asm _emit 0x3D
        __asm _emit 0x5C
        __asm _emit 0x87
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5897D610: mov word ptr [0x58a28788], ss
        __asm _emit 0x66
        __asm _emit 0x8C
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x87
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5897D617: mov word ptr [0x58a2877c], cs
        __asm _emit 0x66
        __asm _emit 0x8C
        __asm _emit 0x0D
        __asm _emit 0x7C
        __asm _emit 0x87
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5897D61E: mov word ptr [0x58a28758], ds
        __asm _emit 0x66
        __asm _emit 0x8C
        __asm _emit 0x1D
        __asm _emit 0x58
        __asm _emit 0x87
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5897D625: mov word ptr [0x58a28754], es
        __asm _emit 0x66
        __asm _emit 0x8C
        __asm _emit 0x05
        __asm _emit 0x54
        __asm _emit 0x87
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5897D62C: mov word ptr [0x58a28750], fs
        __asm _emit 0x66
        __asm _emit 0x8C
        __asm _emit 0x25
        __asm _emit 0x50
        __asm _emit 0x87
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5897D633: mov word ptr [0x58a2874c], gs
        __asm _emit 0x66
        __asm _emit 0x8C
        __asm _emit 0x2D
        __asm _emit 0x4C
        __asm _emit 0x87
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5897D63A: pushfd
        __asm _emit 0x9C
        // 0x5897D63B: pop dword ptr [0x58a28780]
        __asm _emit 0x8F
        __asm _emit 0x05
        __asm _emit 0x80
        __asm _emit 0x87
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5897D641: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x5897D644: mov dword ptr [0x58a28774], eax
        __asm _emit 0xA3
        __asm _emit 0x74
        __asm _emit 0x87
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5897D649: mov eax, dword ptr [ebp + 4]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x04
        // 0x5897D64C: mov dword ptr [0x58a28778], eax
        __asm _emit 0xA3
        __asm _emit 0x78
        __asm _emit 0x87
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5897D651: lea eax, [ebp + 8]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x5897D654: mov dword ptr [0x58a28784], eax
        __asm _emit 0xA3
        __asm _emit 0x84
        __asm _emit 0x87
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5897D659: mov eax, dword ptr [ebp - 0x320]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0xE0
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5897D65F: mov dword ptr [0x58a286c0], 0x10001
        __asm _emit 0xC7
        __asm _emit 0x05
        __asm _emit 0xC0
        __asm _emit 0x86
        __asm _emit 0xA2
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5897D669: mov eax, dword ptr [0x58a28778]
        __asm _emit 0xA1
        __asm _emit 0x78
        __asm _emit 0x87
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5897D66E: mov dword ptr [0x58a28674], eax
        __asm _emit 0xA3
        __asm _emit 0x74
        __asm _emit 0x86
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5897D673: mov dword ptr [0x58a28668], 0xc0000409
        __asm _emit 0xC7
        __asm _emit 0x05
        __asm _emit 0x68
        __asm _emit 0x86
        __asm _emit 0xA2
        __asm _emit 0x58
        __asm _emit 0x09
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0xC0
        // 0x5897D67D: mov dword ptr [0x58a2866c], 1
        __asm _emit 0xC7
        __asm _emit 0x05
        __asm _emit 0x6C
        __asm _emit 0x86
        __asm _emit 0xA2
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897D687: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5897D68C: mov dword ptr [ebp - 0x328], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xD8
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5897D692: mov eax, dword ptr [0x589cfbd8]
        __asm _emit 0xA1
        __asm _emit 0xD8
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5897D697: mov dword ptr [ebp - 0x324], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xDC
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5897D69D: call dword ptr [0x5898c0ec]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xEC
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5897D6A3: mov dword ptr [0x58a286b8], eax
        __asm _emit 0xA3
        __asm _emit 0xB8
        __asm _emit 0x86
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5897D6A8: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5897D6AA: call 0x5897da9c
        __asm _emit 0xE8
        __asm _emit 0xED
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897D6AF: pop ecx
        __asm _emit 0x59
        // 0x5897D6B0: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5897D6B2: call dword ptr [0x5898c0f0]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xF0
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5897D6B8: push 0x589a3cb0
        __asm _emit 0x68
        __asm _emit 0xB0
        __asm _emit 0x3C
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5897D6BD: call dword ptr [0x5898c0f4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xF4
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5897D6C3: cmp dword ptr [0x58a286b8], 0
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0xB8
        __asm _emit 0x86
        __asm _emit 0xA2
        __asm _emit 0x58
        __asm _emit 0x00
        // 0x5897D6CA: jne 0x5897d6d4
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x5897D6CC: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5897D6CE: call 0x5897da9c
        __asm _emit 0xE8
        __asm _emit 0xC9
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897D6D3: pop ecx
        __asm _emit 0x59
        // 0x5897D6D4: push 0xc0000409
        __asm _emit 0x68
        __asm _emit 0x09
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0xC0
        // 0x5897D6D9: call dword ptr [0x5898c0f8]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5897D6DF: push eax
        __asm _emit 0x50
        // 0x5897D6E0: call dword ptr [0x5898c0fc]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xFC
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5897D6E6: leave
        __asm _emit 0xC9
        // 0x5897D6E7: ret
        __asm _emit 0xC3
    }
}
