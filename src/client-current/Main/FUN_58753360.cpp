// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58753360 .. +0x5C bytes.
// Source symbol alias: FUN_58753360.
extern "C" __declspec(naked) void FUN_58753360() {
    __asm {
        // 0x58753360: mov ecx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58753364: sub esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x0C
        // 0x58753367: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58753369: ja 0x58753383
        __asm _emit 0x77
        __asm _emit 0x18
        // 0x5875336B: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5875336D: lea edx, [ecx + ecx*8]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0xC9
        // 0x58753370: add edx, edx
        __asm _emit 0x03
        __asm _emit 0xD2
        // 0x58753372: add edx, edx
        __asm _emit 0x03
        __asm _emit 0xD2
        // 0x58753374: add edx, edx
        __asm _emit 0x03
        __asm _emit 0xD2
        // 0x58753376: push edx
        __asm _emit 0x52
        // 0x58753377: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xD2
        __asm _emit 0x98
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x5875337C: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5875337F: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58753382: ret
        __asm _emit 0xC3
        // 0x58753383: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFF
        // 0x58753386: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58753388: div ecx
        __asm _emit 0xF7
        __asm _emit 0xF1
        // 0x5875338A: cmp eax, 0x48
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x48
        // 0x5875338D: jae 0x5875336d
        __asm _emit 0x73
        __asm _emit 0xDE
        // 0x5875338F: lea eax, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58753393: push eax
        __asm _emit 0x50
        // 0x58753394: lea ecx, [esp + 4]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58753398: mov dword ptr [esp + 0x14], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587533A0: call 0x5897cc60
        __asm _emit 0xE8
        __asm _emit 0xBB
        __asm _emit 0x98
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x587533A5: push 0x589abd70
        __asm _emit 0x68
        __asm _emit 0x70
        __asm _emit 0xBD
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x587533AA: lea ecx, [esp + 4]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587533AE: push ecx
        __asm _emit 0x51
        // 0x587533AF: mov dword ptr [esp + 8], 0x5898ca90
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x90
        __asm _emit 0xCA
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587533B7: call 0x5897cc78
        __asm _emit 0xE8
        __asm _emit 0xBC
        __asm _emit 0x98
        __asm _emit 0x22
        __asm _emit 0x00
    }
}
