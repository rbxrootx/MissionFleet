// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x5885A245 .. +0x126 bytes.
extern "C" __declspec(naked) void FUN_5885a245() {
    __asm {
        // 0x5885A245: push 0x10
        __asm _emit 0x6A
        __asm _emit 0x10
        // 0x5885A247: push 0x588ed1e0
        __asm _emit 0x68
        __asm _emit 0xE0
        __asm _emit 0xD1
        __asm _emit 0x8E
        __asm _emit 0x58
        // 0x5885A24C: call 0x58832760
        __asm _emit 0xE8
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xFD
        __asm _emit 0xFF
        // 0x5885A251: mov edi, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0x0C
        // 0x5885A254: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x5885A256: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5885A258: jne 0x5885a27e
        __asm _emit 0x75
        __asm _emit 0x24
        // 0x5885A25A: mov eax, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x10
        // 0x5885A25D: mov byte ptr [eax + 0x1c], 1
        __asm _emit 0xC6
        __asm _emit 0x40
        __asm _emit 0x1C
        __asm _emit 0x01
        // 0x5885A261: mov dword ptr [eax + 0x18], 0x16
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x18
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A268: push eax
        __asm _emit 0x50
        // 0x5885A269: push esi
        __asm _emit 0x56
        // 0x5885A26A: push esi
        __asm _emit 0x56
        // 0x5885A26B: push esi
        __asm _emit 0x56
        // 0x5885A26C: push esi
        __asm _emit 0x56
        // 0x5885A26D: push esi
        __asm _emit 0x56
        // 0x5885A26E: call 0x58850f2e
        __asm _emit 0xE8
        __asm _emit 0xBB
        __asm _emit 0x6C
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885A273: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x5885A276: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFF
        // 0x5885A279: jmp 0x5885a35b
        __asm _emit 0xE9
        __asm _emit 0xDD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A27E: mov dword ptr [ebp - 0x20], esi
        __asm _emit 0x89
        __asm _emit 0x75
        __asm _emit 0xE0
        // 0x5885A281: push edi
        __asm _emit 0x57
        // 0x5885A282: call 0x58859d02
        __asm _emit 0xE8
        __asm _emit 0x7B
        __asm _emit 0xFA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885A287: pop ecx
        __asm _emit 0x59
        // 0x5885A288: mov dword ptr [ebp - 4], esi
        __asm _emit 0x89
        __asm _emit 0x75
        __asm _emit 0xFC
        // 0x5885A28B: mov eax, dword ptr [edi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x0C
        // 0x5885A28E: nop
        __asm _emit 0x90
        // 0x5885A28F: shr eax, 0xc
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x0C
        // 0x5885A292: test al, 1
        __asm _emit 0xA8
        __asm _emit 0x01
        // 0x5885A294: jne 0x5885a301
        __asm _emit 0x75
        __asm _emit 0x6B
        // 0x5885A296: push edi
        __asm _emit 0x57
        // 0x5885A297: call 0x5886cc56
        __asm _emit 0xE8
        __asm _emit 0xBA
        __asm _emit 0x29
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5885A29C: pop ecx
        __asm _emit 0x59
        // 0x5885A29D: cmp eax, -1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x5885A2A0: je 0x5885a2c5
        __asm _emit 0x74
        __asm _emit 0x23
        // 0x5885A2A2: cmp eax, -2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0xFE
        // 0x5885A2A5: je 0x5885a2c5
        __asm _emit 0x74
        __asm _emit 0x1E
        // 0x5885A2A7: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x5885A2A9: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x5885A2AC: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x5885A2AE: and ebx, 0x3f
        __asm _emit 0x83
        __asm _emit 0xE3
        __asm _emit 0x3F
        // 0x5885A2B1: imul ecx, ebx, 0x38
        __asm _emit 0x6B
        __asm _emit 0xCB
        __asm _emit 0x38
        // 0x5885A2B4: add ecx, dword ptr [edx*4 + 0x589699b0]
        __asm _emit 0x03
        __asm _emit 0x0C
        __asm _emit 0x95
        __asm _emit 0xB0
        __asm _emit 0x99
        __asm _emit 0x96
        __asm _emit 0x58
        // 0x5885A2BB: mov dword ptr [ebp - 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4D
        __asm _emit 0xE4
        // 0x5885A2BE: mov ecx, 0x58907530
        __asm _emit 0xB9
        __asm _emit 0x30
        __asm _emit 0x75
        __asm _emit 0x90
        __asm _emit 0x58
        // 0x5885A2C3: jmp 0x5885a2d7
        __asm _emit 0xEB
        __asm _emit 0x12
        // 0x5885A2C5: mov ecx, 0x58907530
        __asm _emit 0xB9
        __asm _emit 0x30
        __asm _emit 0x75
        __asm _emit 0x90
        __asm _emit 0x58
        // 0x5885A2CA: mov dword ptr [ebp - 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4D
        __asm _emit 0xE4
        // 0x5885A2CD: mov edx, eax
        __asm _emit 0x8B
        __asm _emit 0xD0
        // 0x5885A2CF: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x5885A2D2: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x5885A2D4: and ebx, 0x3f
        __asm _emit 0x83
        __asm _emit 0xE3
        __asm _emit 0x3F
        // 0x5885A2D7: mov edi, dword ptr [ebp - 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0xE4
        // 0x5885A2DA: cmp byte ptr [edi + 0x29], 0
        __asm _emit 0x80
        __asm _emit 0x7F
        __asm _emit 0x29
        __asm _emit 0x00
        // 0x5885A2DE: mov edi, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0x0C
        // 0x5885A2E1: jne 0x5885a2fd
        __asm _emit 0x75
        __asm _emit 0x1A
        // 0x5885A2E3: cmp eax, -1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x5885A2E6: je 0x5885a2f7
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x5885A2E8: cmp eax, -2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0xFE
        // 0x5885A2EB: je 0x5885a2f7
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x5885A2ED: imul ecx, ebx, 0x38
        __asm _emit 0x6B
        __asm _emit 0xCB
        __asm _emit 0x38
        // 0x5885A2F0: add ecx, dword ptr [edx*4 + 0x589699b0]
        __asm _emit 0x03
        __asm _emit 0x0C
        __asm _emit 0x95
        __asm _emit 0xB0
        __asm _emit 0x99
        __asm _emit 0x96
        __asm _emit 0x58
        // 0x5885A2F7: test byte ptr [ecx + 0x2d], 1
        __asm _emit 0xF6
        __asm _emit 0x41
        __asm _emit 0x2D
        __asm _emit 0x01
        // 0x5885A2FB: je 0x5885a301
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x5885A2FD: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5885A2FF: jmp 0x5885a304
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x5885A301: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5885A303: inc eax
        __asm _emit 0x40
        // 0x5885A304: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5885A306: jne 0x5885a339
        __asm _emit 0x75
        __asm _emit 0x31
        // 0x5885A308: mov eax, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x10
        // 0x5885A30B: mov byte ptr [eax + 0x1c], 1
        __asm _emit 0xC6
        __asm _emit 0x40
        __asm _emit 0x1C
        __asm _emit 0x01
        // 0x5885A30F: mov dword ptr [eax + 0x18], 0x16
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x18
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A316: push eax
        __asm _emit 0x50
        // 0x5885A317: push esi
        __asm _emit 0x56
        // 0x5885A318: push esi
        __asm _emit 0x56
        // 0x5885A319: push esi
        __asm _emit 0x56
        // 0x5885A31A: push esi
        __asm _emit 0x56
        // 0x5885A31B: push esi
        __asm _emit 0x56
        // 0x5885A31C: call 0x58850f2e
        __asm _emit 0xE8
        __asm _emit 0x0D
        __asm _emit 0x6C
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885A321: push -2
        __asm _emit 0x6A
        __asm _emit 0xFE
        // 0x5885A323: lea eax, [ebp - 0x10]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xF0
        // 0x5885A326: push eax
        __asm _emit 0x50
        // 0x5885A327: push 0x58906040
        __asm _emit 0x68
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        // 0x5885A32C: call 0x58850750
        __asm _emit 0xE8
        __asm _emit 0x1F
        __asm _emit 0x64
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885A331: add esp, 0x24
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x24
        // 0x5885A334: jmp 0x5885a276
        __asm _emit 0xE9
        __asm _emit 0x3D
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885A339: push dword ptr [ebp + 0x10]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x10
        // 0x5885A33C: push edi
        __asm _emit 0x57
        // 0x5885A33D: push dword ptr [ebp + 8]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x5885A340: call 0x5885a379
        __asm _emit 0xE8
        __asm _emit 0x34
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A345: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5885A348: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x5885A34A: mov dword ptr [ebp - 0x20], esi
        __asm _emit 0x89
        __asm _emit 0x75
        __asm _emit 0xE0
        // 0x5885A34D: mov dword ptr [ebp - 4], 0xfffffffe
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0xFC
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885A354: call 0x5885a371
        __asm _emit 0xE8
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A359: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5885A35B: mov ecx, dword ptr [ebp - 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xF0
        // 0x5885A35E: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A365: pop ecx
        __asm _emit 0x59
        // 0x5885A366: pop edi
        __asm _emit 0x5F
        // 0x5885A367: pop esi
        __asm _emit 0x5E
        // 0x5885A368: pop ebx
        __asm _emit 0x5B
        // 0x5885A369: leave
        __asm _emit 0xC9
        // 0x5885A36A: ret
        __asm _emit 0xC3
    }
}
