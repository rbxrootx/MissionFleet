// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5857F070 .. +0x48 bytes.
extern "C" __declspec(naked) void FUN_5857f070_5857F070() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 134h], 0
        ; Exact mapped bytes 75 2F: jne 0x5857f0b2
        __asm _emit 0x75
        __asm _emit 0x2f
        push 0
        push 0c4h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        movzx edx, word ptr [ebp + 10h]
        push edx
        movzx eax, word ptr [ebp + 0ch]
        push eax
        push 80020111h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 EB D8 2A 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xd8
        __asm _emit 0x2a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 134h], 1
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
