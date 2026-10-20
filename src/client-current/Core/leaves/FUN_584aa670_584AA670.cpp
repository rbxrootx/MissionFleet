// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584AA670 .. +0x22 bytes.
extern "C" __declspec(naked) void FUN_584aa670_584AA670() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 CD 2D 3A 00: call 0x5884d452
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x2d
        __asm _emit 0x3a
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
