// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 179 bytes in 1 exact ranges.
// Source symbol alias: FUN_588fcb80.

// Ghidra body range 0x588FCB80..0x588FCC33; 179 mapped bytes.
extern "C" __declspec(naked) void FUN_588fcb80_segment_00() {
    __asm {
        // 0x588FCB80: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x588FCB84: push esi
        __asm _emit 0x56
        // 0x588FCB85: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588FCB87: mov ecx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x588FCB8B: push eax
        __asm _emit 0x50
        // 0x588FCB8C: push ecx
        __asm _emit 0x51
        // 0x588FCB8D: mov ecx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x68
        // 0x588FCB90: call 0x588ff0f0
        __asm _emit 0xE8
        __asm _emit 0x5B
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FCB95: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588FCB97: je 0x588fcc2f
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FCB9D: movzx ecx, byte ptr [eax + 0x69]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x48
        __asm _emit 0x69
        // 0x588FCBA1: sub ecx, 2
        __asm _emit 0x83
        __asm _emit 0xE9
        __asm _emit 0x02
        // 0x588FCBA4: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588FCBA6: mov dword ptr [esi + 0x98], 1
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FCBB0: push 8
        __asm _emit 0x6A
        __asm _emit 0x08
        // 0x588FCBB2: je 0x588fcbef
        __asm _emit 0x74
        __asm _emit 0x3B
        // 0x588FCBB4: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588FCBB6: mov word ptr [esi + 0x94], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FCBBD: lea edx, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588FCBC1: push edx
        __asm _emit 0x52
        // 0x588FCBC2: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588FCBC4: mov eax, 0xfffd
        __asm _emit 0xB8
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FCBC9: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x588FCBCD: mov ecx, 0x7d
        __asm _emit 0xB9
        __asm _emit 0x7D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FCBD2: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588FCBD4: mov word ptr [esi + 0x94], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FCBDB: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588FCBE1: push 0x80015105
        __asm _emit 0x68
        __asm _emit 0x05
        __asm _emit 0x51
        __asm _emit 0x01
        __asm _emit 0x80
        // 0x588FCBE6: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0x85
        __asm _emit 0x40
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x588FCBEB: pop esi
        __asm _emit 0x5E
        // 0x588FCBEC: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588FCBEF: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588FCBF1: mov word ptr [esi + 0x94], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FCBF8: mov edx, 0xfffd
        __asm _emit 0xBA
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FCBFD: and word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x588FCC01: mov ecx, 0x7d
        __asm _emit 0xB9
        __asm _emit 0x7D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FCC06: mov word ptr [esi + 0x94], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FCC0D: movzx ecx, byte ptr [eax + 0x94]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x88
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FCC14: lea edx, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588FCC18: push edx
        __asm _emit 0x52
        // 0x588FCC19: movzx edx, byte ptr [eax + 0x68]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x50
        __asm _emit 0x68
        // 0x588FCC1D: push ecx
        __asm _emit 0x51
        // 0x588FCC1E: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588FCC24: push edx
        __asm _emit 0x52
        // 0x588FCC25: push 0x80017105
        __asm _emit 0x68
        __asm _emit 0x05
        __asm _emit 0x71
        __asm _emit 0x01
        __asm _emit 0x80
        // 0x588FCC2A: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0x41
        __asm _emit 0x40
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x588FCC2F: pop esi
        __asm _emit 0x5E
        // 0x588FCC30: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
