// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0047C68D .. +0xEC bytes.
extern "C" __declspec(naked) void FUN_0047c68d_0047C68D() {
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
        ; Exact mapped bytes 0F 84 AA 00 00 00: je 0x47c768
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 24h]
        mov dword ptr [ebp - 0ch], edx
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x47c6d9
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 80h
        ; Exact mapped bytes 0F 8D 82 00 00 00: jge 0x47c768
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 7C: je 0x47c768
        __asm _emit 0x74
        __asm _emit 0x7c
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [ecx + 16ch], -1
        ; Exact mapped bytes 74 60: je 0x47c758
        __asm _emit 0x74
        __asm _emit 0x60
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 16ch]
        imul edx, edx, 370h
        lea eax, [eax + edx + 16c04h]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 F6 AE FC FF: call 0x447616
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xae
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 51 02: mov dx, word ptr [ecx + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x02
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        and edx, 0ffffh
        cmp edx, 7
        ; Exact mapped bytes 74 16: je 0x47c74f
        __asm _emit 0x74
        __asm _emit 0x16
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 48 02: mov cx, word ptr [eax + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x02
        ; Exact mapped bytes 66 83 E1 1F: and cx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x1f
        and ecx, 0ffffh
        cmp ecx, 6
        ; Exact mapped bytes 75 09: jne 0x47c758
        __asm _emit 0x75
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 4], edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 80 9F FB FF: call 0x4366e0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x9f
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes E9 68 FF FF FF: jmp 0x47c6d0
        __asm _emit 0xe9
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        add esp, 14h
        cmp ebp, esp
        ; Exact mapped bytes E8 6B C0 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xc0
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
