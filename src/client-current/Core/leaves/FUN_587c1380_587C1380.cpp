// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C1380 .. +0x7E bytes.
extern "C" __declspec(naked) void FUN_587c1380_587C1380() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 84h], 0
        ; Exact mapped bytes 75 11: jne 0x587c13a5
        __asm _emit 0x75
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 7ch]
        mov dword ptr [ecx + 84h], eax
        ; Exact mapped bytes EB 54: jmp 0x587c13f9
        __asm _emit 0xeb
        __asm _emit 0x54
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 84h]
        ; Exact mapped bytes E8 5D 68 CC FF: call 0x58487c10
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x68
        __asm _emit 0xcc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 42: je 0x587c13f9
        __asm _emit 0x74
        __asm _emit 0x42
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 31 83 D6 FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x83
        __asm _emit 0xd6
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A7 F8 FF FF: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        sub esi, eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 DD 36 D7 FF: call 0x58534ab0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x36
        __asm _emit 0xd7
        __asm _emit 0xff
        imul esi, eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D2 44 CD FF: call 0x584958b0
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x44
        __asm _emit 0xcd
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 7C 17: jl 0x587c13f9
        __asm _emit 0x7c
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 84h]
        ; Exact mapped bytes E8 20 68 CC FF: call 0x58487c10
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x68
        __asm _emit 0xcc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 84h], eax
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
