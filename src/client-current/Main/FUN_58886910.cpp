// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 140 bytes in 1 exact ranges.
// Source symbol alias: FUN_58886910.

// Ghidra body range 0x58886910..0x5888699C; 140 mapped bytes.
extern "C" __declspec(naked) void FUN_58886910_segment_00() {
    __asm {
        // 0x58886910: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58886912: push 0x58986b40
        __asm _emit 0x68
        __asm _emit 0x40
        __asm _emit 0x6B
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58886917: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888691D: push eax
        __asm _emit 0x50
        // 0x5888691E: push ebx
        __asm _emit 0x53
        // 0x5888691F: push esi
        __asm _emit 0x56
        // 0x58886920: push edi
        __asm _emit 0x57
        // 0x58886921: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58886926: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x58886928: push eax
        __asm _emit 0x50
        // 0x58886929: lea eax, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5888692D: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58886933: mov edx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58886937: cmp ecx, edx
        __asm _emit 0x3B
        __asm _emit 0xCA
        // 0x58886939: je 0x58886987
        __asm _emit 0x74
        __asm _emit 0x4C
        // 0x5888693B: mov esi, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x32
        // 0x5888693D: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5888693F: mov dword ptr [ecx], esi
        __asm _emit 0x89
        __asm _emit 0x31
        // 0x58886941: mov dword ptr [edx], eax
        __asm _emit 0x89
        __asm _emit 0x02
        // 0x58886943: mov esi, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x31
        // 0x58886945: cmp esi, eax
        __asm _emit 0x3B
        __asm _emit 0xF0
        // 0x58886947: je 0x58886951
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x58886949: mov ebx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x18
        // 0x5888694B: mov edi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x3E
        // 0x5888694D: mov dword ptr [esi], ebx
        __asm _emit 0x89
        __asm _emit 0x1E
        // 0x5888694F: mov dword ptr [eax], edi
        __asm _emit 0x89
        __asm _emit 0x38
        // 0x58886951: lea eax, [edx + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x42
        __asm _emit 0x0C
        // 0x58886954: lea esi, [ecx + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x71
        __asm _emit 0x0C
        // 0x58886957: cmp esi, eax
        __asm _emit 0x3B
        __asm _emit 0xF0
        // 0x58886959: je 0x58886963
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x5888695B: mov ebx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x18
        // 0x5888695D: mov edi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x3E
        // 0x5888695F: mov dword ptr [esi], ebx
        __asm _emit 0x89
        __asm _emit 0x1E
        // 0x58886961: mov dword ptr [eax], edi
        __asm _emit 0x89
        __asm _emit 0x38
        // 0x58886963: lea eax, [edx + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x42
        __asm _emit 0x10
        // 0x58886966: lea esi, [ecx + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x71
        __asm _emit 0x10
        // 0x58886969: cmp esi, eax
        __asm _emit 0x3B
        __asm _emit 0xF0
        // 0x5888696B: je 0x58886975
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x5888696D: mov ebx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x18
        // 0x5888696F: mov edi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x3E
        // 0x58886971: mov dword ptr [esi], ebx
        __asm _emit 0x89
        __asm _emit 0x1E
        // 0x58886973: mov dword ptr [eax], edi
        __asm _emit 0x89
        __asm _emit 0x38
        // 0x58886975: lea eax, [edx + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x42
        __asm _emit 0x14
        // 0x58886978: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x5888697B: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x5888697D: je 0x58886987
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x5888697F: mov esi, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x30
        // 0x58886981: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58886983: mov dword ptr [ecx], esi
        __asm _emit 0x89
        __asm _emit 0x31
        // 0x58886985: mov dword ptr [eax], edx
        __asm _emit 0x89
        __asm _emit 0x10
        // 0x58886987: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5888698B: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58886992: pop ecx
        __asm _emit 0x59
        // 0x58886993: pop edi
        __asm _emit 0x5F
        // 0x58886994: pop esi
        __asm _emit 0x5E
        // 0x58886995: pop ebx
        __asm _emit 0x5B
        // 0x58886996: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58886999: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
