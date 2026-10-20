// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004684B0 .. +0x88 bytes.
extern "C" __declspec(naked) void FUN_004684b0_004684B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], 0cccccccch
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 10h]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 10h]
        cmp ecx, dword ptr [eax + 0ch]
        ; Exact mapped bytes 74 3E: je 0x468523
        __asm _emit 0x74
        __asm _emit 0x3e
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 4]
        sub eax, 1
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 10h], eax
        ; Exact mapped bytes 75 09: jne 0x4684ff
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 0C: jmp 0x46850b
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 10h]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 10h], edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 8]
        sub ecx, 1
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 8], ecx
        mov eax, dword ptr [ebp - 4]
        imul eax, eax, 1b0h
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 14h]
        add eax, edx
        mov esp, ebp
        pop ebp
        ret
    }
}
