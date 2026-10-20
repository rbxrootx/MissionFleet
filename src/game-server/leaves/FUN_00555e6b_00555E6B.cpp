// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00555E6B .. +0x12B bytes.
extern "C" __declspec(naked) void FUN_00555e6b_00555E6B() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 14h], ecx
        push 537h
        push 5cfa08h
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 D6 52 FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x52
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 2E 1F 00 00: call 0x557dc0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x1f
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        push 53ah
        push 5cfa08h
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 B8 52 FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x52
        __asm _emit 0xfa
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 54h]
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 31: jne 0x555ee8
        __asm _emit 0x75
        __asm _emit 0x31
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 52 68: call dword ptr [edx + 0x68]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x68
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 18: je 0x555ee3
        __asm _emit 0x74
        __asm _emit 0x18
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 52 6C: call dword ptr [edx + 0x6c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x6c
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 05: jne 0x555ee8
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 A7 00 00 00: jmp 0x555f8f
        __asm _emit 0xe9
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 52 EC F9 FF: call 0x4f4b42
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xec
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 7C: je 0x555f75
        __asm _emit 0x74
        __asm _emit 0x7c
        push -1
        mov eax, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 92 D4 00 00 00: call dword ptr [edx + 0xd4]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        mov eax, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 92 E8 00 00 00: call dword ptr [edx + 0xe8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 21 EC F9 FF: call 0x4f4b42
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xec
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 4B: je 0x555f75
        __asm _emit 0x74
        __asm _emit 0x4b
        push 585e80h
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 59 51 FA FF: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x51
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x555f4f
        __asm _emit 0x75
        __asm _emit 0x14
        push 551h
        push 5cfa08h
        ; Exact mapped bytes E8 B6 EA FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xea
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x555f4f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D5: jne 0x555f2a
        __asm _emit 0x75
        __asm _emit 0xd5
        push -1
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 92 D4 00 00 00: call dword ptr [edx + 0xd4]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        mov eax, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 92 E8 00 00 00: call dword ptr [edx + 0xe8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 FD BA FE FF: call 0x541a7a
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xba
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 08 B0 FD FF: call 0x530f8c
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xb0
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x555f8f
        __asm _emit 0x75
        __asm _emit 0x07
        push 1
        ; Exact mapped bytes E8 40 83 FD FF: call 0x52e2cf
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x83
        __asm _emit 0xfd
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
