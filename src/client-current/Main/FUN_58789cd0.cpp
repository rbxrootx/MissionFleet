// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 213 bytes in 1 exact ranges.
// Source symbol alias: FUN_58789cd0.

// Ghidra body range 0x58789CD0..0x58789DA5; 213 mapped bytes.
extern "C" __declspec(naked) void FUN_58789cd0_segment_00() {
    __asm {
        // 0x58789CD0: push ebp
        __asm _emit 0x55
        // 0x58789CD1: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x58789CD3: and esp, 0xfffffff8
        __asm _emit 0x83
        __asm _emit 0xE4
        __asm _emit 0xF8
        // 0x58789CD6: sub esp, 0x31c
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x1C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58789CDC: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58789CE1: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x58789CE3: mov dword ptr [esp + 0x318], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58789CEA: push ebx
        __asm _emit 0x53
        // 0x58789CEB: push esi
        __asm _emit 0x56
        // 0x58789CEC: push edi
        __asm _emit 0x57
        // 0x58789CED: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x58789CEF: cmp dword ptr [ebx + 0xc], 0
        __asm _emit 0x83
        __asm _emit 0x7B
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58789CF3: mov ecx, 0xc3
        __asm _emit 0xB9
        __asm _emit 0xC3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58789CF8: lea esi, [ebp + 8]
        __asm _emit 0x8D
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x58789CFB: lea edi, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58789CFF: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x58789D01: push 0x314
        __asm _emit 0x68
        __asm _emit 0x14
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58789D06: jne 0x58789d49
        __asm _emit 0x75
        __asm _emit 0x41
        // 0x58789D08: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x41
        __asm _emit 0x2F
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x58789D0D: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58789D10: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58789D12: je 0x58789d3c
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x58789D14: sub esp, 0x30c
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x0C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58789D1A: mov edi, esp
        __asm _emit 0x8B
        __asm _emit 0xFC
        // 0x58789D1C: mov ecx, 0xc3
        __asm _emit 0xB9
        __asm _emit 0xC3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58789D21: lea esi, [esp + 0x31c]
        __asm _emit 0x8D
        __asm _emit 0xB4
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58789D28: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x58789D2A: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58789D2C: call 0x58789c50
        __asm _emit 0xE8
        __asm _emit 0x1F
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58789D31: mov dword ptr [ebx + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x43
        __asm _emit 0x10
        // 0x58789D34: mov dword ptr [ebx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x43
        __asm _emit 0x0C
        // 0x58789D37: mov dword ptr [ebx + 8], eax
        __asm _emit 0x89
        __asm _emit 0x43
        __asm _emit 0x08
        // 0x58789D3A: jmp 0x58789d8b
        __asm _emit 0xEB
        __asm _emit 0x4F
        // 0x58789D3C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58789D3E: mov dword ptr [ebx + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x43
        __asm _emit 0x10
        // 0x58789D41: mov dword ptr [ebx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x43
        __asm _emit 0x0C
        // 0x58789D44: mov dword ptr [ebx + 8], eax
        __asm _emit 0x89
        __asm _emit 0x43
        __asm _emit 0x08
        // 0x58789D47: jmp 0x58789d8b
        __asm _emit 0xEB
        __asm _emit 0x42
        // 0x58789D49: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x2F
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x58789D4E: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58789D51: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58789D53: je 0x58789d74
        __asm _emit 0x74
        __asm _emit 0x1F
        // 0x58789D55: sub esp, 0x30c
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x0C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58789D5B: mov edi, esp
        __asm _emit 0x8B
        __asm _emit 0xFC
        // 0x58789D5D: mov ecx, 0xc3
        __asm _emit 0xB9
        __asm _emit 0xC3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58789D62: lea esi, [esp + 0x31c]
        __asm _emit 0x8D
        __asm _emit 0xB4
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58789D69: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x58789D6B: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58789D6D: call 0x58789c50
        __asm _emit 0xE8
        __asm _emit 0xDE
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58789D72: jmp 0x58789d76
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58789D74: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58789D76: mov ecx, dword ptr [ebx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x0C
        // 0x58789D79: mov dword ptr [ecx], eax
        __asm _emit 0x89
        __asm _emit 0x01
        // 0x58789D7B: mov eax, dword ptr [ebx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x0C
        // 0x58789D7E: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58789D80: mov dword ptr [edx + 4], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x58789D83: mov eax, dword ptr [ebx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x0C
        // 0x58789D86: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x58789D88: mov dword ptr [ebx + 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x4B
        __asm _emit 0x0C
        // 0x58789D8B: inc dword ptr [ebx + 4]
        __asm _emit 0xFF
        __asm _emit 0x43
        __asm _emit 0x04
        // 0x58789D8E: mov ecx, dword ptr [esp + 0x324]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58789D95: pop edi
        __asm _emit 0x5F
        // 0x58789D96: pop esi
        __asm _emit 0x5E
        // 0x58789D97: pop ebx
        __asm _emit 0x5B
        // 0x58789D98: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x58789D9A: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x3B
        __asm _emit 0x2E
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x58789D9F: mov esp, ebp
        __asm _emit 0x8B
        __asm _emit 0xE5
        // 0x58789DA1: pop ebp
        __asm _emit 0x5D
        // 0x58789DA2: ret 0x30c
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x03
    }
}
