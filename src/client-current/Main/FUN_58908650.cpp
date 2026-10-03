// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58908650 .. +0x22 bytes.
extern "C" __declspec(naked) void FUN_58908650() {
    __asm {
        // 0x58908650: mov eax, dword ptr [ecx + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58908656: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58908658: jne 0x58908664
        __asm _emit 0x75
        __asm _emit 0x0A
        // 0x5890865A: mov eax, dword ptr [ecx + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x7C
        // 0x5890865D: mov dword ptr [ecx + 0x80], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58908663: ret
        __asm _emit 0xC3
        // 0x58908664: mov eax, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x10
        // 0x58908667: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58908669: je 0x58908671
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5890866B: mov dword ptr [ecx + 0x80], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58908671: ret
        __asm _emit 0xC3
    }
}
