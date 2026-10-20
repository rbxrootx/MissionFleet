// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004B8560 .. +0x92 bytes.
extern "C" __declspec(naked) void FUN_004b8560_004B8560() {
    __asm {
        push ebp
        mov ebp, esp
        push ebx
        push esi
        push edi
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 1E: jne 0x4b858a
        __asm _emit 0x75
        __asm _emit 0x1e
        push 58c264h
        push 0
        push 30h
        push 58c8d8h
        push 2
        ; Exact mapped bytes E8 AF 85 FF FF: call 0x4b0b30
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x85
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x4b858a
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D6: jne 0x4b8566
        __asm _emit 0x75
        __asm _emit 0xd6
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 0ch]
        and edx, 83h
        test edx, edx
        ; Exact mapped bytes 74 4D: je 0x4b85ed
        __asm _emit 0x74
        __asm _emit 0x4d
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 0ch]
        and ecx, 8
        test ecx, ecx
        ; Exact mapped bytes 74 40: je 0x4b85ed
        __asm _emit 0x74
        __asm _emit 0x40
        push 2
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 8]
        push eax
        ; Exact mapped bytes E8 05 27 FF FF: call 0x4aacc0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x27
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 0ch]
        and edx, 0fffffbf7h
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax + 0ch], edx
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx], 0
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx + 8], 0
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax + 4], 0
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret
    }
}
