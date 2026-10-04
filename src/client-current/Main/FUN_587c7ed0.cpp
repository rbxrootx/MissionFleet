// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587C7ED0 .. +0xA4 bytes.
// Source symbol alias: FUN_587c7ed0.
extern "C" __declspec(naked) void FUN_587c7ed0() {
    __asm {
        // 0x587C7ED0: mov edx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587C7ED4: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587C7ED6: push esi
        __asm _emit 0x56
        // 0x587C7ED7: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587C7ED9: mov ecx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587C7EDD: mov dword ptr [esi + 0x50], 0x40000000
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x587C7EE4: mov dword ptr [esi + 0x90], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C7EEE: mov dword ptr [esi + 0x9c], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C7EF8: mov dword ptr [esi + 0xa0], 1
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C7F02: mov dword ptr [esi + 0x7c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x7C
        // 0x587C7F05: mov dword ptr [esi + 0x80], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C7F0B: mov dword ptr [esi + 0x84], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C7F11: mov dword ptr [esi + 0x88], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C7F17: mov dword ptr [esi + 0x6c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x587C7F1A: mov dword ptr [esi + 0x70], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x587C7F1D: mov dword ptr [esi + 0x74], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x587C7F20: mov dword ptr [esi + 0x78], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x78
        // 0x587C7F23: mov dword ptr [esi + 0x5c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x5C
        // 0x587C7F26: mov dword ptr [esi + 0x60], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x587C7F29: mov dword ptr [esi + 0x64], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x64
        // 0x587C7F2C: mov dword ptr [esi + 0x68], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x68
        // 0x587C7F2F: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587C7F33: push eax
        __asm _emit 0x50
        // 0x587C7F34: push ecx
        __asm _emit 0x51
        // 0x587C7F35: push edx
        __asm _emit 0x52
        // 0x587C7F36: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587C7F38: call 0x587c7ae0
        __asm _emit 0xE8
        __asm _emit 0xA3
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587C7F3D: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587C7F41: push eax
        __asm _emit 0x50
        // 0x587C7F42: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587C7F44: call 0x587c7ba0
        __asm _emit 0xE8
        __asm _emit 0x57
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587C7F49: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587C7F4D: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587C7F4F: mov dword ptr [esi + 0x58], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x58
        // 0x587C7F52: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587C7F54: jle 0x587c7f70
        __asm _emit 0x7E
        __asm _emit 0x1A
        // 0x587C7F56: lea edx, [esi + 0xac]
        __asm _emit 0x8D
        __asm _emit 0x96
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C7F5C: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x587C7F60: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587C7F62: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x587C7F67: inc ecx
        __asm _emit 0x41
        // 0x587C7F68: add edx, 4
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x04
        // 0x587C7F6B: cmp ecx, dword ptr [esi + 0x58]
        __asm _emit 0x3B
        __asm _emit 0x4E
        __asm _emit 0x58
        // 0x587C7F6E: jl 0x587c7f60
        __asm _emit 0x7C
        __asm _emit 0xF0
        // 0x587C7F70: pop esi
        __asm _emit 0x5E
        // 0x587C7F71: ret 0x14
        __asm _emit 0xC2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
