// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5889F050 .. +0x6A bytes.
// Source symbol alias: FUN_5889f050.
extern "C" __declspec(naked) void FUN_5889f050() {
    __asm {
        // 0x5889F050: mov ax, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x5889F054: mov edx, 0x1f00
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F059: and ax, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC2
        // 0x5889F05C: mov edx, 0x200
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F061: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x5889F064: jne 0x5889f0b9
        __asm _emit 0x75
        __asm _emit 0x53
        // 0x5889F066: mov eax, 0xfffd
        __asm _emit 0xB8
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F06B: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x5889F06F: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x5889F073: mov eax, 0xe4ff
        __asm _emit 0xB8
        __asm _emit 0xFF
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F078: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xD0
        // 0x5889F07B: mov eax, 0x400
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F080: or dx, ax
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xD0
        // 0x5889F083: mov word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x5889F087: mov ecx, dword ptr [ecx + 0x368]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889F08D: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5889F08F: push 0x64
        __asm _emit 0x6A
        __asm _emit 0x64
        // 0x5889F091: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5889F093: je 0x5889f0a9
        __asm _emit 0x74
        __asm _emit 0x14
        // 0x5889F095: mov edx, dword ptr [0x58a24584]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5889F09B: mov eax, dword ptr [edx + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x30
        // 0x5889F09E: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5889F0A0: push ecx
        __asm _emit 0x51
        // 0x5889F0A1: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5889F0A3: mov eax, dword ptr [edx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x18
        // 0x5889F0A6: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5889F0A8: ret
        __asm _emit 0xC3
        // 0x5889F0A9: mov eax, dword ptr [0x58a24584]
        __asm _emit 0xA1
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5889F0AE: mov ecx, dword ptr [eax + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x30
        // 0x5889F0B1: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5889F0B3: push eax
        __asm _emit 0x50
        // 0x5889F0B4: mov eax, dword ptr [edx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x18
        // 0x5889F0B7: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5889F0B9: ret
        __asm _emit 0xC3
    }
}
