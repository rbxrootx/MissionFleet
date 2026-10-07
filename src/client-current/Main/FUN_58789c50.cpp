// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 93 bytes in 1 exact ranges.
// Source symbol alias: FUN_58789c50.

// Ghidra body range 0x58789C50..0x58789CAD; 93 mapped bytes.
extern "C" __declspec(naked) void FUN_58789c50_segment_00() {
    __asm {
        // 0x58789C50: push ebp
        __asm _emit 0x55
        // 0x58789C51: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x58789C53: and esp, 0xfffffff8
        __asm _emit 0x83
        __asm _emit 0xE4
        __asm _emit 0xF8
        // 0x58789C56: sub esp, 0x318
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x18
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58789C5C: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58789C61: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x58789C63: mov dword ptr [esp + 0x314], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58789C6A: push esi
        __asm _emit 0x56
        // 0x58789C6B: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x58789C6D: push edi
        __asm _emit 0x57
        // 0x58789C6E: mov ecx, 0xc3
        __asm _emit 0xB9
        __asm _emit 0xC3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58789C73: lea esi, [ebp + 8]
        __asm _emit 0x8D
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x58789C76: lea edi, [esp + 8]
        __asm _emit 0x8D
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58789C7A: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x58789C7C: lea edi, [eax + 8]
        __asm _emit 0x8D
        __asm _emit 0x78
        __asm _emit 0x08
        // 0x58789C7F: mov ecx, 0xc3
        __asm _emit 0xB9
        __asm _emit 0xC3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58789C84: lea esi, [esp + 8]
        __asm _emit 0x8D
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58789C88: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x58789C8A: mov ecx, dword ptr [esp + 0x31c]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58789C91: pop edi
        __asm _emit 0x5F
        // 0x58789C92: pop esi
        __asm _emit 0x5E
        // 0x58789C93: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x58789C95: mov dword ptr [eax + 4], 0
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58789C9C: mov dword ptr [eax], 0
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58789CA2: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x33
        __asm _emit 0x2F
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x58789CA7: mov esp, ebp
        __asm _emit 0x8B
        __asm _emit 0xE5
        // 0x58789CA9: pop ebp
        __asm _emit 0x5D
        // 0x58789CAA: ret 0x30c
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x03
    }
}
