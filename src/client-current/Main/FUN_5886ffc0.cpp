// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 368 bytes in 1 exact ranges.
// Source symbol alias: FUN_5886ffc0.

// Ghidra body range 0x5886FFC0..0x58870130; 368 mapped bytes.
extern "C" __declspec(naked) void FUN_5886ffc0_segment_00() {
    __asm {
        // 0x5886FFC0: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5886FFC2: push 0x58988648
        __asm _emit 0x68
        __asm _emit 0x48
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5886FFC7: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886FFCD: push eax
        __asm _emit 0x50
        // 0x5886FFCE: push ecx
        __asm _emit 0x51
        // 0x5886FFCF: push esi
        __asm _emit 0x56
        // 0x5886FFD0: push edi
        __asm _emit 0x57
        // 0x5886FFD1: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5886FFD6: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5886FFD8: push eax
        __asm _emit 0x50
        // 0x5886FFD9: lea eax, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5886FFDD: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886FFE3: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5886FFE5: mov dword ptr [esp + 0xc], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5886FFE9: mov dword ptr [esi], 0x5899edf8
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0xF8
        __asm _emit 0xED
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5886FFEF: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x5886FFF2: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5886FFF4: mov dword ptr [esp + 0x18], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5886FFF8: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5886FFFA: je 0x58870007
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5886FFFC: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5886FFFE: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58870000: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58870002: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58870004: mov dword ptr [esi + 0x60], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x60
        // 0x58870007: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x64
        // 0x5887000A: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5887000C: je 0x58870019
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5887000E: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58870010: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58870012: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58870014: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58870016: mov dword ptr [esi + 0x64], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x64
        // 0x58870019: mov ecx, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887001F: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x58870021: je 0x58870031
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58870023: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58870025: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58870027: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58870029: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5887002B: mov dword ptr [esi + 0x80], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870031: mov ecx, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x74
        // 0x58870034: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x58870036: je 0x58870043
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58870038: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5887003A: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5887003C: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5887003E: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58870040: mov dword ptr [esi + 0x74], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x74
        // 0x58870043: mov ecx, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x78
        // 0x58870046: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x58870048: je 0x58870055
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5887004A: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5887004C: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5887004E: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58870050: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58870052: mov dword ptr [esi + 0x78], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x78
        // 0x58870055: mov ecx, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x7C
        // 0x58870058: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5887005A: je 0x58870067
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5887005C: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5887005E: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58870060: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58870062: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58870064: mov dword ptr [esi + 0x7c], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x7C
        // 0x58870067: mov ecx, dword ptr [esi + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887006D: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5887006F: je 0x5887007f
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58870071: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58870073: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58870075: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58870077: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58870079: mov dword ptr [esi + 0x84], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887007F: mov ecx, dword ptr [esi + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870085: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x58870087: je 0x58870097
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58870089: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5887008B: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5887008D: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5887008F: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58870091: mov dword ptr [esi + 0x88], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870097: mov ecx, dword ptr [esi + 0xec]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887009D: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x5887009F: je 0x588700af
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588700A1: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588700A3: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588700A5: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588700A7: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588700A9: mov dword ptr [esi + 0xec], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588700AF: mov ecx, dword ptr [esi + 0x110]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588700B5: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x588700B7: je 0x588700c7
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588700B9: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588700BB: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588700BD: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588700BF: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588700C1: mov dword ptr [esi + 0x110], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588700C7: mov ecx, dword ptr [esi + 0x13c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x3C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588700CD: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x588700CF: je 0x588700df
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588700D1: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588700D3: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588700D5: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588700D7: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588700D9: mov dword ptr [esi + 0x13c], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x3C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588700DF: mov ecx, dword ptr [esi + 0x13c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x3C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588700E5: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x588700E7: je 0x588700f7
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588700E9: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588700EB: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588700ED: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588700EF: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588700F1: mov dword ptr [esi + 0x13c], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x3C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588700F7: mov ecx, dword ptr [esi + 0x160]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588700FD: cmp ecx, edi
        __asm _emit 0x3B
        __asm _emit 0xCF
        // 0x588700FF: je 0x5887010f
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58870101: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58870103: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58870105: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58870107: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58870109: mov dword ptr [esi + 0x160], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887010F: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58870111: mov dword ptr [esp + 0x18], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58870119: call 0x58902c10
        __asm _emit 0xE8
        __asm _emit 0xF2
        __asm _emit 0x2A
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x5887011E: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58870122: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58870129: pop ecx
        __asm _emit 0x59
        // 0x5887012A: pop edi
        __asm _emit 0x5F
        // 0x5887012B: pop esi
        __asm _emit 0x5E
        // 0x5887012C: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5887012F: ret
        __asm _emit 0xC3
    }
}
