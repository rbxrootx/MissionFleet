// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042B9A7 .. +0x57 bytes.
extern "C" __declspec(naked) void FUN_0042b9a7_0042B9A7() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov esi, esp
        mov eax, dword ptr [ebp + 8]
        push eax
        push 464h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 48h]
        mov eax, dword ptr [edx + 1ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        push edx
        ; Exact mapped bytes FF 15 44 C1 68 00: call dword ptr [0x68c144]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x44
        __asm _emit 0xc1
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 11 94 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x94
        __asm _emit 0x03
        __asm _emit 0x00
        cmp eax, -1
        ; Exact mapped bytes 75 04: jne 0x42b9e8
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x42b9ed
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 1
        pop esi
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 F8 93 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x93
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
