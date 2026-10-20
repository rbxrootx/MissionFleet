// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004243E0 .. +0x87 bytes.
extern "C" __declspec(naked) void FUN_004243e0_004243E0() {
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
        mov ecx, dword ptr [eax + 10h]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 10h]
        cmp ecx, dword ptr [eax + 0ch]
        ; Exact mapped bytes 74 3E: je 0x424452
        __asm _emit 0x74
        __asm _emit 0x3e
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        sub eax, 1
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 10h], eax
        ; Exact mapped bytes 75 09: jne 0x42442e
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 0C: jmp 0x42443a
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 10h]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 10h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8]
        sub ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 8], ecx
        mov eax, dword ptr [ebp - 8]
        imul eax, eax, 2ch
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 14h]
        add eax, edx
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
