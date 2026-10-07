// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 346 bytes in 1 exact ranges.
// Source symbol alias: FUN_587c71a0.

// Ghidra body range 0x587C71A0..0x587C72FA; 346 mapped bytes.
extern "C" __declspec(naked) void FUN_587c71a0_segment_00() {
    __asm {
        // 0x587C71A0: sub esp, 0x220
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C71A6: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587C71AB: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x587C71AD: mov dword ptr [esp + 0x21c], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C71B4: mov eax, dword ptr [0x58a284c4]
        __asm _emit 0xA1
        __asm _emit 0xC4
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C71B9: push ebx
        __asm _emit 0x53
        // 0x587C71BA: push ebp
        __asm _emit 0x55
        // 0x587C71BB: push esi
        __asm _emit 0x56
        // 0x587C71BC: push edi
        __asm _emit 0x57
        // 0x587C71BD: push eax
        __asm _emit 0x50
        // 0x587C71BE: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587C71C0: call dword ptr [0x5898c404]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0xC4
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587C71C6: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x587C71C8: push edi
        __asm _emit 0x57
        // 0x587C71C9: call dword ptr [0x5898c064]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587C71CF: mov edx, dword ptr [0x58a284c4]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C71D5: lea ecx, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587C71D9: mov ebp, eax
        __asm _emit 0x8B
        __asm _emit 0xE8
        // 0x587C71DB: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587C71DD: push ecx
        __asm _emit 0x51
        // 0x587C71DE: push edx
        __asm _emit 0x52
        // 0x587C71DF: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587C71E3: mov dword ptr [esp + 0x1c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587C71E7: mov dword ptr [esp + 0x20], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587C71EB: mov dword ptr [esp + 0x24], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587C71EF: call dword ptr [0x5898c400]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0xC4
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587C71F5: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587C71F9: sub eax, dword ptr [esp + 0x14]
        __asm _emit 0x2B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587C71FD: mov ebx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587C7201: sub ebx, dword ptr [esp + 0x10]
        __asm _emit 0x2B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587C7205: push eax
        __asm _emit 0x50
        // 0x587C7206: push ebx
        __asm _emit 0x53
        // 0x587C7207: push edi
        __asm _emit 0x57
        // 0x587C7208: mov dword ptr [esp + 0x34], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x587C720C: call dword ptr [0x5898c068]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587C7212: push eax
        __asm _emit 0x50
        // 0x587C7213: push ebp
        __asm _emit 0x55
        // 0x587C7214: mov dword ptr [esp + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587C7218: call dword ptr [0x5898c074]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x74
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587C721E: push 0xcc0020
        __asm _emit 0x68
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0xCC
        __asm _emit 0x00
        // 0x587C7223: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587C7225: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587C7227: push edi
        __asm _emit 0x57
        // 0x587C7228: mov dword ptr [esp + 0x34], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        // 0x587C722C: mov eax, dword ptr [esp + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x587C7230: push eax
        __asm _emit 0x50
        // 0x587C7231: push ebx
        __asm _emit 0x53
        // 0x587C7232: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587C7234: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587C7236: push ebp
        __asm _emit 0x55
        // 0x587C7237: call dword ptr [0x5898c06c]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x6C
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587C723D: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587C7241: push ecx
        __asm _emit 0x51
        // 0x587C7242: push ebp
        __asm _emit 0x55
        // 0x587C7243: call dword ptr [0x5898c074]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x74
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587C7249: mov ebx, dword ptr [0x5898c070]
        __asm _emit 0x8B
        __asm _emit 0x1D
        __asm _emit 0x70
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587C724F: push ebp
        __asm _emit 0x55
        // 0x587C7250: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x587C7252: push edi
        __asm _emit 0x57
        // 0x587C7253: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x587C7255: mov edi, dword ptr [esi + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C725B: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587C725D: mov byte ptr [esi + 4], 0
        __asm _emit 0xC6
        __asm _emit 0x46
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587C7261: call 0x58902c20
        __asm _emit 0xE8
        __asm _emit 0xBA
        __asm _emit 0xB9
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587C7266: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587C7268: call 0x58902c70
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0xBA
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587C726D: mov eax, dword ptr [esi + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C7273: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587C7277: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C727C: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x587C7280: mov eax, dword ptr [esi + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C7286: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587C7288: mov dword ptr [eax + 0x100], 0
        __asm _emit 0xC7
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C7292: push ecx
        __asm _emit 0x51
        // 0x587C7293: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x587C7296: call 0x58972750
        __asm _emit 0xE8
        __asm _emit 0xB5
        __asm _emit 0xB4
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x587C729B: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x587C729D: je 0x587c72df
        __asm _emit 0x74
        __asm _emit 0x40
        // 0x587C729F: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x587C72A2: call 0x58972610
        __asm _emit 0xE8
        __asm _emit 0x69
        __asm _emit 0xB3
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x587C72A7: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x587C72A9: je 0x587c72df
        __asm _emit 0x74
        __asm _emit 0x34
        // 0x587C72AB: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587C72AD: push 0x5899af30
        __asm _emit 0x68
        __asm _emit 0x30
        __asm _emit 0xAF
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587C72B2: call dword ptr [0x5898c148]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587C72B8: lea edx, [esi + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x56
        __asm _emit 0x0C
        // 0x587C72BB: push edx
        __asm _emit 0x52
        // 0x587C72BC: lea eax, [esp + 0x30]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587C72C0: push 0x5899af20
        __asm _emit 0x68
        __asm _emit 0x20
        __asm _emit 0xAF
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587C72C5: push eax
        __asm _emit 0x50
        // 0x587C72C6: call 0x587c7090
        __asm _emit 0xE8
        __asm _emit 0xC5
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587C72CB: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587C72CE: push 3
        __asm _emit 0x6A
        __asm _emit 0x03
        // 0x587C72D0: lea ecx, [esp + 0x30]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x587C72D4: push ecx
        __asm _emit 0x51
        // 0x587C72D5: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x587C72D8: call 0x58971ec0
        __asm _emit 0xE8
        __asm _emit 0xE3
        __asm _emit 0xAB
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x587C72DD: jmp 0x587c72e1
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587C72DF: xor al, al
        __asm _emit 0x32
        __asm _emit 0xC0
        // 0x587C72E1: mov ecx, dword ptr [esp + 0x22c]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x2C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C72E8: pop edi
        __asm _emit 0x5F
        // 0x587C72E9: pop esi
        __asm _emit 0x5E
        // 0x587C72EA: pop ebp
        __asm _emit 0x5D
        // 0x587C72EB: pop ebx
        __asm _emit 0x5B
        // 0x587C72EC: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x587C72EE: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0xE7
        __asm _emit 0x58
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587C72F3: add esp, 0x220
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C72F9: ret
        __asm _emit 0xC3
    }
}
