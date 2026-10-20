// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5858CF00 .. +0x84 bytes.
extern "C" __declspec(naked) void FUN_5858cf00_5858CF00() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 1d4h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 1d8h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [ecx + 0b4h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 0c8h]
        cmp edx, dword ptr [ecx + 0b4h]
        ; Exact mapped bytes 7E 0F: jle 0x5858cf4e
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0cch], 0ffffff6ah
        ; Exact mapped bytes EB 30: jmp 0x5858cf7e
        __asm _emit 0xeb
        __asm _emit 0x30
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 0c8h]
        cmp eax, dword ptr [edx + 0b4h]
        ; Exact mapped bytes 7D 0F: jge 0x5858cf71
        __asm _emit 0x7d
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0cch], 96h
        ; Exact mapped bytes EB 0D: jmp 0x5858cf7e
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0cch], 0
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
