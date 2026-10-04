// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587AB390 .. +0x59 bytes.
// Source symbol alias: FUN_587ab390.
extern "C" __declspec(naked) void FUN_587ab390() {
    __asm {
        // 0x587AB390: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x587AB393: push ebx
        __asm _emit 0x53
        // 0x587AB394: push ebp
        __asm _emit 0x55
        // 0x587AB395: push esi
        __asm _emit 0x56
        // 0x587AB396: push edi
        __asm _emit 0x57
        // 0x587AB397: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x587AB399: lea esi, [edi + 4]
        __asm _emit 0x8D
        __asm _emit 0x77
        __asm _emit 0x04
        // 0x587AB39C: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587AB39E: mov dword ptr [edi], 0x58999d70
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x70
        __asm _emit 0x9D
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587AB3A4: call 0x588ffdb0
        __asm _emit 0xE8
        __asm _emit 0x07
        __asm _emit 0x4A
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x587AB3A9: mov ebp, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x6E
        __asm _emit 0x10
        // 0x587AB3AC: cmp dword ptr [esi + 0xc], ebp
        __asm _emit 0x39
        __asm _emit 0x6E
        __asm _emit 0x0C
        // 0x587AB3AF: jbe 0x587ab3b6
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587AB3B1: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xBC
        __asm _emit 0x18
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AB3B6: mov ebx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x5E
        __asm _emit 0x0C
        // 0x587AB3B9: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x587AB3BB: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587AB3BF: cmp ebx, dword ptr [esi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x5E
        __asm _emit 0x10
        // 0x587AB3C2: jbe 0x587ab3c9
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587AB3C4: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xA9
        __asm _emit 0x18
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587AB3C9: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587AB3CD: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x587AB3CF: push ebp
        __asm _emit 0x55
        // 0x587AB3D0: push ecx
        __asm _emit 0x51
        // 0x587AB3D1: push ebx
        __asm _emit 0x53
        // 0x587AB3D2: push eax
        __asm _emit 0x50
        // 0x587AB3D3: lea edx, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587AB3D7: push edx
        __asm _emit 0x52
        // 0x587AB3D8: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587AB3DA: call 0x587aedb0
        __asm _emit 0xE8
        __asm _emit 0xD1
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AB3DF: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x587AB3E1: pop edi
        __asm _emit 0x5F
        // 0x587AB3E2: pop esi
        __asm _emit 0x5E
        // 0x587AB3E3: pop ebp
        __asm _emit 0x5D
        // 0x587AB3E4: pop ebx
        __asm _emit 0x5B
        // 0x587AB3E5: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x587AB3E8: ret
        __asm _emit 0xC3
    }
}
