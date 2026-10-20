// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58860D84 .. +0x17C bytes.
extern "C" __declspec(naked) void FUN_58860d84_58860D84() {
    __asm {
        mov edi, edi
        push ebx
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 8]
        movzx eax, byte ptr [ecx]
        cmp eax, 64h
        ; Exact mapped bytes 0F 87 AF 00 00 00: ja 0x58860e48
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xaf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 9D 00 00 00: je 0x58860e3c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 49h
        ; Exact mapped bytes 77 31: ja 0x58860dd5
        __asm _emit 0x77
        __asm _emit 0x31
        ; Exact mapped bytes 0F 84 D4 00 00 00: je 0x58860e7e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 41h
        ; Exact mapped bytes 74 1A: je 0x58860dc9
        __asm _emit 0x74
        __asm _emit 0x1a
        dec eax
        sub eax, 1
        ; Exact mapped bytes 74 46: je 0x58860dfb
        __asm _emit 0x74
        __asm _emit 0x46
        dec eax
        sub eax, 1
        ; Exact mapped bytes 74 0E: je 0x58860dc9
        __asm _emit 0x74
        __asm _emit 0x0e
        sub eax, 1
        ; Exact mapped bytes 74 09: je 0x58860dc9
        __asm _emit 0x74
        __asm _emit 0x09
        sub eax, 1
        ; Exact mapped bytes 0F 85 DC 00 00 00: jne 0x58860ea5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xdc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 28h], 7
        ; Exact mapped bytes E9 20 01 00 00: jmp 0x58860ef5
        __asm _emit 0xe9
        __asm _emit 0x20
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 53h
        ; Exact mapped bytes 0F 84 F6 00 00 00: je 0x58860ed4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 5
        ; Exact mapped bytes 0F 84 07 01 00 00: je 0x58860eee
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x07
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 3
        ; Exact mapped bytes 74 36: je 0x58860e22
        __asm _emit 0x74
        __asm _emit 0x36
        sub eax, 6
        ; Exact mapped bytes 74 D8: je 0x58860dc9
        __asm _emit 0x74
        __asm _emit 0xd8
        dec eax
        sub eax, 1
        ; Exact mapped bytes 0F 85 AA 00 00 00: jne 0x58860ea5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 18h]
        or eax, dword ptr [esi + 1ch]
        push 0
        pop ebx
        ; Exact mapped bytes 75 0A: jne 0x58860e10
        __asm _emit 0x75
        __asm _emit 0x0a
        mov dword ptr [esi + 18h], 1
        mov dword ptr [esi + 1ch], ebx
        mov ecx, esi
        ; Exact mapped bytes E8 7D 04 00 00: call 0x58861294
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 28h], ebx
        inc dword ptr [esi + 8]
        ; Exact mapped bytes E9 D9 00 00 00: jmp 0x58860efb
        __asm _emit 0xe9
        __asm _emit 0xd9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, esi
        ; Exact mapped bytes E8 6B 04 00 00: call 0x58861294
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        inc dword ptr [esi + 8]
        mov ecx, esi
        mov dword ptr [esi + 28h], 8
        pop esi
        pop ebx
        ; Exact mapped bytes E9 DD 02 00 00: jmp 0x58861119
        __asm _emit 0xe9
        __asm _emit 0xdd
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 28h], 3
        ; Exact mapped bytes E9 AD 00 00 00: jmp 0x58860ef5
        __asm _emit 0xe9
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 6fh
        ; Exact mapped bytes 77 43: ja 0x58860e90
        __asm _emit 0x77
        __asm _emit 0x43
        ; Exact mapped bytes 74 38: je 0x58860e87
        __asm _emit 0x74
        __asm _emit 0x38
        sub eax, 65h
        ; Exact mapped bytes 0F 84 71 FF FF FF: je 0x58860dc9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x71
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        sub eax, 1
        ; Exact mapped bytes 0F 84 68 FF FF FF: je 0x58860dc9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        sub eax, 1
        ; Exact mapped bytes 0F 84 5F FF FF FF: je 0x58860dc9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x5f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        dec eax
        sub eax, 1
        ; Exact mapped bytes 74 0E: je 0x58860e7e
        __asm _emit 0x74
        __asm _emit 0x0e
        sub eax, 5
        ; Exact mapped bytes 75 30: jne 0x58860ea5
        __asm _emit 0x75
        __asm _emit 0x30
        mov dword ptr [esi + 28h], 9
        ; Exact mapped bytes EB 77: jmp 0x58860ef5
        __asm _emit 0xeb
        __asm _emit 0x77
        mov dword ptr [esi + 28h], 2
        ; Exact mapped bytes EB 6E: jmp 0x58860ef5
        __asm _emit 0xeb
        __asm _emit 0x6e
        mov dword ptr [esi + 28h], 4
        ; Exact mapped bytes EB 65: jmp 0x58860ef5
        __asm _emit 0xeb
        __asm _emit 0x65
        sub eax, 70h
        ; Exact mapped bytes 74 52: je 0x58860ee7
        __asm _emit 0x74
        __asm _emit 0x52
        sub eax, 3
        ; Exact mapped bytes 74 3A: je 0x58860ed4
        __asm _emit 0x74
        __asm _emit 0x3a
        dec eax
        sub eax, 1
        ; Exact mapped bytes 74 2B: je 0x58860ecb
        __asm _emit 0x74
        __asm _emit 0x2b
        sub eax, 3
        ; Exact mapped bytes 74 49: je 0x58860eee
        __asm _emit 0x74
        __asm _emit 0x49
        xor ebx, ebx
        mov dword ptr [esi + 0ch], 16h
        mov dword ptr [esi + 10h], ebx
        xor al, al
        ; Exact mapped bytes 66 89 5E 14: mov word ptr [esi + 0x14], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x5e
        __asm _emit 0x14
        mov byte ptr [esi + 16h], bl
        mov dword ptr [esi + 18h], ebx
        mov dword ptr [esi + 1ch], ebx
        mov dword ptr [esi + 20h], ebx
        mov byte ptr [esi + 24h], bl
        mov dword ptr [esi + 28h], ebx
        ; Exact mapped bytes EB 32: jmp 0x58860efd
        __asm _emit 0xeb
        __asm _emit 0x32
        mov dword ptr [esi + 28h], 5
        ; Exact mapped bytes EB 21: jmp 0x58860ef5
        __asm _emit 0xeb
        __asm _emit 0x21
        mov ecx, esi
        ; Exact mapped bytes E8 B9 03 00 00: call 0x58861294
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esi + 28h], 1
        ; Exact mapped bytes E9 33 FF FF FF: jmp 0x58860e1a
        __asm _emit 0xe9
        __asm _emit 0x33
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 20h], 9
        mov dword ptr [esi + 28h], 6
        lea eax, [ecx + 1]
        mov dword ptr [esi + 8], eax
        mov al, 1
        pop esi
        pop ebx
        ret
    }
}
