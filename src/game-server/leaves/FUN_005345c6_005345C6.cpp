// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005345C6 .. +0x4B bytes.
extern "C" __declspec(naked) void FUN_005345c6_005345C6() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 8
        ; Exact mapped bytes E8 79 17 00 00: call 0x535d51
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 18h
        ; Exact mapped bytes E8 4F 10 00 00: call 0x535632
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 28h
        ; Exact mapped bytes E8 63 17 00 00: call 0x535d51
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 38h
        ; Exact mapped bytes E8 39 10 00 00: call 0x535632
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 5822b8h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A3 25 FF FF: call 0x526bad
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x25
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
