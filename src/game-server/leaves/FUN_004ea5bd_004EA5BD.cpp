// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004EA5BD .. +0x12D bytes.
extern "C" __declspec(naked) void FUN_004ea5bd_004EA5BD() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 18h], ecx
        push 124h
        push 5c5d28h
        mov eax, dword ptr [ebp - 18h]
        push eax
        ; Exact mapped bytes E8 84 0B 01 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 D3 63 04 00: call 0x5309bb
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x63
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 26 73 04 00: call 0x531916
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x73
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 A2 00 00 00: je 0x4ea69a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 DE B6 01 00: call 0x505ce5
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xb6
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 18h]
        cmp dword ptr [ecx + 0ch], 0
        ; Exact mapped bytes 75 05: jne 0x4ea615
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 CC 00 00 00: jmp 0x4ea6e1
        __asm _emit 0xe9
        __asm _emit 0xcc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 18h]
        cmp dword ptr [edx + 4], 0
        ; Exact mapped bytes 75 14: jne 0x4ea632
        __asm _emit 0x75
        __asm _emit 0x14
        push 12eh
        push 5c5d28h
        ; Exact mapped bytes E8 D3 A3 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xa3
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ea632
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x4ea615
        __asm _emit 0x75
        __asm _emit 0xdd
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x4ea64a
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 4]
        cmp eax, dword ptr [edx + 8]
        ; Exact mapped bytes 73 43: jae 0x4ea698
        __asm _emit 0x73
        __asm _emit 0x43
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + eax*4]
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes EB 08: jmp 0x4ea66e
        __asm _emit 0xeb
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 22: je 0x4ea696
        __asm _emit 0x74
        __asm _emit 0x22
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 51 04: mov dx, word ptr [ecx + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x04
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 82 74 04 00: call 0x531b06
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x74
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 8]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 73 78 04 00: call 0x531f07
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x78
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes EB D0: jmp 0x4ea666
        __asm _emit 0xeb
        __asm _emit 0xd0
        ; Exact mapped bytes EB A9: jmp 0x4ea641
        __asm _emit 0xeb
        __asm _emit 0xa9
        ; Exact mapped bytes EB 47: jmp 0x4ea6e1
        __asm _emit 0xeb
        __asm _emit 0x47
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 81 B6 01 00: call 0x505d23
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xb6
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 14h]
        sub ecx, 1
        mov dword ptr [ebp - 14h], ecx
        test eax, eax
        ; Exact mapped bytes 74 2C: je 0x4ea6e1
        __asm _emit 0x74
        __asm _emit 0x2c
        lea edx, [ebp - 0ch]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 59 76 04 00: call 0x531d1a
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x76
        __asm _emit 0x04
        __asm _emit 0x00
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 4F 78 04 00: call 0x531f1d
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x78
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes 66 8B 45 F4: mov ax, word ptr [ebp - 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xf4
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 92 91 04 00: call 0x533871
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x91
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes EB C4: jmp 0x4ea6a5
        __asm _emit 0xeb
        __asm _emit 0xc4
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
