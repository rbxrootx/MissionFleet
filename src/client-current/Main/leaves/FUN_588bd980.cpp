// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588BD980 .. +0x9F bytes.
extern "C" __declspec(naked) void FUN_588bd980() {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 10h]
        mov ebp, ecx
        push edi
        xor edi, edi
        lea edx, [ebp + 3d4h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 4]
        mov ebx, dword ptr [eax + 14h]
        add ebx, ecx
        cmp esi, ebx
        ; Exact mapped bytes 7C 22: jl 0x588bd9c2
        __asm _emit 0x7c
        __asm _emit 0x22
        mov ebx, dword ptr [eax + 1ch]
        add ebx, ecx
        cmp esi, ebx
        ; Exact mapped bytes 7D 19: jge 0x588bd9c2
        __asm _emit 0x7d
        __asm _emit 0x19
        mov ecx, dword ptr [eax + 8]
        mov ebx, dword ptr [eax + 18h]
        add ebx, ecx
        cmp dword ptr [esp + 18h], ebx
        ; Exact mapped bytes 7C 0B: jl 0x588bd9c2
        __asm _emit 0x7c
        __asm _emit 0x0b
        mov eax, dword ptr [eax + 20h]
        add eax, ecx
        cmp dword ptr [esp + 18h], eax
        ; Exact mapped bytes 7C 09: jl 0x588bd9cb
        __asm _emit 0x7c
        __asm _emit 0x09
        inc edi
        add edx, 4
        cmp edi, 2
        ; Exact mapped bytes 7C C7: jl 0x588bd992
        __asm _emit 0x7c
        __asm _emit 0xc7
        cmp edi, 2
        ; Exact mapped bytes 74 48: je 0x588bda18
        __asm _emit 0x74
        __asm _emit 0x48
        mov ecx, dword ptr [esp + 18h]
        push ecx
        mov ecx, dword ptr [ebp + edi*4 + 3d4h]
        push esi
        ; Exact mapped bytes E8 6E AD 04 00: call 0x58908750
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xad
        __asm _emit 0x04
        __asm _emit 0x00
        xor esi, esi
        lea ebx, [ebp + 3d4h]
        ; Exact mapped bytes 8D 9B 00 00 00 00: lea ebx, [ebx]
        __asm _emit 0x8d
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp esi, edi
        ; Exact mapped bytes 74 14: je 0x588bda08
        __asm _emit 0x74
        __asm _emit 0x14
        mov ecx, dword ptr [ebp + edi*4 + 3d4h]
        ; Exact mapped bytes E8 C0 A7 04 00: call 0x589081c0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xa7
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebx]
        push eax
        ; Exact mapped bytes E8 28 AE 04 00: call 0x58908830
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xae
        __asm _emit 0x04
        __asm _emit 0x00
        inc esi
        add ebx, 4
        cmp esi, 2
        ; Exact mapped bytes 7C DF: jl 0x588bd9f0
        __asm _emit 0x7c
        __asm _emit 0xdf
        mov ecx, ebp
        ; Exact mapped bytes E8 38 F1 FF FF: call 0x588bcb50
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
