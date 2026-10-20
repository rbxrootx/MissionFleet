// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0047D4A0 .. +0x14F bytes.
extern "C" __declspec(naked) void FUN_0047d4a0_0047D4A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        push esi
        push edi
        push ecx
        lea edi, [ebp - 28h]
        mov ecx, 0ah
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 28h], ecx
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [ebp - 28h]
        ; Exact mapped bytes 0F 84 15 01 00 00: je 0x47d5dd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x15
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 18h]
        push ecx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 CC F6 FF FF: call 0x47cba0
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 0ch], edx
        lea eax, [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 0B F7 FF FF: call 0x47cbf0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 4], ecx
        lea edx, [ebp - 20h]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 AA F6 FF FF: call 0x47cba0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 10h], eax
        lea ecx, [ebp - 24h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E9 F6 FF FF: call 0x47cbf0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 8], edx
        lea eax, [ebp - 4]
        push eax
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 F8 FB FF FF: call 0x47d110
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 73: je 0x47d594
        __asm _emit 0x74
        __asm _emit 0x73
        lea ecx, [ebp - 8]
        push ecx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 E3 FB FF FF: call 0x47d110
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 5E: je 0x47d594
        __asm _emit 0x74
        __asm _emit 0x5e
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 D2 FA FF FF: call 0x47d010
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 BB 09 00 00: call 0x47df00
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, eax
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 C1 FA FF FF: call 0x47d010
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 AA 09 00 00: call 0x47df00
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        cmp esi, eax
        ; Exact mapped bytes 7D 2D: jge 0x47d587
        __asm _emit 0x7d
        __asm _emit 0x2d
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 14h], edx
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 D8 FA FF FF: call 0x47d040
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 91 03 00 00: call 0x47d910
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 10h], ecx
        ; Exact mapped bytes EB 08: jmp 0x47d58f
        __asm _emit 0xeb
        __asm _emit 0x08
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 B1 FA FF FF: call 0x47d040
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 78 FF FF FF: jmp 0x47d50c
        __asm _emit 0xe9
        __asm _emit 0x78
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        lea edx, [ebp - 8]
        push edx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 70 FB FF FF: call 0x47d110
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 18: je 0x47d5c1
        __asm _emit 0x74
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 4F 03 00 00: call 0x47d910
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx + 8]
        mov eax, dword ptr [ebp + 8]
        add edx, dword ptr [eax + 8]
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ecx + 8], edx
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx + 8], 0
        pop edi
        pop esi
        add esp, 28h
        cmp ebp, esp
        ; Exact mapped bytes E8 F7 B1 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xb1
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
