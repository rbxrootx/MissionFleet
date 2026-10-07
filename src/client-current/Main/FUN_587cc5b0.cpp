// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 127 bytes in 2 discontiguous ranges.
// Source symbol alias: FUN_587cc5b0.

// Ghidra body range 0x587CC5B0..0x587CC5ED; 61 mapped bytes.
extern "C" __declspec(naked) void FUN_587cc5b0_segment_00() {
    __asm {
        // 0x587CC5B0: push ebx
        __asm _emit 0x53
        // 0x587CC5B1: push ebp
        __asm _emit 0x55
        // 0x587CC5B2: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x587CC5B4: push esi
        __asm _emit 0x56
        // 0x587CC5B5: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587CC5B7: mov ecx, dword ptr [esi + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x28
        // 0x587CC5BA: push edi
        __asm _emit 0x57
        // 0x587CC5BB: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587CC5BD: mov byte ptr [esi + 0xc], bl
        __asm _emit 0x88
        __asm _emit 0x5E
        __asm _emit 0x0C
        // 0x587CC5C0: mov byte ptr [esi + 0xd], bl
        __asm _emit 0x88
        __asm _emit 0x5E
        __asm _emit 0x0D
        // 0x587CC5C3: mov dword ptr [esi + 0x10], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x10
        // 0x587CC5C6: mov dword ptr [esi + 0x14], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x14
        // 0x587CC5C9: mov dword ptr [esi + 0x18], 1
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CC5D0: mov dword ptr [esi + 0x1c], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x1C
        // 0x587CC5D3: mov dword ptr [esi + 0x20], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x20
        // 0x587CC5D6: mov dword ptr [esi + 0x24], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x24
        // 0x587CC5D9: call 0x587ce310
        __asm _emit 0xE8
        __asm _emit 0x32
        __asm _emit 0x1D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CC5DE: mov dword ptr [esi + 0x2c], 0x64
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x2C
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CC5E5: lea edi, [esi + 0x38]
        __asm _emit 0x8D
        __asm _emit 0x7E
        __asm _emit 0x38
        // 0x587CC5E8: lea ebp, [ebx + 2]
        __asm _emit 0x8D
        __asm _emit 0x6B
        __asm _emit 0x02
        // 0x587CC5EB: jmp 0x587cc5f0
        __asm _emit 0xEB
        __asm _emit 0x03
    }
}

// Ghidra body range 0x587CC5F0..0x587CC632; 66 mapped bytes.
extern "C" __declspec(naked) void FUN_587cc5b0_segment_01() {
    __asm {
        // 0x587CC5F0: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x587CC5F2: push ebx
        __asm _emit 0x53
        // 0x587CC5F3: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x68
        __asm _emit 0xAD
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587CC5F8: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x587CC5FB: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x587CC5FE: jne 0x587cc5f0
        __asm _emit 0x75
        __asm _emit 0xF0
        // 0x587CC600: mov ecx, dword ptr [esi + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x50
        // 0x587CC603: push ebx
        __asm _emit 0x53
        // 0x587CC604: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x57
        __asm _emit 0xAD
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587CC609: mov ecx, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x54
        // 0x587CC60C: push ebx
        __asm _emit 0x53
        // 0x587CC60D: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x4E
        __asm _emit 0xAD
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587CC612: mov ecx, dword ptr [esi + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x58
        // 0x587CC615: push ebx
        __asm _emit 0x53
        // 0x587CC616: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x45
        __asm _emit 0xAD
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587CC61B: mov ecx, dword ptr [esi + 0x5c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x5C
        // 0x587CC61E: push ebx
        __asm _emit 0x53
        // 0x587CC61F: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x3C
        __asm _emit 0xAD
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587CC624: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x587CC627: push ebx
        __asm _emit 0x53
        // 0x587CC628: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x33
        __asm _emit 0xAD
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587CC62D: pop edi
        __asm _emit 0x5F
        // 0x587CC62E: pop esi
        __asm _emit 0x5E
        // 0x587CC62F: pop ebp
        __asm _emit 0x5D
        // 0x587CC630: pop ebx
        __asm _emit 0x5B
        // 0x587CC631: ret
        __asm _emit 0xC3
    }
}
