// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588EFC40 .. +0xB3 bytes.
extern "C" __declspec(naked) void FUN_588efc40() {
    __asm {
        // 0x588EFC40: mov ax, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x588EFC44: mov edx, 0xe1ff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0xE1
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EFC49: and ax, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC2
        // 0x588EFC4C: mov edx, 0x100
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EFC51: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC2
        // 0x588EFC54: mov word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x588EFC58: or word ptr [ecx + 0x24], 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x49
        __asm _emit 0x24
        __asm _emit 0x05
        // 0x588EFC5D: mov eax, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x08
        // 0x588EFC60: mov dword ptr [ecx + 0x50], 0x212
        __asm _emit 0xC7
        __asm _emit 0x41
        __asm _emit 0x50
        __asm _emit 0x12
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EFC67: mov dword ptr [ecx + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x54
        // 0x588EFC6A: mov dword ptr [ecx + 0x400], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588EFC74: mov dword ptr [ecx + 0x3fc], 0
        __asm _emit 0xC7
        __asm _emit 0x81
        __asm _emit 0xFC
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EFC7E: mov dword ptr [ecx + 0x404], 0
        __asm _emit 0xC7
        __asm _emit 0x81
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EFC88: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xA1
        __asm _emit 0xD8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588EFC8D: cmp dword ptr [eax + 0x170], 0x32
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x32
        // 0x588EFC94: jle 0x588efcad
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x588EFC96: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EFC9D: je 0x588efcad
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588EFC9F: mov ecx, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EFCA5: mov ecx, dword ptr [ecx + 0xc8]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EFCAB: jmp 0x588efcaf
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588EFCAD: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588EFCAF: mov edx, dword ptr [0x58a248f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588EFCB5: push edx
        __asm _emit 0x52
        // 0x588EFCB6: call 0x58907990
        __asm _emit 0xE8
        __asm _emit 0xD5
        __asm _emit 0x7C
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588EFCBB: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xA1
        __asm _emit 0xD8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588EFCC0: cmp dword ptr [eax + 0x170], 0x32
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x32
        // 0x588EFCC7: jle 0x588efce8
        __asm _emit 0x7E
        __asm _emit 0x1F
        // 0x588EFCC9: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EFCD0: je 0x588efce8
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x588EFCD2: mov eax, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EFCD8: mov ecx, dword ptr [eax + 0xc8]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EFCDE: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588EFCE0: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x588EFCE3: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588EFCE5: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588EFCE7: ret
        __asm _emit 0xC3
        // 0x588EFCE8: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588EFCEA: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588EFCEC: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x588EFCEF: push ecx
        __asm _emit 0x51
        // 0x588EFCF0: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588EFCF2: ret
        __asm _emit 0xC3
    }
}
