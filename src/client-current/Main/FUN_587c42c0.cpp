// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587C42C0 .. +0xE4 bytes.
// Source symbol alias: FUN_587c42c0.
extern "C" __declspec(naked) void FUN_587c42c0() {
    __asm {
        // 0x587C42C0: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x587C42C2: push 0x58981263
        __asm _emit 0x68
        __asm _emit 0x63
        __asm _emit 0x12
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587C42C7: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C42CD: push eax
        __asm _emit 0x50
        // 0x587C42CE: push ecx
        __asm _emit 0x51
        // 0x587C42CF: push ebp
        __asm _emit 0x55
        // 0x587C42D0: push esi
        __asm _emit 0x56
        // 0x587C42D1: push edi
        __asm _emit 0x57
        // 0x587C42D2: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587C42D7: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x587C42D9: push eax
        __asm _emit 0x50
        // 0x587C42DA: lea eax, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587C42DE: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C42E4: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587C42E6: mov dword ptr [esp + 0x10], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587C42EA: mov eax, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x587C42EE: mov ecx, dword ptr [esp + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x587C42F2: mov edx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587C42F6: push eax
        __asm _emit 0x50
        // 0x587C42F7: mov eax, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587C42FB: push ecx
        __asm _emit 0x51
        // 0x587C42FC: mov ecx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587C4300: push edx
        __asm _emit 0x52
        // 0x587C4301: mov edx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587C4305: push eax
        __asm _emit 0x50
        // 0x587C4306: push ecx
        __asm _emit 0x51
        // 0x587C4307: push edx
        __asm _emit 0x52
        // 0x587C4308: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587C430A: call 0x5890c1d0
        __asm _emit 0xE8
        __asm _emit 0xC1
        __asm _emit 0x7E
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x587C430F: mov eax, 0xffffff38
        __asm _emit 0xB8
        __asm _emit 0x38
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587C4314: mov dword ptr [esi + 0x58], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x58
        // 0x587C4317: mov dword ptr [esi + 0x5c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x5C
        // 0x587C431A: mov eax, 0x64
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C431F: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x587C4321: push 0x74
        __asm _emit 0x6A
        __asm _emit 0x74
        // 0x587C4323: mov dword ptr [esi + 0x60], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x60
        // 0x587C4326: mov dword ptr [esi + 0x64], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x64
        // 0x587C4329: lea eax, [esi + 0x1d38]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0x38
        __asm _emit 0x1D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C432F: push ebp
        __asm _emit 0x55
        // 0x587C4330: push eax
        __asm _emit 0x50
        // 0x587C4331: mov dword ptr [esp + 0x28], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587C4335: mov dword ptr [esi], 0x5899ad48
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x48
        __asm _emit 0xAD
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587C433B: mov dword ptr [esi + 0x1d30], 1
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x30
        __asm _emit 0x1D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C4345: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0xFE
        __asm _emit 0x88
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587C434A: push 0x10
        __asm _emit 0x6A
        __asm _emit 0x10
        // 0x587C434C: mov dword ptr [esi + 0x1db4], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0xB4
        __asm _emit 0x1D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C4352: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xF7
        __asm _emit 0x88
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587C4357: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x587C4359: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587C435C: mov dword ptr [esp + 0x38], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x587C4360: mov byte ptr [esp + 0x1c], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x01
        // 0x587C4365: cmp edi, ebp
        __asm _emit 0x3B
        __asm _emit 0xFD
        // 0x587C4367: je 0x587c4387
        __asm _emit 0x74
        __asm _emit 0x1E
        // 0x587C4369: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587C436B: mov dword ptr [edi], 0x5899ad74
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x74
        __asm _emit 0xAD
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587C4371: mov dword ptr [edi + 0xc], ebp
        __asm _emit 0x89
        __asm _emit 0x6F
        __asm _emit 0x0C
        // 0x587C4374: mov dword ptr [edi + 8], ebp
        __asm _emit 0x89
        __asm _emit 0x6F
        __asm _emit 0x08
        // 0x587C4377: mov dword ptr [edi + 4], ebp
        __asm _emit 0x89
        __asm _emit 0x6F
        __asm _emit 0x04
        // 0x587C437A: call 0x587ccaa0
        __asm _emit 0xE8
        __asm _emit 0x21
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C437F: mov dword ptr [esi + 0x1db8], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xB8
        __asm _emit 0x1D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C4385: jmp 0x587c438d
        __asm _emit 0xEB
        __asm _emit 0x06
        // 0x587C4387: mov dword ptr [esi + 0x1db8], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0xB8
        __asm _emit 0x1D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C438D: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x587C438F: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587C4393: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C439A: pop ecx
        __asm _emit 0x59
        // 0x587C439B: pop edi
        __asm _emit 0x5F
        // 0x587C439C: pop esi
        __asm _emit 0x5E
        // 0x587C439D: pop ebp
        __asm _emit 0x5D
        // 0x587C439E: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587C43A1: ret 0x18
        __asm _emit 0xC2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
