// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x5886FA97 .. +0x98 bytes.
extern "C" __declspec(naked) void FUN_5886fa97() {
    __asm {
        // 0x5886FA97: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x5886FA99: push ebp
        __asm _emit 0x55
        // 0x5886FA9A: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x5886FA9C: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x5886FA9F: mov ecx, 0xdeac
        __asm _emit 0xB9
        __asm _emit 0xAC
        __asm _emit 0xDE
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886FAA4: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x5886FAA6: ja 0x5886faee
        __asm _emit 0x77
        __asm _emit 0x46
        // 0x5886FAA8: je 0x5886fad0
        __asm _emit 0x74
        __asm _emit 0x26
        // 0x5886FAAA: mov ecx, 0xc433
        __asm _emit 0xB9
        __asm _emit 0x33
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886FAAF: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x5886FAB1: ja 0x5886fad4
        __asm _emit 0x77
        __asm _emit 0x21
        // 0x5886FAB3: je 0x5886fad0
        __asm _emit 0x74
        __asm _emit 0x1B
        // 0x5886FAB5: sub eax, 0x2a
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x2A
        // 0x5886FAB8: je 0x5886fad0
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x5886FABA: sub eax, 0xc402
        __asm _emit 0x2D
        __asm _emit 0x02
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886FABF: je 0x5886fad0
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x5886FAC1: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x01
        // 0x5886FAC4: je 0x5886fad0
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x5886FAC6: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x01
        // 0x5886FAC9: je 0x5886fad0
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x5886FACB: sub eax, 3
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x03
        // 0x5886FACE: jne 0x5886fb22
        __asm _emit 0x75
        __asm _emit 0x52
        // 0x5886FAD0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5886FAD2: pop ebp
        __asm _emit 0x5D
        // 0x5886FAD3: ret
        __asm _emit 0xC3
        // 0x5886FAD4: sub eax, 0xc435
        __asm _emit 0x2D
        __asm _emit 0x35
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886FAD9: je 0x5886fad0
        __asm _emit 0x74
        __asm _emit 0xF5
        // 0x5886FADB: sub eax, 0x1263
        __asm _emit 0x2D
        __asm _emit 0x63
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886FAE0: je 0x5886fb27
        __asm _emit 0x74
        __asm _emit 0x45
        // 0x5886FAE2: sub eax, 0x812
        __asm _emit 0x2D
        __asm _emit 0x12
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886FAE7: je 0x5886fad0
        __asm _emit 0x74
        __asm _emit 0xE7
        // 0x5886FAE9: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x01
        // 0x5886FAEC: jmp 0x5886face
        __asm _emit 0xEB
        __asm _emit 0xE0
        // 0x5886FAEE: mov ecx, 0xdeb1
        __asm _emit 0xB9
        __asm _emit 0xB1
        __asm _emit 0xDE
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886FAF3: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x5886FAF5: ja 0x5886fb0a
        __asm _emit 0x77
        __asm _emit 0x13
        // 0x5886FAF7: je 0x5886fad0
        __asm _emit 0x74
        __asm _emit 0xD7
        // 0x5886FAF9: sub eax, 0xdead
        __asm _emit 0x2D
        __asm _emit 0xAD
        __asm _emit 0xDE
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886FAFE: je 0x5886fad0
        __asm _emit 0x74
        __asm _emit 0xD0
        // 0x5886FB00: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x01
        // 0x5886FB03: je 0x5886fad0
        __asm _emit 0x74
        __asm _emit 0xCB
        // 0x5886FB05: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x01
        // 0x5886FB08: jmp 0x5886fae7
        __asm _emit 0xEB
        __asm _emit 0xDD
        // 0x5886FB0A: sub eax, 0xdeb2
        __asm _emit 0x2D
        __asm _emit 0xB2
        __asm _emit 0xDE
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886FB0F: je 0x5886fad0
        __asm _emit 0x74
        __asm _emit 0xBF
        // 0x5886FB11: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x01
        // 0x5886FB14: je 0x5886fad0
        __asm _emit 0x74
        __asm _emit 0xBA
        // 0x5886FB16: sub eax, 0x1f35
        __asm _emit 0x2D
        __asm _emit 0x35
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886FB1B: je 0x5886fad0
        __asm _emit 0x74
        __asm _emit 0xB3
        // 0x5886FB1D: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x01
        // 0x5886FB20: je 0x5886fb27
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x5886FB22: mov eax, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x0C
        // 0x5886FB25: pop ebp
        __asm _emit 0x5D
        // 0x5886FB26: ret
        __asm _emit 0xC3
        // 0x5886FB27: mov eax, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x0C
        // 0x5886FB2A: and eax, 8
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x08
        // 0x5886FB2D: pop ebp
        __asm _emit 0x5D
        // 0x5886FB2E: ret
        __asm _emit 0xC3
    }
}
