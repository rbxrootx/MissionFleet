// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5856D3D0 .. +0xA7 bytes.
extern "C" __declspec(naked) void FUN_5856d3d0_5856D3D0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 61h]
        cmp ecx, 1
        ; Exact mapped bytes 75 42: jne 0x5856d425
        __asm _emit 0x75
        __asm _emit 0x42
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 50h]
        add eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        add eax, dword ptr [ecx + 80h]
        mov edx, dword ptr [ebp - 4]
        cmp eax, dword ptr [edx + 64h]
        ; Exact mapped bytes 7C 17: jl 0x5856d414
        __asm _emit 0x7c
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 64h]
        sub edx, dword ptr [ecx + 80h]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 50h], edx
        ; Exact mapped bytes EB 0F: jmp 0x5856d423
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 50h]
        add edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 50h], edx
        ; Exact mapped bytes EB 4C: jmp 0x5856d471
        __asm _emit 0xeb
        __asm _emit 0x4c
        mov ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx + 61h]
        cmp edx, 2
        ; Exact mapped bytes 75 40: jne 0x5856d471
        __asm _emit 0x75
        __asm _emit 0x40
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 54h]
        add ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 4]
        add ecx, dword ptr [edx + 84h]
        mov eax, dword ptr [ebp - 4]
        cmp ecx, dword ptr [eax + 68h]
        ; Exact mapped bytes 7C 17: jl 0x5856d462
        __asm _emit 0x7c
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 68h]
        sub eax, dword ptr [edx + 84h]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 54h], eax
        ; Exact mapped bytes EB 0F: jmp 0x5856d471
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 54h]
        add eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 54h], eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
