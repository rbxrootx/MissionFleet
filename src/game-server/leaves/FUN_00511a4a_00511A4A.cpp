// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00511A4A .. +0xBB bytes.
extern "C" __declspec(naked) void FUN_00511a4a_00511A4A() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        push 326h
        push 5c84b0h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 F9 96 FE FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x96
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 FB 44 02 00: call 0x535f6a
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 83 A6 02 00: call 0x53c0fb
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xa6
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx], 0
        ; Exact mapped bytes 75 09: jne 0x511a89
        __asm _emit 0x75
        __asm _emit 0x09
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [edx + 4], 0
        ; Exact mapped bytes 74 14: je 0x511a9d
        __asm _emit 0x74
        __asm _emit 0x14
        push 329h
        push 5c84b0h
        ; Exact mapped bytes E8 68 2F 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x2f
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x511a9d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D5: jne 0x511a78
        __asm _emit 0x75
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 64h]
        neg edx
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 60h]
        neg ecx
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D9 45 02 00: call 0x536096
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x45
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 74h], 0
        ; Exact mapped bytes 74 16: je 0x511adc
        __asm _emit 0x74
        __asm _emit 0x16
        ; Exact mapped bytes A1 98 E8 5D 00: mov eax, dword ptr [0x5de898]
        __asm _emit 0xa1
        __asm _emit 0x98
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        sub eax, 1
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 8]
        sub edx, eax
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax + 8], edx
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 70h], 0
        ; Exact mapped bytes 74 17: je 0x511afc
        __asm _emit 0x74
        __asm _emit 0x17
        ; Exact mapped bytes 8B 15 9C E8 5D 00: mov edx, dword ptr [0x5de89c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        sub edx, 1
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 0ch]
        sub ecx, edx
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx + 0ch], ecx
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
