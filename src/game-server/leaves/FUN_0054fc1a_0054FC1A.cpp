// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054FC1A .. +0x44 bytes.
extern "C" __declspec(naked) void FUN_0054fc1a_0054FC1A() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0
        push 0c2h
        push 5cf710h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 23 B5 FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xb5
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        add ecx, 14h
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 2E D8 F9 FF: call 0x4ed47a
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xd8
        __asm _emit 0xf9
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
