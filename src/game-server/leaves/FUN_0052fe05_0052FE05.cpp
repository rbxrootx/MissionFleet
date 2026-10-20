// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052FE05 .. +0x137 bytes.
extern "C" __declspec(naked) void FUN_0052fe05_0052FE05() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57f381h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 18h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 20h], ecx
        mov eax, dword ptr [ebp + 8]
        and eax, 0ffff0fbfh
        test eax, eax
        ; Exact mapped bytes 74 11: je 0x52fe43
        __asm _emit 0x74
        __asm _emit 0x11
        push 38h
        push 5ccae4h
        ; Exact mapped bytes E8 C2 4B 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x4b
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x52fe43
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x52fe26
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [edx + 0b4h], 588240h
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x52fe68
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 10h]
        add eax, 1
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 4
        ; Exact mapped bytes 0F 8D B7 00 00 00: jge 0x52ff29
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xb7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx*8 + 588824h]
        and edx, dword ptr [ebp + 8]
        and edx, 0f000h
        test edx, edx
        ; Exact mapped bytes 0F 84 97 00 00 00: je 0x52ff24
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax*8 + 588820h]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 7E D1 FF FF: call 0x52d01e
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xd1
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 75 7B: jne 0x52ff24
        __asm _emit 0x75
        __asm _emit 0x7b
        push 42h
        push 5ccae4h
        push 0a4h
        ; Exact mapped bytes E8 A5 D1 FB FF: call 0x4ed05f
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xd1
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 0F: je 0x52fed9
        __asm _emit 0x74
        __asm _emit 0x0f
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 9C F5 FE FF: call 0x51f470
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xf5
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes EB 07: jmp 0x52fee0
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 24h], 0
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 18h], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx*8 + 588820h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax*8 + 588824h]
        or ecx, 56000000h
        push ecx
        mov edx, dword ptr [ebp - 20h]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 CB F6 FE FF: call 0x51f5e6
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xf6
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x52ff24
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 9F 46 FD FF: call 0x5045c3
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x46
        __asm _emit 0xfd
        __asm _emit 0xff
        ; Exact mapped bytes E9 36 FF FF FF: jmp 0x52fe5f
        __asm _emit 0xe9
        __asm _emit 0x36
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
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
