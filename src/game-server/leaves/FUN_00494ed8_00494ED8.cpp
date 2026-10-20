// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00494ED8 .. +0xC6 bytes.
extern "C" __declspec(naked) void FUN_00494ed8_00494ED8() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        push ebx
        push esi
        push edi
        mov eax, dword ptr [ebp + 8]
        sub eax, 0cch
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 28h]
        cmp dword ptr [ecx + 1ch], 0
        ; Exact mapped bytes 75 14: jne 0x494f09
        __asm _emit 0x75
        __asm _emit 0x14
        push 797h
        push 5ca8a4h
        ; Exact mapped bytes E8 FC FA 09 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xfa
        __asm _emit 0x09
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x494f09
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x494eec
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [eax + 1ch]
        cmp dword ptr [ecx + 1ch], 0
        ; Exact mapped bytes 75 14: jne 0x494f2f
        __asm _emit 0x75
        __asm _emit 0x14
        push 798h
        push 5ca8a4h
        ; Exact mapped bytes E8 D6 FA 09 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xfa
        __asm _emit 0x09
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x494f2f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DA: jne 0x494f0f
        __asm _emit 0x75
        __asm _emit 0xda
        mov eax, dword ptr [ebp + 18h]
        and eax, 0ffffh
        cmp eax, 1
        ; Exact mapped bytes 74 14: je 0x494f56
        __asm _emit 0x74
        __asm _emit 0x14
        push 799h
        push 5ca8a4h
        ; Exact mapped bytes E8 AF FA 09 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0xfa
        __asm _emit 0x09
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x494f56
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D9: jne 0x494f35
        __asm _emit 0x75
        __asm _emit 0xd9
        mov edx, dword ptr [ebp + 28h]
        push edx
        mov eax, dword ptr [ebp + 24h]
        push eax
        mov ecx, dword ptr [ebp + 1ch]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        push 0
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 5A 3D 00 00: call 0x498cd0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x3d
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 70 E2 FF FF: call 0x4931f2
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp + 20h], 0
        ; Exact mapped bytes 74 0A: je 0x494f92
        __asm _emit 0x74
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp + 20h]
        push ecx
        ; Exact mapped bytes FF 15 78 24 5E 00: call dword ptr [0x5e2478]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 24 00: ret 0x24
        __asm _emit 0xc2
        __asm _emit 0x24
        __asm _emit 0x00
    }
}
