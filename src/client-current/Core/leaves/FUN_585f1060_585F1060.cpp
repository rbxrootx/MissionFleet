// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585F1060 .. +0x6F bytes.
extern "C" __declspec(naked) void FUN_585f1060_585F1060() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10h]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 10h]
        cmp ecx, dword ptr [eax + 0ch]
        ; Exact mapped bytes 74 3E: je 0x585f10be
        __asm _emit 0x74
        __asm _emit 0x3e
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        sub eax, 1
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 10h], eax
        ; Exact mapped bytes 75 09: jne 0x585f109a
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 0C: jmp 0x585f10a6
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 10h]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 10h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        sub ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 8], ecx
        imul eax, dword ptr [ebp - 0ch], 13ch
        mov ecx, dword ptr [ebp - 4]
        add eax, dword ptr [ecx + 14h]
        mov esp, ebp
        pop ebp
        ret
    }
}
