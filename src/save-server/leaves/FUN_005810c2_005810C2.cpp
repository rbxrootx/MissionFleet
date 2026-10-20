// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005810C2 .. +0x87 bytes.
extern "C" __declspec(naked) void FUN_005810c2_005810C2() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push ebx
        push esi
        push edi
        mov eax, dword ptr [ebp + 8]
        sub eax, 10h
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 74 11: je 0x5810eb
        __asm _emit 0x74
        __asm _emit 0x11
        push 0
        push 4
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        ; Exact mapped bytes E8 7F 23 F2 FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x23
        __asm _emit 0xf2
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x5810ff
        __asm _emit 0x75
        __asm _emit 0x14
        push 470h
        push 67849ch
        ; Exact mapped bytes E8 46 7C FA FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x7c
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5810ff
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 CF: jne 0x5810d4
        __asm _emit 0x75
        __asm _emit 0xcf
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 07: je 0x581112
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, 80070057h
        ; Exact mapped bytes EB 2E: jmp 0x581140
        __asm _emit 0xeb
        __asm _emit 0x2e
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 52 20: call dword ptr [edx + 0x20]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x20
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x58112c
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 80004001h
        ; Exact mapped bytes EB 14: jmp 0x581140
        __asm _emit 0xeb
        __asm _emit 0x14
        mov eax, dword ptr [ebp + 14h]
        push eax
        lea ecx, [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 BA E2 ED FF: call 0x45f3fa
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xe2
        __asm _emit 0xed
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
