// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587D2630 .. +0x82 bytes.
// Source symbol alias: FUN_587d2630.
extern "C" __declspec(naked) void FUN_587d2630() {
    __asm {
        // 0x587D2630: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587D2634: push esi
        __asm _emit 0x56
        // 0x587D2635: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587D2637: movzx ecx, al
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC8
        // 0x587D263A: mov dword ptr [esi + 0xe8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D2640: mov word ptr [esi + 0xa06], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x06
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D2647: mov dx, word ptr [ecx*2 + 0x589c3e2e]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0x4D
        __asm _emit 0x2E
        __asm _emit 0x3E
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587D264F: mov ecx, dword ptr [esi + 0x7a4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA4
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D2655: mov word ptr [esi + 0xd8], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D265C: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587D265E: je 0x587d2670
        __asm _emit 0x74
        __asm _emit 0x10
        // 0x587D2660: movzx eax, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC0
        // 0x587D2663: dec eax
        __asm _emit 0x48
        // 0x587D2664: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x587D2667: mov ecx, dword ptr [esi + 0x7a8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA8
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D266D: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x587D2670: mov dx, word ptr [esp + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587D2675: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587D2677: mov word ptr [esi + 0xa04], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x04
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D267E: mov dword ptr [esi + 0xf8], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D2688: call 0x587d0e40
        __asm _emit 0xE8
        __asm _emit 0xB3
        __asm _emit 0xE7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587D268D: movzx eax, word ptr [esi + 0xa06]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x86
        __asm _emit 0x06
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D2694: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587D269A: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587D269C: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587D269E: push eax
        __asm _emit 0x50
        // 0x587D269F: call 0x587b9060
        __asm _emit 0xE8
        __asm _emit 0xBC
        __asm _emit 0x69
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x587D26A4: mov dword ptr [esi + 0x114], 1
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D26AE: pop esi
        __asm _emit 0x5E
        // 0x587D26AF: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
