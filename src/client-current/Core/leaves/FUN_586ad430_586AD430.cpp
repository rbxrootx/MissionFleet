// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586AD430 .. +0x176 bytes.
extern "C" __declspec(naked) void FUN_586ad430_586AD430() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        mov dword ptr [ebp - 20h], ecx
        mov byte ptr [ebp - 1], 0
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax]
        add ecx, 1
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [edx], ecx
        mov eax, dword ptr [ebp + 10h]
        sub eax, 1
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB 09: jmp 0x586ad45e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        sub ecx, 1
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 0F 8E F9 00 00 00: jle 0x586ad561
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x586ad47a
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 8]
        cmp eax, dword ptr [ebp - 14h]
        ; Exact mapped bytes 0F 8D D6 00 00 00: jge 0x586ad55c
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xd6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 2E E5 FF FF: call 0x586ab9c0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xe5
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 47 EA DD FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xea
        __asm _emit 0xdd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 D0 5E E1 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x5e
        __asm _emit 0xe1
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 50 0E: mov dx, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x0e
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        movzx eax, dx
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp - 0ch]
        cmp edx, dword ptr [ecx]
        ; Exact mapped bytes 7D 09: jge 0x586ad4c4
        __asm _emit 0x7d
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 0ch]
        add eax, 9
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 ED E4 FF FF: call 0x586ab9c0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xe4
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 06 EA DD FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xea
        __asm _emit 0xdd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 8F 5E E1 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x5e
        __asm _emit 0xe1
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 50 0E: mov dx, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x0e
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        movzx eax, dx
        add eax, 1
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp - 10h]
        cmp edx, dword ptr [ecx]
        ; Exact mapped bytes 7D 09: jge 0x586ad505
        __asm _emit 0x7d
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 10h]
        add eax, 9
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp - 0ch]
        cmp edx, dword ptr [ecx]
        ; Exact mapped bytes 74 0A: je 0x586ad519
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 10h]
        cmp ecx, dword ptr [eax]
        ; Exact mapped bytes 75 04: jne 0x586ad51d
        __asm _emit 0x75
        __asm _emit 0x04
        mov byte ptr [ebp - 1], 1
        mov edx, dword ptr [ebp - 0ch]
        cmp edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 7E 32: jle 0x586ad557
        __asm _emit 0x7e
        __asm _emit 0x32
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 8C E4 FF FF: call 0x586ab9c0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xe4
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 7D E4 FF FF: call 0x586ab9c0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xe4
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        mov edx, dword ptr [ebp - 18h]
        push edx
        mov eax, dword ptr [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 8A 02 00 00: call 0x586ad7e0
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 15 FF FF FF: jmp 0x586ad471
        __asm _emit 0xe9
        __asm _emit 0x15
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 F4 FE FF FF: jmp 0x586ad455
        __asm _emit 0xe9
        __asm _emit 0xf4
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        movzx ecx, byte ptr [ebp - 1]
        test ecx, ecx
        ; Exact mapped bytes 75 2A: jne 0x586ad593
        __asm _emit 0x75
        __asm _emit 0x2a
        push 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 4D E4 FF FF: call 0x586ab9c0
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xe4
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 66 E9 DD FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xe9
        __asm _emit 0xdd
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 EF 5D E1 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x5d
        __asm _emit 0xe1
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 50 0E: mov dx, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x0e
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        movzx eax, dx
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx], eax
        ; Exact mapped bytes EB 0D: jmp 0x586ad5a0
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx]
        sub eax, 1
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx], eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
