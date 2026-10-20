// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584F9A60 .. +0x2D bytes.
extern "C" __declspec(naked) void FUN_584f9a60_584F9A60() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 588a33b8h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 14h]
        mov dword ptr [ebp - 8], edx
        push 4
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 AE 75 33 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x75
        __asm _emit 0x33
        __asm _emit 0x00
        add esp, 8
        mov esp, ebp
        pop ebp
        ret
    }
}
