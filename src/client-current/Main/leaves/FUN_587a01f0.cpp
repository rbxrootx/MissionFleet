// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A01F0 .. +0x53 bytes.
extern "C" __declspec(naked) void FUN_587a01f0() {
    __asm {
        push ebx
        push esi
        push edi
        mov dword ptr [ecx], 589984a8h
        lea esi, [ecx + 38h]
        mov ebx, 8
        xor edi, edi
        mov ecx, dword ptr [esi - 20h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0B: je 0x587a0215
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi - 20h], edi
        mov ecx, dword ptr [esi]
        cmp ecx, edi
        ; Exact mapped bytes 74 0A: je 0x587a0225
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi], edi
        mov ecx, dword ptr [esi + 20h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0B: je 0x587a0237
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 20h], edi
        add esi, 4
        sub ebx, 1
        ; Exact mapped bytes 75 C4: jne 0x587a0203
        __asm _emit 0x75
        __asm _emit 0xc4
        pop edi
        pop esi
        pop ebx
        ret
    }
}
