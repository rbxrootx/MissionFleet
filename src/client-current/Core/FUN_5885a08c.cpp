// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x5885A08C .. +0x3C bytes.
extern "C" __declspec(naked) void FUN_5885a08c() {
    __asm {
        // 0x5885A08C: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x5885A08E: push ebp
        __asm _emit 0x55
        // 0x5885A08F: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x5885A091: mov edx, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x08
        // 0x5885A094: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x5885A096: jne 0x5885a0ad
        __asm _emit 0x75
        __asm _emit 0x15
        // 0x5885A098: call 0x5886246f
        __asm _emit 0xE8
        __asm _emit 0xD2
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A09D: mov dword ptr [eax], 0x16
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885A0A3: call 0x58850fab
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x6F
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885A0A8: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFF
        // 0x5885A0AB: pop ebp
        __asm _emit 0x5D
        // 0x5885A0AC: ret
        __asm _emit 0xC3
        // 0x5885A0AD: sub dword ptr [edx + 8], 1
        __asm _emit 0x83
        __asm _emit 0x6A
        __asm _emit 0x08
        __asm _emit 0x01
        // 0x5885A0B1: jns 0x5885a0bc
        __asm _emit 0x79
        __asm _emit 0x09
        // 0x5885A0B3: push edx
        __asm _emit 0x52
        // 0x5885A0B4: call 0x5886f03e
        __asm _emit 0xE8
        __asm _emit 0x85
        __asm _emit 0x4F
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5885A0B9: pop ecx
        __asm _emit 0x59
        // 0x5885A0BA: pop ebp
        __asm _emit 0x5D
        // 0x5885A0BB: ret
        __asm _emit 0xC3
        // 0x5885A0BC: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x5885A0BE: mov cl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x08
        // 0x5885A0C0: inc eax
        __asm _emit 0x40
        // 0x5885A0C1: mov dword ptr [edx], eax
        __asm _emit 0x89
        __asm _emit 0x02
        // 0x5885A0C3: movzx eax, cl
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC1
        // 0x5885A0C6: pop ebp
        __asm _emit 0x5D
        // 0x5885A0C7: ret
        __asm _emit 0xC3
    }
}
