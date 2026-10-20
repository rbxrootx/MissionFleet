// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588D6850 .. +0x69 bytes.
extern "C" __declspec(naked) void FUN_588d6850() {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 6020h]
        push edi
        xor edi, edi
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x588d686e
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 6020h], edi
        mov ecx, dword ptr [esi + 6024h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x588d6886
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 6024h], edi
        mov ecx, dword ptr [esi + 23ch]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x588d689e
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 23ch], edi
        mov ecx, dword ptr [esi + 6028h]
        cmp ecx, edi
        ; Exact mapped bytes 74 0E: je 0x588d68b6
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax]
        push 1
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov dword ptr [esi + 6028h], edi
        pop edi
        pop esi
        ret
    }
}
