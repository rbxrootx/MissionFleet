// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 71 bytes in 1 exact ranges.
// Source symbol alias: FUN_58827c70.

// Ghidra body range 0x58827C70..0x58827CB7; 71 mapped bytes.
extern "C" __declspec(naked) void FUN_58827c70_segment_00() {
    __asm {
        // 0x58827C70: movzx eax, byte ptr [ecx + 0x9d]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x81
        __asm _emit 0x9D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827C77: push esi
        __asm _emit 0x56
        // 0x58827C78: mov esi, dword ptr [ecx + 0x80]
        __asm _emit 0x8B
        __asm _emit 0xB1
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827C7E: mov ecx, dword ptr [ecx + eax*4 + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x81
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827C85: mov edx, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827C8B: push ecx
        __asm _emit 0x51
        // 0x58827C8C: push edx
        __asm _emit 0x52
        // 0x58827C8D: call dword ptr [0x5898c198]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58827C93: mov eax, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827C99: lea edx, [eax + 1]
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0x01
        // 0x58827C9C: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58827CA0: mov cl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x08
        // 0x58827CA2: inc eax
        __asm _emit 0x40
        // 0x58827CA3: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x58827CA5: jne 0x58827ca0
        __asm _emit 0x75
        __asm _emit 0xF9
        // 0x58827CA7: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x58827CA9: mov dword ptr [esi + 0x8c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827CAF: mov dword ptr [esi + 0x94], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58827CB5: pop esi
        __asm _emit 0x5E
        // 0x58827CB6: ret
        __asm _emit 0xC3
    }
}
