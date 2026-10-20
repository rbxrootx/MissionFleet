// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00514781 .. +0x10D bytes.
extern "C" __declspec(naked) void FUN_00514781_00514781() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        mov dword ptr [ebp - 20h], ecx
        mov dword ptr [ebp - 0ch], 0
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5147a3
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp - 8]
        cmp edx, dword ptr [ecx + 68h]
        ; Exact mapped bytes 0F 8D D1 00 00 00: jge 0x514883
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xd1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x5147c4
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ebp - 4]
        cmp edx, dword ptr [ecx + 6ch]
        ; Exact mapped bytes 0F 8D AB 00 00 00: jge 0x51487e
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 39 BF FF FF: call 0x51071c
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xbf
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov edx, dword ptr [ebp - 14h]
        push edx
        push 5875d0h
        ; Exact mapped bytes E8 0F 69 FE FF: call 0x4fb103
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x69
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 79: je 0x514879
        __asm _emit 0x74
        __asm _emit 0x79
        push 1
        mov eax, dword ptr [ebp - 10h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 52 70: call dword ptr [edx + 0x70]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x70
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 75 18: jne 0x51482e
        __asm _emit 0x75
        __asm _emit 0x18
        push 0
        mov eax, dword ptr [ebp - 10h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 52 70: call dword ptr [edx + 0x70]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x70
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 75 02: jne 0x51482e
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 8D: jmp 0x5147bb
        __asm _emit 0xeb
        __asm _emit 0x8d
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 57 CA 02 00: call 0x54128d
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xca
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        ; Exact mapped bytes 66 8B 55 0C: mov dx, word ptr [ebp + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x0c
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 20 5E FF FF: call 0x50a672
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x5e
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x51485d
        __asm _emit 0x74
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 1
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 6ch]
        sub edx, 1
        cmp dword ptr [ebp - 4], edx
        ; Exact mapped bytes 7D 0E: jge 0x514879
        __asm _emit 0x7d
        __asm _emit 0x0e
        push 0
        mov eax, dword ptr [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 5F CA 02 00: call 0x5412d8
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0xca
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes E9 3D FF FF FF: jmp 0x5147bb
        __asm _emit 0xe9
        __asm _emit 0x3d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 17 FF FF FF: jmp 0x51479a
        __asm _emit 0xe9
        __asm _emit 0x17
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 1
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
