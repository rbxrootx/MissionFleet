// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5884D3E5 .. +0x6D bytes.
extern "C" __declspec(naked) void FUN_5884d3e5() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov eax, dword ptr [ebp + 8]
        push ebx
        push edi
        mov edi, dword ptr [ebp + 0ch]
        mov ebx, 19930520h
        mov dword ptr [ebp - 10h], eax
        test edi, edi
        ; Exact mapped bytes 74 2E: je 0x5884d42d
        __asm _emit 0x74
        __asm _emit 0x2e
        test byte ptr [edi], 10h
        ; Exact mapped bytes 74 1E: je 0x5884d422
        __asm _emit 0x74
        __asm _emit 0x1e
        mov ecx, dword ptr [eax]
        sub ecx, 4
        push esi
        push ecx
        mov eax, dword ptr [ecx]
        mov esi, dword ptr [eax + 20h]
        mov ecx, esi
        mov edi, dword ptr [eax + 18h]
        ; Exact mapped bytes FF 15 9C 45 89 58: call dword ptr [0x5889459c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        pop esi
        test edi, edi
        ; Exact mapped bytes 74 0B: je 0x5884d42d
        __asm _emit 0x74
        __asm _emit 0x0b
        test byte ptr [edi], 8
        mov eax, 1994000h
        cmovne ebx, eax
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 8], eax
        lea eax, [ebp - 0ch]
        push eax
        push 3
        push 1
        push 0e06d7363h
        mov dword ptr [ebp - 0ch], ebx
        mov dword ptr [ebp - 4], edi
        ; Exact mapped bytes FF 15 9C 43 89 58: call dword ptr [0x5889439c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        pop edi
        pop ebx
        leave
        ret 8
    }
}
