// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588FC770 .. +0xBB bytes.
// Source symbol alias: FUN_588fc770.
extern "C" __declspec(naked) void FUN_588fc770() {
    __asm {
        // 0x588FC770: push esi
        __asm _emit 0x56
        // 0x588FC771: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588FC773: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x588FC777: mov ecx, 0x1f00
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FC77C: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x588FC77F: mov edx, 0x200
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FC784: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x588FC787: jne 0x588fc829
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FC78D: mov eax, 0xfff0
        __asm _emit 0xB8
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FC792: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x588FC796: or word ptr [esi + 0x24], 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588FC79B: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x588FC79F: mov edx, 0xe4ff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FC7A4: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x588FC7A7: mov eax, 0x400
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FC7AC: or cx, ax
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC8
        // 0x588FC7AF: mov word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x588FC7B3: mov ecx, dword ptr [esi + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FC7B9: push ecx
        __asm _emit 0x51
        // 0x588FC7BA: mov ecx, dword ptr [esi + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FC7C0: call 0x588bb5e0
        __asm _emit 0xE8
        __asm _emit 0x1B
        __asm _emit 0xEE
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x588FC7C5: mov edx, dword ptr [esi + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FC7CB: mov ecx, dword ptr [esi + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FC7D1: push edx
        __asm _emit 0x52
        // 0x588FC7D2: call 0x588bcb00
        __asm _emit 0xE8
        __asm _emit 0x29
        __asm _emit 0x03
        __asm _emit 0xFC
        __asm _emit 0xFF
        // 0x588FC7D7: mov ecx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x68
        // 0x588FC7DA: call 0x588ffc90
        __asm _emit 0xE8
        __asm _emit 0xB1
        __asm _emit 0x34
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FC7DF: mov ecx, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x78
        // 0x588FC7E2: call 0x588fdb80
        __asm _emit 0xE8
        __asm _emit 0x99
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FC7E7: mov ecx, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x7C
        // 0x588FC7EA: call 0x588fdb80
        __asm _emit 0xE8
        __asm _emit 0x91
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FC7EF: cmp dword ptr [esi + 0x9c], 1
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x588FC7F6: jne 0x588fc80a
        __asm _emit 0x75
        __asm _emit 0x12
        // 0x588FC7F8: mov eax, dword ptr [0x58a24598]
        __asm _emit 0xA1
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588FC7FD: mov ecx, dword ptr [eax + 0xdb8]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xB8
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FC803: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588FC805: call 0x588b2700
        __asm _emit 0xE8
        __asm _emit 0xF6
        __asm _emit 0x5E
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x588FC80A: mov ecx, dword ptr [esi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FC810: call 0x588feb40
        __asm _emit 0xE8
        __asm _emit 0x2B
        __asm _emit 0x23
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FC815: mov eax, dword ptr [0x58a24584]
        __asm _emit 0xA1
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588FC81A: mov ecx, dword ptr [eax + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x30
        // 0x588FC81D: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588FC81F: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588FC821: push 0x64
        __asm _emit 0x6A
        __asm _emit 0x64
        // 0x588FC823: push eax
        __asm _emit 0x50
        // 0x588FC824: mov eax, dword ptr [edx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x18
        // 0x588FC827: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588FC829: pop esi
        __asm _emit 0x5E
        // 0x588FC82A: ret
        __asm _emit 0xC3
    }
}
