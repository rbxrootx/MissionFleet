// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 130 bytes in 1 exact ranges.
// Source symbol alias: FUN_58772720.

// Ghidra body range 0x58772720..0x587727A2; 130 mapped bytes.
extern "C" __declspec(naked) void FUN_58772720_segment_00() {
    __asm {
        // 0x58772720: sub esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x1C
        // 0x58772723: push esi
        __asm _emit 0x56
        // 0x58772724: push edi
        __asm _emit 0x57
        // 0x58772725: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58772727: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58772729: call 0x58772160
        __asm _emit 0xE8
        __asm _emit 0x32
        __asm _emit 0xFA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5877272E: mov edi, dword ptr [0x5898c1a8]
        __asm _emit 0x8B
        __asm _emit 0x3D
        __asm _emit 0xA8
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58772734: push eax
        __asm _emit 0x50
        // 0x58772735: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x58772737: cmp eax, 4
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x04
        // 0x5877273A: jle 0x58772762
        __asm _emit 0x7E
        __asm _emit 0x26
        // 0x5877273C: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5877273E: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58772740: call 0x58772160
        __asm _emit 0xE8
        __asm _emit 0x1B
        __asm _emit 0xFA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58772745: push eax
        __asm _emit 0x50
        // 0x58772746: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x58772748: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5877274A: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5877274C: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5877274E: call 0x58772160
        __asm _emit 0xE8
        __asm _emit 0x0D
        __asm _emit 0xFA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58772753: cmp byte ptr [edi + eax - 4], 0x2e
        __asm _emit 0x80
        __asm _emit 0x7C
        __asm _emit 0x07
        __asm _emit 0xFC
        __asm _emit 0x2E
        // 0x58772758: jne 0x58772762
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x5877275A: mov al, 1
        __asm _emit 0xB0
        __asm _emit 0x01
        // 0x5877275C: pop edi
        __asm _emit 0x5F
        // 0x5877275D: pop esi
        __asm _emit 0x5E
        // 0x5877275E: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x58772761: ret
        __asm _emit 0xC3
        // 0x58772762: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58772764: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58772766: mov dword ptr [esp + 0x10], 1
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877276E: mov dword ptr [esp + 0x18], 7
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58772776: call 0x58772160
        __asm _emit 0xE8
        __asm _emit 0xE5
        __asm _emit 0xF9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5877277B: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5877277F: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x58772782: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58772784: sub esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x1C
        // 0x58772787: mov edi, esp
        __asm _emit 0x8B
        __asm _emit 0xFC
        // 0x58772789: mov ecx, 7
        __asm _emit 0xB9
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877278E: lea esi, [esp + 0x24]
        __asm _emit 0x8D
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58772792: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x58772794: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58772796: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x58772798: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5877279A: pop edi
        __asm _emit 0x5F
        // 0x5877279B: xor al, al
        __asm _emit 0x32
        __asm _emit 0xC0
        // 0x5877279D: pop esi
        __asm _emit 0x5E
        // 0x5877279E: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x587727A1: ret
        __asm _emit 0xC3
    }
}
