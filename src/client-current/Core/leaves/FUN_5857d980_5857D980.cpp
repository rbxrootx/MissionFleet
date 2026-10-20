// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5857D980 .. +0x49 bytes.
extern "C" __declspec(naked) void FUN_5857d980_5857D980() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        shl ecx, 10h
        or ecx, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 4], ecx
        push 0
        push 0
        push 0
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 4]
        push eax
        push 80011002h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 DA EF 2A 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xef
        __asm _emit 0x2a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 134h], 400h
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
