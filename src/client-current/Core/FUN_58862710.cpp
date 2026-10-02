// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x58862710 .. +0x44 bytes.
extern "C" __declspec(naked) void FUN_58862710() {
    __asm {
        // 0x58862710: call 0x58873129
        __asm _emit 0xE8
        __asm _emit 0x14
        __asm _emit 0x0A
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x58862715: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58862717: je 0x58862721
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x58862719: push 0x16
        __asm _emit 0x6A
        __asm _emit 0x16
        // 0x5886271B: call 0x5887316e
        __asm _emit 0xE8
        __asm _emit 0x4E
        __asm _emit 0x0A
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x58862720: pop ecx
        __asm _emit 0x59
        // 0x58862721: test byte ptr [0x58907428], 2
        __asm _emit 0xF6
        __asm _emit 0x05
        __asm _emit 0x28
        __asm _emit 0x74
        __asm _emit 0x90
        __asm _emit 0x58
        __asm _emit 0x02
        // 0x58862728: je 0x5886274c
        __asm _emit 0x74
        __asm _emit 0x22
        // 0x5886272A: push 0x17
        __asm _emit 0x6A
        __asm _emit 0x17
        // 0x5886272C: call dword ptr [0x588943b8]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xB8
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        // 0x58862732: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58862734: je 0x5886273b
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x58862736: push 7
        __asm _emit 0x6A
        __asm _emit 0x07
        // 0x58862738: pop ecx
        __asm _emit 0x59
        // 0x58862739: int 0x29
        __asm _emit 0xCD
        __asm _emit 0x29
        // 0x5886273B: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5886273D: push 0x40000015
        __asm _emit 0x68
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x58862742: push 3
        __asm _emit 0x6A
        __asm _emit 0x03
        // 0x58862744: call 0x58850daf
        __asm _emit 0xE8
        __asm _emit 0x66
        __asm _emit 0xE6
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x58862749: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5886274C: push 3
        __asm _emit 0x6A
        __asm _emit 0x03
        // 0x5886274E: call 0x58857b3d
        __asm _emit 0xE8
        __asm _emit 0xEA
        __asm _emit 0x53
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58862753: int3
        __asm _emit 0xCC
    }
}
