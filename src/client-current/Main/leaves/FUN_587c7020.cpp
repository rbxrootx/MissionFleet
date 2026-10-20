// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C7020 .. +0x69 bytes.
extern "C" __declspec(naked) void FUN_587c7020() {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 8]
        push edi
        xor edi, edi
        mov dword ptr [esi], 5899aef8h
        cmp ecx, edi
        ; Exact mapped bytes 74 0B: je 0x587c703e
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 8], edi
        mov ecx, dword ptr [esi + 0b4h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x587c7056
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 0b4h], edi
        mov ecx, dword ptr [esi + 0b0h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x587c706e
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 0b0h], edi
        mov ecx, dword ptr [esi + 0ach]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x587c7086
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 0ach], edi
        pop edi
        pop esi
        ret
    }
}
