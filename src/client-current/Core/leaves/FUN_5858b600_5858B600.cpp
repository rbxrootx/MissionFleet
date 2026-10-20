// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5858B600 .. +0x7D bytes.
extern "C" __declspec(naked) void FUN_5858b600_5858B600() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x5858b61b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0ah
        ; Exact mapped bytes 7D 58: jge 0x5858b679
        __asm _emit 0x7d
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 4]
        shl ecx, 4
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + ecx + 224h], 1
        ; Exact mapped bytes 75 43: jne 0x5858b677
        __asm _emit 0x75
        __asm _emit 0x43
        mov eax, dword ptr [ebp - 4]
        shl eax, 4
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + eax + 218h]
        sub esp, 0ch
        mov eax, esp
        mov ecx, dword ptr [edx]
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [edx + 4]
        mov dword ptr [eax + 4], ecx
        mov edx, dword ptr [edx + 8]
        mov dword ptr [eax + 8], edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 9F 18 00 00: call 0x5858cf00
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        shl eax, 4
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + eax + 224h], 0
        ; Exact mapped bytes EB 02: jmp 0x5858b679
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB 99: jmp 0x5858b612
        __asm _emit 0xeb
        __asm _emit 0x99
        mov esp, ebp
        pop ebp
        ret
    }
}
