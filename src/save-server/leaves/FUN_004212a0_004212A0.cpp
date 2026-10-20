// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004212A0 .. +0x153 bytes.
extern "C" __declspec(naked) void FUN_004212a0_004212A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 58h
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 58h]
        mov ecx, 16h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A2 05 FE FF: call 0x40186b
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x05
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 4
        ; Exact mapped bytes E8 84 FD FD FF: call 0x40105f
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xfd
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, dword ptr [eax]
        mov dword ptr [ebp - 0ch], edx
        mov dword ptr [ebp - 10h], 0
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 0F 84 EC 00 00 00: je 0x4213dd
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 18h], edx
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 73: je 0x421378
        __asm _emit 0x74
        __asm _emit 0x73
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        add ecx, 4
        push ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 2
        ; Exact mapped bytes E8 34 03 FE FF: call 0x40164f
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x03
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        ; Exact mapped bytes E8 BF 02 FE FF: call 0x4015e6
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x02
        __asm _emit 0xfe
        __asm _emit 0xff
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 38: je 0x421368
        __asm _emit 0x74
        __asm _emit 0x38
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax]
        mov dword ptr [edx], ecx
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 6E 07 FE FF: call 0x401ab4
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x07
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 10h]
        add edx, 1
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10h]
        sub ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 10h], ecx
        ; Exact mapped bytes EB 0E: jmp 0x421376
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 18h], edx
        ; Exact mapped bytes EB 87: jmp 0x4212ff
        __asm _emit 0xeb
        __asm _emit 0x87
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 4
        push ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 2
        ; Exact mapped bytes E8 C1 02 FE FF: call 0x40164f
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x02
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        ; Exact mapped bytes E8 4C 02 FE FF: call 0x4015e6
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x02
        __asm _emit 0xfe
        __asm _emit 0xff
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 3A: je 0x4213dd
        __asm _emit 0x74
        __asm _emit 0x3a
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 4
        ; Exact mapped bytes E8 AD FC FD FF: call 0x40105f
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xfc
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov dword ptr [eax], edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 EF 06 FE FF: call 0x401ab4
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x06
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 1
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 10h]
        sub eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 10h], eax
        mov eax, dword ptr [ebp - 10h]
        pop edi
        pop esi
        pop ebx
        add esp, 58h
        cmp ebp, esp
        ; Exact mapped bytes E8 03 3A 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x3a
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
