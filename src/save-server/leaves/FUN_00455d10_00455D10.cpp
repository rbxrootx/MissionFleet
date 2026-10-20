// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00455D10 .. +0x50 bytes.
extern "C" __declspec(naked) void FUN_00455d10_00455D10() {
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
        ; Exact mapped bytes 72 21: jb 0x455d46
        __asm _emit 0x72
        __asm _emit 0x21
        push 6776f4h
        push 0
        push 337h
        push 677614h
        push 2
        ; Exact mapped bytes E8 23 71 01 00: call 0x46ce60
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x71
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x455d46
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 CE: jne 0x455d1a
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
