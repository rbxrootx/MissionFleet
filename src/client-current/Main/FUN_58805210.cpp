// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58805210 .. +0x48 bytes.
// Source symbol alias: FUN_58805210.
extern "C" __declspec(naked) void FUN_58805210() {
    __asm {
        // 0x58805210: push esi
        __asm _emit 0x56
        // 0x58805211: push edi
        __asm _emit 0x57
        // 0x58805212: mov di, word ptr [esp + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58805217: movzx eax, di
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC7
        // 0x5880521A: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5880521C: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58805222: push eax
        __asm _emit 0x50
        // 0x58805223: call 0x5878a160
        __asm _emit 0xE8
        __asm _emit 0x38
        __asm _emit 0x4F
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x58805228: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5880522A: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5880522C: call 0x588da450
        __asm _emit 0xE8
        __asm _emit 0x1F
        __asm _emit 0x52
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58805231: cmp dword ptr [esi + 0x114], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58805238: jne 0x58805253
        __asm _emit 0x75
        __asm _emit 0x19
        // 0x5880523A: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58805240: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x58805243: cmp di, word ptr [edx + 0x350]
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xBA
        __asm _emit 0x50
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5880524A: jne 0x58805253
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x5880524C: mov dword ptr [esi + 0x70], 0
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x70
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58805253: pop edi
        __asm _emit 0x5F
        // 0x58805254: pop esi
        __asm _emit 0x5E
        // 0x58805255: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
