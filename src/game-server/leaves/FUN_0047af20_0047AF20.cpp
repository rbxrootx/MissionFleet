// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0047AF20 .. +0xAB bytes.
extern "C" __declspec(naked) void FUN_0047af20_0047AF20() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push esi
        mov dword ptr [ebp - 0ch], 0cccccccch
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 14h]
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ecx + edx*4]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 10h]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 14h]
        mov eax, dword ptr [ebp + 8]
        mov esi, dword ptr [ebp + 8]
        mov edx, dword ptr [edx + eax*4]
        cmp edx, dword ptr [ecx + esi*4]
        ; Exact mapped bytes 74 41: je 0x47afa9
        __asm _emit 0x74
        __asm _emit 0x41
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 14h]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 8]
        sub eax, 1
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + edx*4], eax
        ; Exact mapped bytes 75 09: jne 0x47af88
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 12: jmp 0x47af9a
        __asm _emit 0xeb
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 14h]
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ecx + edx*4]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 14h]
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [edx + eax*4], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 4]
        imul eax, dword ptr [ebp - 4]
        add eax, dword ptr [ebp + 8]
        imul eax, eax, 410h
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 18h]
        add eax, edx
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
