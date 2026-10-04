// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587B8290 .. +0x6C bytes.
// Source symbol alias: FUN_587b8290.
extern "C" __declspec(naked) void FUN_587b8290() {
    __asm {
        // 0x587B8290: push ebx
        __asm _emit 0x53
        // 0x587B8291: mov ebx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587B8295: push esi
        __asm _emit 0x56
        // 0x587B8296: push edi
        __asm _emit 0x57
        // 0x587B8297: mov edi, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587B829B: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587B829D: lea eax, [edi - 0x30]
        __asm _emit 0x8D
        __asm _emit 0x47
        __asm _emit 0xD0
        // 0x587B82A0: push eax
        __asm _emit 0x50
        // 0x587B82A1: lea ecx, [ebx + 0x30]
        __asm _emit 0x8D
        __asm _emit 0x4B
        __asm _emit 0x30
        // 0x587B82A4: push ecx
        __asm _emit 0x51
        // 0x587B82A5: mov ecx, dword ptr [0x58a24578]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x78
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587B82AB: call 0x587a2d40
        __asm _emit 0xE8
        __asm _emit 0x90
        __asm _emit 0xAA
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x587B82B0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587B82B2: je 0x587b82bc
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x587B82B4: pop edi
        __asm _emit 0x5F
        // 0x587B82B5: pop esi
        __asm _emit 0x5E
        // 0x587B82B6: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587B82B8: pop ebx
        __asm _emit 0x5B
        // 0x587B82B9: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x587B82BC: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587B82C0: push edx
        __asm _emit 0x52
        // 0x587B82C1: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587B82C3: call 0x587b7bd0
        __asm _emit 0xE8
        __asm _emit 0x08
        __asm _emit 0xF9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587B82C8: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587B82CA: je 0x587b82f1
        __asm _emit 0x74
        __asm _emit 0x25
        // 0x587B82CC: mov eax, dword ptr [esi + 0x188]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B82D2: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587B82D4: jl 0x587b82f1
        __asm _emit 0x7C
        __asm _emit 0x1B
        // 0x587B82D6: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B82D8: push edi
        __asm _emit 0x57
        // 0x587B82D9: push ebx
        __asm _emit 0x53
        // 0x587B82DA: or eax, 0x20000
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587B82DF: push eax
        __asm _emit 0x50
        // 0x587B82E0: push 0x20000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587B82E5: push 0x80020a00
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x0A
        __asm _emit 0x02
        __asm _emit 0x80
        // 0x587B82EA: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587B82EC: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0x7F
        __asm _emit 0x89
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587B82F1: pop edi
        __asm _emit 0x5F
        // 0x587B82F2: pop esi
        __asm _emit 0x5E
        // 0x587B82F3: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B82F8: pop ebx
        __asm _emit 0x5B
        // 0x587B82F9: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
