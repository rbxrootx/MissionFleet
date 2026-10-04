// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587AFC30 .. +0xA1 bytes.
// Source symbol alias: FUN_587afc30.
extern "C" __declspec(naked) void FUN_587afc30() {
    __asm {
        // 0x587AFC30: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x587AFC32: push 0x58980db6
        __asm _emit 0x68
        __asm _emit 0xB6
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587AFC37: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AFC3D: push eax
        __asm _emit 0x50
        // 0x587AFC3E: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x587AFC41: push ebx
        __asm _emit 0x53
        // 0x587AFC42: push esi
        __asm _emit 0x56
        // 0x587AFC43: push edi
        __asm _emit 0x57
        // 0x587AFC44: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587AFC49: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x587AFC4B: push eax
        __asm _emit 0x50
        // 0x587AFC4C: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587AFC50: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AFC56: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x587AFC58: mov dword ptr [esp + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587AFC5C: lea esi, [edi + 8]
        __asm _emit 0x8D
        __asm _emit 0x77
        __asm _emit 0x08
        // 0x587AFC5F: mov dword ptr [edi], 0x58999e3c
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x3C
        __asm _emit 0x9E
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587AFC65: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x587AFC67: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587AFC69: mov dword ptr [esi], 0x58999e20
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x20
        __asm _emit 0x9E
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587AFC6F: mov dword ptr [esi + 0xc], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x0C
        // 0x587AFC72: mov dword ptr [esi + 8], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x08
        // 0x587AFC75: mov dword ptr [esi + 4], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x04
        // 0x587AFC78: call 0x587ccaa0
        __asm _emit 0xE8
        __asm _emit 0x23
        __asm _emit 0xCE
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587AFC7D: push 0x198
        __asm _emit 0x68
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AFC82: mov dword ptr [esp + 0x24], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587AFC86: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xC3
        __asm _emit 0xCF
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587AFC8B: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587AFC8E: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587AFC92: mov byte ptr [esp + 0x20], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x01
        // 0x587AFC97: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x587AFC99: je 0x587afcac
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x587AFC9B: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587AFC9D: push ebx
        __asm _emit 0x53
        // 0x587AFC9E: push 0x58999e24
        __asm _emit 0x68
        __asm _emit 0x24
        __asm _emit 0x9E
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587AFCA3: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587AFCA5: call 0x588f3d70
        __asm _emit 0xE8
        __asm _emit 0xC6
        __asm _emit 0x40
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x587AFCAA: jmp 0x587afcae
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587AFCAC: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587AFCAE: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587AFCB0: mov byte ptr [esp + 0x20], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587AFCB4: mov dword ptr [edi + 4], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x04
        // 0x587AFCB7: call 0x587ccaa0
        __asm _emit 0xE8
        __asm _emit 0xE4
        __asm _emit 0xCD
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587AFCBC: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x587AFCBE: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587AFCC2: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587AFCC9: pop ecx
        __asm _emit 0x59
        // 0x587AFCCA: pop edi
        __asm _emit 0x5F
        // 0x587AFCCB: pop esi
        __asm _emit 0x5E
        // 0x587AFCCC: pop ebx
        __asm _emit 0x5B
        // 0x587AFCCD: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x587AFCD0: ret
        __asm _emit 0xC3
    }
}
