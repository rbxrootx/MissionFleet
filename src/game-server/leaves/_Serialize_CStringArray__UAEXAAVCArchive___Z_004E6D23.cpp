// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E6D23 .. +0xCE bytes.
extern "C" __declspec(naked) void _Serialize_CStringArray__UAEXAAVCArchive___Z_004E6D23() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 10h], ecx
        push 15ah
        push 5c7c98h
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 21 44 01 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 70 9C 04 00: call 0x5309bb
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x9c
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C3 AB 04 00: call 0x531916
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xab
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 46: je 0x4e6d9d
        __asm _emit 0x74
        __asm _emit 0x46
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 8]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 7F EF 01 00: call 0x505ce5
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xef
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x4e6d78
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 4]
        cmp eax, dword ptr [edx + 8]
        ; Exact mapped bytes 7D 18: jge 0x4e6d9b
        __asm _emit 0x7d
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [ebp - 4]
        lea ecx, [edx + eax*4]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 27 D9 01 00: call 0x5046c0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xd9
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB D4: jmp 0x4e6d6f
        __asm _emit 0xeb
        __asm _emit 0xd4
        ; Exact mapped bytes EB 4E: jmp 0x4e6deb
        __asm _emit 0xeb
        __asm _emit 0x4e
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 7E EF 01 00: call 0x505d23
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xef
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        push -1
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 35 F4 FF FF: call 0x4e61eb
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x4e6dc8
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 1
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0ch]
        cmp eax, dword ptr [edx + 8]
        ; Exact mapped bytes 7D 18: jge 0x4e6deb
        __asm _emit 0x7d
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [ebp - 0ch]
        lea ecx, [edx + eax*4]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 02 DA 01 00: call 0x5047eb
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xda
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB D4: jmp 0x4e6dbf
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
