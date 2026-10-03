// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588EFD00 .. +0xAB bytes.
extern "C" __declspec(naked) void FUN_588efd00() {
    __asm {
        // 0x588EFD00: mov ax, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x588EFD04: mov edx, 0xe4ff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EFD09: and ax, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC2
        // 0x588EFD0C: mov edx, 0x400
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EFD11: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC2
        // 0x588EFD14: mov word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x588EFD18: mov eax, 0xfffd
        __asm _emit 0xB8
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EFD1D: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x588EFD21: or word ptr [ecx + 0x24], 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x49
        __asm _emit 0x24
        __asm _emit 0x05
        // 0x588EFD26: mov edx, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x588EFD29: mov dword ptr [ecx + 0x50], 0x446
        __asm _emit 0xC7
        __asm _emit 0x41
        __asm _emit 0x50
        __asm _emit 0x46
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EFD30: mov dword ptr [ecx + 0x54], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x54
        // 0x588EFD33: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588EFD39: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588EFD3B: call 0x587d7820
        __asm _emit 0xE8
        __asm _emit 0xE0
        __asm _emit 0x7A
        __asm _emit 0xEE
        __asm _emit 0xFF
        // 0x588EFD40: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xA1
        __asm _emit 0xD8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588EFD45: cmp dword ptr [eax + 0x170], 0x32
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x32
        // 0x588EFD4C: jle 0x588efd65
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x588EFD4E: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EFD55: je 0x588efd65
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588EFD57: mov eax, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EFD5D: mov ecx, dword ptr [eax + 0xc8]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EFD63: jmp 0x588efd67
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588EFD65: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588EFD67: mov edx, dword ptr [0x58a248f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588EFD6D: push edx
        __asm _emit 0x52
        // 0x588EFD6E: call 0x58907990
        __asm _emit 0xE8
        __asm _emit 0x1D
        __asm _emit 0x7C
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588EFD73: mov eax, dword ptr [0x58a246d8]
        __asm _emit 0xA1
        __asm _emit 0xD8
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588EFD78: cmp dword ptr [eax + 0x170], 0x32
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x32
        // 0x588EFD7F: jle 0x588efda0
        __asm _emit 0x7E
        __asm _emit 0x1F
        // 0x588EFD81: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EFD88: je 0x588efda0
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x588EFD8A: mov eax, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EFD90: mov ecx, dword ptr [eax + 0xc8]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EFD96: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588EFD98: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x588EFD9B: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588EFD9D: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588EFD9F: ret
        __asm _emit 0xC3
        // 0x588EFDA0: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588EFDA2: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588EFDA4: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x588EFDA7: push ecx
        __asm _emit 0x51
        // 0x588EFDA8: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588EFDAA: ret
        __asm _emit 0xC3
    }
}
