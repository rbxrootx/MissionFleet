// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x5885A379 .. +0x2D bytes.
extern "C" __declspec(naked) void FUN_5885a379() {
    __asm {
        // 0x5885A379: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x5885A37B: push ebp
        __asm _emit 0x55
        // 0x5885A37C: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x5885A37E: mov edx, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x0C
        // 0x5885A381: sub dword ptr [edx + 8], 1
        __asm _emit 0x83
        __asm _emit 0x6A
        __asm _emit 0x08
        __asm _emit 0x01
        // 0x5885A385: jns 0x5885a398
        __asm _emit 0x79
        __asm _emit 0x11
        // 0x5885A387: push dword ptr [ebp + 0x10]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x10
        // 0x5885A38A: push edx
        __asm _emit 0x52
        // 0x5885A38B: push dword ptr [ebp + 8]
        __asm _emit 0xFF
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x5885A38E: call 0x588710fd
        __asm _emit 0xE8
        __asm _emit 0x6A
        __asm _emit 0x6D
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x5885A393: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5885A396: pop ebp
        __asm _emit 0x5D
        // 0x5885A397: ret
        __asm _emit 0xC3
        // 0x5885A398: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x5885A39A: mov cl, byte ptr [ebp + 8]
        __asm _emit 0x8A
        __asm _emit 0x4D
        __asm _emit 0x08
        // 0x5885A39D: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        // 0x5885A39F: inc dword ptr [edx]
        __asm _emit 0xFF
        __asm _emit 0x02
        // 0x5885A3A1: movzx eax, cl
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xC1
        // 0x5885A3A4: pop ebp
        __asm _emit 0x5D
        // 0x5885A3A5: ret
        __asm _emit 0xC3
    }
}
