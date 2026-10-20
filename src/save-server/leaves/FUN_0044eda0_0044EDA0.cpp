// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0044EDA0 .. +0xB1 bytes.
extern "C" __declspec(naked) void FUN_0044eda0_0044EDA0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 70h]
        and ecx, 1000h
        test ecx, ecx
        ; Exact mapped bytes 75 05: jne 0x44edc1
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 87 00 00 00: jmp 0x44ee48
        __asm _emit 0xe9
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 6ch]
        and eax, 1
        neg eax
        sbb eax, eax
        neg eax
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 02: jne 0x44edd7
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 71: jmp 0x44ee48
        __asm _emit 0xeb
        __asm _emit 0x71
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 6ch]
        xor edx, 1
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 6ch], edx
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp - 4]
        push ecx
        push 640ce0h
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 4ch]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 4ch]
        mov ecx, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF 11: call dword ptr [ecx]
        __asm _emit 0xff
        __asm _emit 0x11
        test eax, eax
        ; Exact mapped bytes 7C 3D: jl 0x44ee48
        __asm _emit 0x7c
        __asm _emit 0x3d
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x44ee25
        __asm _emit 0x75
        __asm _emit 0x14
        push 296h
        push 67702ch
        ; Exact mapped bytes E8 20 9F 0D 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x9f
        __asm _emit 0x0d
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x44ee25
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x44ee0b
        __asm _emit 0x75
        __asm _emit 0xe0
        push 0fffffd37h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 51 14: call dword ptr [ecx + 0x14]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x14
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
