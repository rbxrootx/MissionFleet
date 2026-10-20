// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5856D330 .. +0x97 bytes.
extern "C" __declspec(naked) void FUN_5856d330_5856D330() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 61h]
        cmp ecx, 1
        ; Exact mapped bytes 75 39: jne 0x5856d37e
        __asm _emit 0x75
        __asm _emit 0x39
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 6ch]
        sub ecx, dword ptr [eax + 74h]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 50h]
        sub eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 7D 0B: jge 0x5856d36d
        __asm _emit 0x7d
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 50h], edx
        ; Exact mapped bytes EB 0F: jmp 0x5856d37c
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 50h]
        sub ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 50h], ecx
        ; Exact mapped bytes EB 43: jmp 0x5856d3c1
        __asm _emit 0xeb
        __asm _emit 0x43
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 61h]
        cmp ecx, 2
        ; Exact mapped bytes 75 37: jne 0x5856d3c1
        __asm _emit 0x75
        __asm _emit 0x37
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 70h]
        sub ecx, dword ptr [eax + 74h]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 54h]
        sub eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 7D 0B: jge 0x5856d3b2
        __asm _emit 0x7d
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 54h], edx
        ; Exact mapped bytes EB 0F: jmp 0x5856d3c1
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 54h]
        sub ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 54h], ecx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
