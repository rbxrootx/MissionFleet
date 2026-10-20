// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004453E0 .. +0x8C bytes.
extern "C" __declspec(naked) void FUN_004453e0_004453E0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 0ch]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [edx + 0ch], ecx
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 8], 0
        ; Exact mapped bytes 74 0C: je 0x44540e
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 4], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [eax + 4], edx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax]
        ; Exact mapped bytes 75 0A: jne 0x44542e
        __asm _emit 0x75
        __asm _emit 0x0a
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [edx], eax
        ; Exact mapped bytes EB 28: jmp 0x445456
        __asm _emit 0xeb
        __asm _emit 0x28
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [edx + 8]
        ; Exact mapped bytes 75 0E: jne 0x44544a
        __asm _emit 0x75
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [edx + 8], eax
        ; Exact mapped bytes EB 0C: jmp 0x445456
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [edx + 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [eax + 4], ecx
        mov esp, ebp
        pop ebp
        ret
    }
}
