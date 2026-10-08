// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 237 bytes in 1 exact ranges.
// Source symbol alias: FUN_58833550.

// Ghidra body range 0x58833550..0x5883363D; 237 mapped bytes.
extern "C" __declspec(naked) void FUN_58833550_segment_00() {
    __asm {
        // 0x58833550: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58833552: push 0x58987f48
        __asm _emit 0x68
        __asm _emit 0x48
        __asm _emit 0x7F
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58833557: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883355D: push eax
        __asm _emit 0x50
        // 0x5883355E: push ecx
        __asm _emit 0x51
        // 0x5883355F: push ebx
        __asm _emit 0x53
        // 0x58833560: push ebp
        __asm _emit 0x55
        // 0x58833561: push esi
        __asm _emit 0x56
        // 0x58833562: push edi
        __asm _emit 0x57
        // 0x58833563: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58833568: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5883356A: push eax
        __asm _emit 0x50
        // 0x5883356B: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5883356F: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58833575: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58833577: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5883357B: mov dword ptr [esi], 0x5899e184
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x84
        __asm _emit 0xE1
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58833581: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x58833583: mov dword ptr [esp + 0x20], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58833587: lea edi, [esi + 0x64]
        __asm _emit 0x8D
        __asm _emit 0x7E
        __asm _emit 0x64
        // 0x5883358A: lea ebp, [ebx + 2]
        __asm _emit 0x8D
        __asm _emit 0x6B
        __asm _emit 0x02
        // 0x5883358D: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x58833590: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x58833592: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58833594: je 0x588335a0
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x58833596: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58833598: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5883359A: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5883359C: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5883359E: mov dword ptr [edi], ebx
        __asm _emit 0x89
        __asm _emit 0x1F
        // 0x588335A0: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x588335A3: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x588335A6: jne 0x58833590
        __asm _emit 0x75
        __asm _emit 0xE8
        // 0x588335A8: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x588335AB: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588335AD: je 0x588335ba
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588335AF: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588335B1: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588335B3: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588335B5: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588335B7: mov dword ptr [esi + 0x6c], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x6C
        // 0x588335BA: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x588335BD: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588335BF: je 0x588335cc
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588335C1: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588335C3: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588335C5: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588335C7: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588335C9: mov dword ptr [esi + 0x70], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x70
        // 0x588335CC: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x74
        // 0x588335CF: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588335D1: je 0x588335de
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588335D3: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588335D5: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588335D7: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588335D9: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588335DB: mov dword ptr [esi + 0x74], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x74
        // 0x588335DE: mov ecx, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x78
        // 0x588335E1: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588335E3: je 0x588335f0
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588335E5: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588335E7: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588335E9: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588335EB: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588335ED: mov dword ptr [esi + 0x78], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x78
        // 0x588335F0: mov ecx, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x7C
        // 0x588335F3: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588335F5: je 0x58833602
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588335F7: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588335F9: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588335FB: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588335FD: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588335FF: mov dword ptr [esi + 0x7c], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x7C
        // 0x58833602: mov ecx, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58833608: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x5883360A: je 0x5883361a
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5883360C: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5883360E: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58833610: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58833612: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58833614: mov dword ptr [esi + 0x80], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883361A: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5883361C: mov dword ptr [esp + 0x20], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58833624: call 0x58902c10
        __asm _emit 0xE8
        __asm _emit 0xE7
        __asm _emit 0xF5
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58833629: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5883362D: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58833634: pop ecx
        __asm _emit 0x59
        // 0x58833635: pop edi
        __asm _emit 0x5F
        // 0x58833636: pop esi
        __asm _emit 0x5E
        // 0x58833637: pop ebp
        __asm _emit 0x5D
        // 0x58833638: pop ebx
        __asm _emit 0x5B
        // 0x58833639: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5883363C: ret
        __asm _emit 0xC3
    }
}
