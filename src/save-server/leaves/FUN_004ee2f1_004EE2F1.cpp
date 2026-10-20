// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004EE2F1 .. +0x11C bytes.
extern "C" __declspec(naked) void FUN_004ee2f1_004EE2F1() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 24h], ecx
        mov eax, dword ptr [ebp - 24h]
        cmp dword ptr [eax + 1ch], 0
        ; Exact mapped bytes 75 14: jne 0x4ee31a
        __asm _emit 0x75
        __asm _emit 0x14
        push 0beh
        push 677c28h
        ; Exact mapped bytes E8 2B AA 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xaa
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ee31a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x4ee2fd
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [edx + 40h], 0ffffffffh
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 97 38 04 00: call 0x531bd1
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x38
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [edx + 44h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [edx + 48h], ecx
        mov edx, dword ptr [ebp - 24h]
        cmp dword ptr [edx + 1ch], 0
        ; Exact mapped bytes 74 64: je 0x4ee3b6
        __asm _emit 0x74
        __asm _emit 0x64
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 34 7F FE FF: call 0x4d628e
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x7f
        __asm _emit 0xfe
        __asm _emit 0xff
        and eax, 300000h
        test eax, eax
        ; Exact mapped bytes 74 53: je 0x4ee3b6
        __asm _emit 0x74
        __asm _emit 0x53
        push 1
        push 0
        push 0
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 17 4C FE FF: call 0x4d2f88
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x4c
        __asm _emit 0xfe
        __asm _emit 0xff
        push 1
        push 0
        push 1
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 09 4C FE FF: call 0x4d2f88
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x4c
        __asm _emit 0xfe
        __asm _emit 0xff
        push 0
        push 3
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 3D 4D FE FF: call 0x4d30c8
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x4d
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 FB 7E FE FF: call 0x4d628e
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x7e
        __asm _emit 0xfe
        __asm _emit 0xff
        and eax, 300000h
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x4ee3b0
        __asm _emit 0x74
        __asm _emit 0x14
        push 0c8h
        push 677c28h
        ; Exact mapped bytes E8 95 A9 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xa9
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ee3b0
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D5: jne 0x4ee38b
        __asm _emit 0x75
        __asm _emit 0xd5
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 09 3E 04 00: call 0x5321c7
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x3e
        __asm _emit 0x04
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 FC 3F 04 00: call 0x5323c2
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x3f
        __asm _emit 0x04
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 8C D7 03 00: call 0x52bb5b
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xd7
        __asm _emit 0x03
        __asm _emit 0x00
        lea ecx, [ebp - 20h]
        push ecx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 02 3F 04 00: call 0x5322dd
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x3f
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        mov eax, dword ptr [eax + 4]
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [ecx + 4ch], edx
        mov dword ptr [ecx + 50h], eax
        mov edx, dword ptr [ebp - 24h]
        cmp dword ptr [edx + 1ch], 0
        ; Exact mapped bytes 74 12: je 0x4ee404
        __asm _emit 0x74
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 06 0E 00 00: call 0x4ef200
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 AB DB 03 00: call 0x52bfaf
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xdb
        __asm _emit 0x03
        __asm _emit 0x00
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
