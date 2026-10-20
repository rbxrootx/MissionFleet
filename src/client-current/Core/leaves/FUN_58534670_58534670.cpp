// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58534670 .. +0x9B bytes.
extern "C" __declspec(naked) void FUN_58534670_58534670() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 0ch], ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 8F 38 F5 FF: call 0x58487f10
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x38
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 8]
        add edx, 4
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 8]
        add eax, 8
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 86 38 F5 FF: call 0x58487f30
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x38
        __asm _emit 0xf5
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx], 0
        ; Exact mapped bytes 74 54: je 0x58534707
        __asm _emit 0x74
        __asm _emit 0x54
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        push eax
        ; Exact mapped bytes E8 48 28 F5 FF: call 0x58486f10
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x28
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx]
        sub eax, dword ptr [edx]
        cdq
        mov ecx, 11ch
        idiv ecx
        push eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 E4 00 00 00: call 0x585347d0
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx], 0
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [edx], 0
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [eax], 0
        mov esp, ebp
        pop ebp
        ret
    }
}
