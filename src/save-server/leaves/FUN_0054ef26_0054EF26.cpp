// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054EF26 .. +0x96 bytes.
extern "C" __declspec(naked) void FUN_0054ef26_0054EF26() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 50h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 50h], ecx
        push 165h
        push 67bee8h
        mov eax, dword ptr [ebp - 50h]
        push eax
        ; Exact mapped bytes E8 1B B3 F8 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xb3
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 50h]
        cmp dword ptr [ecx + 10h], 0
        ; Exact mapped bytes 75 14: jne 0x54ef62
        __asm _emit 0x75
        __asm _emit 0x14
        push 166h
        push 67bee8h
        ; Exact mapped bytes E8 E3 9D FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x9d
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54ef62
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x54ef45
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
        ; Exact mapped bytes 74 09: je 0x54ef92
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4ch]
        push ecx
        ; Exact mapped bytes E8 01 F5 FF FF: call 0x54e493
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 74 14: je 0x54efac
        __asm _emit 0x74
        __asm _emit 0x14
        push 16fh
        push 67bee8h
        ; Exact mapped bytes E8 99 9D FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x9d
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54efac
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x54ef92
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
