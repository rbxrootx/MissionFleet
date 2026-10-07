// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 92 bytes in 1 exact ranges.
// Source symbol alias: FUN_58898610.

// Ghidra body range 0x58898610..0x5889866C; 92 mapped bytes.
extern "C" __declspec(naked) void FUN_58898610_segment_00() {
    __asm {
        // 0x58898610: mov ecx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58898614: sub esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x0C
        // 0x58898617: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58898619: ja 0x58898633
        __asm _emit 0x77
        __asm _emit 0x18
        // 0x5889861B: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5889861D: lea edx, [ecx + ecx*2]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x49
        // 0x58898620: add edx, edx
        __asm _emit 0x03
        __asm _emit 0xD2
        // 0x58898622: add edx, edx
        __asm _emit 0x03
        __asm _emit 0xD2
        // 0x58898624: add edx, edx
        __asm _emit 0x03
        __asm _emit 0xD2
        // 0x58898626: push edx
        __asm _emit 0x52
        // 0x58898627: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x22
        __asm _emit 0x46
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x5889862C: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5889862F: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58898632: ret
        __asm _emit 0xC3
        // 0x58898633: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFF
        // 0x58898636: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58898638: div ecx
        __asm _emit 0xF7
        __asm _emit 0xF1
        // 0x5889863A: cmp eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x18
        // 0x5889863D: jae 0x5889861d
        __asm _emit 0x73
        __asm _emit 0xDE
        // 0x5889863F: lea eax, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58898643: push eax
        __asm _emit 0x50
        // 0x58898644: lea ecx, [esp + 4]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58898648: mov dword ptr [esp + 0x14], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58898650: call 0x5897cc60
        __asm _emit 0xE8
        __asm _emit 0x0B
        __asm _emit 0x46
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x58898655: push 0x589abd70
        __asm _emit 0x68
        __asm _emit 0x70
        __asm _emit 0xBD
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889865A: lea ecx, [esp + 4]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5889865E: push ecx
        __asm _emit 0x51
        // 0x5889865F: mov dword ptr [esp + 8], 0x5898ca90
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x90
        __asm _emit 0xCA
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58898667: call 0x5897cc78
        __asm _emit 0xE8
        __asm _emit 0x0C
        __asm _emit 0x46
        __asm _emit 0x0E
        __asm _emit 0x00
    }
}
