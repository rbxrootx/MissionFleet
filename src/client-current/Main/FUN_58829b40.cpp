// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 148 bytes in 1 exact ranges.
// Source symbol alias: FUN_58829b40.

// Ghidra body range 0x58829B40..0x58829BD4; 148 mapped bytes.
extern "C" __declspec(naked) void FUN_58829b40_segment_00() {
    __asm {
        // 0x58829B40: push esi
        __asm _emit 0x56
        // 0x58829B41: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58829B43: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x58829B47: mov ecx, 0x1f00
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58829B4C: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x58829B4F: mov edx, 0x200
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58829B54: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x58829B57: je 0x58829b6a
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x58829B59: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x58829B5D: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x58829B60: mov edx, 0x100
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58829B65: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x58829B68: jne 0x58829bd2
        __asm _emit 0x75
        __asm _emit 0x68
        // 0x58829B6A: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x58829B6E: mov ecx, 0xe4ff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58829B73: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x58829B76: mov edx, 0x400
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58829B7B: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC2
        // 0x58829B7E: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x58829B82: mov eax, 0xfffd
        __asm _emit 0xB8
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58829B87: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x58829B8B: mov ecx, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58829B91: call 0x5875f940
        __asm _emit 0xE8
        __asm _emit 0xAA
        __asm _emit 0x5D
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x58829B96: mov ecx, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x78
        // 0x58829B99: call 0x5875f940
        __asm _emit 0xE8
        __asm _emit 0xA2
        __asm _emit 0x5D
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x58829B9E: mov ecx, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x7C
        // 0x58829BA1: call 0x5875f940
        __asm _emit 0xE8
        __asm _emit 0x9A
        __asm _emit 0x5D
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x58829BA6: mov ecx, dword ptr [0x58a24584]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58829BAC: mov ecx, dword ptr [ecx + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x30
        // 0x58829BAF: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58829BB1: mov eax, dword ptr [edx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x18
        // 0x58829BB4: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58829BB6: push 0xf230
        __asm _emit 0x68
        __asm _emit 0x30
        __asm _emit 0xF2
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58829BBB: push esi
        __asm _emit 0x56
        // 0x58829BBC: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58829BBE: mov eax, dword ptr [0x58a24584]
        __asm _emit 0xA1
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58829BC3: mov ecx, dword ptr [eax + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x30
        // 0x58829BC6: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58829BC8: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58829BCA: push 0x64
        __asm _emit 0x6A
        __asm _emit 0x64
        // 0x58829BCC: push eax
        __asm _emit 0x50
        // 0x58829BCD: mov eax, dword ptr [edx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x18
        // 0x58829BD0: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58829BD2: pop esi
        __asm _emit 0x5E
        // 0x58829BD3: ret
        __asm _emit 0xC3
    }
}
