// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588D68C0 .. +0x99 bytes.
extern "C" __declspec(naked) void FUN_588d68c0() {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 1474h]
        push edi
        xor edi, edi
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x588d68de
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 1474h], edi
        mov ecx, dword ptr [esi + 1470h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x588d68f6
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 1470h], edi
        mov ecx, dword ptr [esi + 146ch]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x588d690e
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 146ch], edi
        mov ecx, dword ptr [esi + 60fch]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x588d6926
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 60fch], edi
        mov ecx, dword ptr [esi + 12f4h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x588d693e
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 12f4h], edi
        mov ecx, dword ptr [esi + 12f8h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x588d6956
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 12f8h], edi
        pop edi
        pop esi
        ret
    }
}
