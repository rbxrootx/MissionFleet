// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00480540 .. +0x26 bytes.
extern "C" __declspec(naked) void FUN_00480540_00480540() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 8]
        sar eax, 5
        mov ecx, dword ptr [ebp + 8]
        and ecx, 1fh
        imul ecx, ecx, 24h
        mov edx, dword ptr [eax*4 + 6889a0h]
        lea eax, [edx + ecx + 0ch]
        push eax
        ; Exact mapped bytes FF 15 6C B9 68 00: call dword ptr [0x68b96c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x6c
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        pop ebp
        ret
    }
}
