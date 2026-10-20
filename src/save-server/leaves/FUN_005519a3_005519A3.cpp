// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005519A3 .. +0x10F bytes.
extern "C" __declspec(naked) void FUN_005519a3_005519A3() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        push 0b0h
        push 67c1e0h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 A0 88 F8 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x88
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 20h], 0
        ; Exact mapped bytes 75 14: jne 0x5519dd
        __asm _emit 0x75
        __asm _emit 0x14
        push 0b1h
        push 67c1e0h
        ; Exact mapped bytes E8 68 73 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x73
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5519dd
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x5519c0
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp - 4]
        xor ecx, ecx
        mov cl, byte ptr [eax + 44h]
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x5519f4
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 B5 00 00 00: jmp 0x551aa9
        __asm _emit 0xe9
        __asm _emit 0xb5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov byte ptr [edx + 44h], 1
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 20h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 20h]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 50 18: call dword ptr [eax + 0x18]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 30h], eax
        mov edx, dword ptr [ebp - 4]
        xor eax, eax
        mov al, byte ptr [edx + 42h]
        test eax, eax
        ; Exact mapped bytes 74 18: je 0x551a3b
        __asm _emit 0x74
        __asm _emit 0x18
        push 1
        push 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 20h]
        push edx
        ; Exact mapped bytes FF 15 2C C2 68 00: call dword ptr [0x68c22c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0xc2
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax + 42h], 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 97 4E 00 00: call 0x5568da
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x4e
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 74 5A: je 0x551aa2
        __asm _emit 0x74
        __asm _emit 0x5a
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 8A 4E 00 00: call 0x5568da
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x4e
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 4
        ; Exact mapped bytes 75 10: jne 0x551a65
        __asm _emit 0x75
        __asm _emit 0x10
        push 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 92 88 00 00 00: call dword ptr [edx + 0x88]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 6D 4E 00 00: call 0x5568da
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x4e
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 3
        ; Exact mapped bytes 75 0E: jne 0x551a80
        __asm _emit 0x75
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 92 A0 00 00 00: call dword ptr [edx + 0xa0]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 4ch], 1
        ; Exact mapped bytes 74 19: je 0x551aa2
        __asm _emit 0x74
        __asm _emit 0x19
        push 1
        push 4
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 52 74: call dword ptr [edx + 0x74]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x74
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 4ch], 1
        mov ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx + 44h], 0
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
