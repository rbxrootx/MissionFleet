// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5851EFF0 .. +0x2B bytes.
extern "C" __declspec(naked) void FUN_5851eff0_5851EFF0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 D6 B0 33 00: call 0x5885a0d3
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xb0
        __asm _emit 0x33
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], -1
        ; Exact mapped bytes 75 06: jne 0x5851f00f
        __asm _emit 0x75
        __asm _emit 0x06
        xor al, al
        ; Exact mapped bytes EB 0C: jmp 0x5851f019
        __asm _emit 0xeb
        __asm _emit 0x0c
        ; Exact mapped bytes EB 0A: jmp 0x5851f019
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp + 8]
        mov dl, byte ptr [ebp - 4]
        mov byte ptr [ecx], dl
        mov al, 1
        mov esp, ebp
    }
}
