// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005560F9 .. +0xDB bytes.
extern "C" __declspec(naked) void FUN_005560f9_005560F9() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 57dh
        push 5cfa08h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 48 50 FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x50
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 24h], 0
        ; Exact mapped bytes 75 14: jne 0x556135
        __asm _emit 0x75
        __asm _emit 0x14
        push 57eh
        push 5cfa08h
        ; Exact mapped bytes E8 D0 E8 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x556135
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x556118
        __asm _emit 0x75
        __asm _emit 0xdd
        push 1
        push 8
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 0E 9D F7 FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x9d
        __asm _emit 0xf7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x556160
        __asm _emit 0x75
        __asm _emit 0x14
        push 57fh
        push 5cfa08h
        ; Exact mapped bytes E8 A5 E8 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x556160
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x55613b
        __asm _emit 0x75
        __asm _emit 0xd5
        cmp dword ptr [ebp + 0ch], -1
        ; Exact mapped bytes 75 09: jne 0x556175
        __asm _emit 0x75
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 2ch]
        mov dword ptr [ebp + 0ch], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 43 1C 00 00: call 0x557dc0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        push 586h
        push 5cfa08h
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 CD 4F FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x4f
        __asm _emit 0xfa
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 84h]
        push ecx
        push -1
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 24h]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 24h]
        mov edx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 52 24: call dword ptr [edx + 0x24]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 30h], eax
        mov edx, dword ptr [ebp - 8]
        xor eax, eax
        cmp dword ptr [edx + 30h], 0
        sete al
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
