// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C01E6 .. +0xCE bytes.
extern "C" __declspec(naked) void _Serialize_CObArray__UAEXAAVCArchive___Z_004C01E6() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 10h], ecx
        push 110h
        push 674680h
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 5E A0 01 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xa0
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 AD 45 06 00: call 0x5247bb
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x45
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C9 54 06 00: call 0x5256df
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x54
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 46: je 0x4c0260
        __asm _emit 0x74
        __asm _emit 0x46
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 8]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 72 AA 02 00: call 0x4eac9b
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xaa
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x4c023b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 4]
        cmp eax, dword ptr [edx + 8]
        ; Exact mapped bytes 7D 18: jge 0x4c025e
        __asm _emit 0x7d
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + eax*4]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 74 5A 06 00: call 0x525cd0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x5a
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes EB D4: jmp 0x4c0232
        __asm _emit 0xeb
        __asm _emit 0xd4
        ; Exact mapped bytes EB 4E: jmp 0x4c02ae
        __asm _emit 0xeb
        __asm _emit 0x4e
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 71 AA 02 00: call 0x4eacd9
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0xaa
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        push -1
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 EE F6 FF FF: call 0x4bf967
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x4c028b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 1
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0ch]
        cmp eax, dword ptr [edx + 8]
        ; Exact mapped bytes 7D 18: jge 0x4c02ae
        __asm _emit 0x7d
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [ebp - 0ch]
        lea ecx, [edx + eax*4]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 3A 5A 06 00: call 0x525ce6
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x5a
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes EB D4: jmp 0x4c0282
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
