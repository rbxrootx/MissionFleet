// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040CEF5 .. +0x147 bytes.
extern "C" __declspec(naked) void FUN_0040cef5_0040CEF5() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 0ch]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 06: mov cx, word ptr [eax + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x06
        cmp ecx, 8000h
        ; Exact mapped bytes 75 05: jne 0x40cf14
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 1D 01 00 00: jmp 0x40d031
        __asm _emit 0xe9
        __asm _emit 0x1d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 06: mov ax, word ptr [edx + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x06
        cmp eax, 8001h
        ; Exact mapped bytes 75 05: jne 0x40cf29
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 08 01 00 00: jmp 0x40d031
        __asm _emit 0xe9
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        xor edx, edx
        ; Exact mapped bytes 66 8B 51 06: mov dx, word ptr [ecx + 6]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x06
        cmp edx, 8002h
        ; Exact mapped bytes 0F 85 F3 00 00 00: jne 0x40d031
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 80020010h
        ; Exact mapped bytes 74 05: je 0x40cf55
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 DC 00 00 00: jmp 0x40d031
        __asm _emit 0xe9
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        cmp dword ptr [edx + 10h], 0d8h
        ; Exact mapped bytes 74 1F: je 0x40cf80
        __asm _emit 0x74
        __asm _emit 0x1f
        push 0
        push 0
        push 0
        push 80020010h
        push 0
        push 80000003h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 85 30 00 00: call 0x410000
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 B1 00 00 00: jmp 0x40d031
        __asm _emit 0xe9
        __asm _emit 0xb1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 4], 20060100h
        ; Exact mapped bytes 74 1F: je 0x40cfb1
        __asm _emit 0x74
        __asm _emit 0x1f
        push 0
        push 0
        push 0
        push 80020010h
        push 0
        push 80000003h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 54 30 00 00: call 0x410000
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 80 00 00 00: jmp 0x40d031
        __asm _emit 0xe9
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E7 74 FF FF: call 0x4044a0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x74
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 50 73 FF FF: call 0x404310
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x73
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 16: je 0x40cfda
        __asm _emit 0x74
        __asm _emit 0x16
        push 0
        push 46ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 CD 74 FF FF: call 0x4044a0
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x74
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 66 74 FF FF: call 0x404440
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x74
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        ; Exact mapped bytes E8 4F 8C FF FF: call 0x405c30
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x8c
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 50 74: call dword ptr [eax + 0x74]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x74
        mov ecx, eax
        add ecx, 74h
        ; Exact mapped bytes E8 D7 72 FF FF: call 0x4042d0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x72
        __asm _emit 0xff
        __asm _emit 0xff
        add eax, 1
        push eax
        push 0
        ; Exact mapped bytes E8 2C 8C FF FF: call 0x405c30
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x8c
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 52 74: call dword ptr [edx + 0x74]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x74
        mov ecx, eax
        add ecx, 74h
        ; Exact mapped bytes E8 59 0F 02 00: call 0x42df75
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x0f
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        push 80020010h
        push 0
        push 80000002h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 CF 2F 00 00: call 0x410000
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x2f
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
