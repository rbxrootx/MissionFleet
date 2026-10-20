// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00427EC0 .. +0xA0 bytes.
extern "C" __declspec(naked) void FUN_00427ec0_00427EC0() {
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
        ; Exact mapped bytes EB 09: jmp 0x427ef6
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 64h
        ; Exact mapped bytes 7D 5A: jge 0x427f56
        __asm _emit 0x7d
        __asm _emit 0x5a
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0ch]
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [edx + eax*4 + 94h], -1
        ; Exact mapped bytes 74 45: je 0x427f54
        __asm _emit 0x74
        __asm _emit 0x45
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0ch]
        mov eax, dword ptr [ebp - 0ch]
        imul eax, eax, 37ch
        mov ecx, dword ptr [edx + eax + 278h]
        shr ecx, 1
        and ecx, 7fffffffh
        cmp ecx, -1
        ; Exact mapped bytes 74 22: je 0x427f54
        __asm _emit 0x74
        __asm _emit 0x22
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ch]
        mov ecx, dword ptr [ebp - 0ch]
        imul ecx, ecx, 37ch
        cmp dword ptr [eax + ecx + 2e4h], 0
        ; Exact mapped bytes 75 09: jne 0x427f54
        __asm _emit 0x75
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes EB 97: jmp 0x427eed
        __asm _emit 0xeb
        __asm _emit 0x97
        mov eax, dword ptr [ebp - 8]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
