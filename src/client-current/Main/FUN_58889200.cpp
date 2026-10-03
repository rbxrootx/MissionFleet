// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58889200 .. +0xC2 bytes.
extern "C" __declspec(naked) void FUN_58889200() {
    __asm {
        // 0x58889200: push esi
        __asm _emit 0x56
        // 0x58889201: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58889203: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x58889207: mov ecx, 0xe1ff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xE1
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888920C: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x5888920F: mov edx, 0x100
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58889214: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC2
        // 0x58889217: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x5888921B: or word ptr [esi + 0x24], 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x05
        // 0x58889220: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x58889223: mov dword ptr [esi + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x58889226: mov dword ptr [esi + 0x54], 0
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x54
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888922D: mov ecx, dword ptr [0x58a24580]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58889233: cmp ecx, dword ptr [0x58a24598]
        __asm _emit 0x3B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58889239: jne 0x58889266
        __asm _emit 0x75
        __asm _emit 0x2B
        // 0x5888923B: mov ecx, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x78
        // 0x5888923E: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58889240: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x58889243: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58889245: mov ecx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x68
        // 0x58889248: mov edx, dword ptr [ecx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x18
        // 0x5888924B: sub edx, dword ptr [ecx + 0x20]
        __asm _emit 0x2B
        __asm _emit 0x51
        __asm _emit 0x20
        // 0x5888924E: mov eax, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x58889251: add edx, dword ptr [esi + 0x54]
        __asm _emit 0x03
        __asm _emit 0x56
        __asm _emit 0x54
        // 0x58889254: push edx
        __asm _emit 0x52
        // 0x58889255: push eax
        __asm _emit 0x50
        // 0x58889256: call 0x587b67a0
        __asm _emit 0xE8
        __asm _emit 0x45
        __asm _emit 0xD5
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x5888925B: mov ecx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x68
        // 0x5888925E: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58889260: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x58889263: pop esi
        __asm _emit 0x5E
        // 0x58889264: jmp eax
        __asm _emit 0xFF
        __asm _emit 0xE0
        // 0x58889266: mov ecx, dword ptr [0x58a247f4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF4
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5888926C: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5888926E: call 0x588f3f70
        __asm _emit 0xE8
        __asm _emit 0xFD
        __asm _emit 0xAC
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x58889273: mov ecx, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x78
        // 0x58889276: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58889278: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5888927A: je 0x588892a2
        __asm _emit 0x74
        __asm _emit 0x26
        // 0x5888927C: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x5888927F: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58889281: mov ecx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x68
        // 0x58889284: mov edx, dword ptr [ecx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x18
        // 0x58889287: sub edx, dword ptr [ecx + 0x20]
        __asm _emit 0x2B
        __asm _emit 0x51
        __asm _emit 0x20
        // 0x5888928A: mov eax, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x5888928D: add edx, dword ptr [esi + 0x54]
        __asm _emit 0x03
        __asm _emit 0x56
        __asm _emit 0x54
        // 0x58889290: push edx
        __asm _emit 0x52
        // 0x58889291: push eax
        __asm _emit 0x50
        // 0x58889292: call 0x587b67a0
        __asm _emit 0xE8
        __asm _emit 0x09
        __asm _emit 0xD5
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x58889297: mov ecx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x68
        // 0x5888929A: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x5888929C: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x5888929F: pop esi
        __asm _emit 0x5E
        // 0x588892A0: jmp eax
        __asm _emit 0xFF
        __asm _emit 0xE0
        // 0x588892A2: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x588892A5: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588892A7: mov ecx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x68
        // 0x588892AA: mov edx, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x54
        // 0x588892AD: mov eax, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x588892B0: push edx
        __asm _emit 0x52
        // 0x588892B1: push eax
        __asm _emit 0x50
        // 0x588892B2: call 0x587b67a0
        __asm _emit 0xE8
        __asm _emit 0xE9
        __asm _emit 0xD4
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x588892B7: mov ecx, dword ptr [esi + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x68
        // 0x588892BA: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588892BC: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x588892BF: pop esi
        __asm _emit 0x5E
        // 0x588892C0: jmp eax
        __asm _emit 0xFF
        __asm _emit 0xE0
    }
}
