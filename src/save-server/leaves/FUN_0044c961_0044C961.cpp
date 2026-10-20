// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0044C961 .. +0xCC bytes.
extern "C" __declspec(naked) void FUN_0044c961_0044C961() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], ecx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 20h
        ; Exact mapped bytes E8 72 AC 0D 00: call 0x5275ea
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xac
        __asm _emit 0x0d
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 0F 84 9F 00 00 00: je 0x44ca24
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 8]
        push eax
        lea ecx, [ebp - 4]
        push ecx
        lea edx, [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 20h
        ; Exact mapped bytes E8 CB B2 07 00: call 0x4c7c67
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xb2
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 50h], 0
        ; Exact mapped bytes 75 14: jne 0x44c9b9
        __asm _emit 0x75
        __asm _emit 0x14
        push 175h
        push 676dcch
        ; Exact mapped bytes E8 8C C3 0D 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xc3
        __asm _emit 0x0d
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x44c9b9
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x44c99c
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 4ch], 0
        ; Exact mapped bytes 75 14: jne 0x44c9dc
        __asm _emit 0x75
        __asm _emit 0x14
        push 176h
        push 676dcch
        ; Exact mapped bytes E8 69 C3 0D 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xc3
        __asm _emit 0x0d
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x44c9dc
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x44c9bf
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 8]
        add ecx, 2ch
        ; Exact mapped bytes E8 7D 5B 0E 00: call 0x532572
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x5b
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        add ecx, 2ch
        ; Exact mapped bytes E8 C2 59 0E 00: call 0x5323c2
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x59
        __asm _emit 0x0e
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, 2ch
        ; Exact mapped bytes E8 B6 59 0E 00: call 0x5323c2
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x59
        __asm _emit 0x0e
        __asm _emit 0x00
        push eax
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 50h]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 50h]
        mov edx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 52 1C: call dword ptr [edx + 0x1c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x1c
        ; Exact mapped bytes E9 57 FF FF FF: jmp 0x44c97b
        __asm _emit 0xe9
        __asm _emit 0x57
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
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
