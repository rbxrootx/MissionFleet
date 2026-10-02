// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x588623B4 .. +0x5F bytes.
extern "C" __declspec(naked) void FUN_588623b4() {
    __asm {
        // 0x588623B4: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x588623B6: push ebp
        __asm _emit 0x55
        // 0x588623B7: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x588623B9: push esi
        __asm _emit 0x56
        // 0x588623BA: mov esi, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x588623BD: cmp esi, 1
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x01
        // 0x588623C0: jb 0x588623f1
        __asm _emit 0x72
        __asm _emit 0x2F
        // 0x588623C2: cmp esi, 0xd
        __asm _emit 0x83
        __asm _emit 0xFE
        __asm _emit 0x0D
        // 0x588623C5: ja 0x588623d0
        __asm _emit 0x77
        __asm _emit 0x09
        // 0x588623C7: mov eax, dword ptr [esi*8 + 0x588c3f6c]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0xF5
        __asm _emit 0x6C
        __asm _emit 0x3F
        __asm _emit 0x8C
        __asm _emit 0x58
        // 0x588623CE: jmp 0x58862410
        __asm _emit 0xEB
        __asm _emit 0x40
        // 0x588623D0: cmp esi, 0x718
        __asm _emit 0x81
        __asm _emit 0xFE
        __asm _emit 0x18
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588623D6: ja 0x588623f1
        __asm _emit 0x77
        __asm _emit 0x19
        // 0x588623D8: push 0x2d
        __asm _emit 0x6A
        __asm _emit 0x2D
        // 0x588623DA: push 0x588c3f70
        __asm _emit 0x68
        __asm _emit 0x70
        __asm _emit 0x3F
        __asm _emit 0x8C
        __asm _emit 0x58
        // 0x588623DF: push esi
        __asm _emit 0x56
        // 0x588623E0: call 0x58862335
        __asm _emit 0xE8
        __asm _emit 0x50
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588623E5: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x588623E8: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588623EA: je 0x588623f1
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x588623EC: mov eax, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x588623EF: jmp 0x58862410
        __asm _emit 0xEB
        __asm _emit 0x1F
        // 0x588623F1: lea ecx, [esi - 0x13]
        __asm _emit 0x8D
        __asm _emit 0x4E
        __asm _emit 0xED
        // 0x588623F4: cmp ecx, 0x11
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x11
        // 0x588623F7: ja 0x588623fe
        __asm _emit 0x77
        __asm _emit 0x05
        // 0x588623F9: push 0xd
        __asm _emit 0x6A
        __asm _emit 0x0D
        // 0x588623FB: pop eax
        __asm _emit 0x58
        // 0x588623FC: jmp 0x58862410
        __asm _emit 0xEB
        __asm _emit 0x12
        // 0x588623FE: push 0xe
        __asm _emit 0x6A
        __asm _emit 0x0E
        // 0x58862400: lea eax, [esi - 0xbc]
        __asm _emit 0x8D
        __asm _emit 0x86
        __asm _emit 0x44
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58862406: pop ecx
        __asm _emit 0x59
        // 0x58862407: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x58862409: sbb eax, eax
        __asm _emit 0x1B
        __asm _emit 0xC0
        // 0x5886240B: and eax, ecx
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x5886240D: add eax, 8
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x08
        // 0x58862410: pop esi
        __asm _emit 0x5E
        // 0x58862411: pop ebp
        __asm _emit 0x5D
        // 0x58862412: ret
        __asm _emit 0xC3
    }
}
