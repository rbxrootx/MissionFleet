// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0044C17C .. +0x83 bytes.
extern "C" __declspec(naked) void FUN_0044c17c_0044C17C() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x44c1a5
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 64h
        ; Exact mapped bytes 73 4C: jae 0x44c1f7
        __asm _emit 0x73
        __asm _emit 0x4c
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 4]
        imul eax, eax, 37ch
        cmp dword ptr [edx + eax + 2e4h], 0
        ; Exact mapped bytes 75 2E: jne 0x44c1f5
        __asm _emit 0x75
        __asm _emit 0x2e
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 4]
        imul eax, eax, 37ch
        mov ecx, dword ptr [edx + eax + 234h]
        shr ecx, 4
        and ecx, 0ffh
        cmp ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 72 07: jb 0x44c1f5
        __asm _emit 0x72
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 04: jmp 0x44c1f9
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes EB A5: jmp 0x44c19c
        __asm _emit 0xeb
        __asm _emit 0xa5
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
