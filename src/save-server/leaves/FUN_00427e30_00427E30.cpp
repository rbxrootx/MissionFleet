// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00427E30 .. +0x6A bytes.
extern "C" __declspec(naked) void FUN_00427e30_00427E30() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 4ch
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 4ch]
        mov ecx, 13h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x427e66
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 32h
        ; Exact mapped bytes 7D 24: jge 0x427e90
        __asm _emit 0x7d
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0ch]
        mov eax, dword ptr [ebp - 0ch]
        imul eax, eax, 370h
        cmp dword ptr [edx + eax + 16bdch], 0
        ; Exact mapped bytes 75 09: jne 0x427e8e
        __asm _emit 0x75
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes EB CD: jmp 0x427e5d
        __asm _emit 0xeb
        __asm _emit 0xcd
        mov eax, dword ptr [ebp - 8]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
