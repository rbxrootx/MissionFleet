// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58857CD7 .. +0x82 bytes.
extern "C" __declspec(naked) void FUN_58857cd7_58857CD7() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push ebx
        push edi
        mov edi, ecx
        mov ecx, dword ptr [ebp + 8]
        mov byte ptr [edi + 0ch], 0
        lea ebx, [edi + 4]
        test ecx, ecx
        ; Exact mapped bytes 74 07: je 0x58857cf5
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [ecx + 4]
        ; Exact mapped bytes EB 14: jmp 0x58857d09
        __asm _emit 0xeb
        __asm _emit 0x14
        ; Exact mapped bytes 83 3D 80 99 96 58 00: cmp dword ptr [0x58969980], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x80
        __asm _emit 0x99
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 75 12: jne 0x58857d10
        __asm _emit 0x75
        __asm _emit 0x12
        ; Exact mapped bytes A1 18 75 90 58: mov eax, dword ptr [0x58907518]
        __asm _emit 0xa1
        __asm _emit 0x18
        __asm _emit 0x75
        __asm _emit 0x90
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 1C 75 90 58: mov ecx, dword ptr [0x5890751c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x75
        __asm _emit 0x90
        __asm _emit 0x58
        mov dword ptr [ebx], eax
        mov dword ptr [ebx + 4], ecx
        ; Exact mapped bytes EB 41: jmp 0x58857d51
        __asm _emit 0xeb
        __asm _emit 0x41
        push esi
        ; Exact mapped bytes E8 8A 0E 01 00: call 0x58868ba0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x0e
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [edi], eax
        lea esi, [edi + 8]
        push ebx
        push eax
        mov ecx, dword ptr [eax + 4ch]
        mov dword ptr [ebx], ecx
        mov ecx, dword ptr [eax + 48h]
        mov dword ptr [esi], ecx
        ; Exact mapped bytes E8 F5 51 01 00: call 0x5886cf21
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x51
        __asm _emit 0x01
        __asm _emit 0x00
        push esi
        push dword ptr [edi]
        ; Exact mapped bytes E8 4B 52 01 00: call 0x5886cf7f
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x52
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [edi]
        add esp, 10h
        mov eax, dword ptr [ecx + 350h]
        pop esi
        test al, 2
        ; Exact mapped bytes 75 0D: jne 0x58857d51
        __asm _emit 0x75
        __asm _emit 0x0d
        or eax, 2
        mov dword ptr [ecx + 350h], eax
        mov byte ptr [edi + 0ch], 1
        mov eax, edi
        pop edi
        pop ebx
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
