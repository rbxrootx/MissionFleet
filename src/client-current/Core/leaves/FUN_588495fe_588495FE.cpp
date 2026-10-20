// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588495FE .. +0x57 bytes.
extern "C" __declspec(naked) void FUN_588495fe_588495FE() {
    __asm {
        push ebp
        mov ebp, esp
        push esi
        mov esi, dword ptr [ebp + 8]
        test esi, esi
        ; Exact mapped bytes 75 0C: jne 0x58849615
        __asm _emit 0x75
        __asm _emit 0x0c
        mov eax, 10000h
        ; Exact mapped bytes A3 90 95 96 58: mov dword ptr [0x58969590], eax
        __asm _emit 0xa3
        __asm _emit 0x90
        __asm _emit 0x95
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes EB 3D: jmp 0x58849652
        __asm _emit 0xeb
        __asm _emit 0x3d
        cmp dword ptr [esi], 2
        ; Exact mapped bytes 74 07: je 0x58849621
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, 80000h
        ; Exact mapped bytes EB ED: jmp 0x5884960e
        __asm _emit 0xeb
        __asm _emit 0xed
        push edi
        mov edi, dword ptr [esi + 4]
        mov ecx, edi
        ; Exact mapped bytes E8 7B FF FF FF: call 0x588495a7
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A3 90 95 96 58: mov dword ptr [0x58969590], eax
        __asm _emit 0xa3
        __asm _emit 0x90
        __asm _emit 0x95
        __asm _emit 0x96
        __asm _emit 0x58
        test edi, edi
        ; Exact mapped bytes 74 0D: je 0x58849642
        __asm _emit 0x74
        __asm _emit 0x0d
        push 4078h
        push edi
        ; Exact mapped bytes E8 F4 79 FE FF: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x79
        __asm _emit 0xfe
        __asm _emit 0xff
        pop ecx
        pop ecx
        push 8
        push esi
        ; Exact mapped bytes E8 EA 79 FE FF: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x79
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes A1 90 95 96 58: mov eax, dword ptr [0x58969590]
        __asm _emit 0xa1
        __asm _emit 0x90
        __asm _emit 0x95
        __asm _emit 0x96
        __asm _emit 0x58
        pop ecx
        pop ecx
        pop edi
        pop esi
        pop ebp
        ret
    }
}
