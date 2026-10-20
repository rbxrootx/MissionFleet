// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005271AC .. +0xE2 bytes.
extern "C" __declspec(naked) void FUN_005271ac_005271AC() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 18h], ecx
        cmp dword ptr [ebp + 0ch], 1
        ; Exact mapped bytes 74 07: je 0x5271c5
        __asm _emit 0x74
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 C0 00 00 00: jmp 0x527285
        __asm _emit 0xe9
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 8E E7 00 00: call 0x53595b
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xe7
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 0ch]
        push eax
        ; Exact mapped bytes FF 15 74 25 5E 00: call dword ptr [0x5e2574]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x74
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        lea ecx, [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 60 50 01 00: call 0x53c243
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 F8 08 00 00: call 0x527aeb
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 7D 07: jge 0x527203
        __asm _emit 0x7d
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 82 00 00 00: jmp 0x527285
        __asm _emit 0xe9
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 3F 01 00 00: call 0x52734e
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 8
        ; Exact mapped bytes 75 37: jne 0x52724f
        __asm _emit 0x75
        __asm _emit 0x37
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 8
        ; Exact mapped bytes E8 A7 ED 00 00: call 0x535fde
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xed
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x52724f
        __asm _emit 0x75
        __asm _emit 0x14
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 4]
        and ecx, 4
        test ecx, ecx
        ; Exact mapped bytes 74 07: je 0x52724f
        __asm _emit 0x74
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 9
        cmp dword ptr [ebp - 4], 0ah
        ; Exact mapped bytes 72 14: jb 0x527269
        __asm _emit 0x72
        __asm _emit 0x14
        push 137h
        push 5c8e54h
        ; Exact mapped bytes E8 9C D7 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xd7
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x527269
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x52724f
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax*4 + 5de824h]
        push ecx
        ; Exact mapped bytes FF 15 78 25 5E 00: call dword ptr [0x5e2578]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        mov eax, 1
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
