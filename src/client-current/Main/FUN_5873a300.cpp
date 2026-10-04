// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5873A300 .. +0x66 bytes.
// Source symbol alias: FUN_5873a300.
extern "C" __declspec(naked) void FUN_5873a300() {
    __asm {
        // 0x5873A300: mov eax, dword ptr [ecx + 0x230]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x30
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873A306: push esi
        __asm _emit 0x56
        // 0x5873A307: movzx esi, word ptr [ecx + 0x2de]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xB1
        __asm _emit 0xDE
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873A30E: cmp eax, esi
        __asm _emit 0x3B
        __asm _emit 0xC6
        // 0x5873A310: jle 0x5873a330
        __asm _emit 0x7E
        __asm _emit 0x1E
        // 0x5873A312: imul eax, eax, 0x63
        __asm _emit 0x6B
        __asm _emit 0xC0
        __asm _emit 0x63
        // 0x5873A315: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x5873A317: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x5873A31C: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x5873A31E: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x5873A321: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5873A323: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5873A326: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5873A328: mov dword ptr [ecx + 0x230], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x30
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873A32E: jmp 0x5873a336
        __asm _emit 0xEB
        __asm _emit 0x06
        // 0x5873A330: mov dword ptr [ecx + 0x230], esi
        __asm _emit 0x89
        __asm _emit 0xB1
        __asm _emit 0x30
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873A336: mov eax, dword ptr [ecx + 0x230]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x30
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873A33C: cmp eax, esi
        __asm _emit 0x3B
        __asm _emit 0xC6
        // 0x5873A33E: jge 0x5873a35e
        __asm _emit 0x7D
        __asm _emit 0x1E
        // 0x5873A340: imul eax, eax, 0x65
        __asm _emit 0x6B
        __asm _emit 0xC0
        __asm _emit 0x65
        // 0x5873A343: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x5873A345: mov eax, 0x51eb851f
        __asm _emit 0xB8
        __asm _emit 0x1F
        __asm _emit 0x85
        __asm _emit 0xEB
        __asm _emit 0x51
        // 0x5873A34A: imul edx
        __asm _emit 0xF7
        __asm _emit 0xEA
        // 0x5873A34C: sar edx, 5
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x05
        // 0x5873A34F: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5873A351: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x5873A354: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x5873A356: mov dword ptr [ecx + 0x230], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x30
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873A35C: pop esi
        __asm _emit 0x5E
        // 0x5873A35D: ret
        __asm _emit 0xC3
        // 0x5873A35E: mov dword ptr [ecx + 0x230], esi
        __asm _emit 0x89
        __asm _emit 0xB1
        __asm _emit 0x30
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873A364: pop esi
        __asm _emit 0x5E
        // 0x5873A365: ret
        __asm _emit 0xC3
    }
}
