// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58563BB0 .. +0x97 bytes.
extern "C" __declspec(naked) void FUN_58563bb0_58563BB0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0ach]
        mov dword ptr [eax + 0e8h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 0e8h]
        cmp edx, dword ptr [ecx + 0b8h]
        ; Exact mapped bytes 7E 0E: jle 0x58563bed
        __asm _emit 0x7e
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0e8h]
        mov dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes EB 27: jmp 0x58563c14
        __asm _emit 0xeb
        __asm _emit 0x27
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 0e8h], 0
        ; Exact mapped bytes 7D 09: jge 0x58563c02
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 0C: jmp 0x58563c0e
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0e8h]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [eax + 0e8h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0e8h]
        cdq
        mov ecx, 0e10h
        idiv ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0e8h], edx
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 0e8h]
        mov esp, ebp
        pop ebp
        ret
    }
}
