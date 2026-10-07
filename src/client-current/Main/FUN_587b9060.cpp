// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587B9060 .. +0x6F bytes.
// Source symbol alias: FUN_587b9060.
extern "C" __declspec(naked) void FUN_587b9060() {
    __asm {
        // 0x587B9060: push ebx
        __asm _emit 0x53
        // 0x587B9061: mov ebx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587B9065: push esi
        __asm _emit 0x56
        // 0x587B9066: mov esi, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587B906A: shl esi, 0x10
        __asm _emit 0xC1
        __asm _emit 0xE6
        __asm _emit 0x10
        // 0x587B906D: or esi, dword ptr [esp + 0x10]
        __asm _emit 0x0B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587B9071: push edi
        __asm _emit 0x57
        // 0x587B9072: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x587B9074: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x587B9076: je 0x587b90ad
        __asm _emit 0x74
        __asm _emit 0x35
        // 0x587B9078: cmp ebx, 3
        __asm _emit 0x83
        __asm _emit 0xFB
        __asm _emit 0x03
        // 0x587B907B: je 0x587b90ad
        __asm _emit 0x74
        __asm _emit 0x30
        // 0x587B907D: call 0x58748be0
        __asm _emit 0xE8
        __asm _emit 0x5E
        __asm _emit 0xFB
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x587B9082: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587B9084: call 0x58748790
        __asm _emit 0xE8
        __asm _emit 0x07
        __asm _emit 0xF7
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x587B9089: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B908B: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B908D: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B908F: push esi
        __asm _emit 0x56
        // 0x587B9090: push ebx
        __asm _emit 0x53
        // 0x587B9091: push 0x80010017
        __asm _emit 0x68
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x80
        // 0x587B9096: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587B9098: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0xD3
        __asm _emit 0x7B
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587B909D: mov dword ptr [edi + 0x134], 0
        __asm _emit 0xC7
        __asm _emit 0x87
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B90A7: pop edi
        __asm _emit 0x5F
        // 0x587B90A8: pop esi
        __asm _emit 0x5E
        // 0x587B90A9: pop ebx
        __asm _emit 0x5B
        // 0x587B90AA: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x587B90AD: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B90AF: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B90B1: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B90B3: push esi
        __asm _emit 0x56
        // 0x587B90B4: push ebx
        __asm _emit 0x53
        // 0x587B90B5: push 0x80010017
        __asm _emit 0x68
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x80
        // 0x587B90BA: mov dword ptr [edi + 0x134], 0x20000000
        __asm _emit 0xC7
        __asm _emit 0x87
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x20
        // 0x587B90C4: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0xA7
        __asm _emit 0x7B
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587B90C9: pop edi
        __asm _emit 0x5F
        // 0x587B90CA: pop esi
        __asm _emit 0x5E
        // 0x587B90CB: pop ebx
        __asm _emit 0x5B
        // 0x587B90CC: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
