// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 69 bytes in 2 exact ranges.
// Source symbol alias: FUN_588f7230.

// Ghidra body range 0x588F7230..0x588F723D; 13 mapped bytes.
extern "C" __declspec(naked) void FUN_588f7230_segment_00() {
    __asm {
        // 0x588F7230: push esi
        __asm _emit 0x56
        // 0x588F7231: push edi
        __asm _emit 0x57
        // 0x588F7232: mov edi, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588F7236: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x588F7238: lea esi, [eax + 1]
        __asm _emit 0x8D
        __asm _emit 0x70
        __asm _emit 0x01
        // 0x588F723B: jmp 0x588f7240
        __asm _emit 0xEB
        __asm _emit 0x03
    }
}

// Ghidra body range 0x588F7240..0x588F7278; 56 mapped bytes.
extern "C" __declspec(naked) void FUN_588f7230_segment_01() {
    __asm {
        // 0x588F7240: mov dl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x10
        // 0x588F7242: inc eax
        __asm _emit 0x40
        // 0x588F7243: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xD2
        // 0x588F7245: jne 0x588f7240
        __asm _emit 0x75
        __asm _emit 0xF9
        // 0x588F7247: sub eax, esi
        __asm _emit 0x2B
        __asm _emit 0xC6
        // 0x588F7249: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x588F724C: jb 0x588f7273
        __asm _emit 0x72
        __asm _emit 0x25
        // 0x588F724E: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x588F7250: lea esi, [eax + 1]
        __asm _emit 0x8D
        __asm _emit 0x70
        __asm _emit 0x01
        // 0x588F7253: mov dl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x10
        // 0x588F7255: inc eax
        __asm _emit 0x40
        // 0x588F7256: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xD2
        // 0x588F7258: jne 0x588f7253
        __asm _emit 0x75
        __asm _emit 0xF9
        // 0x588F725A: mov ecx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x04
        // 0x588F725D: push ecx
        __asm _emit 0x51
        // 0x588F725E: sub eax, esi
        __asm _emit 0x2B
        __asm _emit 0xC6
        // 0x588F7260: push eax
        __asm _emit 0x50
        // 0x588F7261: push edi
        __asm _emit 0x57
        // 0x588F7262: push 0x2711
        __asm _emit 0x68
        __asm _emit 0x11
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F7267: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0x84
        __asm _emit 0x48
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588F726C: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588F726E: call 0x58764d30
        __asm _emit 0xE8
        __asm _emit 0xBD
        __asm _emit 0xDA
        __asm _emit 0xE6
        __asm _emit 0xFF
        // 0x588F7273: pop edi
        __asm _emit 0x5F
        // 0x588F7274: pop esi
        __asm _emit 0x5E
        // 0x588F7275: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
