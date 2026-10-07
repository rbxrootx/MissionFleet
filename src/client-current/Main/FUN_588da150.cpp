// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588DA150 .. +0x90 bytes.
// Source symbol alias: FUN_588da150.
extern "C" __declspec(naked) void FUN_588da150() {
    __asm {
        // 0x588DA150: push esi
        __asm _emit 0x56
        // 0x588DA151: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588DA153: mov ecx, dword ptr [esi + 0x60fc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xFC
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA159: push 0x101
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA15E: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xBD
        __asm _emit 0x8B
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x588DA163: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x588DA167: cmp eax, 0x40000000
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x588DA16C: jne 0x588da1a0
        __asm _emit 0x75
        __asm _emit 0x32
        // 0x588DA16E: mov eax, dword ptr [esi + 0x60fc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xFC
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA174: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x588DA179: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DA17E: mov ecx, 0xf
        __asm _emit 0xB9
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA183: cmp dword ptr [eax + 4], esi
        __asm _emit 0x39
        __asm _emit 0x70
        __asm _emit 0x04
        // 0x588DA186: je 0x588da192
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x588DA188: mov eax, dword ptr [esi + 0x12f4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF4
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA18E: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588DA192: mov esi, dword ptr [esi + 0x12f8]
        __asm _emit 0x8B
        __asm _emit 0xB6
        __asm _emit 0xF8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA198: or word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x588DA19C: pop esi
        __asm _emit 0x5E
        // 0x588DA19D: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588DA1A0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588DA1A2: jne 0x588da1dc
        __asm _emit 0x75
        __asm _emit 0x38
        // 0x588DA1A4: mov eax, dword ptr [esi + 0x60fc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xFC
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA1AA: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA1AF: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588DA1B3: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588DA1B9: cmp dword ptr [edx + 4], esi
        __asm _emit 0x39
        __asm _emit 0x72
        __asm _emit 0x04
        // 0x588DA1BC: je 0x588da1cd
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x588DA1BE: mov eax, dword ptr [esi + 0x12f4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF4
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA1C4: mov ecx, 0xfff0
        __asm _emit 0xB9
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA1C9: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588DA1CD: mov esi, dword ptr [esi + 0x12f8]
        __asm _emit 0x8B
        __asm _emit 0xB6
        __asm _emit 0xF8
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA1D3: mov edx, 0xfff0
        __asm _emit 0xBA
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DA1D8: and word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x588DA1DC: pop esi
        __asm _emit 0x5E
        // 0x588DA1DD: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
