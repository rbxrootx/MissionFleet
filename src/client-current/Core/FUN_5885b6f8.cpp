// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x5885B6F8 .. +0x21 bytes.
extern "C" __declspec(naked) void FUN_5885b6f8() {
    __asm {
        // 0x5885B6F8: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x5885B6FA: push ebp
        __asm _emit 0x55
        // 0x5885B6FB: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x5885B6FD: movzx eax, byte ptr [ebp + 8]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x5885B701: mov ecx, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x0C
        // 0x5885B704: cdq
        __asm _emit 0x99
        // 0x5885B705: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x5885B707: shl eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x1F
        // 0x5885B70A: or edx, 1
        __asm _emit 0x83
        __asm _emit 0xCA
        __asm _emit 0x01
        // 0x5885B70D: or eax, 0x7ff00000
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xF0
        __asm _emit 0x7F
        // 0x5885B712: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x5885B714: mov dword ptr [ecx + 4], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x5885B717: pop ebp
        __asm _emit 0x5D
        // 0x5885B718: ret
        __asm _emit 0xC3
    }
}
