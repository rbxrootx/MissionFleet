// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5873A270 .. +0x61 bytes.
// Source symbol alias: FUN_5873a270.
extern "C" __declspec(naked) void FUN_5873a270() {
    __asm {
        // 0x5873A270: mov edx, dword ptr [ecx + 0x340]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x40
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873A276: mov eax, 0x10624dd3
        __asm _emit 0xB8
        __asm _emit 0xD3
        __asm _emit 0x4D
        __asm _emit 0x62
        __asm _emit 0x10
        // 0x5873A27B: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x5873A27D: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x5873A280: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5873A282: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5873A285: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5873A287: cmp eax, 0x32
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x32
        // 0x5873A28A: jle 0x5873a2ae
        __asm _emit 0x7E
        __asm _emit 0x22
        // 0x5873A28C: mov eax, dword ptr [ecx + 0x348]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873A292: cmp eax, 0xfffffed4
        __asm _emit 0x3D
        __asm _emit 0xD4
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5873A297: jle 0x5873a2a3
        __asm _emit 0x7E
        __asm _emit 0x0A
        // 0x5873A299: add eax, -0xf
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0xF1
        // 0x5873A29C: mov dword ptr [ecx + 0x348], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873A2A2: ret
        __asm _emit 0xC3
        // 0x5873A2A3: mov dword ptr [ecx + 0x348], 0xfffffed4
        __asm _emit 0xC7
        __asm _emit 0x81
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xD4
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5873A2AD: ret
        __asm _emit 0xC3
        // 0x5873A2AE: mov edx, dword ptr [ecx + 0x348]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873A2B4: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x5873A2B6: jge 0x5873a2c6
        __asm _emit 0x7D
        __asm _emit 0x0E
        // 0x5873A2B8: add edx, 0xf
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x0F
        // 0x5873A2BB: cmp eax, 0xf
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x0F
        // 0x5873A2BE: mov dword ptr [ecx + 0x348], edx
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873A2C4: jg 0x5873a2d0
        __asm _emit 0x7F
        __asm _emit 0x0A
        // 0x5873A2C6: mov dword ptr [ecx + 0x348], 0
        __asm _emit 0xC7
        __asm _emit 0x81
        __asm _emit 0x48
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873A2D0: ret
        __asm _emit 0xC3
    }
}
