// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00479F1E .. +0x35C bytes.
extern "C" __declspec(naked) void FUN_00479f1e_00479F1E() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 44ch
        push esi
        push edi
        push ecx
        lea edi, [ebp - 44ch]
        mov ecx, 113h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 448h], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 84 18 03 00 00: je 0x47a265
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x18
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 418h], 10h
        mov dword ptr [ebp - 41ch], 0
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 180h]
        mov dword ptr [ebp - 420h], ecx
        lea edx, [ebp - 418h]
        push edx
        lea eax, [ebp - 41ch]
        push eax
        lea ecx, [ebp - 420h]
        push ecx
        ; Exact mapped bytes E8 36 98 F8 FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x98
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 0F 84 D0 02 00 00: je 0x47a265
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 424h], 31h
        mov dword ptr [ebp - 428h], 0
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 16ch]
        mov dword ptr [ebp - 42ch], eax
        lea ecx, [ebp - 424h]
        push ecx
        lea edx, [ebp - 428h]
        push edx
        lea eax, [ebp - 42ch]
        push eax
        ; Exact mapped bytes E8 EE 97 F8 FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x97
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 0F 84 88 02 00 00: je 0x47a265
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 430h], 80h
        mov dword ptr [ebp - 434h], 0
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 190h]
        mov dword ptr [ebp - 438h], edx
        lea eax, [ebp - 430h]
        push eax
        lea ecx, [ebp - 434h]
        push ecx
        lea edx, [ebp - 438h]
        push edx
        ; Exact mapped bytes E8 A6 97 F8 FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x97
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 0F 84 40 02 00 00: je 0x47a265
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 43ch], 3ffh
        mov dword ptr [ebp - 440h], 0
        mov eax, dword ptr [ebp + 20h]
        mov dword ptr [ebp - 444h], eax
        lea ecx, [ebp - 43ch]
        push ecx
        lea edx, [ebp - 440h]
        push edx
        lea eax, [ebp - 444h]
        push eax
        ; Exact mapped bytes E8 64 97 F8 FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x97
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 0F 84 FE 01 00 00: je 0x47a265
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xfe
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 190h]
        push edx
        mov eax, dword ptr [ebp - 448h]
        mov ecx, dword ptr [eax + 14h]
        ; Exact mapped bytes E8 41 02 F9 FF: call 0x40a2c0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x02
        __asm _emit 0xf9
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 DE 01 00 00: je 0x47a265
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xde
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 4D 0C: mov cx, word ptr [ebp + 0xc]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x0c
        ; Exact mapped bytes 66 89 8D F4 FB FF FF: mov word ptr [ebp - 0x40c], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8d
        __asm _emit 0xf4
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 410h], edx
        mov eax, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 414h], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 16ch]
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 448h]
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [ecx + 0d78h]
        cmp dword ptr [edx + 114h], 0
        ; Exact mapped bytes 74 51: je 0x47a119
        __asm _emit 0x74
        __asm _emit 0x51
        mov eax, dword ptr [ebp - 40ch]
        and eax, 0ffffh
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov ecx, dword ptr [ebp - 4]
        imul ecx, ecx, 370h
        mov dword ptr [edx + ecx + 16be4h], eax
        mov edx, dword ptr [ebp + 14h]
        shr edx, 10h
        xor edx, 0aah
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax + 8b0h], edx
        mov ecx, dword ptr [ebp + 14h]
        and ecx, 0ffffh
        xor ecx, 0aah
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx + 8b4h], ecx
        mov eax, dword ptr [ebp - 410h]
        mov dword ptr [ebp - 44ch], eax
        cmp dword ptr [ebp - 44ch], 80020200h
        ; Exact mapped bytes 74 0E: je 0x47a13f
        __asm _emit 0x74
        __asm _emit 0x0e
        cmp dword ptr [ebp - 44ch], 80020700h
        ; Exact mapped bytes 74 36: je 0x47a173
        __asm _emit 0x74
        __asm _emit 0x36
        ; Exact mapped bytes EB 47: jmp 0x47a186
        __asm _emit 0xeb
        __asm _emit 0x47
        mov ecx, dword ptr [ebp + 20h]
        add ecx, 1
        mov dword ptr [ebp - 408h], ecx
        mov dl, byte ptr [ebp + 18h]
        mov byte ptr [ebp - 404h], dl
        cmp dword ptr [ebp + 20h], 0
        ; Exact mapped bytes 74 17: je 0x47a171
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp + 20h]
        push eax
        mov ecx, dword ptr [ebp + 1ch]
        push ecx
        lea edx, [ebp - 403h]
        push edx
        ; Exact mapped bytes E8 B2 EE 02 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xee
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes EB 24: jmp 0x47a197
        __asm _emit 0xeb
        __asm _emit 0x24
        mov byte ptr [ebp - 404h], 4fh
        mov dword ptr [ebp - 408h], 1
        ; Exact mapped bytes EB 11: jmp 0x47a197
        __asm _emit 0xeb
        __asm _emit 0x11
        mov byte ptr [ebp - 404h], 40h
        mov dword ptr [ebp - 408h], 1
        sub esp, 410h
        mov ecx, 104h
        lea esi, [ebp - 414h]
        mov edi, esp
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 190h]
        push ecx
        mov edx, dword ptr [ebp - 448h]
        mov ecx, dword ptr [edx + 14h]
        ; Exact mapped bytes E8 1C 01 F9 FF: call 0x40a2e0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0xf9
        __asm _emit 0xff
        cmp dword ptr [ebp + 10h], 80020400h
        ; Exact mapped bytes 74 0D: je 0x47a1da
        __asm _emit 0x74
        __asm _emit 0x0d
        cmp dword ptr [ebp + 10h], 80020300h
        ; Exact mapped bytes 0F 85 8B 00 00 00: jne 0x47a265
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax + 188h], 2
        push 1
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 448h]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [eax + 40ca8h]
        ; Exact mapped bytes E8 B4 84 00 00: call 0x4826b5
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 16ch]
        shl edx, 10h
        or edx, 2
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 448h]
        mov edx, dword ptr [ecx + 4]
        mov ecx, dword ptr [edx + 40ca8h]
        ; Exact mapped bytes E8 8C 84 00 00: call 0x4826b5
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 448h]
        mov edx, dword ptr [ecx + 8]
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 180h]
        shl ecx, 6
        lea ecx, [edx + ecx + 0cb0h]
        ; Exact mapped bytes E8 37 19 00 00: call 0x47bb85
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 0
        push 0
        push 0
        push 0
        push 80000300h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 CD CF 00 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xcf
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        add esp, 44ch
        cmp ebp, esp
        ; Exact mapped bytes E8 6C E5 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xe5
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 1C 00: ret 0x1c
        __asm _emit 0xc2
        __asm _emit 0x1c
        __asm _emit 0x00
    }
}
