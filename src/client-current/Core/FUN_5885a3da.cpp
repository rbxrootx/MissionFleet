// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x5885A3DA .. +0x3B bytes.
extern "C" __declspec(naked) void FUN_5885a3da() {
    __asm {
        // 0x5885A3DA: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x5885A3DC: push ebp
        __asm _emit 0x55
        // 0x5885A3DD: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x5885A3DF: cmp dword ptr [ebp + 8], 0
        __asm _emit 0x83
        __asm _emit 0x7D
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5885A3E3: jne 0x5885a3fa
        __asm _emit 0x75
        __asm _emit 0x15
        // 0x5885A3E5: call 0x5886246f
        __asm _emit 0xE8
        __asm _emit 0x85
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A3EA: mov dword ptr [eax], 0x16
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A3F0: call 0x58850fab
        __asm _emit 0xE8
        __asm _emit 0xB6
        __asm _emit 0x6B
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885A3F5: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFF
        // 0x5885A3F8: pop ebp
        __asm _emit 0x5D
        // 0x5885A3F9: ret
        __asm _emit 0xC3
        // 0x5885A3FA: mov eax, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x0C
        // 0x5885A3FD: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5885A3FF: je 0x5885a3e5
        __asm _emit 0x74
        __asm _emit 0xE4
        // 0x5885A401: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5885A403: push dword ptr [eax + 4]
        __asm _emit 0xFF
        __asm _emit 0x70
        __asm _emit 0x04
        // 0x5885A406: push dword ptr [eax]
        __asm _emit 0xFF
        __asm _emit 0x30
        // 0x5885A408: push dword ptr [ebp + 8]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x5885A40B: call 0x5885a706
        __asm _emit 0xE8
        __asm _emit 0xF6
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A410: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x5885A413: pop ebp
        __asm _emit 0x5D
        // 0x5885A414: ret
        __asm _emit 0xC3
    }
}
