// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588F9900 .. +0x138 bytes.
// Source symbol alias: FUN_588f9900.
extern "C" __declspec(naked) void FUN_588f9900() {
    __asm {
        // 0x588F9900: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x588F9902: push 0x58987f48
        __asm _emit 0x68
        __asm _emit 0x48
        __asm _emit 0x7F
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588F9907: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F990D: push eax
        __asm _emit 0x50
        // 0x588F990E: push ecx
        __asm _emit 0x51
        // 0x588F990F: push ebx
        __asm _emit 0x53
        // 0x588F9910: push ebp
        __asm _emit 0x55
        // 0x588F9911: push esi
        __asm _emit 0x56
        // 0x588F9912: push edi
        __asm _emit 0x57
        // 0x588F9913: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588F9918: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588F991A: push eax
        __asm _emit 0x50
        // 0x588F991B: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588F991F: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9925: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x588F9927: mov dword ptr [esp + 0x14], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588F992B: mov dword ptr [edi], 0x589a213c
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x3C
        __asm _emit 0x21
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588F9931: mov ecx, dword ptr [edi + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9937: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x588F9939: mov dword ptr [esp + 0x20], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x588F993D: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588F993F: je 0x588f994f
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588F9941: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588F9943: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588F9945: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588F9947: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588F9949: mov dword ptr [edi + 0x98], ebx
        __asm _emit 0x89
        __asm _emit 0x9F
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F994F: mov ecx, dword ptr [edi + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9955: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588F9957: je 0x588f9967
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588F9959: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588F995B: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588F995D: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588F995F: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588F9961: mov dword ptr [edi + 0x9c], ebx
        __asm _emit 0x89
        __asm _emit 0x9F
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9967: mov ecx, dword ptr [edi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x70
        // 0x588F996A: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588F996C: je 0x588f9979
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588F996E: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588F9970: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588F9972: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588F9974: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588F9976: mov dword ptr [edi + 0x70], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x70
        // 0x588F9979: mov ecx, dword ptr [edi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x74
        // 0x588F997C: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588F997E: je 0x588f998b
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588F9980: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588F9982: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588F9984: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588F9986: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588F9988: mov dword ptr [edi + 0x74], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x74
        // 0x588F998B: mov ecx, dword ptr [edi + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9991: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588F9993: je 0x588f99a3
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588F9995: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588F9997: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588F9999: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588F999B: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588F999D: mov dword ptr [edi + 0xa0], ebx
        __asm _emit 0x89
        __asm _emit 0x9F
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F99A3: mov ecx, dword ptr [edi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F99A9: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588F99AB: je 0x588f99bb
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588F99AD: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588F99AF: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588F99B1: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588F99B3: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588F99B5: mov dword ptr [edi + 0xa4], ebx
        __asm _emit 0x89
        __asm _emit 0x9F
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F99BB: lea esi, [edi + 0xa8]
        __asm _emit 0x8D
        __asm _emit 0xB7
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F99C1: mov ebp, 3
        __asm _emit 0xBD
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F99C6: mov ecx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x0C
        // 0x588F99C9: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588F99CB: je 0x588f99d8
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588F99CD: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588F99CF: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588F99D1: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588F99D3: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588F99D5: mov dword ptr [esi + 0xc], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x0C
        // 0x588F99D8: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x588F99DA: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588F99DC: je 0x588f99e8
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x588F99DE: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588F99E0: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588F99E2: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588F99E4: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588F99E6: mov dword ptr [esi], ebx
        __asm _emit 0x89
        __asm _emit 0x1E
        // 0x588F99E8: mov ecx, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x18
        // 0x588F99EB: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x588F99ED: je 0x588f99fa
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588F99EF: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588F99F1: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588F99F3: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588F99F5: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588F99F7: mov dword ptr [esi + 0x18], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x18
        // 0x588F99FA: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x588F99FD: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x588F9A00: jne 0x588f99c6
        __asm _emit 0x75
        __asm _emit 0xC4
        // 0x588F9A02: mov eax, dword ptr [edi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x64
        // 0x588F9A05: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588F9A07: je 0x588f9a15
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x588F9A09: push eax
        __asm _emit 0x50
        // 0x588F9A0A: call 0x5897ce26
        __asm _emit 0xE8
        __asm _emit 0x17
        __asm _emit 0x34
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588F9A0F: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588F9A12: mov dword ptr [edi + 0x64], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x64
        // 0x588F9A15: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x588F9A17: mov dword ptr [esp + 0x20], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F9A1F: call 0x58902c10
        __asm _emit 0xE8
        __asm _emit 0xEC
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9A24: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588F9A28: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9A2F: pop ecx
        __asm _emit 0x59
        // 0x588F9A30: pop edi
        __asm _emit 0x5F
        // 0x588F9A31: pop esi
        __asm _emit 0x5E
        // 0x588F9A32: pop ebp
        __asm _emit 0x5D
        // 0x588F9A33: pop ebx
        __asm _emit 0x5B
        // 0x588F9A34: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x588F9A37: ret
        __asm _emit 0xC3
    }
}
