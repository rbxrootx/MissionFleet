// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5896C010 .. +0x239 bytes.
extern "C" __declspec(naked) void FUN_5896c010() {
    __asm {
        // 0x5896C010: sub esp, 0x2c
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x2C
        // 0x5896C013: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5896C018: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5896C01A: mov dword ptr [esp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5896C01E: mov eax, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5896C022: mov edx, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5896C026: push ebx
        __asm _emit 0x53
        // 0x5896C027: push ebp
        __asm _emit 0x55
        // 0x5896C028: mov ebp, dword ptr [esp + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5896C02C: push esi
        __asm _emit 0x56
        // 0x5896C02D: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5896C02F: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x5896C031: imul ecx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC8
        // 0x5896C034: mov dword ptr [esi + 0x44], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x44
        // 0x5896C037: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5896C039: mov dword ptr [esi + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x14
        // 0x5896C03C: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5896C040: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5896C044: mov dword ptr [esp + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5896C048: push edi
        __asm _emit 0x57
        // 0x5896C049: mov dword ptr [esi + 0x40], ebp
        __asm _emit 0x89
        __asm _emit 0x6E
        __asm _emit 0x40
        // 0x5896C04C: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5896C050: mov dword ptr [esp + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5896C054: mov dword ptr [esp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5896C058: mov dword ptr [esp + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x5896C05C: mov dword ptr [esp + 0x30], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5896C060: mov dword ptr [esp + 0x34], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5896C064: mov eax, dword ptr [0x58a28534]
        __asm _emit 0xA1
        __asm _emit 0x34
        __asm _emit 0x85
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5896C069: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5896C06B: mov dword ptr [esp + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5896C06F: mov ecx, dword ptr [esp + 0x4c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x5896C073: mov dword ptr [esp + 0x14], 0x24
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5896C07B: mov dword ptr [esp + 0x24], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5896C07F: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x5896C081: je 0x5896c140
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5896C087: cmp word ptr [edx + 2], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7A
        __asm _emit 0x02
        __asm _emit 0x01
        // 0x5896C08C: lea ebx, [esi + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x5E
        __asm _emit 0x18
        // 0x5896C08F: push edi
        __asm _emit 0x57
        // 0x5896C090: push ebx
        __asm _emit 0x53
        // 0x5896C091: jne 0x5896c0df
        __asm _emit 0x75
        __asm _emit 0x4C
        // 0x5896C093: or ecx, 0x18110
        __asm _emit 0x81
        __asm _emit 0xC9
        __asm _emit 0x10
        __asm _emit 0x81
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5896C099: mov dword ptr [esp + 0x20], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5896C09D: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5896C09F: mov edx, dword ptr [edx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x0C
        // 0x5896C0A2: lea ecx, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5896C0A6: push ecx
        __asm _emit 0x51
        // 0x5896C0A7: push eax
        __asm _emit 0x50
        // 0x5896C0A8: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5896C0AA: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5896C0AC: jl 0x5896c0c8
        __asm _emit 0x7C
        __asm _emit 0x1A
        // 0x5896C0AE: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x5896C0B0: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x5896C0B2: lea edx, [esi + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x56
        __asm _emit 0x1C
        // 0x5896C0B5: push edx
        __asm _emit 0x52
        // 0x5896C0B6: push 0x589a3cd8
        __asm _emit 0x68
        __asm _emit 0xD8
        __asm _emit 0x3C
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5896C0BB: push eax
        __asm _emit 0x50
        // 0x5896C0BC: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5896C0BE: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5896C0C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5896C0C2: jge 0x5896c180
        __asm _emit 0x0F
        __asm _emit 0x8D
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5896C0C8: pop edi
        __asm _emit 0x5F
        // 0x5896C0C9: pop esi
        __asm _emit 0x5E
        // 0x5896C0CA: pop ebp
        __asm _emit 0x5D
        // 0x5896C0CB: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5896C0CD: pop ebx
        __asm _emit 0x5B
        // 0x5896C0CE: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5896C0D2: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x5896C0D4: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x01
        __asm _emit 0x0B
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5896C0D9: add esp, 0x2c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x2C
        // 0x5896C0DC: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x5896C0DF: mov dword ptr [esi + 0x1c], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x1C
        // 0x5896C0E2: mov edx, dword ptr [0x589a2ee4]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xE4
        __asm _emit 0x2E
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5896C0E8: mov eax, dword ptr [0x589a2ee8]
        __asm _emit 0xA1
        __asm _emit 0xE8
        __asm _emit 0x2E
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5896C0ED: mov dword ptr [esp + 0x30], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x5896C0F1: mov edx, dword ptr [0x589a2ef0]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF0
        __asm _emit 0x2E
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5896C0F7: or ecx, 0x18100
        __asm _emit 0x81
        __asm _emit 0xC9
        __asm _emit 0x00
        __asm _emit 0x81
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5896C0FD: mov dword ptr [esp + 0x20], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5896C101: mov ecx, dword ptr [0x589a2eec]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xEC
        __asm _emit 0x2E
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5896C107: mov dword ptr [esp + 0x34], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x5896C10B: mov eax, dword ptr [0x58a28534]
        __asm _emit 0xA1
        __asm _emit 0x34
        __asm _emit 0x85
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5896C110: mov dword ptr [esp + 0x3c], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x3C
        // 0x5896C114: lea edx, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5896C118: mov dword ptr [esp + 0x38], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5896C11C: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x5896C11E: push edx
        __asm _emit 0x52
        // 0x5896C11F: push eax
        __asm _emit 0x50
        // 0x5896C120: mov eax, dword ptr [ecx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x5896C123: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5896C125: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5896C127: jge 0x5896c180
        __asm _emit 0x7D
        __asm _emit 0x57
        // 0x5896C129: pop edi
        __asm _emit 0x5F
        // 0x5896C12A: pop esi
        __asm _emit 0x5E
        // 0x5896C12B: pop ebp
        __asm _emit 0x5D
        // 0x5896C12C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5896C12E: pop ebx
        __asm _emit 0x5B
        // 0x5896C12F: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5896C133: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x5896C135: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0xA0
        __asm _emit 0x0A
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5896C13A: add esp, 0x2c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x2C
        // 0x5896C13D: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x5896C140: mov dword ptr [esi + 0x1c], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x1C
        // 0x5896C143: mov eax, dword ptr [0x58a28538]
        __asm _emit 0xA1
        __asm _emit 0x38
        __asm _emit 0x85
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5896C148: or ecx, 0x18100
        __asm _emit 0x81
        __asm _emit 0xC9
        __asm _emit 0x00
        __asm _emit 0x81
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5896C14E: mov dword ptr [esp + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5896C152: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x5896C154: je 0x5896c0c8
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x6E
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5896C15A: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5896C15C: mov edx, dword ptr [edx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x0C
        // 0x5896C15F: push edi
        __asm _emit 0x57
        // 0x5896C160: lea ebx, [esi + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x5E
        __asm _emit 0x18
        // 0x5896C163: push ebx
        __asm _emit 0x53
        // 0x5896C164: lea ecx, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5896C168: push ecx
        __asm _emit 0x51
        // 0x5896C169: push eax
        __asm _emit 0x50
        // 0x5896C16A: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5896C16C: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5896C16E: jl 0x5896c0c8
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x54
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5896C174: cmp dword ptr [0x58a28538], edi
        __asm _emit 0x39
        __asm _emit 0x3D
        __asm _emit 0x38
        __asm _emit 0x85
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5896C17A: je 0x5896c0c8
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x48
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5896C180: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x5896C182: mov dword ptr [esp + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5896C186: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x5896C188: je 0x5896c1a3
        __asm _emit 0x74
        __asm _emit 0x19
        // 0x5896C18A: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x5896C18C: lea edx, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5896C190: push edx
        __asm _emit 0x52
        // 0x5896C191: push 0x589a3cc8
        __asm _emit 0x68
        __asm _emit 0xC8
        __asm _emit 0x3C
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5896C196: push eax
        __asm _emit 0x50
        // 0x5896C197: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5896C199: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5896C19B: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5896C19D: jl 0x5896c0c8
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x25
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5896C1A3: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x5896C1A5: mov eax, ebp
        __asm _emit 0x8B
        __asm _emit 0xC5
        // 0x5896C1A7: mov edx, 8
        __asm _emit 0xBA
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5896C1AC: mul edx
        __asm _emit 0xF7
        __asm _emit 0xE2
        // 0x5896C1AE: seto cl
        __asm _emit 0x0F
        __asm _emit 0x90
        __asm _emit 0xC1
        // 0x5896C1B1: neg ecx
        __asm _emit 0xF7
        __asm _emit 0xD9
        // 0x5896C1B3: or ecx, eax
        __asm _emit 0x0B
        __asm _emit 0xC8
        // 0x5896C1B5: push ecx
        __asm _emit 0x51
        // 0x5896C1B6: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x93
        __asm _emit 0x0A
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5896C1BB: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5896C1BD: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5896C1C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5896C1C2: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5896C1C4: je 0x5896c28f
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xC5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5896C1CA: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x5896C1CC: jbe 0x5896c1e6
        __asm _emit 0x76
        __asm _emit 0x18
        // 0x5896C1CE: mov ecx, dword ptr [esp + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x5896C1D2: dec ecx
        __asm _emit 0x49
        // 0x5896C1D3: mov dword ptr [edi + eax*8], ecx
        __asm _emit 0x89
        __asm _emit 0x0C
        __asm _emit 0xC7
        // 0x5896C1D6: mov edx, dword ptr [esi + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x2C
        // 0x5896C1D9: add ecx, dword ptr [esp + 0x48]
        __asm _emit 0x03
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x5896C1DD: mov dword ptr [edi + eax*8 + 4], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x5896C1E1: inc eax
        __asm _emit 0x40
        // 0x5896C1E2: cmp eax, ebp
        __asm _emit 0x3B
        __asm _emit 0xC5
        // 0x5896C1E4: jb 0x5896c1d3
        __asm _emit 0x72
        __asm _emit 0xED
        // 0x5896C1E6: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5896C1EA: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5896C1EC: je 0x5896c248
        __asm _emit 0x74
        __asm _emit 0x5A
        // 0x5896C1EE: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x5896C1F0: mov edx, dword ptr [ecx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x5896C1F3: push edi
        __asm _emit 0x57
        // 0x5896C1F4: push ebp
        __asm _emit 0x55
        // 0x5896C1F5: push eax
        __asm _emit 0x50
        // 0x5896C1F6: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5896C1F8: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5896C1FA: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5896C1FE: jge 0x5896c234
        __asm _emit 0x7D
        __asm _emit 0x34
        // 0x5896C200: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5896C202: je 0x5896c214
        __asm _emit 0x74
        __asm _emit 0x10
        // 0x5896C204: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x5896C206: mov edx, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x5896C209: push eax
        __asm _emit 0x50
        // 0x5896C20A: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5896C20C: mov dword ptr [esp + 0x10], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5896C214: push edi
        __asm _emit 0x57
        // 0x5896C215: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x28
        __asm _emit 0x0A
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5896C21A: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5896C21D: pop edi
        __asm _emit 0x5F
        // 0x5896C21E: pop esi
        __asm _emit 0x5E
        // 0x5896C21F: pop ebp
        __asm _emit 0x5D
        // 0x5896C220: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5896C222: pop ebx
        __asm _emit 0x5B
        // 0x5896C223: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5896C227: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x5896C229: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0xAC
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5896C22E: add esp, 0x2c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x2C
        // 0x5896C231: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x5896C234: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5896C236: je 0x5896c248
        __asm _emit 0x74
        __asm _emit 0x10
        // 0x5896C238: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x5896C23A: mov edx, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x5896C23D: push eax
        __asm _emit 0x50
        // 0x5896C23E: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5896C240: mov dword ptr [esp + 0x10], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5896C248: push edi
        __asm _emit 0x57
    }
}
