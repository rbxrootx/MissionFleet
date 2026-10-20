// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004B86A0 .. +0xB7 bytes.
extern "C" __declspec(naked) void FUN_004b86a0_004B86A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 0ch]
        and edx, 3
        cmp edx, 2
        ; Exact mapped bytes 75 7A: jne 0x4b873b
        __asm _emit 0x75
        __asm _emit 0x7a
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 0ch]
        and ecx, 108h
        test ecx, ecx
        ; Exact mapped bytes 74 6A: je 0x4b873b
        __asm _emit 0x74
        __asm _emit 0x6a
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx]
        sub ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 7E 56: jle 0x4b873b
        __asm _emit 0x7e
        __asm _emit 0x56
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 8]
        push ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 10h]
        push eax
        ; Exact mapped bytes E8 94 74 00 00: call 0x4bfb90
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x74
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        cmp eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 75 21: jne 0x4b8725
        __asm _emit 0x75
        __asm _emit 0x21
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 0ch]
        and edx, 80h
        test edx, edx
        ; Exact mapped bytes 74 0F: je 0x4b8723
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 0ch]
        and ecx, 0fffffffdh
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 0ch], ecx
        ; Exact mapped bytes EB 16: jmp 0x4b873b
        __asm _emit 0xeb
        __asm _emit 0x16
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 0ch]
        or ecx, 20h
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 0ch], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [eax], edx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 4], 0
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
