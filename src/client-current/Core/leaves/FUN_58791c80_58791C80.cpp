// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58791C80 .. +0x2E bytes.
extern "C" __declspec(naked) void FUN_58791c80_58791C80() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 4], 0
        push 10h
        push 0
        mov edx, dword ptr [ebp - 4]
        add edx, 8
        push edx
        ; Exact mapped bytes E8 69 B1 0B 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xb1
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 0ch
        mov esp, ebp
        pop ebp
        ret
    }
}
