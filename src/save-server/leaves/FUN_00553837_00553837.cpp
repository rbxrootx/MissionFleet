// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00553837 .. +0x205 bytes.
extern "C" __declspec(naked) void FUN_00553837_00553837() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 60h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 60h], ecx
        push 393h
        push 67c1e0h
        mov eax, dword ptr [ebp - 60h]
        push eax
        ; Exact mapped bytes E8 0A 6A F8 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x6a
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 60h]
        cmp dword ptr [ecx + 34h], 0
        ; Exact mapped bytes 75 14: jne 0x553873
        __asm _emit 0x75
        __asm _emit 0x14
        push 394h
        push 67c1e0h
        ; Exact mapped bytes E8 D2 54 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x54
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x553873
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x553856
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp - 60h]
        cmp dword ptr [eax + 38h], 0
        ; Exact mapped bytes 75 14: jne 0x553896
        __asm _emit 0x75
        __asm _emit 0x14
        push 395h
        push 67c1e0h
        ; Exact mapped bytes E8 AF 54 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x54
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x553896
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x553879
        __asm _emit 0x75
        __asm _emit 0xdd
        push 640ca0h
        mov edx, dword ptr [ebp - 60h]
        mov eax, dword ptr [edx + 20h]
        push eax
        ; Exact mapped bytes E8 49 70 FF FF: call 0x54a8f6
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x70
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x5538ca
        __asm _emit 0x75
        __asm _emit 0x14
        push 39ah
        push 67c1e0h
        ; Exact mapped bytes E8 7B 54 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x54
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5538ca
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x5538b0
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 42 2F 00 00: call 0x55681a
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x2f
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [eax + 74h], 0
        ; Exact mapped bytes 75 10: jne 0x5538ee
        __asm _emit 0x75
        __asm _emit 0x10
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 50 10: call dword ptr [eax + 0x10]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 75 34: jne 0x553922
        __asm _emit 0x75
        __asm _emit 0x34
        mov ecx, dword ptr [ebp - 60h]
        ; Exact mapped bytes E8 24 2F 00 00: call 0x55681a
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x2f
        __asm _emit 0x00
        __asm _emit 0x00
        xor edx, edx
        cmp dword ptr [eax + 74h], 0
        sete dl
        push edx
        mov eax, dword ptr [ebp - 60h]
        mov ecx, dword ptr [eax + 34h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 50 C2 68 00: call dword ptr [0x68c250]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xc2
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 58h], eax
        push 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 51 20: call dword ptr [ecx + 0x20]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        push 1
        mov eax, dword ptr [ebp - 60h]
        mov ecx, dword ptr [eax + 34h]
        mov edx, dword ptr [ebp - 60h]
        mov eax, dword ptr [edx + 34h]
        mov edx, dword ptr [eax]
        push ecx
        ; Exact mapped bytes FF 52 24: call dword ptr [edx + 0x24]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 60h]
        mov ecx, dword ptr [eax + 38h]
        push ecx
        ; Exact mapped bytes FF 15 30 C3 68 00: call dword ptr [0x68c330]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xc3
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x553967
        __asm _emit 0x74
        __asm _emit 0x14
        push 3a4h
        push 67c1e0h
        ; Exact mapped bytes E8 DE 53 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x53
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x553967
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x553942
        __asm _emit 0x75
        __asm _emit 0xd5
        lea eax, [ebp - 54h]
        push eax
        mov ecx, dword ptr [ebp - 60h]
        mov edx, dword ptr [ecx + 38h]
        push edx
        ; Exact mapped bytes FF 15 34 C3 68 00: call dword ptr [0x68c334]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x34
        __asm _emit 0xc3
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 58h], eax
        cmp dword ptr [ebp - 58h], 0
        ; Exact mapped bytes 74 09: je 0x553990
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 58h]
        push eax
        ; Exact mapped bytes E8 6A 85 FF FF: call 0x54befa
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x85
        __asm _emit 0xff
        __asm _emit 0xff
        push 1
        lea ecx, [ebp - 4ch]
        push ecx
        mov edx, dword ptr [ebp - 60h]
        mov eax, dword ptr [edx + 38h]
        mov ecx, dword ptr [ebp - 60h]
        mov edx, dword ptr [ecx + 38h]
        mov ecx, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF 51 24: call dword ptr [ecx + 0x24]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x24
        mov dword ptr [ebp - 58h], eax
        cmp dword ptr [ebp - 58h], 0
        ; Exact mapped bytes 74 09: je 0x5539ba
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 58h]
        push edx
        ; Exact mapped bytes E8 40 85 FF FF: call 0x54befa
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x85
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 40h], 0
        ; Exact mapped bytes 74 14: je 0x5539d4
        __asm _emit 0x74
        __asm _emit 0x14
        push 3b1h
        push 67c1e0h
        ; Exact mapped bytes E8 71 53 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x53
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5539d4
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x5539ba
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp - 44h]
        mov dword ptr [ebp - 5ch], ecx
        mov edx, dword ptr [ebp - 5ch]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 6B 1F FD FF: call 0x525957
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x1f
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 54h]
        push eax
        ; Exact mapped bytes FF 15 F8 B9 68 00: call dword ptr [0x68b9f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 50h], eax
        cmp dword ptr [ebp - 50h], 0
        ; Exact mapped bytes 75 14: jne 0x553a13
        __asm _emit 0x75
        __asm _emit 0x14
        push 3b7h
        push 67c1e0h
        ; Exact mapped bytes E8 32 53 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x53
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x553a13
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x5539f9
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp - 5ch]
        push edx
        mov eax, dword ptr [ebp - 50h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 6D 69 F9 FF: call 0x4ea396
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x69
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 54h]
        push ecx
        ; Exact mapped bytes FF 15 FC B9 68 00: call dword ptr [0x68b9fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0xb9
        __asm _emit 0x68
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
