// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5866A190 .. +0x14F bytes.
extern "C" __declspec(naked) void FUN_5866a190_5866A190() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 0ch], 0
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax], 190h
        ; Exact mapped bytes 7E 07: jle 0x5866a1b9
        __asm _emit 0x7e
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 1
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 4], 12ch
        ; Exact mapped bytes 7E 07: jle 0x5866a1cc
        __asm _emit 0x7e
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 1
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 2F: jne 0x5866a201
        __asm _emit 0x75
        __asm _emit 0x2f
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 29: jne 0x5866a201
        __asm _emit 0x75
        __asm _emit 0x29
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 4]
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        add edx, 32h
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 30 B4 14 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xb4
        __asm _emit 0x14
        __asm _emit 0x00
        xor eax, eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 81 AC 00 00 00: mov word ptr [ecx + 0xac], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 AD 00 00 00: jmp 0x5866a2ae
        __asm _emit 0xe9
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 34: jne 0x5866a23b
        __asm _emit 0x75
        __asm _emit 0x34
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 2E: je 0x5866a23b
        __asm _emit 0x74
        __asm _emit 0x2e
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 4]
        sub eax, 0a0h
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        add edx, 32h
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F6 B3 14 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xb3
        __asm _emit 0x14
        __asm _emit 0x00
        mov eax, 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 81 AC 00 00 00: mov word ptr [ecx + 0xac], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 73: jmp 0x5866a2ae
        __asm _emit 0xeb
        __asm _emit 0x73
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 32: je 0x5866a273
        __asm _emit 0x74
        __asm _emit 0x32
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 2C: jne 0x5866a273
        __asm _emit 0x75
        __asm _emit 0x2c
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 4]
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        sub edx, 0beh
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 BE B3 14 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xb3
        __asm _emit 0x14
        __asm _emit 0x00
        mov eax, 2
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 81 AC 00 00 00: mov word ptr [ecx + 0xac], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 3B: jmp 0x5866a2ae
        __asm _emit 0xeb
        __asm _emit 0x3b
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 35: je 0x5866a2ae
        __asm _emit 0x74
        __asm _emit 0x35
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 2F: je 0x5866a2ae
        __asm _emit 0x74
        __asm _emit 0x2f
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 4]
        sub eax, 0a0h
        push eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx]
        sub edx, 0beh
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 81 B3 14 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xb3
        __asm _emit 0x14
        __asm _emit 0x00
        mov eax, 3
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 81 AC 00 00 00: mov word ptr [ecx + 0xac], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 4A A7 E1 FF: call 0x58484a00
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xa7
        __asm _emit 0xe1
        __asm _emit 0xff
        mov edx, dword ptr [eax + 4]
        push edx
        mov eax, dword ptr [eax]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 EB 9D FB FF: call 0x586240b0
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x9d
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 0ach]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E8 FC FF FF: call 0x58669fc0
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
