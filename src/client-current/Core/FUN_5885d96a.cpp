// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x5885D96A .. +0x35 bytes.
extern "C" __declspec(naked) void FUN_5885d96a() {
    __asm {
        // 0x5885D96A: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x5885D96C: push ebp
        __asm _emit 0x55
        // 0x5885D96D: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x5885D96F: mov edx, dword ptr [ecx + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x64
        // 0x5885D972: lea eax, [edx + 4]
        __asm _emit 0x8D
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x5885D975: mov dword ptr [ecx + 0x64], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x64
        // 0x5885D978: mov ecx, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x0A
        // 0x5885D97A: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5885D97C: jne 0x5885d992
        __asm _emit 0x75
        __asm _emit 0x14
        // 0x5885D97E: call 0x5886246f
        __asm _emit 0xE8
        __asm _emit 0xEC
        __asm _emit 0x4A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885D983: mov dword ptr [eax], 0x16
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5885D989: call 0x58850fab
        __asm _emit 0xE8
        __asm _emit 0x1D
        __asm _emit 0x36
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5885D98E: xor al, al
        __asm _emit 0x32
        __asm _emit 0xC0
        // 0x5885D990: jmp 0x5885d99b
        __asm _emit 0xEB
        __asm _emit 0x09
        // 0x5885D992: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x5885D995: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x5885D997: mov dword ptr [ecx], eax
        __asm _emit 0x89
        __asm _emit 0x01
        // 0x5885D999: mov al, 1
        __asm _emit 0xB0
        __asm _emit 0x01
        // 0x5885D99B: pop ebp
        __asm _emit 0x5D
        // 0x5885D99C: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
