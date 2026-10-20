// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586734B0 .. +0x86 bytes.
extern "C" __declspec(naked) void FUN_586734b0_586734B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp + 0ch], 2
        ; Exact mapped bytes 75 6F: jne 0x5867352e
        __asm _emit 0x75
        __asm _emit 0x6f
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x586734d1
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0fh
        ; Exact mapped bytes 7D 57: jge 0x5867352e
        __asm _emit 0x7d
        __asm _emit 0x57
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x586734e9
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 3
        ; Exact mapped bytes 7D 3D: jge 0x5867352c
        __asm _emit 0x7d
        __asm _emit 0x3d
        imul edx, dword ptr [ebp - 4], 0ch
        mov eax, dword ptr [ebp - 0ch]
        lea ecx, [eax + edx + 64h]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [ecx + edx*4]
        ; Exact mapped bytes 75 25: jne 0x5867352a
        __asm _emit 0x75
        __asm _emit 0x25
        mov ecx, dword ptr [ebp - 0ch]
        movzx edx, word ptr [ecx + 276h]
        push edx
        movzx eax, word ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 B3 3C 00 00: call 0x586771d0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x3c
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 278h], 0
        ; Exact mapped bytes EB B4: jmp 0x586734e0
        __asm _emit 0xeb
        __asm _emit 0xb4
        ; Exact mapped bytes EB 9A: jmp 0x586734c8
        __asm _emit 0xeb
        __asm _emit 0x9a
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
