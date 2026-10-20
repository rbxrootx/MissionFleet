// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00517A4B .. +0x190 bytes.
extern "C" __declspec(naked) void FUN_00517a4b_00517A4B() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 14h], ecx
        push 3f9h
        push 674cach
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 F6 27 FC FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x27
        __asm _emit 0xfc
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x517a84
        __asm _emit 0x75
        __asm _emit 0x14
        push 3fah
        push 674cach
        ; Exact mapped bytes E8 C1 12 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x12
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x517a84
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x517a6a
        __asm _emit 0x75
        __asm _emit 0xe0
        push 6378d8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F9 26 FC FF: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x26
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x517aaf
        __asm _emit 0x75
        __asm _emit 0x14
        push 3fbh
        push 674cach
        ; Exact mapped bytes E8 96 12 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x12
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x517aaf
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x517a8a
        __asm _emit 0x75
        __asm _emit 0xd5
        push 3fch
        push 674cach
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 98 27 FC FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x27
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 64h
        ; Exact mapped bytes E8 12 EA 00 00: call 0x5264e9
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xea
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 14h]
        cmp dword ptr [edx + 1ch], 0
        ; Exact mapped bytes 0F 84 EE 00 00 00: je 0x517bd2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xee
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 405h
        push 674cach
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 64h
        ; Exact mapped bytes E8 B1 E8 00 00: call 0x5263aa
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        imul eax, eax, 28h
        push eax
        ; Exact mapped bytes E8 D1 45 FB FF: call 0x4cc0d3
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x45
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 64h
        ; Exact mapped bytes E8 91 E8 00 00: call 0x5263aa
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 1
        imul eax, eax, 28h
        push eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 5ch]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 D0 D7 F4 FF: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xd7
        __asm _emit 0xf4
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 5ch]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 64 49 FB FF: call 0x4cc4a9
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x49
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 5ch], edx
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 64h
        ; Exact mapped bytes E8 4E E8 00 00: call 0x5263aa
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 1
        imul eax, eax, 28h
        mov ecx, dword ptr [ebp - 8]
        add ecx, eax
        mov dword ptr [ebp - 8], ecx
        push 28h
        mov edx, dword ptr [ebp + 8]
        add edx, 5ch
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 84 D7 F4 FF: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xd7
        __asm _emit 0xf4
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 DF 01 01 00: call 0x527d66
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 5A E4 FF FF: call 0x515fee
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xe4
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes FF 15 80 B3 68 00: call dword ptr [0x68b380]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0xb3
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 05: jne 0x517bac
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 30 B3 F8 FF: call 0x4a2edc
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xb3
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        push eax
        push 0
        push 467h
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 7A 3A 01 00: call 0x52b639
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x3a
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0F: jne 0x517bd2
        __asm _emit 0x75
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 15 7C B3 68 00: call dword ptr [0x68b37c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0xb3
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes E8 0A B3 F8 FF: call 0x4a2edc
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xb3
        __asm _emit 0xf8
        __asm _emit 0xff
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
