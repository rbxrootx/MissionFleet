// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005504B6 .. +0x96 bytes.
extern "C" __declspec(naked) void FUN_005504b6_005504B6() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 50h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 50h], ecx
        push 165h
        push 5cf710h
        mov eax, dword ptr [ebp - 50h]
        push eax
        ; Exact mapped bytes E8 8B AC FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xac
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 50h]
        cmp dword ptr [ecx + 10h], 0
        ; Exact mapped bytes 75 14: jne 0x5504f2
        __asm _emit 0x75
        __asm _emit 0x14
        push 166h
        push 5cf710h
        ; Exact mapped bytes E8 13 45 FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x45
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5504f2
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x5504d5
        __asm _emit 0x75
        __asm _emit 0xdd
        push 1
        lea eax, [ebp - 48h]
        push eax
        mov ecx, dword ptr [ebp - 50h]
        mov edx, dword ptr [ecx + 10h]
        mov eax, dword ptr [ebp - 50h]
        mov ecx, dword ptr [eax + 10h]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 50 30: call dword ptr [eax + 0x30]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x30
        mov dword ptr [ebp - 4ch], eax
        cmp dword ptr [ebp - 4ch], 0
        ; Exact mapped bytes 74 09: je 0x550522
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4ch]
        push ecx
        ; Exact mapped bytes E8 01 F5 FF FF: call 0x54fa23
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 74 14: je 0x55053c
        __asm _emit 0x74
        __asm _emit 0x14
        push 16fh
        push 5cf710h
        ; Exact mapped bytes E8 C9 44 FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x44
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55053c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x550522
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, dword ptr [ebp - 40h]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
