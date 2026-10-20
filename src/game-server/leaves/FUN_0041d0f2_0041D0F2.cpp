// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041D0F2 .. +0x16A bytes.
extern "C" __declspec(naked) void FUN_0041d0f2_0041D0F2() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 50h
        push edi
        push ecx
        lea edi, [ebp - 50h]
        mov ecx, 14h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 50h], ecx
        lea eax, [ebp + 8]
        push eax
        lea ecx, [ebp - 3ch]
        push ecx
        mov ecx, dword ptr [ebp - 50h]
        add ecx, 4
        ; Exact mapped bytes E8 C0 1A 00 00: call 0x41ebe0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 8], edx
        lea eax, [ebp - 40h]
        push eax
        mov ecx, dword ptr [ebp - 50h]
        add ecx, 4
        ; Exact mapped bytes E8 9C 19 00 00: call 0x41ead0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 93 1C 00 00: call 0x41edd0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x41d14d
        __asm _emit 0x74
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 FE 00 00 00: jmp 0x41d24b
        __asm _emit 0xe9
        __asm _emit 0xfe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 FB 1B 00 00: call 0x41ed50
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 0F 84 E4 00 00 00: je 0x41d249
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 44h]
        push edx
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 4
        ; Exact mapped bytes E8 EC D2 FF FF: call 0x41a460
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xd2
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 10h], eax
        lea ecx, [ebp - 48h]
        push ecx
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 4
        ; Exact mapped bytes E8 18 D3 FF FF: call 0x41a4a0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xd3
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 0ch], edx
        lea eax, [ebp - 0ch]
        push eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 27 D6 FF FF: call 0x41a7c0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xd6
        __asm _emit 0xff
        __asm _emit 0xff
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 0F 84 A3 00 00 00: je 0x41d249
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 62 D5 FF FF: call 0x41a710
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xd5
        __asm _emit 0xff
        __asm _emit 0xff
        add eax, 4
        mov dword ptr [ebp - 38h], eax
        mov ecx, dword ptr [ebp - 38h]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 2B C1 FF FF: call 0x4192eb
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xc1
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 38h]
        cmp dword ptr [edx + 18h], 0
        ; Exact mapped bytes 74 6D: je 0x41d236
        __asm _emit 0x74
        __asm _emit 0x6d
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 34h], eax
        mov dword ptr [ebp - 30h], 0
        mov dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 66 C7 45 D4 04 00: mov word ptr [ebp - 0x2c], 4
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xd4
        __asm _emit 0x04
        __asm _emit 0x00
        push 0
        push 24h
        lea ecx, [ebp - 34h]
        push ecx
        push 0
        push 1
        push 80020f14h
        mov edx, dword ptr [ebp - 38h]
        mov ecx, dword ptr [edx + 18h]
        ; Exact mapped bytes E8 33 A0 06 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xa0
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 18h]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 54h], eax
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx + 18h]
        mov eax, dword ptr [edx + 168h]
        mov dword ptr [eax + 58h], 0
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx + 18h]
        mov eax, dword ptr [edx + 168h]
        ; Exact mapped bytes 66 C7 40 5C 04 00: mov word ptr [eax + 0x5c], 4
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x40
        __asm _emit 0x5c
        __asm _emit 0x04
        __asm _emit 0x00
        push 0
        lea ecx, [ebp - 4ch]
        push ecx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 FC D4 FF FF: call 0x41a740
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xd4
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 44 FF FF FF: jmp 0x41d18d
        __asm _emit 0xe9
        __asm _emit 0x44
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        pop edi
        add esp, 50h
        cmp ebp, esp
        ; Exact mapped bytes E8 8A B5 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xb5
        __asm _emit 0x08
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
