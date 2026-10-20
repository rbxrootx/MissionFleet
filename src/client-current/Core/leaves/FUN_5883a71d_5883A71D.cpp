// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883A71D .. +0x2D bytes.
extern "C" __declspec(naked) void FUN_5883a71d_5883A71D() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push dword ptr [ebp + 10h]
        and dword ptr [ebp - 4], 0
        ; Exact mapped bytes E8 90 1A 00 00: call 0x5883c1bd
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov ecx, dword ptr [ebp + 0ch]
        push eax
        push dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 82 0F 00 00: call 0x5883b6bc
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 6D AB C8 FF: call 0x584c52b0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xab
        __asm _emit 0xc8
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ret
    }
}
