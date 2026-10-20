// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004996F0 .. +0x50 bytes.
extern "C" __declspec(naked) void FUN_004996f0_004996F0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 4]
        ; Exact mapped bytes 72 21: jb 0x499726
        __asm _emit 0x72
        __asm _emit 0x21
        push 5caf6ch
        push 0
        push 338h
        push 5cae8ch
        push 2
        ; Exact mapped bytes E8 13 74 01 00: call 0x4b0b30
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x74
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x499726
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 CE: jne 0x4996fa
        __asm _emit 0x75
        __asm _emit 0xce
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ecx + edx*8]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
