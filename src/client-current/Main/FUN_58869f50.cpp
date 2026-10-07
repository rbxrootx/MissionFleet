// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 152 bytes in 1 exact ranges.
// Source symbol alias: FUN_58869f50.

// Ghidra body range 0x58869F50..0x58869FE8; 152 mapped bytes.
extern "C" __declspec(naked) void FUN_58869f50_segment_00() {
    __asm {
        // 0x58869F50: sub esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x0C
        // 0x58869F53: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58869F58: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x58869F5A: mov dword ptr [esp + 8], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58869F5E: push esi
        __asm _emit 0x56
        // 0x58869F5F: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58869F61: mov eax, dword ptr [esi + 0x2cc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xCC
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58869F67: cmp eax, dword ptr [esi + 0x2c8]
        __asm _emit 0x3B
        __asm _emit 0x86
        __asm _emit 0xC8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58869F6D: jg 0x58869fc6
        __asm _emit 0x7F
        __asm _emit 0x57
        // 0x58869F6F: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58869F71: push edx
        __asm _emit 0x52
        // 0x58869F72: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58869F74: mov word ptr [esp + 8], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58869F79: push 6
        __asm _emit 0x6A
        __asm _emit 0x06
        // 0x58869F7B: lea ecx, [esp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58869F7F: push ecx
        __asm _emit 0x51
        // 0x58869F80: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58869F86: push edx
        __asm _emit 0x52
        // 0x58869F87: mov word ptr [esp + 0x16], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x16
        // 0x58869F8C: mov edx, dword ptr [esi + 0x24c]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x4C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58869F92: mov eax, 0xa
        __asm _emit 0xB8
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58869F97: mov word ptr [esp + 0x18], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58869F9C: mov eax, dword ptr [edx + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x50
        // 0x58869F9F: push eax
        __asm _emit 0x50
        // 0x58869FA0: push 0x8001020c
        __asm _emit 0x68
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x80
        // 0x58869FA5: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0xC6
        __asm _emit 0x6C
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x58869FAA: mov esi, dword ptr [esi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x30
        // 0x58869FAD: mov ecx, 0xfffd
        __asm _emit 0xB9
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58869FB2: and word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x58869FB6: pop esi
        __asm _emit 0x5E
        // 0x58869FB7: mov ecx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58869FBB: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x58869FBD: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x18
        __asm _emit 0x2C
        __asm _emit 0x11
        __asm _emit 0x00
        // 0x58869FC2: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58869FC5: ret
        __asm _emit 0xC3
        // 0x58869FC6: mov dword ptr [esi + 0x2d0], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xD0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58869FD0: mov esi, dword ptr [esi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x30
        // 0x58869FD3: or word ptr [esi + 0x24], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x02
        // 0x58869FD8: mov ecx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58869FDC: pop esi
        __asm _emit 0x5E
        // 0x58869FDD: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x58869FDF: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0xF6
        __asm _emit 0x2B
        __asm _emit 0x11
        __asm _emit 0x00
        // 0x58869FE4: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58869FE7: ret
        __asm _emit 0xC3
    }
}
