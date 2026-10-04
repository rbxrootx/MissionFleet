// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587B8370 .. +0x6C bytes.
// Source symbol alias: FUN_587b8370.
extern "C" __declspec(naked) void FUN_587b8370() {
    __asm {
        // 0x587B8370: push ebx
        __asm _emit 0x53
        // 0x587B8371: mov ebx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587B8375: push esi
        __asm _emit 0x56
        // 0x587B8376: push edi
        __asm _emit 0x57
        // 0x587B8377: mov edi, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587B837B: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587B837D: lea eax, [edi - 0x30]
        __asm _emit 0x8D
        __asm _emit 0x47
        __asm _emit 0xD0
        // 0x587B8380: push eax
        __asm _emit 0x50
        // 0x587B8381: lea ecx, [ebx + 0x30]
        __asm _emit 0x8D
        __asm _emit 0x4B
        __asm _emit 0x30
        // 0x587B8384: push ecx
        __asm _emit 0x51
        // 0x587B8385: mov ecx, dword ptr [0x58a24578]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x78
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587B838B: call 0x587a2d40
        __asm _emit 0xE8
        __asm _emit 0xB0
        __asm _emit 0xA9
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x587B8390: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587B8392: je 0x587b839c
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x587B8394: pop edi
        __asm _emit 0x5F
        // 0x587B8395: pop esi
        __asm _emit 0x5E
        // 0x587B8396: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587B8398: pop ebx
        __asm _emit 0x5B
        // 0x587B8399: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x587B839C: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587B83A0: push edx
        __asm _emit 0x52
        // 0x587B83A1: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587B83A3: call 0x587b7bd0
        __asm _emit 0xE8
        __asm _emit 0x28
        __asm _emit 0xF8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587B83A8: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587B83AA: je 0x587b83d1
        __asm _emit 0x74
        __asm _emit 0x25
        // 0x587B83AC: mov eax, dword ptr [esi + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B83B2: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587B83B4: jl 0x587b83d1
        __asm _emit 0x7C
        __asm _emit 0x1B
        // 0x587B83B6: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B83B8: push edi
        __asm _emit 0x57
        // 0x587B83B9: push ebx
        __asm _emit 0x53
        // 0x587B83BA: or eax, 0x40000
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587B83BF: push eax
        __asm _emit 0x50
        // 0x587B83C0: push 0x20000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587B83C5: push 0x80020a00
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x0A
        __asm _emit 0x02
        __asm _emit 0x80
        // 0x587B83CA: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587B83CC: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0x9F
        __asm _emit 0x88
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587B83D1: pop edi
        __asm _emit 0x5F
        // 0x587B83D2: pop esi
        __asm _emit 0x5E
        // 0x587B83D3: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B83D8: pop ebx
        __asm _emit 0x5B
        // 0x587B83D9: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
