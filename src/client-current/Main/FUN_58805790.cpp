// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58805790 .. +0xEF bytes.
// Source symbol alias: FUN_58805790.
extern "C" __declspec(naked) void FUN_58805790() {
    __asm {
        // 0x58805790: movzx edx, word ptr [ecx + 0x204]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x91
        __asm _emit 0x04
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58805797: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5880579B: push esi
        __asm _emit 0x56
        // 0x5880579C: mov dword ptr [ecx + 0x80], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588057A2: cmp dx, 8
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x08
        // 0x588057A6: je 0x588057e6
        __asm _emit 0x74
        __asm _emit 0x3E
        // 0x588057A8: cmp dx, 9
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x09
        // 0x588057AC: je 0x588057e6
        __asm _emit 0x74
        __asm _emit 0x38
        // 0x588057AE: mov edx, dword ptr [ecx + 0xdc]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588057B4: mov esi, dword ptr [edx + eax*8]
        __asm _emit 0x8B
        __asm _emit 0x34
        __asm _emit 0xC2
        // 0x588057B7: lea edx, [edx + eax*8]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0xC2
        // 0x588057BA: sub esi, 0x96
        __asm _emit 0x81
        __asm _emit 0xEE
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588057C0: mov dword ptr [ecx + 0xf8], esi
        __asm _emit 0x89
        __asm _emit 0xB1
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588057C6: mov edx, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x04
        // 0x588057C9: sub edx, 0x12c
        __asm _emit 0x81
        __asm _emit 0xEA
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588057CF: mov dword ptr [ecx + 0xfc], edx
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588057D5: mov dword ptr [ecx + 0x84], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588057DB: mov dword ptr [ecx + 0x64], 0x40000000
        __asm _emit 0xC7
        __asm _emit 0x41
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x588057E2: pop esi
        __asm _emit 0x5E
        // 0x588057E3: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588057E6: mov edx, dword ptr [ecx + 0xdc]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588057EC: mov eax, dword ptr [edx + eax*8]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0xC2
        // 0x588057EF: mov edx, dword ptr [ecx + 0x118]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588057F5: sub eax, 0x96
        __asm _emit 0x2D
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588057FA: mov dword ptr [edx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x50
        // 0x588057FD: mov edx, dword ptr [ecx + 0xdc]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58805803: mov eax, dword ptr [ecx + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58805809: mov eax, dword ptr [edx + eax*8 + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0xC2
        __asm _emit 0x04
        // 0x5880580D: mov edx, dword ptr [ecx + 0x118]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58805813: sub eax, 0x12c
        __asm _emit 0x2D
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58805818: mov dword ptr [edx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x54
        // 0x5880581B: mov eax, dword ptr [ecx + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58805821: mov edx, dword ptr [ecx + 0xdc]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58805827: mov esi, dword ptr [edx + eax*8]
        __asm _emit 0x8B
        __asm _emit 0x34
        __asm _emit 0xC2
        // 0x5880582A: lea edx, [edx + eax*8]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0xC2
        // 0x5880582D: sub esi, 0x96
        __asm _emit 0x81
        __asm _emit 0xEE
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58805833: mov dword ptr [ecx + 0xf8], esi
        __asm _emit 0x89
        __asm _emit 0xB1
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58805839: mov edx, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x04
        // 0x5880583C: sub edx, 0x12c
        __asm _emit 0x81
        __asm _emit 0xEA
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58805842: mov dword ptr [ecx + 0xfc], edx
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58805848: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5880584A: mov dword ptr [ecx + 0x84], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58805850: mov dword ptr [ecx + 0x68], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x68
        // 0x58805853: mov eax, dword ptr [0x58a24810]
        __asm _emit 0xA1
        __asm _emit 0x10
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58805858: cmp dword ptr [eax + 4], 1
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x04
        __asm _emit 0x01
        // 0x5880585C: jne 0x588057e2
        __asm _emit 0x75
        __asm _emit 0x84
        // 0x5880585E: cmp dword ptr [eax + 0x482c], -1
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x2C
        __asm _emit 0x48
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        // 0x58805865: mov dword ptr [eax + 4], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x58805868: je 0x588057e2
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x74
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5880586E: mov eax, dword ptr [eax + 0x4820]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x20
        __asm _emit 0x48
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58805874: pop esi
        __asm _emit 0x5E
        // 0x58805875: mov dword ptr [esp + 4], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58805879: jmp dword ptr [0x5898c0c4]
        __asm _emit 0xFF
        __asm _emit 0x25
        __asm _emit 0xC4
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
    }
}
