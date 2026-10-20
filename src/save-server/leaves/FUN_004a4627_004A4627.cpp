// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A4627 .. +0x105 bytes.
extern "C" __declspec(naked) void FUN_004a4627_004A4627() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58d3f3h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 18h], ecx
        mov dword ptr [ebp - 14h], 0
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 9C BF 68 00: call dword ptr [0x68bf9c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4a4674
        __asm _emit 0x75
        __asm _emit 0x14
        push 134h
        push 674ab0h
        ; Exact mapped bytes E8 D1 46 08 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x46
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a4674
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4a464f
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 90h]
        and ecx, 80000h
        test ecx, ecx
        ; Exact mapped bytes 75 14: jne 0x4a46a1
        __asm _emit 0x75
        __asm _emit 0x14
        push 135h
        push 674ab0h
        ; Exact mapped bytes E8 A4 46 08 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a46a1
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D3: jne 0x4a467a
        __asm _emit 0x75
        __asm _emit 0xd3
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 58 06 08 00: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x06
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 1
        push 104h
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 D5 89 02 00: call 0x4cd098
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x89
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        push 104h
        push 466h
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 C3 83 08 00: call 0x52ca99
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x83
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 5C 6F 08 00: call 0x52b639
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x6f
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7D 0A: jge 0x4a46eb
        __asm _emit 0x7d
        __asm _emit 0x0a
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 69 80 02 00: call 0x4cc752
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x80
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 0A: jmp 0x4a46f5
        __asm _emit 0xeb
        __asm _emit 0x0a
        push -1
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 DE 8A 02 00: call 0x4cd1d3
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x8a
        __asm _emit 0x02
        __asm _emit 0x00
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 19 7E 02 00: call 0x4cc51a
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x7e
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        or ecx, 1
        mov dword ptr [ebp - 14h], ecx
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 D6 81 02 00: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x81
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
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
