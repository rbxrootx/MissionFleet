// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58748DE0 .. +0x3A bytes.
extern "C" __declspec(naked) void FUN_58748de0_58748DE0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 80h
        push 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 6ch]
        push ecx
        ; Exact mapped bytes E8 16 40 10 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x40
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 0ch
        push 80h
        push 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 84h]
        push eax
        ; Exact mapped bytes E8 FD 3F 10 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x3f
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 0ch
        mov esp, ebp
        pop ebp
        ret
    }
}
