// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 87 bytes in 1 exact ranges.
// Source symbol alias: FUN_587485f0.

// Ghidra body range 0x587485F0..0x58748647; 87 mapped bytes.
extern "C" __declspec(naked) void FUN_587485f0_segment_00() {
    __asm {
        // 0x587485F0: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587485F4: mov edx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587485F8: push ebp
        __asm _emit 0x55
        // 0x587485F9: mov ebp, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587485FD: push esi
        __asm _emit 0x56
        // 0x587485FE: push edi
        __asm _emit 0x57
        // 0x587485FF: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58748601: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58748605: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58748607: mov dword ptr [esi + 4], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x5874860A: lea edi, [esi + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x7E
        __asm _emit 0x0C
        // 0x5874860D: mov dword ptr [esi], eax
        __asm _emit 0x89
        __asm _emit 0x06
        // 0x5874860F: mov dword ptr [esi + 8], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x58748612: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58748614: mov dword ptr [edi + 0x18], 0xf
        __asm _emit 0xC7
        __asm _emit 0x47
        __asm _emit 0x18
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874861B: mov dword ptr [edi + 0x14], 0
        __asm _emit 0xC7
        __asm _emit 0x47
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58748622: push ebp
        __asm _emit 0x55
        // 0x58748623: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58748625: mov byte ptr [edi + 4], 0
        __asm _emit 0xC6
        __asm _emit 0x47
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58748629: call 0x58734f20
        __asm _emit 0xE8
        __asm _emit 0xF2
        __asm _emit 0xC8
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x5874862E: mov eax, dword ptr [ebp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x1C
        // 0x58748631: mov cl, byte ptr [esp + 0x20]
        __asm _emit 0x8A
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58748635: mov dword ptr [edi + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x1C
        // 0x58748638: pop edi
        __asm _emit 0x5F
        // 0x58748639: mov byte ptr [esi + 0x2c], cl
        __asm _emit 0x88
        __asm _emit 0x4E
        __asm _emit 0x2C
        // 0x5874863C: mov byte ptr [esi + 0x2d], 0
        __asm _emit 0xC6
        __asm _emit 0x46
        __asm _emit 0x2D
        __asm _emit 0x00
        // 0x58748640: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x58748642: pop esi
        __asm _emit 0x5E
        // 0x58748643: pop ebp
        __asm _emit 0x5D
        // 0x58748644: ret 0x14
        __asm _emit 0xC2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
