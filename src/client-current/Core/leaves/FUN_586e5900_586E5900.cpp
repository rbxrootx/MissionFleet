// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586E5900 .. +0x3E bytes.
extern "C" __declspec(naked) void FUN_586e5900_586E5900() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 568h], 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 4e0h], edx
        push 80h
        push 0
        mov eax, dword ptr [ebp - 4]
        add eax, 4e8h
        push eax
        ; Exact mapped bytes E8 DB 74 16 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x74
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 0ch
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
