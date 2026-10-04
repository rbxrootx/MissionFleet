// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58735430 .. +0x39 bytes.
// Source symbol alias: FUN_58735430.
extern "C" __declspec(naked) void FUN_58735430() {
    __asm {
        // 0x58735430: mov edx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58735434: push esi
        __asm _emit 0x56
        // 0x58735435: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58735437: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58735439: push edi
        __asm _emit 0x57
        // 0x5873543A: mov dword ptr [esi + 0x18], 0xf
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x18
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58735441: mov dword ptr [esi + 0x14], 0
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58735448: mov byte ptr [esi + 4], 0
        __asm _emit 0xC6
        __asm _emit 0x46
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5873544C: lea edi, [eax + 1]
        __asm _emit 0x8D
        __asm _emit 0x78
        __asm _emit 0x01
        // 0x5873544F: nop
        __asm _emit 0x90
        // 0x58735450: mov cl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x08
        // 0x58735452: inc eax
        __asm _emit 0x40
        // 0x58735453: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x58735455: jne 0x58735450
        __asm _emit 0x75
        __asm _emit 0xF9
        // 0x58735457: sub eax, edi
        __asm _emit 0x2B
        __asm _emit 0xC7
        // 0x58735459: push eax
        __asm _emit 0x50
        // 0x5873545A: push edx
        __asm _emit 0x52
        // 0x5873545B: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5873545D: call 0x58735000
        __asm _emit 0xE8
        __asm _emit 0x9E
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58735462: pop edi
        __asm _emit 0x5F
        // 0x58735463: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x58735465: pop esi
        __asm _emit 0x5E
        // 0x58735466: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
