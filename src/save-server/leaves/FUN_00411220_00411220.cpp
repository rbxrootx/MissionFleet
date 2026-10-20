// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00411220 .. +0x285 bytes.
extern "C" __declspec(naked) void FUN_00411220_00411220() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58ad7ch
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
        sub esp, 74h
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 80h]
        mov ecx, 1dh
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 10h], ecx
        push 0
        push 4000h
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 F8 B4 01 00: call 0x42c75d
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xb4
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 40c98h
        ; Exact mapped bytes E8 A2 04 FF FF: call 0x40171c
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x04
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx], 633e50h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 30 B9 01 00: call 0x42cbbf
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xb9
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF 15 74 03 67 00: movsx edx, word ptr [0x670374]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x15
        __asm _emit 0x74
        __asm _emit 0x03
        __asm _emit 0x67
        __asm _emit 0x00
        add edx, 4
        push edx
        push 6702e8h
        push 14h
        ; Exact mapped bytes E8 2D AE 0B 00: call 0x4cc0d3
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xae
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 18h], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 11: je 0x4112c7
        __asm _emit 0x74
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 3B 05 FF FF: call 0x4017fd
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes EB 07: jmp 0x4112ce
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 34h], 0
        mov ecx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 14h], ecx
        mov byte ptr [ebp - 4], 1
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [edx + 40c78h], eax
        ; Exact mapped bytes 0F BF 0D 74 03 67 00: movsx ecx, word ptr [0x670374]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x03
        __asm _emit 0x67
        __asm _emit 0x00
        add ecx, 6
        push ecx
        push 6702e8h
        push 14h
        ; Exact mapped bytes E8 D8 AD 0B 00: call 0x4cc0d3
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xad
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 20h], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 74 11: je 0x41131c
        __asm _emit 0x74
        __asm _emit 0x11
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 AA 04 FF FF: call 0x4017c1
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x04
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 38h], eax
        ; Exact mapped bytes EB 07: jmp 0x411323
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 38h], 0
        mov eax, dword ptr [ebp - 38h]
        mov dword ptr [ebp - 1ch], eax
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [ecx + 40c84h], edx
        ; Exact mapped bytes 0F BF 05 74 03 67 00: movsx eax, word ptr [0x670374]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x05
        __asm _emit 0x74
        __asm _emit 0x03
        __asm _emit 0x67
        __asm _emit 0x00
        add eax, 7
        push eax
        push 6702e8h
        push 14h
        ; Exact mapped bytes E8 83 AD 0B 00: call 0x4cc0d3
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xad
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 28h], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 28h], 0
        ; Exact mapped bytes 74 11: je 0x411371
        __asm _emit 0x74
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 6A 03 FF FF: call 0x4016d6
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x03
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 3ch], eax
        ; Exact mapped bytes EB 07: jmp 0x411378
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 3ch], 0
        mov edx, dword ptr [ebp - 3ch]
        mov dword ptr [ebp - 24h], edx
        mov byte ptr [ebp - 4], 1
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [eax + 40c88h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 40c7ch], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 40c80h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 40c8ch], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 40c90h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 40c94h], 0
        ; Exact mapped bytes 0F BF 0D 74 03 67 00: movsx ecx, word ptr [0x670374]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x03
        __asm _emit 0x67
        __asm _emit 0x00
        add ecx, 11h
        push ecx
        push 6702e8h
        push 14h
        ; Exact mapped bytes E8 ED AC 0B 00: call 0x4cc0d3
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xac
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 30h], eax
        mov byte ptr [ebp - 4], 5
        cmp dword ptr [ebp - 30h], 0
        ; Exact mapped bytes 74 0D: je 0x411403
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 0A 03 FF FF: call 0x401708
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x03
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 40h], eax
        ; Exact mapped bytes EB 07: jmp 0x41140a
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 40h], 0
        mov edx, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 2ch], edx
        mov byte ptr [ebp - 4], 1
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 2ch]
        mov dword ptr [eax + 40cc0h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 40cb0h], 0
        mov dword ptr [edx + 40cb4h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 40cb8h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 40cbch], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 40cc4h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 40cc8h], 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 9C FB FE FF: call 0x40100f
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xfb
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 FD FB FE FF: call 0x401078
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xfb
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
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
        add esp, 80h
        cmp ebp, esp
        ; Exact mapped bytes E8 51 39 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x39
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
