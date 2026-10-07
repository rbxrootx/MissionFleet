// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 181 bytes in 1 exact ranges.
// Source symbol alias: FUN_58744fb0.

// Ghidra body range 0x58744FB0..0x58745065; 181 mapped bytes.
extern "C" __declspec(naked) void FUN_58744fb0_segment_00() {
    __asm {
        // 0x58744FB0: push esi
        __asm _emit 0x56
        // 0x58744FB1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58744FB3: cmp dword ptr [esi + 8], 0
        __asm _emit 0x83
        __asm _emit 0x7E
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58744FB7: jle 0x58745063
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0xA6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58744FBD: push ebx
        __asm _emit 0x53
        // 0x58744FBE: call 0x58743900
        __asm _emit 0xE8
        __asm _emit 0x3D
        __asm _emit 0xE9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58744FC3: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x58744FC5: cmp dword ptr [esi + 8], ebx
        __asm _emit 0x39
        __asm _emit 0x5E
        __asm _emit 0x08
        // 0x58744FC8: jle 0x58745062
        __asm _emit 0x0F
        __asm _emit 0x8E
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58744FCE: push ebp
        __asm _emit 0x55
        // 0x58744FCF: push edi
        __asm _emit 0x57
        // 0x58744FD0: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x58744FD2: lea edi, [esi + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x7E
        __asm _emit 0x20
        // 0x58744FD5: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58744FD7: lea ecx, [eax + ebp + 0x138c]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x28
        __asm _emit 0x8C
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58744FDE: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x58744FE0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58744FE2: jle 0x58744fe9
        __asm _emit 0x7E
        __asm _emit 0x05
        // 0x58744FE4: dec eax
        __asm _emit 0x48
        // 0x58744FE5: mov dword ptr [edi], eax
        __asm _emit 0x89
        __asm _emit 0x07
        // 0x58744FE7: jmp 0x58745050
        __asm _emit 0xEB
        __asm _emit 0x67
        // 0x58744FE9: cmp dword ptr [ecx + 4], 0
        __asm _emit 0x83
        __asm _emit 0x79
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58744FED: je 0x58745033
        __asm _emit 0x74
        __asm _emit 0x44
        // 0x58744FEF: mov eax, dword ptr [esi + 0x710]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x10
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58744FF5: cmp eax, 0x19
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x19
        // 0x58744FF8: jl 0x58745022
        __asm _emit 0x7C
        __asm _emit 0x28
        // 0x58744FFA: push ebx
        __asm _emit 0x53
        // 0x58744FFB: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58744FFD: call 0x58744d20
        __asm _emit 0xE8
        __asm _emit 0x1E
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58745002: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58745004: jne 0x5874500e
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x58745006: push ebx
        __asm _emit 0x53
        // 0x58745007: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58745009: call 0x58743360
        __asm _emit 0xE8
        __asm _emit 0x52
        __asm _emit 0xE3
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5874500E: push ebx
        __asm _emit 0x53
        // 0x5874500F: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58745011: mov dword ptr [esi + 0x710], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x10
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874501B: call 0x587431b0
        __asm _emit 0xE8
        __asm _emit 0x90
        __asm _emit 0xE1
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58745020: jmp 0x58745050
        __asm _emit 0xEB
        __asm _emit 0x2E
        // 0x58745022: inc eax
        __asm _emit 0x40
        // 0x58745023: push ebx
        __asm _emit 0x53
        // 0x58745024: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58745026: mov dword ptr [esi + 0x710], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x10
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874502C: call 0x587431b0
        __asm _emit 0xE8
        __asm _emit 0x7F
        __asm _emit 0xE1
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58745031: jmp 0x58745050
        __asm _emit 0xEB
        __asm _emit 0x1D
        // 0x58745033: mov eax, dword ptr [edi - 8]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0xF8
        // 0x58745036: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58745038: jle 0x58745050
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x5874503A: cmp dword ptr [edi - 4], 0
        __asm _emit 0x83
        __asm _emit 0x7F
        __asm _emit 0xFC
        __asm _emit 0x00
        // 0x5874503E: jne 0x58745050
        __asm _emit 0x75
        __asm _emit 0x10
        // 0x58745040: push eax
        __asm _emit 0x50
        // 0x58745041: push ebx
        __asm _emit 0x53
        // 0x58745042: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58745044: mov dword ptr [edi - 8], 0
        __asm _emit 0xC7
        __asm _emit 0x47
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874504B: call 0x58743960
        __asm _emit 0xE8
        __asm _emit 0x10
        __asm _emit 0xE9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58745050: inc ebx
        __asm _emit 0x43
        // 0x58745051: add ebp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x10
        // 0x58745054: add edi, 0x38
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x38
        // 0x58745057: cmp ebx, dword ptr [esi + 8]
        __asm _emit 0x3B
        __asm _emit 0x5E
        __asm _emit 0x08
        // 0x5874505A: jl 0x58744fd5
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x75
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58745060: pop edi
        __asm _emit 0x5F
        // 0x58745061: pop ebp
        __asm _emit 0x5D
        // 0x58745062: pop ebx
        __asm _emit 0x5B
        // 0x58745063: pop esi
        __asm _emit 0x5E
        // 0x58745064: ret
        __asm _emit 0xC3
    }
}
