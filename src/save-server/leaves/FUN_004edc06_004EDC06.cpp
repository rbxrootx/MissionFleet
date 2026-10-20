// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004EDC06 .. +0xB0 bytes.
extern "C" __declspec(naked) void FUN_004edc06_004EDC06() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 28h], 0
        ; Exact mapped bytes 74 14: je 0x4edc2d
        __asm _emit 0x74
        __asm _emit 0x14
        push 201h
        push 677b4ch
        ; Exact mapped bytes E8 18 B1 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xb1
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4edc2d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x4edc10
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp - 4]
        add ecx, 40h
        ; Exact mapped bytes E8 6C 71 03 00: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x71
        __asm _emit 0x03
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx + 28h], eax
        push 10h
        ; Exact mapped bytes E8 E0 76 FE FF: call 0x4d532b
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x76
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4edc63
        __asm _emit 0x75
        __asm _emit 0x14
        push 205h
        push 677b4ch
        ; Exact mapped bytes E8 E2 B0 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xb0
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4edc63
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DB: jne 0x4edc44
        __asm _emit 0x75
        __asm _emit 0xdb
        push 3c000h
        ; Exact mapped bytes E8 B8 76 FE FF: call 0x4d532b
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x76
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 20h]
        or edx, 800000h
        cmp edx, 50800000h
        ; Exact mapped bytes 75 1A: jne 0x4edca1
        __asm _emit 0x75
        __asm _emit 0x1a
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 20h]
        or ecx, 0ff7fffffh
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 44h]
        and eax, ecx
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 20h], eax
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 8C F3 FF FF: call 0x4ed039
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
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
