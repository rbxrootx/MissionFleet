// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00437D80 .. +0x9C bytes.
extern "C" __declspec(naked) void FUN_00437d80_00437D80() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        mov dword ptr [ebp - 1ch], ecx
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 4]
        add ecx, 1
        mov edx, dword ptr [ebp - 1ch]
        cmp ecx, dword ptr [edx + 8]
        ; Exact mapped bytes 75 4A: jne 0x437de4
        __asm _emit 0x75
        __asm _emit 0x4a
        mov dword ptr [ebp - 4], 1
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [eax + 4]
        sub edx, dword ptr [ecx]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 8]
        cmp eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 73 08: jae 0x437dbf
        __asm _emit 0x73
        __asm _emit 0x08
        lea ecx, [ebp - 4]
        mov dword ptr [ebp - 20h], ecx
        ; Exact mapped bytes EB 06: jmp 0x437dc5
        __asm _emit 0xeb
        __asm _emit 0x06
        lea edx, [ebp - 8]
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [ecx + 4]
        sub eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 0ch]
        add eax, dword ptr [ecx]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 8C 8B 00 00: call 0x440970
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 4]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov byte ptr [ecx], 0
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 18h]
        mov dl, byte ptr [ebp + 8]
        mov byte ptr [ecx], dl
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 4]
        add ecx, 1
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [edx + 4], ecx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
