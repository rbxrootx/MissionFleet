// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588051C0 .. +0x4B bytes.
// Source symbol alias: FUN_588051c0.
extern "C" __declspec(naked) void FUN_588051c0() {
    __asm {
        // 0x588051C0: push esi
        __asm _emit 0x56
        // 0x588051C1: push edi
        __asm _emit 0x57
        // 0x588051C2: mov di, word ptr [esp + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588051C7: movzx eax, di
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC7
        // 0x588051CA: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588051CC: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588051D2: push eax
        __asm _emit 0x50
        // 0x588051D3: call 0x5878a160
        __asm _emit 0xE8
        __asm _emit 0x88
        __asm _emit 0x4F
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x588051D8: push 0x40000000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x588051DD: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588051DF: call 0x588da450
        __asm _emit 0xE8
        __asm _emit 0x6C
        __asm _emit 0x52
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x588051E4: cmp dword ptr [esi + 0x114], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588051EB: jne 0x58805206
        __asm _emit 0x75
        __asm _emit 0x19
        // 0x588051ED: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588051F3: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588051F6: cmp di, word ptr [edx + 0x350]
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xBA
        __asm _emit 0x50
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588051FD: jne 0x58805206
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x588051FF: mov dword ptr [esi + 0x70], 0x40000000
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x70
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x58805206: pop edi
        __asm _emit 0x5F
        // 0x58805207: pop esi
        __asm _emit 0x5E
        // 0x58805208: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
