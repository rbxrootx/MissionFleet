// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0047C45D .. +0xC2 bytes.
extern "C" __declspec(naked) void FUN_0047c45d_0047C45D() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov eax, 0cccccccch
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 14h], ecx
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 14h]
        cmp dword ptr [eax + 24h], 0
        ; Exact mapped bytes 0F 84 80 00 00 00: je 0x47c50e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 24h]
        mov dword ptr [ebp - 0ch], edx
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x47c4a9
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 80h
        ; Exact mapped bytes 7D 5C: jge 0x47c50e
        __asm _emit 0x7d
        __asm _emit 0x5c
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 56: je 0x47c50e
        __asm _emit 0x74
        __asm _emit 0x56
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [ecx + 16ch], -1
        ; Exact mapped bytes 74 3D: je 0x47c501
        __asm _emit 0x74
        __asm _emit 0x3d
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 16ch]
        imul edx, edx, 370h
        lea eax, [eax + edx + 16c04h]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 2A B1 FC FF: call 0x447616
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xb1
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 0C: je 0x47c501
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 4]
        add edx, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 4], edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 D7 A1 FB FF: call 0x4366e0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xa1
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 92: jmp 0x47c4a0
        __asm _emit 0xeb
        __asm _emit 0x92
        mov eax, dword ptr [ebp - 4]
        add esp, 14h
        cmp ebp, esp
        ; Exact mapped bytes E8 C5 C2 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xc2
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
