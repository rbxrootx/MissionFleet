// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 194 bytes in 1 exact ranges.
// Source symbol alias: FUN_587454e0.

// Ghidra body range 0x587454E0..0x587455A2; 194 mapped bytes.
extern "C" __declspec(naked) void FUN_587454e0_segment_00() {
    __asm {
        // 0x587454E0: sub esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x10
        // 0x587454E3: push esi
        __asm _emit 0x56
        // 0x587454E4: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587454E6: cmp dword ptr [esi + 0x9c], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587454ED: je 0x5874559b
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587454F3: cmp dword ptr [esi + 0xa0], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587454FA: je 0x5874559b
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58745500: mov ecx, dword ptr [esi + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58745506: mov eax, dword ptr [esi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874550C: imul ecx, ecx, 0x15e
        __asm _emit 0x69
        __asm _emit 0xC9
        __asm _emit 0x5E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58745512: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x58745514: imul eax, eax, 0x15e
        __asm _emit 0x69
        __asm _emit 0xC0
        __asm _emit 0x5E
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874551A: add ecx, dword ptr [edx + 8]
        __asm _emit 0x03
        __asm _emit 0x4A
        __asm _emit 0x08
        // 0x5874551D: add eax, dword ptr [edx + 4]
        __asm _emit 0x03
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x58745520: push ecx
        __asm _emit 0x51
        // 0x58745521: push eax
        __asm _emit 0x50
        // 0x58745522: call 0x587476f0
        __asm _emit 0xE8
        __asm _emit 0xC9
        __asm _emit 0x21
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58745527: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x5874552A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5874552C: je 0x5874559b
        __asm _emit 0x74
        __asm _emit 0x6D
        // 0x5874552E: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58745530: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x58745533: mov eax, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x58745536: push ebx
        __asm _emit 0x53
        // 0x58745537: push ebp
        __asm _emit 0x55
        // 0x58745538: push edi
        __asm _emit 0x57
        // 0x58745539: push ecx
        __asm _emit 0x51
        // 0x5874553A: push eax
        __asm _emit 0x50
        // 0x5874553B: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5874553F: push eax
        __asm _emit 0x50
        // 0x58745540: call 0x58747750
        __asm _emit 0xE8
        __asm _emit 0x0B
        __asm _emit 0x22
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58745545: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x58745547: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5874554A: mov esi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x36
        // 0x5874554C: mov ebp, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x68
        __asm _emit 0x04
        // 0x5874554F: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x58745552: mov ebx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x5E
        __asm _emit 0x04
        // 0x58745555: mov edi, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x08
        // 0x58745558: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5874555B: cmp ecx, edx
        __asm _emit 0x3B
        __asm _emit 0xCA
        // 0x5874555D: jge 0x58745567
        __asm _emit 0x7D
        __asm _emit 0x08
        // 0x5874555F: add ebx, 0xc8
        __asm _emit 0x81
        __asm _emit 0xC3
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58745565: jmp 0x5874556f
        __asm _emit 0xEB
        __asm _emit 0x08
        // 0x58745567: jle 0x5874556f
        __asm _emit 0x7E
        __asm _emit 0x06
        // 0x58745569: add ebx, 0xffffff38
        __asm _emit 0x81
        __asm _emit 0xC3
        __asm _emit 0x38
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5874556F: cmp ebp, eax
        __asm _emit 0x3B
        __asm _emit 0xE8
        // 0x58745571: jge 0x5874557b
        __asm _emit 0x7D
        __asm _emit 0x08
        // 0x58745573: add edi, 0xc8
        __asm _emit 0x81
        __asm _emit 0xC7
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58745579: jmp 0x58745583
        __asm _emit 0xEB
        __asm _emit 0x08
        // 0x5874557B: jle 0x58745583
        __asm _emit 0x7E
        __asm _emit 0x06
        // 0x5874557D: add edi, 0xffffff38
        __asm _emit 0x81
        __asm _emit 0xC7
        __asm _emit 0x38
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58745583: push edi
        __asm _emit 0x57
        // 0x58745584: push ebx
        __asm _emit 0x53
        // 0x58745585: push esi
        __asm _emit 0x56
        // 0x58745586: call 0x58747410
        __asm _emit 0xE8
        __asm _emit 0x85
        __asm _emit 0x1E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874558B: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5874558E: pop edi
        __asm _emit 0x5F
        // 0x5874558F: pop ebp
        __asm _emit 0x5D
        // 0x58745590: pop ebx
        __asm _emit 0x5B
        // 0x58745591: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58745596: pop esi
        __asm _emit 0x5E
        // 0x58745597: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5874559A: ret
        __asm _emit 0xC3
        // 0x5874559B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5874559D: pop esi
        __asm _emit 0x5E
        // 0x5874559E: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587455A1: ret
        __asm _emit 0xC3
    }
}
