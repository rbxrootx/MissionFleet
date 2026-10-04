// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5875F360 .. +0xB3 bytes.
// Source symbol alias: FUN_5875f360.
extern "C" __declspec(naked) void FUN_5875f360() {
    __asm {
        // 0x5875F360: push ebx
        __asm _emit 0x53
        // 0x5875F361: mov ebx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5875F365: push esi
        __asm _emit 0x56
        // 0x5875F366: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5875F368: mov eax, dword ptr [esi + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x74
        // 0x5875F36B: mov dword ptr [esi + 0x70], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x5875F36E: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x5875F370: je 0x5875f3d6
        __asm _emit 0x74
        __asm _emit 0x64
        // 0x5875F372: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x5875F375: push ebp
        __asm _emit 0x55
        // 0x5875F376: push edi
        __asm _emit 0x57
        // 0x5875F377: push 0x80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875F37C: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5875F37E: push ecx
        __asm _emit 0x51
        // 0x5875F37F: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0xC4
        __asm _emit 0xD8
        __asm _emit 0x21
        __asm _emit 0x00
        // 0x5875F384: push 0x100
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875F389: lea edi, [esi + 0x80]
        __asm _emit 0x8D
        __asm _emit 0xBE
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875F38F: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5875F391: push edi
        __asm _emit 0x57
        // 0x5875F392: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0xB1
        __asm _emit 0xD8
        __asm _emit 0x21
        __asm _emit 0x00
        // 0x5875F397: mov edx, ebx
        __asm _emit 0x8B
        __asm _emit 0xD3
        // 0x5875F399: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x5875F39C: mov ebp, 0x100
        __asm _emit 0xBD
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875F3A1: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x5875F3A3: sub edx, edi
        __asm _emit 0x2B
        __asm _emit 0xD7
        // 0x5875F3A5: lea ecx, [ebp + 0x7ffffefe]
        __asm _emit 0x8D
        __asm _emit 0x8D
        __asm _emit 0xFE
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x5875F3AB: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5875F3AD: je 0x5875f3c0
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x5875F3AF: mov cl, byte ptr [edx + eax]
        __asm _emit 0x8A
        __asm _emit 0x0C
        __asm _emit 0x02
        // 0x5875F3B2: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x5875F3B4: je 0x5875f3c0
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x5875F3B6: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        // 0x5875F3B8: inc eax
        __asm _emit 0x40
        // 0x5875F3B9: sub ebp, 1
        __asm _emit 0x83
        __asm _emit 0xED
        __asm _emit 0x01
        // 0x5875F3BC: jne 0x5875f3a5
        __asm _emit 0x75
        __asm _emit 0xE7
        // 0x5875F3BE: jmp 0x5875f3c4
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x5875F3C0: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x5875F3C2: jne 0x5875f3c5
        __asm _emit 0x75
        __asm _emit 0x01
        // 0x5875F3C4: dec eax
        __asm _emit 0x48
        // 0x5875F3C5: push edi
        __asm _emit 0x57
        // 0x5875F3C6: mov byte ptr [eax], 0
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875F3C9: call dword ptr [0x5898c1a8]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xA8
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5875F3CF: pop edi
        __asm _emit 0x5F
        // 0x5875F3D0: mov dword ptr [esi + 0x78], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x78
        // 0x5875F3D3: pop ebp
        __asm _emit 0x5D
        // 0x5875F3D4: jmp 0x5875f3ea
        __asm _emit 0xEB
        __asm _emit 0x14
        // 0x5875F3D6: mov edx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x6C
        // 0x5875F3D9: mov byte ptr [edx], 0
        __asm _emit 0xC6
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5875F3DC: mov byte ptr [esi + 0x80], 0
        __asm _emit 0xC6
        __asm _emit 0x86
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875F3E3: mov dword ptr [esi + 0x78], 0
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x78
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875F3EA: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x5875F3EE: mov ecx, 0xe1ff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xE1
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875F3F3: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x5875F3F6: mov edx, 0x100
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875F3FB: mov dword ptr [esi + 0x7c], 0
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x7C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875F402: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC2
        // 0x5875F405: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x5875F409: or word ptr [esi + 0x24], 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5875F40E: pop esi
        __asm _emit 0x5E
        // 0x5875F40F: pop ebx
        __asm _emit 0x5B
        // 0x5875F410: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
