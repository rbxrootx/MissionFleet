// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00557445 .. +0x160 bytes.
extern "C" __declspec(naked) void FUN_00557445_00557445() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 14h], ecx
        push 135h
        push 67c630h
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 FC 2D F8 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x2d
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        cmp dword ptr [ecx + 20h], 0
        ; Exact mapped bytes 75 14: jne 0x557481
        __asm _emit 0x75
        __asm _emit 0x14
        push 136h
        push 67c630h
        ; Exact mapped bytes E8 C4 18 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x18
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x557481
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x557464
        __asm _emit 0x75
        __asm _emit 0xdd
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 12 A5 FF FF: call 0x5519a3
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xa5
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 34h]
        push edx
        ; Exact mapped bytes E8 6F 5F FF FF: call 0x54d410
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x5f
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 30h], eax
        mov edx, dword ptr [ebp - 14h]
        cmp dword ptr [edx + 30h], 0
        ; Exact mapped bytes 7D 07: jge 0x5574b7
        __asm _emit 0x7d
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 E5 00 00 00: jmp 0x55759c
        __asm _emit 0xe9
        __asm _emit 0xe5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 20h]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 24h]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 3ch]
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [eax + 20h], 0
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ecx + 24h], 0
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [edx + 3ch], 0
        mov eax, dword ptr [ebp - 14h]
        add eax, 20h
        push eax
        push 0
        push 640d30h
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 34h]
        push edx
        ; Exact mapped bytes FF 15 4C C2 68 00: call dword ptr [0x68c24c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0xc2
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        mov eax, dword ptr [ebp - 14h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 92 CC 00 00 00: call dword ptr [edx + 0xcc]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 40: je 0x557563
        __asm _emit 0x74
        __asm _emit 0x40
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 13: je 0x55753c
        __asm _emit 0x74
        __asm _emit 0x13
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        mov dword ptr [ebp - 0ch], 0
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E1: jne 0x557523
        __asm _emit 0x75
        __asm _emit 0xe1
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 13: je 0x55755b
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov dword ptr [ebp - 10h], 0
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E1: jne 0x557542
        __asm _emit 0x75
        __asm _emit 0xe1
        ; Exact mapped bytes EB 23: jmp 0x557586
        __asm _emit 0xeb
        __asm _emit 0x23
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [edx + 20h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 24h], edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [eax + 3ch], ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 30 AA FF FF: call 0x551fb6
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xaa
        __asm _emit 0xff
        __asm _emit 0xff
        push 15ah
        push 67c630h
        mov edx, dword ptr [ebp - 14h]
        push edx
        ; Exact mapped bytes E8 C7 2C F8 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x2c
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
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
