// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005554D4 .. +0x1C6 bytes.
extern "C" __declspec(naked) void FUN_005554d4_005554D4() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 14h], ecx
        push 6a0h
        push 67c1e0h
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 6D 4D F8 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x4d
        __asm _emit 0xf8
        __asm _emit 0xff
        push 1
        push 0ch
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 66 DF F4 FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xdf
        __asm _emit 0xf4
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x555518
        __asm _emit 0x75
        __asm _emit 0x14
        push 6a1h
        push 67c1e0h
        ; Exact mapped bytes E8 2D 38 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x38
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x555518
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x5554f3
        __asm _emit 0x75
        __asm _emit 0xd5
        lea eax, [ebp - 10h]
        push eax
        push 1
        push 0
        ; Exact mapped bytes FF 15 2C C3 68 00: call dword ptr [0x68c32c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0xc3
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 09: je 0x55553e
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 BC 69 FF FF: call 0x54befa
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x69
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 14: jne 0x555558
        __asm _emit 0x75
        __asm _emit 0x14
        push 6a7h
        push 67c1e0h
        ; Exact mapped bytes E8 ED 37 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x37
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x555558
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x55553e
        __asm _emit 0x75
        __asm _emit 0xe0
        lea eax, [ebp - 0ch]
        push eax
        push 0
        push 1012h
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes FF 15 B4 C2 68 00: call dword ptr [0x68c2b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0xc2
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 33: je 0x5555af
        __asm _emit 0x74
        __asm _emit 0x33
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x5555a0
        __asm _emit 0x74
        __asm _emit 0x14
        push 6aeh
        push 67c1e0h
        ; Exact mapped bytes E8 A5 37 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x37
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5555a0
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D6: jne 0x55557c
        __asm _emit 0x75
        __asm _emit 0xd6
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 4B 69 FF FF: call 0x54befa
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x69
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 14: jne 0x5555c9
        __asm _emit 0x75
        __asm _emit 0x14
        push 6b1h
        push 67c1e0h
        ; Exact mapped bytes E8 7C 37 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x37
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5555c9
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x5555af
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        push 640ca0h
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 20h]
        push eax
        ; Exact mapped bytes E8 0A 53 FF FF: call 0x54a8f6
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x53
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x555609
        __asm _emit 0x75
        __asm _emit 0x14
        push 6b7h
        push 67c1e0h
        ; Exact mapped bytes E8 3C 37 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x37
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x555609
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x5555ef
        __asm _emit 0x75
        __asm _emit 0xe0
        push 0
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 15 50 C2 68 00: call dword ptr [0x68c250]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xc2
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        push 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 52 20: call dword ptr [edx + 0x20]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 33: je 0x555675
        __asm _emit 0x74
        __asm _emit 0x33
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x555666
        __asm _emit 0x74
        __asm _emit 0x14
        push 6bdh
        push 67c1e0h
        ; Exact mapped bytes E8 DF 36 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x36
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x555666
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D6: jne 0x555642
        __asm _emit 0x75
        __asm _emit 0xd6
        mov edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes E8 85 68 FF FF: call 0x54befa
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax], 8
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 4], edx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax + 8], 0
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
