// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 124 bytes in 1 exact ranges.
// Source symbol alias: FUN_587ba0c0.

// Ghidra body range 0x587BA0C0..0x587BA13C; 124 mapped bytes.
extern "C" __declspec(naked) void FUN_587ba0c0_segment_00() {
    __asm {
        // 0x587BA0C0: push esi
        __asm _emit 0x56
        // 0x587BA0C1: push edi
        __asm _emit 0x57
        // 0x587BA0C2: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587BA0C4: mov ecx, dword ptr [0x58a245e4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xE4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587BA0CA: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587BA0CC: call 0x5887a3e0
        __asm _emit 0xE8
        __asm _emit 0x0F
        __asm _emit 0x03
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x587BA0D1: mov eax, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587BA0D5: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x587BA0D7: mov di, word ptr [esp + 0x18]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587BA0DC: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587BA0E0: mov edx, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x12
        // 0x587BA0E2: mov eax, 0xff
        __asm _emit 0xB8
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587BA0E7: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587BA0E9: cmp di, ax
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x587BA0EC: jne 0x587ba108
        __asm _emit 0x75
        __asm _emit 0x1A
        // 0x587BA0EE: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x587BA0F0: lea eax, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587BA0F4: push eax
        __asm _emit 0x50
        // 0x587BA0F5: push edx
        __asm _emit 0x52
        // 0x587BA0F6: push ecx
        __asm _emit 0x51
        // 0x587BA0F7: push 0x8001c005
        __asm _emit 0x68
        __asm _emit 0x05
        __asm _emit 0xC0
        __asm _emit 0x01
        __asm _emit 0x80
        // 0x587BA0FC: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587BA0FE: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0x6D
        __asm _emit 0x6B
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587BA103: pop edi
        __asm _emit 0x5F
        // 0x587BA104: pop esi
        __asm _emit 0x5E
        // 0x587BA105: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x587BA108: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587BA10A: mov word ptr [esp + 0x1d], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1D
        // 0x587BA10F: mov byte ptr [esp + 0x1f], al
        __asm _emit 0x88
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1F
        // 0x587BA113: mov ax, word ptr [esp + 0x18]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587BA118: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x587BA11A: mov word ptr [esp + 0x20], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587BA11F: lea eax, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587BA123: push eax
        __asm _emit 0x50
        // 0x587BA124: push edx
        __asm _emit 0x52
        // 0x587BA125: push ecx
        __asm _emit 0x51
        // 0x587BA126: push 0x8001c005
        __asm _emit 0x68
        __asm _emit 0x05
        __asm _emit 0xC0
        __asm _emit 0x01
        __asm _emit 0x80
        // 0x587BA12B: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587BA12D: mov word ptr [esp + 0x32], di
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x32
        // 0x587BA132: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0x39
        __asm _emit 0x6B
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587BA137: pop edi
        __asm _emit 0x5F
        // 0x587BA138: pop esi
        __asm _emit 0x5E
        // 0x587BA139: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
