// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x588606AD .. +0x50 bytes.
extern "C" __declspec(naked) void FUN_588606ad() {
    __asm {
        // 0x588606AD: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x588606AF: push ebp
        __asm _emit 0x55
        // 0x588606B0: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x588606B2: mov edx, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x0C
        // 0x588606B5: push esi
        __asm _emit 0x56
        // 0x588606B6: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588606B8: cmp edx, -1
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0xFF
        // 0x588606BB: je 0x588606f6
        __asm _emit 0x74
        __asm _emit 0x39
        // 0x588606BD: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x588606C0: sub eax, 0
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x00
        // 0x588606C3: je 0x588606f2
        __asm _emit 0x74
        __asm _emit 0x2D
        // 0x588606C5: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x01
        // 0x588606C8: je 0x588606e3
        __asm _emit 0x74
        __asm _emit 0x19
        // 0x588606CA: sub eax, 7
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x07
        // 0x588606CD: jne 0x588606f6
        __asm _emit 0x75
        __asm _emit 0x27
        // 0x588606CF: movzx edx, dl
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xD2
        // 0x588606D2: inc eax
        __asm _emit 0x40
        // 0x588606D3: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x588606D5: shr edx, 3
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x03
        // 0x588606D8: and ecx, 7
        __asm _emit 0x83
        __asm _emit 0xE1
        __asm _emit 0x07
        // 0x588606DB: shl eax, cl
        __asm _emit 0xD3
        __asm _emit 0xE0
        // 0x588606DD: test byte ptr [edx + esi + 0x3c], al
        __asm _emit 0x84
        __asm _emit 0x44
        __asm _emit 0x32
        __asm _emit 0x3C
        // 0x588606E1: jmp 0x588606f0
        __asm _emit 0xEB
        __asm _emit 0x0D
        // 0x588606E3: cmp edx, 9
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x09
        // 0x588606E6: jl 0x588606ed
        __asm _emit 0x7C
        __asm _emit 0x05
        // 0x588606E8: cmp edx, 0xd
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x0D
        // 0x588606EB: jle 0x588606f6
        __asm _emit 0x7E
        __asm _emit 0x09
        // 0x588606ED: cmp edx, 0x20
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x20
        // 0x588606F0: je 0x588606f6
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x588606F2: mov al, 1
        __asm _emit 0xB0
        __asm _emit 0x01
        // 0x588606F4: jmp 0x588606f8
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588606F6: xor al, al
        __asm _emit 0x32
        __asm _emit 0xC0
        // 0x588606F8: pop esi
        __asm _emit 0x5E
        // 0x588606F9: pop ebp
        __asm _emit 0x5D
        // 0x588606FA: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
