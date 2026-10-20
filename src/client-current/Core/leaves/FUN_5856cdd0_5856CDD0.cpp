// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5856CDD0 .. +0x10C bytes.
extern "C" __declspec(naked) void FUN_5856cdd0_5856CDD0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 78h], 0
        ; Exact mapped bytes 0F 85 98 00 00 00: jne 0x5856ce7e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + 61h]
        cmp edx, 1
        ; Exact mapped bytes 75 40: jne 0x5856ce32
        __asm _emit 0x75
        __asm _emit 0x40
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 6ch]
        sub edx, dword ptr [ecx + 64h]
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7E 29: jle 0x5856ce30
        __asm _emit 0x7e
        __asm _emit 0x29
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        add ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        cmp eax, dword ptr [edx + 64h]
        ; Exact mapped bytes 7E 09: jle 0x5856ce27
        __asm _emit 0x7e
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 64h]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [eax + 50h], ecx
        ; Exact mapped bytes EB 4A: jmp 0x5856ce7c
        __asm _emit 0xeb
        __asm _emit 0x4a
        mov edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx + 61h]
        cmp eax, 2
        ; Exact mapped bytes 75 3E: jne 0x5856ce7c
        __asm _emit 0x75
        __asm _emit 0x3e
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 70h]
        sub eax, dword ptr [edx + 68h]
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7E 29: jle 0x5856ce7c
        __asm _emit 0x7e
        __asm _emit 0x29
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        add edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        cmp ecx, dword ptr [eax + 68h]
        ; Exact mapped bytes 7E 09: jle 0x5856ce73
        __asm _emit 0x7e
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 68h]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 54h], edx
        ; Exact mapped bytes EB 5A: jmp 0x5856ced8
        __asm _emit 0xeb
        __asm _emit 0x5a
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 61h]
        cmp ecx, 1
        ; Exact mapped bytes 75 22: jne 0x5856ceac
        __asm _emit 0x75
        __asm _emit 0x22
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [ebp - 4]
        add eax, dword ptr [ecx + 78h]
        mov edx, dword ptr [ebp - 4]
        cmp eax, dword ptr [edx + 7ch]
        ; Exact mapped bytes 7C 0C: jl 0x5856ceaa
        __asm _emit 0x7c
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 7ch]
        mov dword ptr [eax + 50h], edx
        ; Exact mapped bytes EB 2C: jmp 0x5856ced8
        __asm _emit 0xeb
        __asm _emit 0x2c
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 61h]
        cmp ecx, 2
        ; Exact mapped bytes 75 20: jne 0x5856ced8
        __asm _emit 0x75
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [ebp - 4]
        add eax, dword ptr [ecx + 78h]
        mov edx, dword ptr [ebp - 4]
        cmp eax, dword ptr [edx + 7ch]
        ; Exact mapped bytes 7C 0C: jl 0x5856ced8
        __asm _emit 0x7c
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 7ch]
        mov dword ptr [eax + 54h], edx
        mov esp, ebp
        pop ebp
        ret
    }
}
