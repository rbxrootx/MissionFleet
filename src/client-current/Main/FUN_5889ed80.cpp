// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5889ED80 .. +0x118 bytes.
// Source symbol alias: FUN_5889ed80.
extern "C" __declspec(naked) void FUN_5889ed80() {
    __asm {
        // 0x5889ED80: mov edx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5889ED84: lea eax, [edx - 0x10]
        __asm _emit 0x8D
        __asm _emit 0x42
        __asm _emit 0xF0
        // 0x5889ED87: push esi
        __asm _emit 0x56
        // 0x5889ED88: cmp eax, 0xce
        __asm _emit 0x3D
        __asm _emit 0xCE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889ED8D: ja 0x5889ee79
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0xE6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889ED93: movzx eax, byte ptr [eax + 0x5889eec0]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x80
        __asm _emit 0xC0
        __asm _emit 0xEE
        __asm _emit 0x89
        __asm _emit 0x58
        // 0x5889ED9A: jmp dword ptr [eax*4 + 0x5889ee98]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x98
        __asm _emit 0xEE
        __asm _emit 0x89
        __asm _emit 0x58
        // 0x5889EDA1: lea esi, [ecx + 0x254]
        __asm _emit 0x8D
        __asm _emit 0xB1
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889EDA7: push 0x58996468
        __asm _emit 0x68
        __asm _emit 0x68
        __asm _emit 0x64
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5889EDAC: push esi
        __asm _emit 0x56
        // 0x5889EDAD: call dword ptr [0x5898c198]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5889EDB3: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5889EDB5: pop esi
        __asm _emit 0x5E
        // 0x5889EDB6: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5889EDB9: lea esi, [ecx + 0x254]
        __asm _emit 0x8D
        __asm _emit 0xB1
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889EDBF: push 0x589a0240
        __asm _emit 0x68
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889EDC4: push esi
        __asm _emit 0x56
        // 0x5889EDC5: call dword ptr [0x5898c198]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5889EDCB: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5889EDCD: pop esi
        __asm _emit 0x5E
        // 0x5889EDCE: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5889EDD1: lea esi, [ecx + 0x254]
        __asm _emit 0x8D
        __asm _emit 0xB1
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889EDD7: push 0x589a023c
        __asm _emit 0x68
        __asm _emit 0x3C
        __asm _emit 0x02
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889EDDC: push esi
        __asm _emit 0x56
        // 0x5889EDDD: call dword ptr [0x5898c198]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5889EDE3: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5889EDE5: pop esi
        __asm _emit 0x5E
        // 0x5889EDE6: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5889EDE9: lea esi, [ecx + 0x254]
        __asm _emit 0x8D
        __asm _emit 0xB1
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889EDEF: push 0x589a0238
        __asm _emit 0x68
        __asm _emit 0x38
        __asm _emit 0x02
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889EDF4: push esi
        __asm _emit 0x56
        // 0x5889EDF5: call dword ptr [0x5898c198]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5889EDFB: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5889EDFD: pop esi
        __asm _emit 0x5E
        // 0x5889EDFE: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5889EE01: lea esi, [ecx + 0x254]
        __asm _emit 0x8D
        __asm _emit 0xB1
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889EE07: push 0x589963ac
        __asm _emit 0x68
        __asm _emit 0xAC
        __asm _emit 0x63
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5889EE0C: push esi
        __asm _emit 0x56
        // 0x5889EE0D: call dword ptr [0x5898c198]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5889EE13: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5889EE15: pop esi
        __asm _emit 0x5E
        // 0x5889EE16: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5889EE19: lea esi, [ecx + 0x254]
        __asm _emit 0x8D
        __asm _emit 0xB1
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889EE1F: push 0x5899bcdc
        __asm _emit 0x68
        __asm _emit 0xDC
        __asm _emit 0xBC
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5889EE24: push esi
        __asm _emit 0x56
        // 0x5889EE25: call dword ptr [0x5898c198]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5889EE2B: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5889EE2D: pop esi
        __asm _emit 0x5E
        // 0x5889EE2E: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5889EE31: lea esi, [ecx + 0x254]
        __asm _emit 0x8D
        __asm _emit 0xB1
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889EE37: push 0x589a0230
        __asm _emit 0x68
        __asm _emit 0x30
        __asm _emit 0x02
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889EE3C: push esi
        __asm _emit 0x56
        // 0x5889EE3D: call dword ptr [0x5898c198]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5889EE43: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5889EE45: pop esi
        __asm _emit 0x5E
        // 0x5889EE46: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5889EE49: lea esi, [ecx + 0x254]
        __asm _emit 0x8D
        __asm _emit 0xB1
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889EE4F: push 0x589a0228
        __asm _emit 0x68
        __asm _emit 0x28
        __asm _emit 0x02
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889EE54: push esi
        __asm _emit 0x56
        // 0x5889EE55: call dword ptr [0x5898c198]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5889EE5B: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5889EE5D: pop esi
        __asm _emit 0x5E
        // 0x5889EE5E: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5889EE61: lea esi, [ecx + 0x254]
        __asm _emit 0x8D
        __asm _emit 0xB1
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889EE67: push 0x589a0220
        __asm _emit 0x68
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889EE6C: push esi
        __asm _emit 0x56
        // 0x5889EE6D: call dword ptr [0x5898c198]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5889EE73: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5889EE75: pop esi
        __asm _emit 0x5E
        // 0x5889EE76: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5889EE79: lea esi, [ecx + 0x254]
        __asm _emit 0x8D
        __asm _emit 0xB1
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889EE7F: movsx ecx, dl
        __asm _emit 0x0F
        __asm _emit 0xBE
        __asm _emit 0xCA
        // 0x5889EE82: push ecx
        __asm _emit 0x51
        // 0x5889EE83: push 0x589a021c
        __asm _emit 0x68
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889EE88: push esi
        __asm _emit 0x56
        // 0x5889EE89: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5889EE8F: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5889EE92: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5889EE94: pop esi
        __asm _emit 0x5E
        // 0x5889EE95: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
