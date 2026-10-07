// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 133 bytes in 1 exact ranges.
// Source symbol alias: FUN_5876c8d0.

// Ghidra body range 0x5876C8D0..0x5876C955; 133 mapped bytes.
extern "C" __declspec(naked) void FUN_5876c8d0_segment_00() {
    __asm {
        // 0x5876C8D0: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5876C8D4: mov ecx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5876C8D8: imul eax, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC0
        // 0x5876C8DB: push ebx
        __asm _emit 0x53
        // 0x5876C8DC: mov ebx, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x59
        __asm _emit 0x08
        // 0x5876C8DF: sub ebx, dword ptr [esp + 0x10]
        __asm _emit 0x2B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5876C8E3: push ebp
        __asm _emit 0x55
        // 0x5876C8E4: push esi
        __asm _emit 0x56
        // 0x5876C8E5: push edi
        __asm _emit 0x57
        // 0x5876C8E6: mov edi, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x79
        __asm _emit 0x04
        // 0x5876C8E9: sub edi, dword ptr [esp + 0x18]
        __asm _emit 0x2B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5876C8ED: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5876C8F1: mov eax, dword ptr [ecx + 0x605c]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x5C
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876C8F7: lea eax, [eax + eax*2]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x40
        // 0x5876C8FA: shl eax, 4
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x04
        // 0x5876C8FD: mov dword ptr [esp + 0x14], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876C905: lea esi, [eax + ecx + 0x42e4]
        __asm _emit 0x8D
        __asm _emit 0xB4
        __asm _emit 0x08
        __asm _emit 0xE4
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876C90C: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x5876C910: mov ecx, dword ptr [esi - 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0xFC
        // 0x5876C913: mov edx, ebx
        __asm _emit 0x8B
        __asm _emit 0xD3
        // 0x5876C915: sub edx, dword ptr [esi]
        __asm _emit 0x2B
        __asm _emit 0x16
        // 0x5876C917: add ecx, edi
        __asm _emit 0x03
        __asm _emit 0xCF
        // 0x5876C919: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5876C91B: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x5876C91D: imul eax, edx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC2
        // 0x5876C920: imul ebp, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xE9
        // 0x5876C923: add eax, ebp
        __asm _emit 0x03
        __asm _emit 0xC5
        // 0x5876C925: cmp eax, dword ptr [esp + 0x18]
        __asm _emit 0x3B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5876C929: jle 0x5876c944
        __asm _emit 0x7E
        __asm _emit 0x19
        // 0x5876C92B: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5876C92F: inc eax
        __asm _emit 0x40
        // 0x5876C930: add esi, 8
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x08
        // 0x5876C933: cmp eax, 6
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x06
        // 0x5876C936: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5876C93A: jl 0x5876c910
        __asm _emit 0x7C
        __asm _emit 0xD4
        // 0x5876C93C: pop edi
        __asm _emit 0x5F
        // 0x5876C93D: pop esi
        __asm _emit 0x5E
        // 0x5876C93E: pop ebp
        __asm _emit 0x5D
        // 0x5876C93F: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFF
        // 0x5876C942: pop ebx
        __asm _emit 0x5B
        // 0x5876C943: ret
        __asm _emit 0xC3
        // 0x5876C944: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5876C946: imul eax, edx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC2
        // 0x5876C949: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x5876C94B: imul edx, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xD1
        // 0x5876C94E: pop edi
        __asm _emit 0x5F
        // 0x5876C94F: pop esi
        __asm _emit 0x5E
        // 0x5876C950: pop ebp
        __asm _emit 0x5D
        // 0x5876C951: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5876C953: pop ebx
        __asm _emit 0x5B
        // 0x5876C954: ret
        __asm _emit 0xC3
    }
}
