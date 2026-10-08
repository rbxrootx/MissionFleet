// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 153 bytes in 1 exact ranges.
// Source symbol alias: FUN_58772210.

// Ghidra body range 0x58772210..0x587722A9; 153 mapped bytes.
extern "C" __declspec(naked) void FUN_58772210_segment_00() {
    __asm {
        // 0x58772210: cmp byte ptr [esp + 8], 0
        __asm _emit 0x80
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58772215: push ebx
        __asm _emit 0x53
        // 0x58772216: push esi
        __asm _emit 0x56
        // 0x58772217: push edi
        __asm _emit 0x57
        // 0x58772218: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5877221A: push 0x80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877221F: je 0x5877223e
        __asm _emit 0x74
        __asm _emit 0x1D
        // 0x58772221: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x58772223: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58772225: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58772227: push 0x40000000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x5877222C: push 3
        __asm _emit 0x6A
        __asm _emit 0x03
        // 0x5877222E: call 0x58772160
        __asm _emit 0xE8
        __asm _emit 0x2D
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58772233: push eax
        __asm _emit 0x50
        // 0x58772234: call dword ptr [0x5898c180]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5877223A: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x5877223C: jmp 0x58772266
        __asm _emit 0xEB
        __asm _emit 0x28
        // 0x5877223E: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x58772240: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58772242: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58772244: push 0x40000000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x58772249: push 3
        __asm _emit 0x6A
        __asm _emit 0x03
        // 0x5877224B: call 0x58772160
        __asm _emit 0xE8
        __asm _emit 0x10
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58772250: push eax
        __asm _emit 0x50
        // 0x58772251: call dword ptr [0x5898c180]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58772257: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x58772259: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5877225B: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x5877225D: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5877225F: push esi
        __asm _emit 0x56
        // 0x58772260: call dword ptr [0x5898c164]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58772266: mov edi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5877226A: mov ebx, dword ptr [0x5898c1a8]
        __asm _emit 0x8B
        __asm _emit 0x1D
        __asm _emit 0xA8
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58772270: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58772272: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58772276: push eax
        __asm _emit 0x50
        // 0x58772277: push edi
        __asm _emit 0x57
        // 0x58772278: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x5877227A: push eax
        __asm _emit 0x50
        // 0x5877227B: push edi
        __asm _emit 0x57
        // 0x5877227C: mov edi, dword ptr [0x5898c1a0]
        __asm _emit 0x8B
        __asm _emit 0x3D
        __asm _emit 0xA0
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58772282: push esi
        __asm _emit 0x56
        // 0x58772283: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x58772285: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58772287: lea ecx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5877228B: push ecx
        __asm _emit 0x51
        // 0x5877228C: push 0x5898d040
        __asm _emit 0x68
        __asm _emit 0x40
        __asm _emit 0xD0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58772291: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x58772293: push eax
        __asm _emit 0x50
        // 0x58772294: push 0x5898d040
        __asm _emit 0x68
        __asm _emit 0x40
        __asm _emit 0xD0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58772299: push esi
        __asm _emit 0x56
        // 0x5877229A: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x5877229C: push esi
        __asm _emit 0x56
        // 0x5877229D: call dword ptr [0x5898c184]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587722A3: pop edi
        __asm _emit 0x5F
        // 0x587722A4: pop esi
        __asm _emit 0x5E
        // 0x587722A5: pop ebx
        __asm _emit 0x5B
        // 0x587722A6: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
