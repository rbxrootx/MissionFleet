// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00499580 .. +0x80 bytes.
extern "C" __declspec(naked) void FUN_00499580_00499580() {
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
        ; Exact mapped bytes 72 21: jb 0x4995b6
        __asm _emit 0x72
        __asm _emit 0x21
        push 5caf44h
        push 0
        push 354h
        push 5cae8ch
        push 2
        ; Exact mapped bytes E8 83 75 01 00: call 0x4b0b30
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x75
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x4995b6
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 CE: jne 0x49958a
        __asm _emit 0x75
        __asm _emit 0xce
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 75 21: jne 0x4995e5
        __asm _emit 0x75
        __asm _emit 0x21
        push 5cae74h
        push 0
        push 355h
        push 5cae8ch
        push 2
        ; Exact mapped bytes E8 54 75 01 00: call 0x4b0b30
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x75
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x4995e5
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D1: jne 0x4995bc
        __asm _emit 0x75
        __asm _emit 0xd1
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp + 8]
        mov al, byte ptr [eax + ecx*8 + 4]
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
