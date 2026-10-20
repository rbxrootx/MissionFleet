// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C1113 .. +0xCE bytes.
extern "C" __declspec(naked) void _Serialize_CStringArray__UAEXAAVCArchive___Z_004C1113() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 10h], ecx
        push 15ah
        push 6746f0h
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 31 91 01 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x91
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 80 36 06 00: call 0x5247bb
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x36
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 9C 45 06 00: call 0x5256df
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 46: je 0x4c118d
        __asm _emit 0x74
        __asm _emit 0x46
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 8]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 45 9B 02 00: call 0x4eac9b
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x9b
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x4c1168
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 4]
        cmp eax, dword ptr [edx + 8]
        ; Exact mapped bytes 7D 18: jge 0x4c118b
        __asm _emit 0x7d
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [edx + eax*4]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 F7 84 02 00: call 0x4e9680
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x84
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB D4: jmp 0x4c115f
        __asm _emit 0xeb
        __asm _emit 0xd4
        ; Exact mapped bytes EB 4E: jmp 0x4c11db
        __asm _emit 0xeb
        __asm _emit 0x4e
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 44 9B 02 00: call 0x4eacd9
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x9b
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        push -1
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 35 F4 FF FF: call 0x4c05db
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x4c11b8
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 1
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0ch]
        cmp eax, dword ptr [edx + 8]
        ; Exact mapped bytes 7D 18: jge 0x4c11db
        __asm _emit 0x7d
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [ebp - 0ch]
        lea ecx, [edx + eax*4]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 D2 85 02 00: call 0x4e97ab
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x85
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB D4: jmp 0x4c11af
        __asm _emit 0xeb
        __asm _emit 0xd4
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
