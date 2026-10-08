// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 195 bytes in 1 exact ranges.
// Source symbol alias: FUN_588246e0.

// Ghidra body range 0x588246E0..0x588247A3; 195 mapped bytes.
extern "C" __declspec(naked) void FUN_588246e0_segment_00() {
    __asm {
        // 0x588246E0: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588246E4: cmp eax, dword ptr [ecx + 0x270]
        __asm _emit 0x3B
        __asm _emit 0x81
        __asm _emit 0x70
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588246EA: jne 0x58824712
        __asm _emit 0x75
        __asm _emit 0x26
        // 0x588246EC: cmp dword ptr [esp + 8], 2
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x02
        // 0x588246F1: jne 0x5882479e
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xA7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588246F7: mov al, byte ptr [ecx + 0x60]
        __asm _emit 0x8A
        __asm _emit 0x41
        __asm _emit 0x60
        // 0x588246FA: cmp al, 1
        __asm _emit 0x3C
        __asm _emit 0x01
        // 0x588246FC: je 0x5882479e
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58824702: dec al
        __asm _emit 0xFE
        __asm _emit 0xC8
        // 0x58824704: movzx eax, al
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC0
        // 0x58824707: push eax
        __asm _emit 0x50
        // 0x58824708: call 0x58824630
        __asm _emit 0xE8
        __asm _emit 0x23
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5882470D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5882470F: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58824712: cmp eax, dword ptr [ecx + 0x274]
        __asm _emit 0x3B
        __asm _emit 0x81
        __asm _emit 0x74
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58824718: jne 0x58824738
        __asm _emit 0x75
        __asm _emit 0x1E
        // 0x5882471A: cmp dword ptr [esp + 8], 2
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x02
        // 0x5882471F: jne 0x5882479e
        __asm _emit 0x75
        __asm _emit 0x7D
        // 0x58824721: mov al, byte ptr [ecx + 0x60]
        __asm _emit 0x8A
        __asm _emit 0x41
        __asm _emit 0x60
        // 0x58824724: cmp al, 2
        __asm _emit 0x3C
        __asm _emit 0x02
        // 0x58824726: je 0x5882479e
        __asm _emit 0x74
        __asm _emit 0x76
        // 0x58824728: inc al
        __asm _emit 0xFE
        __asm _emit 0xC0
        // 0x5882472A: movzx edx, al
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xD0
        // 0x5882472D: push edx
        __asm _emit 0x52
        // 0x5882472E: call 0x58824630
        __asm _emit 0xE8
        __asm _emit 0xFD
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58824733: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58824735: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58824738: mov dl, byte ptr [ecx + 0x60]
        __asm _emit 0x8A
        __asm _emit 0x51
        __asm _emit 0x60
        // 0x5882473B: cmp dl, 1
        __asm _emit 0x80
        __asm _emit 0xFA
        __asm _emit 0x01
        // 0x5882473E: jne 0x58824755
        __asm _emit 0x75
        __asm _emit 0x15
        // 0x58824740: mov edx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58824744: push edx
        __asm _emit 0x52
        // 0x58824745: mov edx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58824749: push edx
        __asm _emit 0x52
        // 0x5882474A: push eax
        __asm _emit 0x50
        // 0x5882474B: call 0x58827d10
        __asm _emit 0xE8
        __asm _emit 0xC0
        __asm _emit 0x35
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58824750: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58824752: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58824755: cmp dl, 2
        __asm _emit 0x80
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x58824758: jne 0x5882476f
        __asm _emit 0x75
        __asm _emit 0x15
        // 0x5882475A: mov edx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5882475E: push edx
        __asm _emit 0x52
        // 0x5882475F: mov edx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58824763: push edx
        __asm _emit 0x52
        // 0x58824764: push eax
        __asm _emit 0x50
        // 0x58824765: call 0x58828df0
        __asm _emit 0xE8
        __asm _emit 0x86
        __asm _emit 0x46
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882476A: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5882476C: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x5882476F: cmp dl, 3
        __asm _emit 0x80
        __asm _emit 0xFA
        __asm _emit 0x03
        // 0x58824772: jne 0x58824789
        __asm _emit 0x75
        __asm _emit 0x15
        // 0x58824774: mov edx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58824778: push edx
        __asm _emit 0x52
        // 0x58824779: mov edx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5882477D: push edx
        __asm _emit 0x52
        // 0x5882477E: push eax
        __asm _emit 0x50
        // 0x5882477F: call 0x58828270
        __asm _emit 0xE8
        __asm _emit 0xEC
        __asm _emit 0x3A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58824784: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58824786: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58824789: cmp dl, 4
        __asm _emit 0x80
        __asm _emit 0xFA
        __asm _emit 0x04
        // 0x5882478C: jne 0x5882479e
        __asm _emit 0x75
        __asm _emit 0x10
        // 0x5882478E: mov edx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58824792: push edx
        __asm _emit 0x52
        // 0x58824793: mov edx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58824797: push edx
        __asm _emit 0x52
        // 0x58824798: push eax
        __asm _emit 0x50
        // 0x58824799: call 0x58827070
        __asm _emit 0xE8
        __asm _emit 0xD2
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882479E: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588247A0: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
