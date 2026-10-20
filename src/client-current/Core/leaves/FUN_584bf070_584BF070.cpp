// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584BF070 .. +0x89 bytes.
extern "C" __declspec(naked) void FUN_584bf070_584BF070() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        cmp ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 7E 14: jle 0x584bf096
        __asm _emit 0x7e
        __asm _emit 0x14
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 7ch], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 74h], 0
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 4], 0
        ; Exact mapped bytes 7D 13: jge 0x584bf0b2
        __asm _emit 0x7d
        __asm _emit 0x13
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 74h], eax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 7ch], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        cmp eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 7E 17: jle 0x584bf0d4
        __asm _emit 0x7e
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 80h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 78h], 0
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 7D 16: jge 0x584bf0f3
        __asm _emit 0x7d
        __asm _emit 0x16
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 78h], edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 80h], 0
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
