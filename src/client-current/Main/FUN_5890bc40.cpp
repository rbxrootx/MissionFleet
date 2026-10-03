// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5890BC40 .. +0x5B bytes.
extern "C" __declspec(naked) void FUN_5890bc40() {
    __asm {
        // 0x5890BC40: push ecx
        __asm _emit 0x51
        // 0x5890BC41: mov edx, dword ptr [ecx + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x78
        // 0x5890BC44: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5890BC48: mov dword ptr [ecx + 0x80], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890BC4E: mov dword ptr [ecx + 0x7c], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x7C
        // 0x5890BC51: mov dword ptr [esp], edx
        __asm _emit 0x89
        __asm _emit 0x14
        __asm _emit 0x24
        // 0x5890BC54: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x5890BC56: je 0x5890bc80
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x5890BC58: fild dword ptr [esp + 8]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5890BC5C: mov eax, dword ptr [ecx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x6C
        // 0x5890BC5F: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x5890BC62: fidiv dword ptr [esp + 8]
        __asm _emit 0xDA
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5890BC66: fstp qword ptr [esp]
        __asm _emit 0xDD
        __asm _emit 0x1C
        __asm _emit 0x24
        // 0x5890BC69: push 0x589a2b64
        __asm _emit 0x68
        __asm _emit 0x64
        __asm _emit 0x2B
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5890BC6E: push 0x80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890BC73: push eax
        __asm _emit 0x50
        // 0x5890BC74: call 0x5874ba60
        __asm _emit 0xE8
        __asm _emit 0xE7
        __asm _emit 0xFD
        __asm _emit 0xE3
        __asm _emit 0xFF
        // 0x5890BC79: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x5890BC7C: pop ecx
        __asm _emit 0x59
        // 0x5890BC7D: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5890BC80: mov ecx, dword ptr [ecx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x6C
        // 0x5890BC83: push eax
        __asm _emit 0x50
        // 0x5890BC84: push 0x589a2b5c
        __asm _emit 0x68
        __asm _emit 0x5C
        __asm _emit 0x2B
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5890BC89: push 0x80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890BC8E: push ecx
        __asm _emit 0x51
        // 0x5890BC8F: call 0x5874ba60
        __asm _emit 0xE8
        __asm _emit 0xCC
        __asm _emit 0xFD
        __asm _emit 0xE3
        __asm _emit 0xFF
        // 0x5890BC94: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5890BC97: pop ecx
        __asm _emit 0x59
        // 0x5890BC98: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
