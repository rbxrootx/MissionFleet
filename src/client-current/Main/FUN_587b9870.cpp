// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587B9870 .. +0x32 bytes.
extern "C" __declspec(naked) void FUN_587b9870() {
    __asm {
        // 0x587B9870: push esi
        __asm _emit 0x56
        // 0x587B9871: push edi
        __asm _emit 0x57
        // 0x587B9872: mov edi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587B9876: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B9878: push edi
        __asm _emit 0x57
        // 0x587B9879: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587B987B: call dword ptr [0x5898c1a8]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xA8
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587B9881: inc eax
        __asm _emit 0x40
        // 0x587B9882: push eax
        __asm _emit 0x50
        // 0x587B9883: movzx eax, word ptr [esp + 0x14]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587B9888: push edi
        __asm _emit 0x57
        // 0x587B9889: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587B988B: or eax, 0x10000
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587B9890: push eax
        __asm _emit 0x50
        // 0x587B9891: push 0x8001040a
        __asm _emit 0x68
        __asm _emit 0x0A
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x80
        // 0x587B9896: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587B9898: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0xD3
        __asm _emit 0x73
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587B989D: pop edi
        __asm _emit 0x5F
        // 0x587B989E: pop esi
        __asm _emit 0x5E
        // 0x587B989F: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
