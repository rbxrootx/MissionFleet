// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 302 bytes in 1 exact ranges.
// Source symbol alias: FUN_58771200.

// Ghidra body range 0x58771200..0x5877132E; 302 mapped bytes.
extern "C" __declspec(naked) void FUN_58771200_segment_00() {
    __asm {
        // 0x58771200: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58771202: push 0x58988648
        __asm _emit 0x68
        __asm _emit 0x48
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58771207: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877120D: push eax
        __asm _emit 0x50
        // 0x5877120E: push ecx
        __asm _emit 0x51
        // 0x5877120F: push esi
        __asm _emit 0x56
        // 0x58771210: push edi
        __asm _emit 0x57
        // 0x58771211: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58771216: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x58771218: push eax
        __asm _emit 0x50
        // 0x58771219: lea eax, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5877121D: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58771223: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58771225: mov dword ptr [esp + 0xc], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58771229: mov dword ptr [esi], 0x58996190
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x90
        __asm _emit 0x61
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5877122F: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x58771232: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58771234: mov dword ptr [esp + 0x18], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58771238: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5877123A: je 0x58771247
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5877123C: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5877123E: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58771240: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58771242: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58771244: mov dword ptr [esi + 0x60], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x60
        // 0x58771247: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x64
        // 0x5877124A: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5877124C: je 0x58771259
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5877124E: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58771250: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58771252: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58771254: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58771256: mov dword ptr [esi + 0x64], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x64
        // 0x58771259: mov ecx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x68
        // 0x5877125C: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5877125E: je 0x5877126b
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58771260: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58771262: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58771264: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58771266: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58771268: mov dword ptr [esi + 0x68], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x68
        // 0x5877126B: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x5877126E: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x58771270: je 0x5877127d
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58771272: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58771274: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58771276: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58771278: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5877127A: mov dword ptr [esi + 0x6c], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x6C
        // 0x5877127D: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x58771280: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x58771282: je 0x5877128f
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58771284: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58771286: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58771288: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5877128A: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5877128C: mov dword ptr [esi + 0x70], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x70
        // 0x5877128F: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x74
        // 0x58771292: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x58771294: je 0x587712a1
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58771296: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58771298: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5877129A: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5877129C: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5877129E: mov dword ptr [esi + 0x74], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x74
        // 0x587712A1: mov ecx, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x78
        // 0x587712A4: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587712A6: je 0x587712b3
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x587712A8: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587712AA: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587712AC: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587712AE: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587712B0: mov dword ptr [esi + 0x78], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x78
        // 0x587712B3: mov ecx, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x7C
        // 0x587712B6: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587712B8: je 0x587712c5
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x587712BA: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587712BC: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587712BE: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587712C0: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587712C2: mov dword ptr [esi + 0x7c], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x7C
        // 0x587712C5: mov ecx, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587712CB: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587712CD: je 0x587712dd
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587712CF: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587712D1: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587712D3: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587712D5: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587712D7: mov dword ptr [esi + 0x80], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587712DD: mov ecx, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587712E3: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587712E5: je 0x587712f5
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587712E7: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587712E9: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587712EB: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587712ED: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587712EF: mov dword ptr [esi + 0x84], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587712F5: mov ecx, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587712FB: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x587712FD: je 0x5877130d
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587712FF: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58771301: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58771303: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58771305: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58771307: mov dword ptr [esi + 0x88], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877130D: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5877130F: mov dword ptr [esp + 0x18], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58771317: call 0x58902c10
        __asm _emit 0xE8
        __asm _emit 0xF4
        __asm _emit 0x18
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x5877131C: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58771320: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58771327: pop ecx
        __asm _emit 0x59
        // 0x58771328: pop edi
        __asm _emit 0x5F
        // 0x58771329: pop esi
        __asm _emit 0x5E
        // 0x5877132A: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5877132D: ret
        __asm _emit 0xC3
    }
}
