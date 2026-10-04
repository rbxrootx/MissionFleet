// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5890A230 .. +0xCD bytes.
// Source symbol alias: FUN_5890a230.
extern "C" __declspec(naked) void FUN_5890a230() {
    __asm {
        // 0x5890A230: push esi
        __asm _emit 0x56
        // 0x5890A231: push edi
        __asm _emit 0x57
        // 0x5890A232: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5890A234: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x5890A236: call dword ptr [0x5898c470]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x70
        __asm _emit 0xC4
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5890A23C: lea esi, [edi + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x77
        __asm _emit 0x1C
        // 0x5890A23F: push esi
        __asm _emit 0x56
        // 0x5890A240: push 0x589a3d48
        __asm _emit 0x68
        __asm _emit 0x48
        __asm _emit 0x3D
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5890A245: push 3
        __asm _emit 0x6A
        __asm _emit 0x03
        // 0x5890A247: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5890A249: push 0x589a3cf8
        __asm _emit 0x68
        __asm _emit 0xF8
        __asm _emit 0x3C
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5890A24E: call dword ptr [0x5898c46c]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x6C
        __asm _emit 0xC4
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5890A254: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5890A256: je 0x5890a263
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5890A258: pop edi
        __asm _emit 0x5F
        // 0x5890A259: mov dword ptr [esi], 0
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890A25F: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5890A261: pop esi
        __asm _emit 0x5E
        // 0x5890A262: ret
        __asm _emit 0xC3
        // 0x5890A263: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5890A265: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x5890A267: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5890A269: push ebx
        __asm _emit 0x53
        // 0x5890A26A: lea ebx, [edi + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x5F
        __asm _emit 0x20
        // 0x5890A26D: push ebx
        __asm _emit 0x53
        // 0x5890A26E: push 0x589a3d08
        __asm _emit 0x68
        __asm _emit 0x08
        __asm _emit 0x3D
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5890A273: push eax
        __asm _emit 0x50
        // 0x5890A274: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5890A276: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5890A278: je 0x5890a28c
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x5890A27A: mov dword ptr [ebx], 0
        __asm _emit 0xC7
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890A280: pop ebx
        __asm _emit 0x5B
        // 0x5890A281: pop edi
        __asm _emit 0x5F
        // 0x5890A282: mov dword ptr [esi], 0
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890A288: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5890A28A: pop esi
        __asm _emit 0x5E
        // 0x5890A28B: ret
        __asm _emit 0xC3
        // 0x5890A28C: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5890A28E: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x5890A290: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5890A292: push ebp
        __asm _emit 0x55
        // 0x5890A293: lea ebp, [edi + 0x24]
        __asm _emit 0x8D
        __asm _emit 0x6F
        __asm _emit 0x24
        // 0x5890A296: push ebp
        __asm _emit 0x55
        // 0x5890A297: push 0x589a3d38
        __asm _emit 0x68
        __asm _emit 0x38
        __asm _emit 0x3D
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5890A29C: push eax
        __asm _emit 0x50
        // 0x5890A29D: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5890A29F: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5890A2A1: je 0x5890a2bd
        __asm _emit 0x74
        __asm _emit 0x1A
        // 0x5890A2A3: mov dword ptr [ebp], 0
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890A2AA: pop ebp
        __asm _emit 0x5D
        // 0x5890A2AB: mov dword ptr [ebx], 0
        __asm _emit 0xC7
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890A2B1: pop ebx
        __asm _emit 0x5B
        // 0x5890A2B2: pop edi
        __asm _emit 0x5F
        // 0x5890A2B3: mov dword ptr [esi], 0
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890A2B9: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5890A2BB: pop esi
        __asm _emit 0x5E
        // 0x5890A2BC: ret
        __asm _emit 0xC3
        // 0x5890A2BD: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5890A2BF: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x5890A2C1: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5890A2C3: add edi, 0x28
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x28
        // 0x5890A2C6: push edi
        __asm _emit 0x57
        // 0x5890A2C7: push 0x589a3d28
        __asm _emit 0x68
        __asm _emit 0x28
        __asm _emit 0x3D
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5890A2CC: push eax
        __asm _emit 0x50
        // 0x5890A2CD: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5890A2CF: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5890A2D1: je 0x5890a2f3
        __asm _emit 0x74
        __asm _emit 0x20
        // 0x5890A2D3: mov dword ptr [ebp], 0
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890A2DA: pop ebp
        __asm _emit 0x5D
        // 0x5890A2DB: mov dword ptr [ebx], 0
        __asm _emit 0xC7
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890A2E1: pop ebx
        __asm _emit 0x5B
        // 0x5890A2E2: mov dword ptr [edi], 0
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890A2E8: pop edi
        __asm _emit 0x5F
        // 0x5890A2E9: mov dword ptr [esi], 0
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890A2EF: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5890A2F1: pop esi
        __asm _emit 0x5E
        // 0x5890A2F2: ret
        __asm _emit 0xC3
        // 0x5890A2F3: pop ebp
        __asm _emit 0x5D
        // 0x5890A2F4: pop ebx
        __asm _emit 0x5B
        // 0x5890A2F5: pop edi
        __asm _emit 0x5F
        // 0x5890A2F6: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890A2FB: pop esi
        __asm _emit 0x5E
        // 0x5890A2FC: ret
        __asm _emit 0xC3
    }
}
