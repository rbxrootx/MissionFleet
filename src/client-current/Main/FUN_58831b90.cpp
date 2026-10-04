// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58831B90 .. +0x9A bytes.
// Source symbol alias: FUN_58831b90.
extern "C" __declspec(naked) void FUN_58831b90() {
    __asm {
        // 0x58831B90: push ebx
        __asm _emit 0x53
        // 0x58831B91: push ebp
        __asm _emit 0x55
        // 0x58831B92: mov ebp, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58831B96: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x58831B98: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x58831B9A: je 0x58831c25
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58831BA0: mov ecx, dword ptr [ebx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x6C
        // 0x58831BA3: push esi
        __asm _emit 0x56
        // 0x58831BA4: push edi
        __asm _emit 0x57
        // 0x58831BA5: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58831BA7: cmp dword ptr [ecx + 0x88], edi
        __asm _emit 0x39
        __asm _emit 0xB9
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58831BAD: jle 0x58831bf9
        __asm _emit 0x7E
        __asm _emit 0x4A
        // 0x58831BAF: add ebp, 0x2d
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x2D
        // 0x58831BB2: push edi
        __asm _emit 0x57
        // 0x58831BB3: mov esi, ebp
        __asm _emit 0x8B
        __asm _emit 0xF5
        // 0x58831BB5: call 0x589080e0
        __asm _emit 0xE8
        __asm _emit 0x26
        __asm _emit 0x65
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58831BBA: lea ebx, [ebx]
        __asm _emit 0x8D
        __asm _emit 0x9B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58831BC0: mov cl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x08
        // 0x58831BC2: cmp cl, byte ptr [esi]
        __asm _emit 0x3A
        __asm _emit 0x0E
        // 0x58831BC4: jne 0x58831be0
        __asm _emit 0x75
        __asm _emit 0x1A
        // 0x58831BC6: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x58831BC8: je 0x58831bdc
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x58831BCA: mov cl, byte ptr [eax + 1]
        __asm _emit 0x8A
        __asm _emit 0x48
        __asm _emit 0x01
        // 0x58831BCD: cmp cl, byte ptr [esi + 1]
        __asm _emit 0x3A
        __asm _emit 0x4E
        __asm _emit 0x01
        // 0x58831BD0: jne 0x58831be0
        __asm _emit 0x75
        __asm _emit 0x0E
        // 0x58831BD2: add eax, 2
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x02
        // 0x58831BD5: add esi, 2
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x02
        // 0x58831BD8: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x58831BDA: jne 0x58831bc0
        __asm _emit 0x75
        __asm _emit 0xE4
        // 0x58831BDC: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58831BDE: jmp 0x58831be5
        __asm _emit 0xEB
        __asm _emit 0x05
        // 0x58831BE0: sbb eax, eax
        __asm _emit 0x1B
        __asm _emit 0xC0
        // 0x58831BE2: sbb eax, -1
        __asm _emit 0x83
        __asm _emit 0xD8
        __asm _emit 0xFF
        // 0x58831BE5: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58831BE7: je 0x58831c23
        __asm _emit 0x74
        __asm _emit 0x3A
        // 0x58831BE9: mov ecx, dword ptr [ebx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x6C
        // 0x58831BEC: inc edi
        __asm _emit 0x47
        // 0x58831BED: cmp edi, dword ptr [ecx + 0x88]
        __asm _emit 0x3B
        __asm _emit 0xB9
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58831BF3: jl 0x58831bb2
        __asm _emit 0x7C
        __asm _emit 0xBD
        // 0x58831BF5: mov ebp, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58831BF9: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x58831BFC: push 0x83add7
        __asm _emit 0x68
        __asm _emit 0xD7
        __asm _emit 0xAD
        __asm _emit 0x83
        __asm _emit 0x00
        // 0x58831C01: push eax
        __asm _emit 0x50
        // 0x58831C02: lea ecx, [ebp + 0x2d]
        __asm _emit 0x8D
        __asm _emit 0x4D
        __asm _emit 0x2D
        // 0x58831C05: push ecx
        __asm _emit 0x51
        // 0x58831C06: mov ecx, dword ptr [ebx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x6C
        // 0x58831C09: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0xC2
        __asm _emit 0x6C
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58831C0E: mov edx, dword ptr [ebp + 4]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x04
        // 0x58831C11: mov ecx, dword ptr [ebx + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x70
        // 0x58831C14: push 0x83add7
        __asm _emit 0x68
        __asm _emit 0xD7
        __asm _emit 0xAD
        __asm _emit 0x83
        __asm _emit 0x00
        // 0x58831C19: push edx
        __asm _emit 0x52
        // 0x58831C1A: add ebp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x0C
        // 0x58831C1D: push ebp
        __asm _emit 0x55
        // 0x58831C1E: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0xAD
        __asm _emit 0x6C
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58831C23: pop edi
        __asm _emit 0x5F
        // 0x58831C24: pop esi
        __asm _emit 0x5E
        // 0x58831C25: pop ebp
        __asm _emit 0x5D
        // 0x58831C26: pop ebx
        __asm _emit 0x5B
        // 0x58831C27: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
