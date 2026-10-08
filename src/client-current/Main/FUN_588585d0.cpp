// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 126 bytes in 1 exact ranges.
// Source symbol alias: FUN_588585d0.

// Ghidra body range 0x588585D0..0x5885864E; 126 mapped bytes.
extern "C" __declspec(naked) void FUN_588585d0_segment_00() {
    __asm {
        // 0x588585D0: push ecx
        __asm _emit 0x51
        // 0x588585D1: push ebx
        __asm _emit 0x53
        // 0x588585D2: push esi
        __asm _emit 0x56
        // 0x588585D3: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588585D5: mov eax, dword ptr [esi + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588585DB: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588585E1: push eax
        __asm _emit 0x50
        // 0x588585E2: call 0x587e5f80
        __asm _emit 0xE8
        __asm _emit 0x99
        __asm _emit 0xD9
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x588585E7: mov ecx, dword ptr [esi + 0xf4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588585ED: mov dl, byte ptr [esi + ecx*4 + 0x878]
        __asm _emit 0x8A
        __asm _emit 0x94
        __asm _emit 0x8E
        __asm _emit 0x78
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588585F4: and dl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE2
        __asm _emit 0x1F
        // 0x588585F7: or dl, 0x20
        __asm _emit 0x80
        __asm _emit 0xCA
        __asm _emit 0x20
        // 0x588585FA: mov al, cl
        __asm _emit 0x8A
        __asm _emit 0xC1
        // 0x588585FC: xor bl, bl
        __asm _emit 0x32
        __asm _emit 0xDB
        // 0x588585FE: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58858600: mov byte ptr [esp + 8], dl
        __asm _emit 0x88
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58858604: mov byte ptr [esp + 0xa], al
        __asm _emit 0x88
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0A
        // 0x58858608: add esi, 0xd0
        __asm _emit 0x81
        __asm _emit 0xC6
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885860E: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x58858610: cmp dword ptr [esi], 1
        __asm _emit 0x83
        __asm _emit 0x3E
        __asm _emit 0x01
        // 0x58858613: jne 0x58858629
        __asm _emit 0x75
        __asm _emit 0x14
        // 0x58858615: mov al, 1
        __asm _emit 0xB0
        __asm _emit 0x01
        // 0x58858617: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58858619: jbe 0x58858627
        __asm _emit 0x76
        __asm _emit 0x0C
        // 0x5885861B: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x5885861D: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x58858620: add al, al
        __asm _emit 0x02
        __asm _emit 0xC0
        // 0x58858622: sub edx, 1
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x01
        // 0x58858625: jne 0x58858620
        __asm _emit 0x75
        __asm _emit 0xF9
        // 0x58858627: or bl, al
        __asm _emit 0x0A
        __asm _emit 0xD8
        // 0x58858629: inc ecx
        __asm _emit 0x41
        // 0x5885862A: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x5885862D: cmp ecx, 8
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x08
        // 0x58858630: jb 0x58858610
        __asm _emit 0x72
        __asm _emit 0xDE
        // 0x58858632: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x58858634: lea ecx, [esp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58858638: push ecx
        __asm _emit 0x51
        // 0x58858639: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5885863F: push 0x16
        __asm _emit 0x6A
        __asm _emit 0x16
        // 0x58858641: mov byte ptr [esp + 0x15], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x15
        // 0x58858645: call 0x587e5a70
        __asm _emit 0xE8
        __asm _emit 0x26
        __asm _emit 0xD4
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x5885864A: pop esi
        __asm _emit 0x5E
        // 0x5885864B: pop ebx
        __asm _emit 0x5B
        // 0x5885864C: pop ecx
        __asm _emit 0x59
        // 0x5885864D: ret
        __asm _emit 0xC3
    }
}
