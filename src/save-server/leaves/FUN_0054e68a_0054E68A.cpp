// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054E68A .. +0x44 bytes.
extern "C" __declspec(naked) void FUN_0054e68a_0054E68A() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0
        push 0c2h
        push 67bee8h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 B3 BB F8 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xbb
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        add ecx, 14h
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 5E DE F7 FF: call 0x4cc51a
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xde
        __asm _emit 0xf7
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        or edx, 1
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
