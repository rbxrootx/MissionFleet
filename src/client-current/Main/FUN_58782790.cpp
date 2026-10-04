// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58782790 .. +0x7B bytes.
// Source symbol alias: FUN_58782790.
extern "C" __declspec(naked) void FUN_58782790() {
    __asm {
        // 0x58782790: mov eax, 0xfffb
        __asm _emit 0xB8
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58782795: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x58782799: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878279E: and word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x587827A2: push ebx
        __asm _emit 0x53
        // 0x587827A3: push esi
        __asm _emit 0x56
        // 0x587827A4: mov dword ptr [ecx + 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x41
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587827AB: mov dword ptr [ecx + 0xe8], 0
        __asm _emit 0xC7
        __asm _emit 0x81
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587827B5: lea edx, [ecx + 0xbc]
        __asm _emit 0x8D
        __asm _emit 0x91
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587827BB: mov esi, 3
        __asm _emit 0xBE
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587827C0: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587827C2: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587827C4: je 0x587827cf
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x587827C6: mov ebx, 0xfffe
        __asm _emit 0xBB
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587827CB: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x587827CF: add edx, 4
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x04
        // 0x587827D2: sub esi, 1
        __asm _emit 0x83
        __asm _emit 0xEE
        __asm _emit 0x01
        // 0x587827D5: jne 0x587827c0
        __asm _emit 0x75
        __asm _emit 0xE9
        // 0x587827D7: lea edx, [ecx + 0xc8]
        __asm _emit 0x8D
        __asm _emit 0x91
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587827DD: mov esi, 2
        __asm _emit 0xBE
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587827E2: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x587827E4: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587827E6: je 0x587827f1
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x587827E8: mov ebx, 0xfffe
        __asm _emit 0xBB
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587827ED: and word ptr [eax + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x587827F1: add edx, 4
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x04
        // 0x587827F4: sub esi, 1
        __asm _emit 0x83
        __asm _emit 0xEE
        __asm _emit 0x01
        // 0x587827F7: jne 0x587827e2
        __asm _emit 0x75
        __asm _emit 0xE9
        // 0x587827F9: mov ecx, dword ptr [ecx + 0xd0]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587827FF: mov eax, 0xfffe
        __asm _emit 0xB8
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58782804: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x58782808: pop esi
        __asm _emit 0x5E
        // 0x58782809: pop ebx
        __asm _emit 0x5B
        // 0x5878280A: ret
        __asm _emit 0xC3
    }
}
