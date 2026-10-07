// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 219 bytes in 1 exact ranges.
// Source symbol alias: FUN_588f6580.

// Ghidra body range 0x588F6580..0x588F665B; 219 mapped bytes.
extern "C" __declspec(naked) void FUN_588f6580_segment_00() {
    __asm {
        // 0x588F6580: cmp dword ptr [ecx + 0x64], 0
        __asm _emit 0x83
        __asm _emit 0x79
        __asm _emit 0x64
        __asm _emit 0x00
        // 0x588F6584: mov eax, dword ptr [ecx + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F658A: push esi
        __asm _emit 0x56
        // 0x588F658B: mov edx, 1
        __asm _emit 0xBA
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F6590: jne 0x588f65a7
        __asm _emit 0x75
        __asm _emit 0x15
        // 0x588F6592: mov esi, 0xfffe
        __asm _emit 0xBE
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F6597: and word ptr [eax + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x70
        __asm _emit 0x24
        // 0x588F659B: mov eax, dword ptr [ecx + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F65A1: and word ptr [eax + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x70
        __asm _emit 0x24
        // 0x588F65A5: jmp 0x588f65b5
        __asm _emit 0xEB
        __asm _emit 0x0E
        // 0x588F65A7: or word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588F65AB: mov eax, dword ptr [ecx + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F65B1: or word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588F65B5: mov eax, dword ptr [ecx + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x78
        // 0x588F65B8: sub eax, dword ptr [ecx + 0x74]
        __asm _emit 0x2B
        __asm _emit 0x41
        __asm _emit 0x74
        // 0x588F65BB: sar eax, 2
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x588F65BE: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x588F65C0: cmp dword ptr [ecx + 0x64], eax
        __asm _emit 0x39
        __asm _emit 0x41
        __asm _emit 0x64
        // 0x588F65C3: je 0x588f65e8
        __asm _emit 0x74
        __asm _emit 0x23
        // 0x588F65C5: mov eax, dword ptr [ecx + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x78
        // 0x588F65C8: sub eax, dword ptr [ecx + 0x74]
        __asm _emit 0x2B
        __asm _emit 0x41
        __asm _emit 0x74
        // 0x588F65CB: test eax, 0xfffffffc
        __asm _emit 0xA9
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F65D0: je 0x588f65e8
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x588F65D2: mov eax, dword ptr [ecx + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F65D8: or word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588F65DC: mov eax, dword ptr [ecx + 0x94]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F65E2: or word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588F65E6: jmp 0x588f6601
        __asm _emit 0xEB
        __asm _emit 0x19
        // 0x588F65E8: mov eax, dword ptr [ecx + 0x90]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F65EE: mov esi, 0xfffe
        __asm _emit 0xBE
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F65F3: and word ptr [eax + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x70
        __asm _emit 0x24
        // 0x588F65F7: mov eax, dword ptr [ecx + 0x94]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F65FD: and word ptr [eax + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x70
        __asm _emit 0x24
        // 0x588F6601: mov eax, dword ptr [ecx + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x78
        // 0x588F6604: sub eax, dword ptr [ecx + 0x74]
        __asm _emit 0x2B
        __asm _emit 0x41
        __asm _emit 0x74
        // 0x588F6607: sar eax, 2
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x588F660A: cmp eax, edx
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x588F660C: mov eax, dword ptr [ecx + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F6612: ja 0x588f662b
        __asm _emit 0x77
        __asm _emit 0x17
        // 0x588F6614: mov edx, 0xfff0
        __asm _emit 0xBA
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F6619: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588F661D: mov ecx, dword ptr [ecx + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F6623: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x588F6625: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x588F6629: pop esi
        __asm _emit 0x5E
        // 0x588F662A: ret
        __asm _emit 0xC3
        // 0x588F662B: mov edx, 0xf
        __asm _emit 0xBA
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F6630: or word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588F6634: mov eax, dword ptr [ecx + 0x9c]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F663A: mov esi, 0xfffb
        __asm _emit 0xBE
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F663F: and word ptr [eax + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x70
        __asm _emit 0x24
        // 0x588F6643: mov eax, dword ptr [ecx + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F6649: or word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x588F664D: mov ecx, dword ptr [ecx + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F6653: mov edx, esi
        __asm _emit 0x8B
        __asm _emit 0xD6
        // 0x588F6655: and word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x588F6659: pop esi
        __asm _emit 0x5E
        // 0x588F665A: ret
        __asm _emit 0xC3
    }
}
