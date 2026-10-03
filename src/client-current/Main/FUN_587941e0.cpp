// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587941E0 .. +0x54 bytes.
extern "C" __declspec(naked) void FUN_587941e0() {
    __asm {
        // 0x587941E0: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587941E4: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587941E6: je 0x58794231
        __asm _emit 0x74
        __asm _emit 0x49
        // 0x587941E8: mov edx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587941EC: mov dword ptr [ecx + 0x88], edx
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587941F2: mov edx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587941F6: add edx, edx
        __asm _emit 0x03
        __asm _emit 0xD2
        // 0x587941F8: xor dx, word ptr [ecx + 0x70]
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0x51
        __asm _emit 0x70
        // 0x587941FC: mov dword ptr [ecx + 0xc4], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58794202: and dx, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x02
        // 0x58794206: xor word ptr [ecx + 0x70], dx
        __asm _emit 0x66
        __asm _emit 0x31
        __asm _emit 0x51
        __asm _emit 0x70
        // 0x5879420A: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x5879420D: mov edx, dword ptr [eax + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x20
        // 0x58794210: mov dword ptr [ecx + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x14
        // 0x58794213: mov edx, dword ptr [eax + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58794216: mov dword ptr [ecx + 0x18], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x18
        // 0x58794219: mov edx, dword ptr [eax + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x28
        // 0x5879421C: mov dword ptr [ecx + 0x1c], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x1C
        // 0x5879421F: mov edx, dword ptr [eax + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x2C
        // 0x58794222: mov dword ptr [ecx + 0x20], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x20
        // 0x58794225: mov edx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x18
        // 0x58794228: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x5879422B: mov eax, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x1C
        // 0x5879422E: mov dword ptr [ecx + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x10
        // 0x58794231: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
