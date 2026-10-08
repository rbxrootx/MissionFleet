// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 98 bytes in 1 exact ranges.
// Source symbol alias: FUN_58828130.

// Ghidra body range 0x58828130..0x58828192; 98 mapped bytes.
extern "C" __declspec(naked) void FUN_58828130_segment_00() {
    __asm {
        // 0x58828130: push esi
        __asm _emit 0x56
        // 0x58828131: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58828133: mov eax, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x68
        // 0x58828136: mov ecx, 0xfff0
        __asm _emit 0xB9
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882813B: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5882813F: mov eax, dword ptr [esi + 0xcc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828145: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x58828147: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5882814B: mov eax, dword ptr [esi + 0x148]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828151: or word ptr [eax + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x0F
        // 0x58828156: mov eax, dword ptr [esi + 0x220]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882815C: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58828160: push edi
        __asm _emit 0x57
        // 0x58828161: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58828163: cmp word ptr [esi + 0x1f4], di
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0xBE
        __asm _emit 0xF4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882816A: jne 0x58828183
        __asm _emit 0x75
        __asm _emit 0x17
        // 0x5882816C: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58828172: call 0x587b9db0
        __asm _emit 0xE8
        __asm _emit 0x39
        __asm _emit 0x1C
        __asm _emit 0xF9
        __asm _emit 0xFF
        // 0x58828177: mov edx, 0x1f4
        __asm _emit 0xBA
        __asm _emit 0xF4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882817C: mov word ptr [esi + 0x1f4], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xF4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828183: mov dword ptr [esi + 0x1fc], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xFC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58828189: mov dword ptr [esi + 0x1f8], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xF8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882818F: pop edi
        __asm _emit 0x5F
        // 0x58828190: pop esi
        __asm _emit 0x5E
        // 0x58828191: ret
        __asm _emit 0xC3
    }
}
