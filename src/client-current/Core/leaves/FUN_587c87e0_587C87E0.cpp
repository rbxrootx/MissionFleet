// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C87E0 .. +0x2E bytes.
extern "C" __declspec(naked) void FUN_587c87e0_587C87E0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C0 38 CC FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x38
        __asm _emit 0xcc
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E6 36 CC FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x36
        __asm _emit 0xcc
        __asm _emit 0xff
        imul eax, dword ptr [ebp + 0ch]
        add esi, eax
        mov eax, dword ptr [ebp + 8]
        movzx eax, word ptr [esi + eax*2]
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
