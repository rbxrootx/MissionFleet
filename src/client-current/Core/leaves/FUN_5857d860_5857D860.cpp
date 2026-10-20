// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5857D860 .. +0x59 bytes.
extern "C" __declspec(naked) void FUN_5857d860_5857D860() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 134h], 0
        ; Exact mapped bytes 75 3E: jne 0x5857d8b3
        __asm _emit 0x75
        __asm _emit 0x3e
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 4]
        shl ecx, 10h
        movzx edx, word ptr [ebp + 8]
        or ecx, edx
        mov dword ptr [ebp - 4], ecx
        push 0
        push 16h
        mov eax, dword ptr [ebp + 0ch]
        push eax
        push 4
        mov ecx, dword ptr [ebp - 4]
        push ecx
        push 80011005h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 EA F0 2A 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xf0
        __asm _emit 0x2a
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 134h], 100h
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
