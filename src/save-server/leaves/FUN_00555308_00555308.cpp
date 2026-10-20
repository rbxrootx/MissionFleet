// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00555308 .. +0x1CC bytes.
extern "C" __declspec(naked) void FUN_00555308_00555308() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 44h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 44h], ecx
        push 663h
        push 67c1e0h
        mov eax, dword ptr [ebp - 44h]
        push eax
        ; Exact mapped bytes E8 39 4F F8 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x4f
        __asm _emit 0xf8
        __asm _emit 0xff
        push 0
        push 10h
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 32 E1 F4 FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xe1
        __asm _emit 0xf4
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x55534c
        __asm _emit 0x75
        __asm _emit 0x14
        push 664h
        push 67c1e0h
        ; Exact mapped bytes E8 F9 39 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x39
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55534c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x555327
        __asm _emit 0x75
        __asm _emit 0xd5
        push 665h
        push 67c1e0h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 FB 4E F8 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x4e
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 44h]
        cmp dword ptr [ecx + 20h], 0
        ; Exact mapped bytes 74 09: je 0x555377
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 44h]
        cmp dword ptr [edx + 24h], 0
        ; Exact mapped bytes 75 07: jne 0x55537e
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 4D 01 00 00: jmp 0x5554cb
        __asm _emit 0xe9
        __asm _emit 0x4d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 10h], -1
        ; Exact mapped bytes 75 09: jne 0x55538d
        __asm _emit 0x75
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax + 2ch]
        mov dword ptr [ebp + 10h], ecx
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 34h], edx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 30h], ecx
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 0ch]
        mov dword ptr [ebp - 2ch], eax
        lea ecx, [ebp - 28h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 47 F1 FD FF: call 0x534503
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xf1
        __asm _emit 0xfd
        __asm _emit 0xff
        lea edx, [ebp - 40h]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B5 F1 FD FF: call 0x53457d
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xf1
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 32 14 00 00: call 0x55681a
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 8], 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 9B E9 FD FF: call 0x533d9c
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xe9
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 21: je 0x555426
        __asm _emit 0x74
        __asm _emit 0x21
        mov ecx, dword ptr [ebp - 20h]
        cmp dword ptr [ecx + 84h], 0
        ; Exact mapped bytes 74 15: je 0x555426
        __asm _emit 0x74
        __asm _emit 0x15
        mov edx, dword ptr [ebp - 20h]
        mov eax, dword ptr [edx + 84h]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 8]
        mov dword ptr [ebp - 8], edx
        push 0
        push 0
        lea eax, [ebp - 1ch]
        push eax
        lea ecx, [ebp - 38h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        push 0
        push -1
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ecx + 24h]
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax + 24h]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 3D: je 0x5554a1
        __asm _emit 0x74
        __asm _emit 0x3d
        cmp dword ptr [ebp - 0ch], 80040007h
        ; Exact mapped bytes 75 34: jne 0x5554a1
        __asm _emit 0x75
        __asm _emit 0x34
        push 0
        push 0
        lea ecx, [ebp - 1ch]
        push ecx
        lea edx, [ebp - 38h]
        push edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 4]
        push ecx
        push 0
        push 0
        push 0
        push -1
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax + 24h]
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [edx + 24h]
        mov edx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 0D: je 0x5554b4
        __asm _emit 0x74
        __asm _emit 0x0d
        cmp dword ptr [ebp - 0ch], 80040007h
        ; Exact mapped bytes 75 04: jne 0x5554b4
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 17: jmp 0x5554cb
        __asm _emit 0xeb
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 44h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes FF 92 D0 00 00 00: call dword ptr [edx + 0xd0]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
