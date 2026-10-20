// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042D62A .. +0xC5 bytes.
extern "C" __declspec(naked) void FUN_0042d62a_0042D62A() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov esi, esp
        push 10h
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 58h]
        push edx
        ; Exact mapped bytes FF 15 7C C1 68 00: call dword ptr [0x68c17c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0xc1
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 9B 77 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x77
        __asm _emit 0x03
        __asm _emit 0x00
        cmp eax, -1
        ; Exact mapped bytes 75 12: jne 0x42d66c
        __asm _emit 0x75
        __asm _emit 0x12
        push 0
        push 0
        push 670954h
        ; Exact mapped bytes E8 79 94 0C 00: call 0x4f6ae1
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x94
        __asm _emit 0x0c
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes EB 72: jmp 0x42d6de
        __asm _emit 0xeb
        __asm _emit 0x72
        mov esi, esp
        push 8
        push 464h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 58h]
        push eax
        ; Exact mapped bytes FF 15 44 C1 68 00: call dword ptr [0x68c144]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x44
        __asm _emit 0xc1
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 60 77 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x77
        __asm _emit 0x03
        __asm _emit 0x00
        cmp eax, -1
        ; Exact mapped bytes 75 12: jne 0x42d6a7
        __asm _emit 0x75
        __asm _emit 0x12
        push 0
        push 0
        push 670964h
        ; Exact mapped bytes E8 3E 94 0C 00: call 0x4f6ae1
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x94
        __asm _emit 0x0c
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes EB 37: jmp 0x42d6de
        __asm _emit 0xeb
        __asm _emit 0x37
        mov esi, esp
        push 7fffffffh
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 58h]
        push edx
        ; Exact mapped bytes FF 15 70 C1 68 00: call dword ptr [0x68c170]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x70
        __asm _emit 0xc1
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 2E 77 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x77
        __asm _emit 0x03
        __asm _emit 0x00
        cmp eax, -1
        ; Exact mapped bytes 75 12: jne 0x42d6d9
        __asm _emit 0x75
        __asm _emit 0x12
        push 0
        push 0
        push 67097ch
        ; Exact mapped bytes E8 0C 94 0C 00: call 0x4f6ae1
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x94
        __asm _emit 0x0c
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x42d6de
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 1
        pop esi
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 07 77 03 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x77
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
