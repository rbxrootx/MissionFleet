// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5882A300 .. +0x35 bytes.
extern "C" __declspec(naked) void FUN_5882a300_5882A300() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A0 1D C6 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x1d
        __asm _emit 0xc6
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C6 1B C6 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x1b
        __asm _emit 0xc6
        __asm _emit 0xff
        imul eax, dword ptr [ebp + 0ch]
        add esi, eax
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F AF 05 98 5F 90 58: imul eax, dword ptr [0x58905f98]
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0x05
        __asm _emit 0x98
        __asm _emit 0x5f
        __asm _emit 0x90
        __asm _emit 0x58
        movzx eax, word ptr [esi + eax]
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
