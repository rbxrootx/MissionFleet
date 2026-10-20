// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5856CC80 .. +0x14C bytes.
extern "C" __declspec(naked) void FUN_5856cc80_5856CC80() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 78h], 0
        ; Exact mapped bytes 0F 85 C0 00 00 00: jne 0x5856cd56
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + 61h]
        cmp edx, 1
        ; Exact mapped bytes 75 54: jne 0x5856ccf6
        __asm _emit 0x75
        __asm _emit 0x54
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 6ch]
        sub edx, dword ptr [ecx + 64h]
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7E 3D: jle 0x5856ccf4
        __asm _emit 0x7e
        __asm _emit 0x3d
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 64h]
        sub edx, dword ptr [ecx + 4]
        add edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        cmp edx, dword ptr [eax + 74h]
        ; Exact mapped bytes 7E 17: jle 0x5856cce5
        __asm _emit 0x7e
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 64h]
        add edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        sub edx, dword ptr [eax + 74h]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 50h], edx
        ; Exact mapped bytes EB 0F: jmp 0x5856ccf4
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        sub eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes EB 5E: jmp 0x5856cd54
        __asm _emit 0xeb
        __asm _emit 0x5e
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + 61h]
        cmp eax, 2
        ; Exact mapped bytes 75 52: jne 0x5856cd54
        __asm _emit 0x75
        __asm _emit 0x52
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 70h]
        sub eax, dword ptr [edx + 68h]
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7E 3D: jle 0x5856cd54
        __asm _emit 0x7e
        __asm _emit 0x3d
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 68h]
        sub eax, dword ptr [edx + 8]
        add eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        cmp eax, dword ptr [ecx + 74h]
        ; Exact mapped bytes 7E 17: jle 0x5856cd45
        __asm _emit 0x7e
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 68h]
        add eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        sub eax, dword ptr [ecx + 74h]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 54h], eax
        ; Exact mapped bytes EB 0F: jmp 0x5856cd54
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        sub ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 54h], ecx
        ; Exact mapped bytes EB 72: jmp 0x5856cdc8
        __asm _emit 0xeb
        __asm _emit 0x72
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 61h]
        cmp ecx, 1
        ; Exact mapped bytes 75 2E: jne 0x5856cd90
        __asm _emit 0x75
        __asm _emit 0x2e
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 6ch]
        mov ecx, dword ptr [ebp - 4]
        add eax, dword ptr [ecx + 78h]
        mov edx, dword ptr [ebp - 4]
        sub eax, dword ptr [edx + 4]
        mov ecx, dword ptr [ebp - 4]
        cmp eax, dword ptr [ecx + 74h]
        ; Exact mapped bytes 7D 12: jge 0x5856cd8e
        __asm _emit 0x7d
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 4]
        sub ecx, dword ptr [eax + 78h]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 50h], ecx
        ; Exact mapped bytes EB 38: jmp 0x5856cdc8
        __asm _emit 0xeb
        __asm _emit 0x38
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 61h]
        cmp ecx, 2
        ; Exact mapped bytes 75 2C: jne 0x5856cdc8
        __asm _emit 0x75
        __asm _emit 0x2c
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 70h]
        mov ecx, dword ptr [ebp - 4]
        add eax, dword ptr [ecx + 78h]
        mov edx, dword ptr [ebp - 4]
        sub eax, dword ptr [edx + 8]
        mov ecx, dword ptr [ebp - 4]
        cmp eax, dword ptr [ecx + 74h]
        ; Exact mapped bytes 7D 12: jge 0x5856cdc8
        __asm _emit 0x7d
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 8]
        sub ecx, dword ptr [eax + 78h]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 54h], ecx
        mov esp, ebp
        pop ebp
        ret
    }
}
