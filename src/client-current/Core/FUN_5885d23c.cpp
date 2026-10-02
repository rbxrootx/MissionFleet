// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x5885D23C .. +0x6C bytes.
extern "C" __declspec(naked) void FUN_5885d23c() {
    __asm {
        // 0x5885D23C: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x5885D23E: push ebp
        __asm _emit 0x55
        // 0x5885D23F: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x5885D241: sub esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x10
        // 0x5885D244: push esi
        __asm _emit 0x56
        // 0x5885D245: push edi
        __asm _emit 0x57
        // 0x5885D246: lea eax, [ebp - 0x10]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xF0
        // 0x5885D249: mov byte ptr [ebp - 1], 0
        __asm _emit 0xC6
        __asm _emit 0x45
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x5885D24D: push eax
        __asm _emit 0x50
        // 0x5885D24E: sub esp, 0x20
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x20
        // 0x5885D251: lea eax, [ebp - 1]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xFF
        // 0x5885D254: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x5885D256: mov edx, esp
        __asm _emit 0x8B
        __asm _emit 0xD4
        // 0x5885D258: xorps xmm0, xmm0
        __asm _emit 0x0F
        __asm _emit 0x57
        __asm _emit 0xC0
        // 0x5885D25B: movsd qword ptr [ebp - 0x10], xmm0
        __asm _emit 0xF2
        __asm _emit 0x0F
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xF0
        // 0x5885D260: push eax
        __asm _emit 0x50
        // 0x5885D261: push dword ptr [edi + 0x2c]
        __asm _emit 0xFF
        __asm _emit 0x77
        __asm _emit 0x2C
        // 0x5885D264: mov esi, dword ptr [edi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x77
        __asm _emit 0x60
        // 0x5885D267: lea eax, [edi + 8]
        __asm _emit 0x8D
        __asm _emit 0x47
        __asm _emit 0x08
        // 0x5885D26A: push dword ptr [edi + 0x28]
        __asm _emit 0xFF
        __asm _emit 0x77
        __asm _emit 0x28
        // 0x5885D26D: push eax
        __asm _emit 0x50
        // 0x5885D26E: push edx
        __asm _emit 0x52
        // 0x5885D26F: call 0x5885b8d2
        __asm _emit 0xE8
        __asm _emit 0x5E
        __asm _emit 0xE6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885D274: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x5885D277: push esi
        __asm _emit 0x56
        // 0x5885D278: call 0x5885b97a
        __asm _emit 0xE8
        __asm _emit 0xFD
        __asm _emit 0xE6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885D27D: add esp, 0x28
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x28
        // 0x5885D280: cmp byte ptr [ebp - 1], 0
        __asm _emit 0x80
        __asm _emit 0x7D
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x5885D284: je 0x5885d2a2
        __asm _emit 0x74
        __asm _emit 0x1C
        // 0x5885D286: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x5885D289: je 0x5885d2a2
        __asm _emit 0x74
        __asm _emit 0x17
        // 0x5885D28B: cmp byte ptr [edi + 0x26], 0
        __asm _emit 0x80
        __asm _emit 0x7F
        __asm _emit 0x26
        __asm _emit 0x00
        // 0x5885D28F: je 0x5885d295
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x5885D291: mov al, 1
        __asm _emit 0xB0
        __asm _emit 0x01
        // 0x5885D293: jmp 0x5885d2a4
        __asm _emit 0xEB
        __asm _emit 0x0F
        // 0x5885D295: lea eax, [ebp - 0x10]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xF0
        // 0x5885D298: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x5885D29A: push eax
        __asm _emit 0x50
        // 0x5885D29B: call 0x5885d9d4
        __asm _emit 0xE8
        __asm _emit 0x34
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885D2A0: jmp 0x5885d2a4
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5885D2A2: xor al, al
        __asm _emit 0x32
        __asm _emit 0xC0
        // 0x5885D2A4: pop edi
        __asm _emit 0x5F
        // 0x5885D2A5: pop esi
        __asm _emit 0x5E
        // 0x5885D2A6: leave
        __asm _emit 0xC9
        // 0x5885D2A7: ret
        __asm _emit 0xC3
    }
}
