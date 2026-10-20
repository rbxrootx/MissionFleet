// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C46F0 .. +0x27 bytes.
extern "C" __declspec(naked) void FUN_587c46f0() {
    __asm {
        push ecx
        push esi
        mov esi, ecx
        push 0
        lea ecx, [esp + 8]
        ; Exact mapped bytes E8 01 D0 1A 00: call 0x58971700
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xd0
        __asm _emit 0x1a
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4]
        cmp eax, -1
        ; Exact mapped bytes 73 04: jae 0x587c470b
        __asm _emit 0x73
        __asm _emit 0x04
        inc eax
        mov dword ptr [esi + 4], eax
        lea ecx, [esp + 4]
        ; Exact mapped bytes E8 14 D0 1A 00: call 0x58971728
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xd0
        __asm _emit 0x1a
        __asm _emit 0x00
        pop esi
        pop ecx
        ret
    }
}
