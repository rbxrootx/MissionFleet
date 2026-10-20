// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00518C26 .. +0x93 bytes.
extern "C" __declspec(naked) void FUN_00518c26_00518C26() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp + 0ch], -1
        ; Exact mapped bytes 75 5A: jne 0x518c8f
        __asm _emit 0x75
        __asm _emit 0x5a
        mov eax, dword ptr [ebp + 10h]
        and eax, 4
        test eax, eax
        ; Exact mapped bytes 75 50: jne 0x518c8f
        __asm _emit 0x75
        __asm _emit 0x50
        mov ecx, dword ptr [ebp + 10h]
        and ecx, 40h
        test ecx, ecx
        ; Exact mapped bytes 75 46: jne 0x518c8f
        __asm _emit 0x75
        __asm _emit 0x46
        mov edx, dword ptr [ebp + 10h]
        and edx, 8
        test edx, edx
        ; Exact mapped bytes 75 0A: jne 0x518c5d
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, dword ptr [ebp + 10h]
        and eax, 10h
        test eax, eax
        ; Exact mapped bytes 74 32: je 0x518c8f
        __asm _emit 0x74
        __asm _emit 0x32
        mov ecx, dword ptr [ebp + 10h]
        and ecx, 8
        push ecx
        mov edx, dword ptr [ebp + 10h]
        and edx, 1
        push edx
        lea eax, [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 92 C0 00 00 00: call dword ptr [edx + 0xc0]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 4], edx
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes EB 24: jmp 0x518cb3
        __asm _emit 0xeb
        __asm _emit 0x24
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 48 F7 FF FF: call 0x5183eb
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 4], edx
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
