// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58500D40 .. +0x43 bytes.
extern "C" __declspec(naked) void FUN_58500d40_58500D40() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 8], 0
        lea eax, [ebp - 8]
        push eax
        push 4
        mov ecx, dword ptr [ebp - 4]
        push ecx
        push 58500c20h
        push 0
        push 0
        ; Exact mapped bytes E8 07 72 35 00: call 0x58857f6f
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x72
        __asm _emit 0x35
        __asm _emit 0x00
        add esp, 18h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 34h], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 34h]
        push ecx
        ; Exact mapped bytes FF 15 14 42 89 58: call dword ptr [0x58894214]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
