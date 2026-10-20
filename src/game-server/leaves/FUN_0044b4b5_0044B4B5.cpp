// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0044B4B5 .. +0x201 bytes.
extern "C" __declspec(naked) void FUN_0044b4b5_0044B4B5() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 78h
        push edi
        push ecx
        lea edi, [ebp - 78h]
        mov ecx, 1eh
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 78h], ecx
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 10h], 40h
        ; Exact mapped bytes 74 05: je 0x44b4de
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 C7 01 00 00: jmp 0x44b6a5
        __asm _emit 0xe9
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 40h
        push 0
        lea ecx, [ebp - 50h]
        push ecx
        ; Exact mapped bytes E8 85 DE 05 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xde
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 0ch
        push 40h
        mov edx, dword ptr [ebp + 0ch]
        push edx
        lea eax, [ebp - 50h]
        push eax
        ; Exact mapped bytes E8 23 DB 05 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xdb
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 78h]
        mov edx, dword ptr [ecx + 168h]
        add edx, 78h
        mov dword ptr [ebp - 8], edx
        mov dword ptr [ebp - 58h], 4
        mov dword ptr [ebp - 5ch], 0
        mov eax, dword ptr [ebp - 8]
        xor ecx, ecx
        mov cl, byte ptr [eax + 19h]
        mov dword ptr [ebp - 60h], ecx
        lea edx, [ebp - 58h]
        push edx
        lea eax, [ebp - 5ch]
        push eax
        lea ecx, [ebp - 60h]
        push ecx
        ; Exact mapped bytes E8 57 A9 FC FF: call 0x415e90
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xa9
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x44b545
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 60 01 00 00: jmp 0x44b6a5
        __asm _emit 0xe9
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 64h], 31h
        mov dword ptr [ebp - 68h], 0
        lea edx, [ebp - 64h]
        push edx
        lea eax, [ebp - 68h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        xor edx, edx
        mov dl, byte ptr [ecx + 19h]
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx*4]
        push ecx
        ; Exact mapped bytes E8 21 A9 FC FF: call 0x415e90
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xa9
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x44b57b
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 2A 01 00 00: jmp 0x44b6a5
        __asm _emit 0xe9
        __asm _emit 0x2a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        xor eax, eax
        mov al, byte ptr [edx + 19h]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax*4]
        mov dword ptr [ebp - 54h], edx
        mov eax, dword ptr [ebp - 8]
        xor ecx, ecx
        mov cl, byte ptr [eax + 19h]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 78h]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 54h]
        imul ecx, ecx, 370h
        lea edx, [eax + ecx + 16bdch]
        mov dword ptr [ebp - 10h], edx
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x44b5c5
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 20h
        ; Exact mapped bytes 0F 8D B8 00 00 00: jge 0x44b687
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 6ch], 0fah
        mov dword ptr [ebp - 70h], 0
        mov ecx, dword ptr [ebp - 0ch]
        xor edx, edx
        mov dl, byte ptr [ebp + ecx*2 - 50h]
        mov dword ptr [ebp - 74h], edx
        lea eax, [ebp - 6ch]
        push eax
        lea ecx, [ebp - 70h]
        push ecx
        lea edx, [ebp - 74h]
        push edx
        ; Exact mapped bytes E8 C6 81 FB FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x81
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 53: je 0x44b654
        __asm _emit 0x74
        __asm _emit 0x53
        mov eax, dword ptr [ebp - 0ch]
        imul eax, eax, 0ah
        mov ecx, dword ptr [ebp - 10h]
        xor edx, edx
        mov dl, byte ptr [ecx + eax + 134h]
        mov eax, dword ptr [ebp - 0ch]
        xor ecx, ecx
        mov cl, byte ptr [ebp + eax*2 - 50h]
        cmp edx, ecx
        ; Exact mapped bytes 7C 19: jl 0x44b639
        __asm _emit 0x7c
        __asm _emit 0x19
        mov edx, dword ptr [ebp - 0ch]
        imul edx, edx, 0ah
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0ch]
        mov cl, byte ptr [ebp + ecx*2 - 50h]
        mov byte ptr [eax + edx + 134h], cl
        ; Exact mapped bytes EB 1B: jmp 0x44b654
        __asm _emit 0xeb
        __asm _emit 0x1b
        mov edx, dword ptr [ebp - 0ch]
        xor eax, eax
        mov al, byte ptr [ebp + edx*2 - 50h]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        push 5b706ch
        ; Exact mapped bytes E8 C4 45 08 00: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x45
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 0ch
        push 2
        push 0
        mov edx, dword ptr [ebp - 0ch]
        imul edx, edx, 0ah
        mov eax, dword ptr [ebp - 10h]
        lea ecx, [eax + edx + 132h]
        push ecx
        ; Exact mapped bytes E8 02 DD 05 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xdd
        __asm _emit 0x05
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 0ch]
        imul edx, edx, 0ah
        mov eax, dword ptr [ebp - 10h]
        mov byte ptr [eax + edx + 135h], 0
        ; Exact mapped bytes E9 35 FF FF FF: jmp 0x44b5bc
        __asm _emit 0xe9
        __asm _emit 0x35
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 54h]
        shl ecx, 10h
        or ecx, 2
        push ecx
        mov edx, dword ptr [ebp - 78h]
        push edx
        ; Exact mapped bytes A1 7C CB 5D 00: mov eax, dword ptr [0x5dcb7c]
        __asm _emit 0xa1
        __asm _emit 0x7c
        __asm _emit 0xcb
        __asm _emit 0x5d
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 40ca8h]
        ; Exact mapped bytes E8 10 70 03 00: call 0x4826b5
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x70
        __asm _emit 0x03
        __asm _emit 0x00
        pop edi
        add esp, 78h
        cmp ebp, esp
        ; Exact mapped bytes E8 30 D1 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xd1
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
