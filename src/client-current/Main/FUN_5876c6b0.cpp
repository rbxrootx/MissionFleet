// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5876C6B0 .. +0xFE bytes.
// Source symbol alias: FUN_5876c6b0.
extern "C" __declspec(naked) void FUN_5876c6b0() {
    __asm {
        // 0x5876C6B0: push esi
        __asm _emit 0x56
        // 0x5876C6B1: mov esi, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5876C6B5: mov eax, 0x91a2b3c5
        __asm _emit 0xB8
        __asm _emit 0xC5
        __asm _emit 0xB3
        __asm _emit 0xA2
        __asm _emit 0x91
        // 0x5876C6BA: imul esi
        __asm _emit 0xF7
        __asm _emit 0xEE
        // 0x5876C6BC: add edx, esi
        __asm _emit 0x03
        __asm _emit 0xD6
        // 0x5876C6BE: sar edx, 9
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x09
        // 0x5876C6C1: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5876C6C3: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5876C6C6: push edi
        __asm _emit 0x57
        // 0x5876C6C7: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5876C6C9: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5876C6CB: cmp eax, 3
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x5876C6CE: ja 0x5876c761
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0x8D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876C6D4: jmp dword ptr [eax*4 + 0x5876c7b0]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xB0
        __asm _emit 0xC7
        __asm _emit 0x76
        __asm _emit 0x58
        // 0x5876C6DB: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5876C6DF: mov eax, 0x91a2b3c5
        __asm _emit 0xB8
        __asm _emit 0xC5
        __asm _emit 0xB3
        __asm _emit 0xA2
        __asm _emit 0x91
        // 0x5876C6E4: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x5876C6E6: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xD1
        // 0x5876C6E8: sar edx, 9
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x09
        // 0x5876C6EB: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5876C6ED: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5876C6F0: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5876C6F2: cmp eax, 3
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x5876C6F5: ja 0x5876c761
        __asm _emit 0x77
        __asm _emit 0x6A
        // 0x5876C6F7: jmp dword ptr [eax*4 + 0x5876c7c0]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xC0
        __asm _emit 0xC7
        __asm _emit 0x76
        __asm _emit 0x58
        // 0x5876C6FE: lea eax, [esi + 0x708]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876C704: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x5876C706: jg 0x5876c75d
        __asm _emit 0x7F
        __asm _emit 0x55
        // 0x5876C708: jge 0x5876c772
        __asm _emit 0x7D
        __asm _emit 0x68
        // 0x5876C70A: sub ecx, esi
        __asm _emit 0x2B
        __asm _emit 0xCE
        // 0x5876C70C: sub ecx, 0xe10
        __asm _emit 0x81
        __asm _emit 0xE9
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876C712: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x5876C714: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x5876C716: pop edi
        __asm _emit 0x5F
        // 0x5876C717: pop esi
        __asm _emit 0x5E
        // 0x5876C718: ret
        __asm _emit 0xC3
        // 0x5876C719: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5876C71D: mov eax, 0x91a2b3c5
        __asm _emit 0xB8
        __asm _emit 0xC5
        __asm _emit 0xB3
        __asm _emit 0xA2
        __asm _emit 0x91
        // 0x5876C722: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x5876C724: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xD1
        // 0x5876C726: sar edx, 9
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x09
        // 0x5876C729: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5876C72B: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5876C72E: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5876C730: js 0x5876c761
        __asm _emit 0x78
        __asm _emit 0x2F
        // 0x5876C732: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x5876C735: jle 0x5876c75d
        __asm _emit 0x7E
        __asm _emit 0x26
        // 0x5876C737: cmp eax, 3
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x5876C73A: jne 0x5876c761
        __asm _emit 0x75
        __asm _emit 0x25
        // 0x5876C73C: jmp 0x5876c6fe
        __asm _emit 0xEB
        __asm _emit 0xC0
        // 0x5876C73E: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5876C742: mov eax, 0x91a2b3c5
        __asm _emit 0xB8
        __asm _emit 0xC5
        __asm _emit 0xB3
        __asm _emit 0xA2
        __asm _emit 0x91
        // 0x5876C747: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x5876C749: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xD1
        // 0x5876C74B: sar edx, 9
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x09
        // 0x5876C74E: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5876C750: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5876C753: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5876C755: je 0x5876c766
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x5876C757: dec eax
        __asm _emit 0x48
        // 0x5876C758: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x5876C75B: ja 0x5876c761
        __asm _emit 0x77
        __asm _emit 0x04
        // 0x5876C75D: sub ecx, esi
        __asm _emit 0x2B
        __asm _emit 0xCE
        // 0x5876C75F: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x5876C761: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x5876C763: pop edi
        __asm _emit 0x5F
        // 0x5876C764: pop esi
        __asm _emit 0x5E
        // 0x5876C765: ret
        __asm _emit 0xC3
        // 0x5876C766: lea eax, [esi - 0x708]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0xF8
        __asm _emit 0xF8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5876C76C: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x5876C76E: jg 0x5876c79f
        __asm _emit 0x7F
        __asm _emit 0x2F
        // 0x5876C770: jl 0x5876c75d
        __asm _emit 0x7C
        __asm _emit 0xEB
        // 0x5876C772: mov edi, 0x708
        __asm _emit 0xBF
        __asm _emit 0x08
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876C777: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x5876C779: pop edi
        __asm _emit 0x5F
        // 0x5876C77A: pop esi
        __asm _emit 0x5E
        // 0x5876C77B: ret
        __asm _emit 0xC3
        // 0x5876C77C: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5876C780: mov eax, 0x91a2b3c5
        __asm _emit 0xB8
        __asm _emit 0xC5
        __asm _emit 0xB3
        __asm _emit 0xA2
        __asm _emit 0x91
        // 0x5876C785: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x5876C787: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xD1
        // 0x5876C789: sar edx, 9
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x09
        // 0x5876C78C: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5876C78E: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5876C791: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5876C793: cmp eax, 3
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x03
        // 0x5876C796: ja 0x5876c761
        __asm _emit 0x77
        __asm _emit 0xC9
        // 0x5876C798: jmp dword ptr [eax*4 + 0x5876c7d0]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xD0
        __asm _emit 0xC7
        __asm _emit 0x76
        __asm _emit 0x58
        // 0x5876C79F: sub ecx, esi
        __asm _emit 0x2B
        __asm _emit 0xCE
        // 0x5876C7A1: add ecx, 0xe10
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x10
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876C7A7: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x5876C7A9: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x5876C7AB: pop edi
        __asm _emit 0x5F
        // 0x5876C7AC: pop esi
        __asm _emit 0x5E
        // 0x5876C7AD: ret
        __asm _emit 0xC3
    }
}
