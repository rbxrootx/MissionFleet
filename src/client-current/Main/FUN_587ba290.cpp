// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 52 bytes in 2 exact ranges.
// Source symbol alias: FUN_587ba290.

// Ghidra body range 0x587BA290..0x587BA29D; 13 mapped bytes.
extern "C" __declspec(naked) void FUN_587ba290_segment_00() {
    __asm {
        // 0x587BA290: push esi
        __asm _emit 0x56
        // 0x587BA291: mov esi, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587BA295: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x587BA297: push edi
        __asm _emit 0x57
        // 0x587BA298: lea edi, [eax + 1]
        __asm _emit 0x8D
        __asm _emit 0x78
        __asm _emit 0x01
        // 0x587BA29B: jmp 0x587ba2a0
        __asm _emit 0xEB
        __asm _emit 0x03
    }
}

// Ghidra body range 0x587BA2A0..0x587BA2C7; 39 mapped bytes.
extern "C" __declspec(naked) void FUN_587ba290_segment_01() {
    __asm {
        // 0x587BA2A0: mov dl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x10
        // 0x587BA2A2: inc eax
        __asm _emit 0x40
        // 0x587BA2A3: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xD2
        // 0x587BA2A5: jne 0x587ba2a0
        __asm _emit 0x75
        __asm _emit 0xF9
        // 0x587BA2A7: mov edx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587BA2AB: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587BA2AD: sub eax, edi
        __asm _emit 0x2B
        __asm _emit 0xC7
        // 0x587BA2AF: inc eax
        __asm _emit 0x40
        // 0x587BA2B0: push eax
        __asm _emit 0x50
        // 0x587BA2B1: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587BA2B5: push esi
        __asm _emit 0x56
        // 0x587BA2B6: push eax
        __asm _emit 0x50
        // 0x587BA2B7: push edx
        __asm _emit 0x52
        // 0x587BA2B8: push 0x80013202
        __asm _emit 0x68
        __asm _emit 0x02
        __asm _emit 0x32
        __asm _emit 0x01
        __asm _emit 0x80
        // 0x587BA2BD: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0xAE
        __asm _emit 0x69
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587BA2C2: pop edi
        __asm _emit 0x5F
        // 0x587BA2C3: pop esi
        __asm _emit 0x5E
        // 0x587BA2C4: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
