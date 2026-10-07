// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 98 bytes in 1 exact ranges.
// Source symbol alias: FUN_588f70e0.

// Ghidra body range 0x588F70E0..0x588F7142; 98 mapped bytes.
extern "C" __declspec(naked) void FUN_588f70e0_segment_00() {
    __asm {
        // 0x588F70E0: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588F70E4: mov byte ptr [ecx + 0x62], 0
        __asm _emit 0xC6
        __asm _emit 0x41
        __asm _emit 0x62
        __asm _emit 0x00
        // 0x588F70E8: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588F70EA: je 0x588f70fc
        __asm _emit 0x74
        __asm _emit 0x10
        // 0x588F70EC: push eax
        __asm _emit 0x50
        // 0x588F70ED: call 0x588f74c0
        __asm _emit 0xE8
        __asm _emit 0xCE
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F70F2: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588F70F4: call 0x588f72d0
        __asm _emit 0xE8
        __asm _emit 0xD7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F70F9: ret 0x14
        __asm _emit 0xC2
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x588F70FC: movzx eax, word ptr [esp + 8]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x588F7101: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588F7103: je 0x588f7126
        __asm _emit 0x74
        __asm _emit 0x21
        // 0x588F7105: dec eax
        __asm _emit 0x48
        // 0x588F7106: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x588F7109: ja 0x588f713f
        __asm _emit 0x77
        __asm _emit 0x34
        // 0x588F710B: movzx eax, word ptr [esp + 0xc]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588F7110: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588F7114: mov ecx, dword ptr [ecx + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x68
        // 0x588F7117: push eax
        __asm _emit 0x50
        // 0x588F7118: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588F711C: push edx
        __asm _emit 0x52
        // 0x588F711D: push eax
        __asm _emit 0x50
        // 0x588F711E: call 0x588f6c60
        __asm _emit 0xE8
        __asm _emit 0x3D
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F7123: ret 0x14
        __asm _emit 0xC2
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x588F7126: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588F712A: mov ecx, dword ptr [ecx + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x68
        // 0x588F712D: lea edx, [eax + 0xb8]
        __asm _emit 0x8D
        __asm _emit 0x90
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F7133: push edx
        __asm _emit 0x52
        // 0x588F7134: push eax
        __asm _emit 0x50
        // 0x588F7135: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588F7139: push eax
        __asm _emit 0x50
        // 0x588F713A: call 0x588f6d20
        __asm _emit 0xE8
        __asm _emit 0xE1
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F713F: ret 0x14
        __asm _emit 0xC2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
