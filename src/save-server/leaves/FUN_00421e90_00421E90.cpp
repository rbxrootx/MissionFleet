// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00421E90 .. +0x99 bytes.
extern "C" __declspec(naked) void FUN_00421e90_00421E90() {
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
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ch]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        sub eax, 1
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes 75 09: jne 0x421ed0
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 0C: jmp 0x421edc
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 0ch], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 0ch]
        cmp ecx, dword ptr [eax + 10h]
        ; Exact mapped bytes 74 2E: je 0x421f1e
        __asm _emit 0x74
        __asm _emit 0x2e
        mov esi, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 8]
        imul edx, edx, 2ch
        mov eax, dword ptr [ebp - 4]
        mov edi, dword ptr [eax + 14h]
        add edi, edx
        mov ecx, 0bh
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        add edx, 1
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 8], edx
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x421f20
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
