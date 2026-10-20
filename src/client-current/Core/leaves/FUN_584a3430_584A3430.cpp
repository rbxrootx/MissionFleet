// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A3430 .. +0x98 bytes.
extern "C" __declspec(naked) void FUN_584a3430_584A3430() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        mov dword ptr [edx + 8], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes 0F BE 48 0D: movsx ecx, byte ptr [eax + 0xd]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x48
        __asm _emit 0x0d
        test ecx, ecx
        ; Exact mapped bytes 75 0B: jne 0x584a3465
        __asm _emit 0x75
        __asm _emit 0x0b
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 4], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [edx + 4], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 4]
        ; Exact mapped bytes 75 0D: jne 0x584a348b
        __asm _emit 0x75
        __asm _emit 0x0d
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [eax + 4], ecx
        ; Exact mapped bytes EB 26: jmp 0x584a34b1
        __asm _emit 0xeb
        __asm _emit 0x26
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax]
        ; Exact mapped bytes 75 0D: jne 0x584a34a5
        __asm _emit 0x75
        __asm _emit 0x0d
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [eax], ecx
        ; Exact mapped bytes EB 0C: jmp 0x584a34b1
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [eax + 8], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 4], edx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
