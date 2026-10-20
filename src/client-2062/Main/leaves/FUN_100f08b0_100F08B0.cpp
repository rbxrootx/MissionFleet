// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100F08B0 .. +0x79 bytes.
extern "C" __declspec(naked) void FUN_100f08b0_100F08B0() {
    __asm {
        push ebx
        push ebp
        mov ebx, ecx
        push esi
        push edi
        mov ebp, 80000000h
        xor edi, edi
        lea esi, [ebx + 158h]
        mov eax, dword ptr [esi]
        test eax, eax
        ; Exact mapped bytes 74 4C: je 0x100f0915
        __asm _emit 0x74
        __asm _emit 0x4c
        mov ecx, dword ptr [esp + 14h]
        mov edx, dword ptr [eax + 4]
        cmp edx, ecx
        ; Exact mapped bytes 75 41: jne 0x100f0915
        __asm _emit 0x75
        __asm _emit 0x41
        mov edx, dword ptr [esp + 18h]
        mov ecx, dword ptr [eax + 8]
        cmp ecx, edx
        ; Exact mapped bytes 75 36: jne 0x100f0915
        __asm _emit 0x75
        __asm _emit 0x36
        mov ecx, dword ptr [ebx + 320h]
        mov eax, ebp
        not eax
        and ecx, eax
        mov dword ptr [ebx + 320h], ecx
        mov ecx, dword ptr [esi]
        ; Exact mapped bytes E8 E8 33 F5 FF: call 0x10043ce0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xf5
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D C4 58 1C 10: mov ecx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [ecx + 4], ebx
        ; Exact mapped bytes 75 12: jne 0x100f0915
        __asm _emit 0x75
        __asm _emit 0x12
        ; Exact mapped bytes 8B 15 F4 56 1C 10: mov edx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push edi
        mov ecx, dword ptr [edx + 20b00h]
        ; Exact mapped bytes E8 DB FC F4 FF: call 0x100405f0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xfc
        __asm _emit 0xf4
        __asm _emit 0xff
        shr ebp, 1
        inc edi
        add esi, 4
        cmp edi, 20h
        ; Exact mapped bytes 7C A3: jl 0x100f08c3
        __asm _emit 0x7c
        __asm _emit 0xa3
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
