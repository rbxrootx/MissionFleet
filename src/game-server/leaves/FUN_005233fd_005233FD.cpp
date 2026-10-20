// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005233FD .. +0x11A bytes.
extern "C" __declspec(naked) void FUN_005233fd_005233FD() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        push 28h
        push 0
        mov eax, dword ptr [ebp - 4]
        add eax, 5ch
        push eax
        ; Exact mapped bytes E8 59 5F F8 FF: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x5f
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 5ch], 28h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 60h], 80h
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 0B: je 0x52343f
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes E8 09 21 01 00: call 0x535542
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 64h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 68h], eax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 74h], 4ef8f0h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [edx + 78h], eax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 7ch], 523080h
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 4F: je 0x5234ba
        __asm _emit 0x74
        __asm _emit 0x4f
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 84h
        ; Exact mapped bytes E8 03 77 FD FF: call 0x4fab80
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x77
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x523492
        __asm _emit 0x75
        __asm _emit 0x11
        push 71h
        push 5c8174h
        ; Exact mapped bytes E8 73 15 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x15
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x523492
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D3: jne 0x52346b
        __asm _emit 0x75
        __asm _emit 0xd3
        mov ecx, dword ptr [ebp - 4]
        add ecx, 84h
        ; Exact mapped bytes E8 04 DB 00 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xdb
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 70h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 60h]
        or al, 8
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 60h], eax
        ; Exact mapped bytes E8 AE D6 FC FF: call 0x4f0b6d
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xd6
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 0E: je 0x5234d1
        __asm _emit 0x74
        __asm _emit 0x0e
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 60h]
        or al, 20h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 60h], eax
        mov edx, dword ptr [ebp + 8]
        shr edx, 10h
        and edx, 0ffffh
        and edx, 0ffffh
        test edx, edx
        ; Exact mapped bytes 75 0E: jne 0x5234f5
        __asm _emit 0x75
        __asm _emit 0x0e
        mov eax, dword ptr [ebp + 8]
        and eax, 0ffffh
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 3ch], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 68h]
        mov dword ptr [edx + 40h], ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 88h], 1
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
