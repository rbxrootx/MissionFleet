// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E5DF6 .. +0xCE bytes.
extern "C" __declspec(naked) void _Serialize_CObArray__UAEXAAVCArchive___Z_004E5DF6() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 10h], ecx
        push 110h
        push 5c7c28h
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 4E 53 01 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x53
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 9D AB 04 00: call 0x5309bb
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xab
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F0 BA 04 00: call 0x531916
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xba
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 46: je 0x4e5e70
        __asm _emit 0x74
        __asm _emit 0x46
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 8]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 AC FE 01 00: call 0x505ce5
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xfe
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x4e5e4b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 4]
        cmp eax, dword ptr [edx + 8]
        ; Exact mapped bytes 7D 18: jge 0x4e5e6e
        __asm _emit 0x7d
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + eax*4]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 9B C0 04 00: call 0x531f07
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xc0
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes EB D4: jmp 0x4e5e42
        __asm _emit 0xeb
        __asm _emit 0xd4
        ; Exact mapped bytes EB 4E: jmp 0x4e5ebe
        __asm _emit 0xeb
        __asm _emit 0x4e
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 AB FE 01 00: call 0x505d23
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xfe
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        push -1
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 EE F6 FF FF: call 0x4e5577
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x4e5e9b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 1
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 0ch]
        cmp eax, dword ptr [edx + 8]
        ; Exact mapped bytes 7D 18: jge 0x4e5ebe
        __asm _emit 0x7d
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [ebp - 0ch]
        lea ecx, [edx + eax*4]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 61 C0 04 00: call 0x531f1d
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xc0
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes EB D4: jmp 0x4e5e92
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
