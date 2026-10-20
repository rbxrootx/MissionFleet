// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004221B5 .. +0x1B8 bytes.
extern "C" __declspec(naked) void FUN_004221b5_004221B5() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 43fc18h
        push 423118h
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
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 18h], esp
        mov ecx, dword ptr [ebp + 10h]
        mov eax, dword ptr [ecx + 4]
        test eax, eax
        ; Exact mapped bytes 0F 84 75 01 00 00: je 0x42235e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x75
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp byte ptr [eax + 8], 0
        ; Exact mapped bytes 0F 84 6B 01 00 00: je 0x42235e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ecx + 8]
        test eax, eax
        ; Exact mapped bytes 0F 84 60 01 00 00: je 0x42235e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        lea edi, [eax + edx + 0ch]
        and dword ptr [ebp - 4], 0
        test byte ptr [ecx], 8
        ; Exact mapped bytes 74 44: je 0x422252
        __asm _emit 0x74
        __asm _emit 0x44
        mov esi, dword ptr [ebp + 8]
        push 1
        push dword ptr [esi + 18h]
        ; Exact mapped bytes E8 9D 43 00 00: call 0x4265b8
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x43
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop ecx
        test eax, eax
        ; Exact mapped bytes 0F 84 30 01 00 00: je 0x422355
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        push edi
        ; Exact mapped bytes E8 A7 43 00 00: call 0x4265d4
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x43
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop ecx
        test eax, eax
        ; Exact mapped bytes 0F 84 1E 01 00 00: je 0x422355
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 18h]
        mov dword ptr [edi], eax
        mov ecx, dword ptr [ebp + 14h]
        add ecx, 8
        push ecx
        push eax
        ; Exact mapped bytes E8 97 01 00 00: call 0x4223e0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop ecx
        mov dword ptr [edi], eax
        ; Exact mapped bytes E9 08 01 00 00: jmp 0x42235a
        __asm _emit 0xe9
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [ebp + 14h]
        test byte ptr [esi], 1
        ; Exact mapped bytes 74 52: je 0x4222ac
        __asm _emit 0x74
        __asm _emit 0x52
        mov ebx, dword ptr [ebp + 8]
        push 1
        push dword ptr [ebx + 18h]
        ; Exact mapped bytes E8 51 43 00 00: call 0x4265b8
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x43
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop ecx
        test eax, eax
        ; Exact mapped bytes 0F 84 E4 00 00 00: je 0x422355
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        push edi
        ; Exact mapped bytes E8 5B 43 00 00: call 0x4265d4
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x43
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop ecx
        test eax, eax
        ; Exact mapped bytes 0F 84 D2 00 00 00: je 0x422355
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [esi + 14h]
        push dword ptr [ebx + 18h]
        push edi
        ; Exact mapped bytes E8 F1 CD FF FF: call 0x41f080
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xcd
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        cmp dword ptr [esi + 14h], 4
        ; Exact mapped bytes 0F 85 BE 00 00 00: jne 0x42235a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi]
        test eax, eax
        ; Exact mapped bytes 0F 84 B4 00 00 00: je 0x42235a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esi, 8
        push esi
        ; Exact mapped bytes EB 97: jmp 0x422243
        __asm _emit 0xeb
        __asm _emit 0x97
        cmp dword ptr [esi + 18h], 0
        mov ebx, dword ptr [ebp + 8]
        push 1
        push dword ptr [ebx + 18h]
        ; Exact mapped bytes 75 3A: jne 0x4222f4
        __asm _emit 0x75
        __asm _emit 0x3a
        ; Exact mapped bytes E8 F9 42 00 00: call 0x4265b8
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop ecx
        test eax, eax
        ; Exact mapped bytes 0F 84 8C 00 00 00: je 0x422355
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        push edi
        ; Exact mapped bytes E8 03 43 00 00: call 0x4265d4
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x43
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop ecx
        test eax, eax
        ; Exact mapped bytes 74 7E: je 0x422355
        __asm _emit 0x74
        __asm _emit 0x7e
        push dword ptr [esi + 14h]
        add esi, 8
        push esi
        push dword ptr [ebx + 18h]
        ; Exact mapped bytes E8 FA 00 00 00: call 0x4223e0
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop ecx
        push eax
        push edi
        ; Exact mapped bytes E8 91 CD FF FF: call 0x41f080
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xcd
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        ; Exact mapped bytes EB 66: jmp 0x42235a
        __asm _emit 0xeb
        __asm _emit 0x66
        ; Exact mapped bytes E8 BF 42 00 00: call 0x4265b8
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop ecx
        test eax, eax
        ; Exact mapped bytes 74 56: je 0x422355
        __asm _emit 0x74
        __asm _emit 0x56
        push 1
        push edi
        ; Exact mapped bytes E8 CD 42 00 00: call 0x4265d4
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop ecx
        test eax, eax
        ; Exact mapped bytes 74 48: je 0x422355
        __asm _emit 0x74
        __asm _emit 0x48
        push dword ptr [esi + 18h]
        ; Exact mapped bytes E8 DB 42 00 00: call 0x4265f0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        test eax, eax
        ; Exact mapped bytes 74 3B: je 0x422355
        __asm _emit 0x74
        __asm _emit 0x3b
        test byte ptr [esi], 4
        ; Exact mapped bytes 74 1C: je 0x42233b
        __asm _emit 0x74
        __asm _emit 0x1c
        push 1
        lea eax, [esi + 8]
        push eax
        push dword ptr [ebx + 18h]
        ; Exact mapped bytes E8 B3 00 00 00: call 0x4223e0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop ecx
        push eax
        push dword ptr [esi + 18h]
        push edi
        ; Exact mapped bytes E8 8F C0 FF FF: call 0x41e3c8
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xc0
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 1F: jmp 0x42235a
        __asm _emit 0xeb
        __asm _emit 0x1f
        lea eax, [esi + 8]
        push eax
        push dword ptr [ebx + 18h]
        ; Exact mapped bytes E8 99 00 00 00: call 0x4223e0
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop ecx
        push eax
        push dword ptr [esi + 18h]
        push edi
        ; Exact mapped bytes E8 6E C0 FF FF: call 0x41e3c1
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xc0
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 05: jmp 0x42235a
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E8 31 02 00 00: call 0x42258b
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        or dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
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
        leave
        ret
    }
}
