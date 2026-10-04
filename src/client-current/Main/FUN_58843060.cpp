// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58843060 .. +0x127 bytes.
// Source symbol alias: FUN_58843060.
extern "C" __declspec(naked) void FUN_58843060() {
    __asm {
        // 0x58843060: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58843062: push 0x5898498b
        __asm _emit 0x68
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58843067: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884306D: push eax
        __asm _emit 0x50
        // 0x5884306E: sub esp, 0x68
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x68
        // 0x58843071: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58843076: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x58843078: mov dword ptr [esp + 0x64], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x64
        // 0x5884307C: push ebx
        __asm _emit 0x53
        // 0x5884307D: push ebp
        __asm _emit 0x55
        // 0x5884307E: push esi
        __asm _emit 0x56
        // 0x5884307F: push edi
        __asm _emit 0x57
        // 0x58843080: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58843085: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x58843087: push eax
        __asm _emit 0x50
        // 0x58843088: lea eax, [esp + 0x7c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x7C
        // 0x5884308C: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58843092: mov ebp, dword ptr [esp + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0xAC
        __asm _emit 0x24
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58843099: push 0xb4
        __asm _emit 0x68
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884309E: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588430A0: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xA9
        __asm _emit 0x9B
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x588430A5: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588430A8: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588430AC: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x588430AE: mov dword ptr [esp + 0x84], ebx
        __asm _emit 0x89
        __asm _emit 0x9C
        __asm _emit 0x24
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588430B5: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x588430B7: je 0x588430d9
        __asm _emit 0x74
        __asm _emit 0x20
        // 0x588430B9: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x588430BC: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x588430BF: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x588430C1: push ebx
        __asm _emit 0x53
        // 0x588430C2: push ebx
        __asm _emit 0x53
        // 0x588430C3: push ecx
        __asm _emit 0x51
        // 0x588430C4: mov ecx, dword ptr [esi + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588430CA: push edx
        __asm _emit 0x52
        // 0x588430CB: push ecx
        __asm _emit 0x51
        // 0x588430CC: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588430CE: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588430D0: call 0x5875a7e0
        __asm _emit 0xE8
        __asm _emit 0x0B
        __asm _emit 0x77
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x588430D5: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x588430D7: jmp 0x588430db
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588430D9: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x588430DB: push ebp
        __asm _emit 0x55
        // 0x588430DC: lea edx, [esp + 0x1d]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1D
        // 0x588430E0: push edx
        __asm _emit 0x52
        // 0x588430E1: mov dword ptr [esp + 0x8c], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588430EC: mov byte ptr [esp + 0x20], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        // 0x588430F1: call dword ptr [0x5898c198]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588430F7: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588430F9: lea edx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588430FD: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588430FF: mov word ptr [esp + 0x5c], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x5C
        // 0x58843104: push edx
        __asm _emit 0x52
        // 0x58843105: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58843107: mov word ptr [esp + 0x36], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x36
        // 0x5884310C: mov byte ptr [esp + 0x38], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58843110: mov dword ptr [esp + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x58843114: mov dword ptr [esp + 0x58], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x58
        // 0x58843118: mov dword ptr [esp + 0x5c], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x5C
        // 0x5884311C: mov dword ptr [esp + 0x64], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x64
        // 0x58843120: call 0x5875a4b0
        __asm _emit 0xE8
        __asm _emit 0x8B
        __asm _emit 0x73
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x58843125: mov eax, 0x7fff
        __asm _emit 0xB8
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884312A: and word ptr [edi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x47
        __asm _emit 0x24
        // 0x5884312E: cmp dword ptr [esi + 0x130], ebx
        __asm _emit 0x39
        __asm _emit 0x9E
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58843134: jne 0x5884313e
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x58843136: mov dword ptr [esi + 0x130], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884313C: jmp 0x58843150
        __asm _emit 0xEB
        __asm _emit 0x12
        // 0x5884313E: mov ecx, dword ptr [esi + 0x134]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58843144: mov dword ptr [ecx + 0x54], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x54
        // 0x58843147: mov edx, dword ptr [esi + 0x134]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884314D: mov dword ptr [edi + 0x50], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x50
        // 0x58843150: inc word ptr [esi + 0xfa]
        __asm _emit 0x66
        __asm _emit 0xFF
        __asm _emit 0x86
        __asm _emit 0xFA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58843157: mov eax, 0xfffe
        __asm _emit 0xB8
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884315C: mov dword ptr [esi + 0x134], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x34
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58843162: and word ptr [edi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x47
        __asm _emit 0x24
        // 0x58843166: mov ecx, dword ptr [esp + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x7C
        // 0x5884316A: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58843171: pop ecx
        __asm _emit 0x59
        // 0x58843172: pop edi
        __asm _emit 0x5F
        // 0x58843173: pop esi
        __asm _emit 0x5E
        // 0x58843174: pop ebp
        __asm _emit 0x5D
        // 0x58843175: pop ebx
        __asm _emit 0x5B
        // 0x58843176: mov ecx, dword ptr [esp + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x64
        // 0x5884317A: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x5884317C: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x59
        __asm _emit 0x9A
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x58843181: add esp, 0x74
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x74
        // 0x58843184: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
