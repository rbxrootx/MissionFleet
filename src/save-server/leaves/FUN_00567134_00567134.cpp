// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00567134 .. +0x6C bytes.
extern "C" __declspec(naked) void FUN_00567134_00567134() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 3eh
        push 678f7ch
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 15 31 F7 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x31
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 28h]
        cmp eax, dword ptr [edx + 2ch]
        ; Exact mapped bytes 72 04: jb 0x56715d
        __asm _emit 0x72
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 3D: jmp 0x56719a
        __asm _emit 0xeb
        __asm _emit 0x3d
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 28h]
        imul edx, dword ptr [ecx + 1ch]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 24h]
        add ecx, edx
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 7D E1 EF FF: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xe1
        __asm _emit 0xef
        __asm _emit 0xff
        add esp, 0ch
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 28h]
        add ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 28h], ecx
        mov eax, 1
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
