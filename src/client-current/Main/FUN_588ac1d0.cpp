// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588AC1D0 .. +0x96 bytes.
extern "C" __declspec(naked) void FUN_588ac1d0() {
    __asm {
        // 0x588AC1D0: push esi
        __asm _emit 0x56
        // 0x588AC1D1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588AC1D3: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x588AC1D7: mov ecx, 0xe1ff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xE1
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AC1DC: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x588AC1DF: mov edx, 0x100
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AC1E4: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC2
        // 0x588AC1E7: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x588AC1EB: or word ptr [esi + 0x24], 7
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x07
        // 0x588AC1F0: mov eax, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x6C
        // 0x588AC1F3: mov eax, dword ptr [eax + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AC1F9: push eax
        __asm _emit 0x50
        // 0x588AC1FA: call dword ptr [0x5898c1a8]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xA8
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588AC200: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588AC202: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588AC204: jle 0x588ac22e
        __asm _emit 0x7E
        __asm _emit 0x28
        // 0x588AC206: jmp 0x588ac210
        __asm _emit 0xEB
        __asm _emit 0x08
        // 0x588AC208: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AC20F: nop
        __asm _emit 0x90
        // 0x588AC210: mov edx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x6C
        // 0x588AC213: mov edx, dword ptr [edx + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x92
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AC219: mov byte ptr [edx], 0
        __asm _emit 0xC6
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x588AC21C: mov edx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x6C
        // 0x588AC21F: mov edx, dword ptr [edx + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x92
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AC225: mov byte ptr [ecx + edx], 0
        __asm _emit 0xC6
        __asm _emit 0x04
        __asm _emit 0x11
        __asm _emit 0x00
        // 0x588AC229: inc ecx
        __asm _emit 0x41
        // 0x588AC22A: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x588AC22C: jl 0x588ac210
        __asm _emit 0x7C
        __asm _emit 0xE2
        // 0x588AC22E: mov ecx, dword ptr [esi + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x6C
        // 0x588AC231: call 0x5875f940
        __asm _emit 0xE8
        __asm _emit 0x0A
        __asm _emit 0x37
        __asm _emit 0xEB
        __asm _emit 0xFF
        // 0x588AC236: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x588AC239: mov dword ptr [esi + 0x50], 0x1ec
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x50
        __asm _emit 0xEC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588AC240: mov dword ptr [esi + 0x54], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x54
        // 0x588AC243: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588AC249: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588AC24B: call 0x5888cc90
        __asm _emit 0xE8
        __asm _emit 0x40
        __asm _emit 0x0A
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x588AC250: mov ecx, dword ptr [0x58a24584]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588AC256: mov ecx, dword ptr [ecx + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x30
        // 0x588AC259: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588AC25B: mov eax, dword ptr [edx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x18
        // 0x588AC25E: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588AC260: push 0x64
        __asm _emit 0x6A
        __asm _emit 0x64
        // 0x588AC262: push esi
        __asm _emit 0x56
        // 0x588AC263: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588AC265: pop esi
        __asm _emit 0x5E
    }
}
